// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#include "geometry/mesh.h"

#include "rendering/pbr.h"

#include "core/hash.h"

#include "asset/file_registry.h"
#include "asset/model_asset.h"

namespace era_engine
{
	struct mesh_key
	{
		asset_handle handle;
		uint32 flags;
	};
}

namespace std
{
	template<>
	struct hash<era_engine::mesh_key>
	{
		size_t operator()(const era_engine::mesh_key& x) const
		{
			size_t seed = 0;
			hash_combine(seed, x.handle);
			hash_combine(seed, x.flags);
			return seed;
		}
	};
}

namespace era_engine
{
	static void meshLoaderThread(ref<multi_mesh> result, const fs::path& sceneFilename, uint32 flags, mesh_load_callback cb,
		bool async, job_handle parentJob)
	{
		result->aabb = bounding_box::negativeInfinity();

		model_asset asset = load3DModelFromFile(sceneFilename);
		mesh_builder builder(flags | mesh_creation_flags_with_skin);

		for (auto& mesh : asset.meshes)
		{
			for (auto& sub : mesh.submeshes)
			{
				const pbr_material_desc& materialDesc = asset.materials[sub.materialIndex];
				ref<pbr_material> material;
				if (!async)
				{
					material = createPBRMaterial(materialDesc);
				}
				else
				{
					material = createPBRMaterialAsync(materialDesc, parentJob);
				}

				bounding_box aabb;
				builder.pushMesh(sub, 1.f, &aabb);
				result->submeshes.push_back({ builder.endSubmesh(), aabb, trs::identity, material, mesh.name });

				result->aabb.grow(aabb.minCorner);
				result->aabb.grow(aabb.maxCorner);
			}
		}

		animation::animation_skeleton& skeleton = result->skeleton;

		// Load skeleton
		if (!asset.skeletons.empty()/* && flags & mesh_creation_flags_with_skin*/)
		{
			skeleton_asset& in = asset.skeletons.front();

			skeleton.joints = std::move(in.joints);
			skeleton.nameToJointID = std::move(in.nameToJointID);
			skeleton.analyzeJoints(builder.getPositions(), (uint8*)builder.getOthers() + builder.getSkinOffset(), builder.getOthersSize(), builder.getNumVertices());
		}

		// Load animations
		for (auto& anim : asset.animations)
		{
			animation_asset& in = anim;

			animation::animation_clip& clip = skeleton.clips.emplace_back();
			clip.name = std::move(in.name);
			clip.filename = sceneFilename;
			clip.lengthInSeconds = in.duration;
			clip.joints.resize(skeleton.joints.size(), {});

			clip.positionKeyframes = std::move(in.positionKeyframes);
			clip.positionTimestamps = std::move(in.positionTimestamps);
			clip.rotationKeyframes = std::move(in.rotationKeyframes);
			clip.rotationTimestamps = std::move(in.rotationTimestamps);
			clip.scaleKeyframes = std::move(in.scaleKeyframes);
			clip.scaleTimestamps = std::move(in.scaleTimestamps);

			for (auto& [name, joint] : in.joints)
			{
				auto it = skeleton.nameToJointID.find(name);
				if (it != skeleton.nameToJointID.end())
				{
					animation::animation_joint& j = clip.joints[it->second];
					j = joint;
				}
			}
		}

		if (cb)
		{
			cb(builder, result->submeshes, result->aabb);
		}

		result->mesh = builder.createDXMesh();

		result->loadState.store(asset_loaded, std::memory_order_release);
	}

	static ref<multi_mesh> loadMeshFromFileInternal(const fs::path& sceneFilename, asset_handle handle, uint32 flags, mesh_load_callback cb,
		bool async, job_handle parentJob)
	{
		ref<multi_mesh> result = make_ref<multi_mesh>();
		result->handle = handle;
		result->flags = flags;
		result->loadState = asset_loading;

		if (!async)
		{
			meshLoaderThread(result, sceneFilename, flags, cb, false, {});
			result->loadJob = {};
			return result;
		}
		else
		{
			struct mesh_loading_data
			{
				mesh_load_callback cb;
				fs::path path;
				ref<multi_mesh> mesh;
				uint32 flags;
			};

			constexpr int a = sizeof(mesh_loading_data);

			mesh_loading_data data = { cb, sceneFilename, result, flags };

			job_handle job = lowPriorityJobQueue.createJob<mesh_loading_data>([](mesh_loading_data& data, job_handle job)
				{
					meshLoaderThread(data.mesh, data.path, data.flags, data.cb, true, job);
				}, data, parentJob);
			job.submitNow();

			result->loadJob = job;

			return result;
		}
	}

	static bool operator==(const mesh_key& a, const mesh_key& b)
	{
		return a.handle == b.handle && a.flags == b.flags;
	}

	static std::unordered_map<mesh_key, weakref<multi_mesh>> meshCache;
	static std::mutex mutex;

	static ref<multi_mesh> loadMeshFromFileAndHandle(const fs::path& filename, asset_handle handle, uint32 flags, mesh_load_callback cb,
		bool async = false, job_handle parentJob = {})
	{
		if (!fs::exists(filename))
			return 0;

		mesh_key key = { handle, flags };

		mutex.lock();

		ref<multi_mesh> result = { meshCache[key].lock(), {} };
		if (!result)
		{
			result = loadMeshFromFileInternal(filename, handle, flags, cb, async, parentJob);
			meshCache[key] = result;
		}

		mutex.unlock();
		return result;
	}

	NODISCARD ref<multi_mesh> loadMeshFromFile(const fs::path& filename, uint32 flags, mesh_load_callback cb)
	{
		fs::path path = filename.lexically_normal().make_preferred();

		asset_handle handle = getAssetHandleFromPath(path);
		return loadMeshFromFileAndHandle(path, handle, flags, cb);
	}

	NODISCARD ref<multi_mesh> loadMeshFromHandle(asset_handle handle, uint32 flags, mesh_load_callback cb)
	{
		fs::path sceneFilename = getPathFromAssetHandle(handle);
		return loadMeshFromFileAndHandle(sceneFilename, handle, flags, cb);
	}

	NODISCARD ref<multi_mesh> loadMeshFromFileAsync(const fs::path& filename, uint32 flags, job_handle parentJob, mesh_load_callback cb)
	{
		fs::path path = filename.lexically_normal().make_preferred();

		asset_handle handle = getAssetHandleFromPath(path);
		return loadMeshFromFileAndHandle(path, handle, flags, cb, true, parentJob);
	}

	NODISCARD ref<multi_mesh> loadMeshFromHandleAsync(asset_handle handle, uint32 flags, job_handle parentJob, mesh_load_callback cb)
	{
		fs::path sceneFilename = getPathFromAssetHandle(handle);
		return loadMeshFromFileAndHandle(sceneFilename, handle, flags, cb, true, parentJob);
	}
}

#include <scene/scene.h>

namespace era_engine
{
	NODISCARD eentity loadEntityMeshFromFile(escene& scene, const fs::path& filename, uint32 flags, mesh_load_callback cb)
	{
		auto& registry = scene.registry;
		eentity parent(registry.create(), &registry);

		return parent;
	}
}