// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#include "scene/serialization_binary.h"

#include "asset/file_registry.h"

#include "physics/physics.h"

#include "terrain/heightmap_collider.h"

namespace era_engine
{
	struct write_stream
	{
		uint8* buffer;
		uint64 size;
		uint64 writeOffset = 0;

		template <typename T>
		void write(T t)
		{
			if (check(sizeof(T)))
			{
				memcpy(buffer + writeOffset, &t, sizeof(T));
				writeOffset += sizeof(T);
			}
		}

		template <typename T, uint32 size>
		void write(T(&s)[size])
		{
			if (check(size * sizeof(T)))
			{
				memcpy(buffer + writeOffset, s, size * sizeof(T));
				writeOffset += size * sizeof(T);
			}
		}

	private:
		bool check(uint64 s)
		{
			if (writeOffset + s >= size)
			{
				size = 0;
				return false;
			}
			return true;
		}
	};

	struct read_stream
	{
		uint8* buffer;
		uint64 size;
		uint64 readOffset = 0;

		template <typename T>
		void peek(T& out)
		{
			if (check(sizeof(T)))
			{
				memcpy(&out, buffer + readOffset, sizeof(T));
			}
		}

		template <typename T>
		void read(T& out)
		{
			if (check(sizeof(T)))
			{
				peek(out);
				readOffset += sizeof(T);
			}
		}

		template <typename T, uint32 size>
		void read(T(&s)[size])
		{
			if (check(size * sizeof(T)))
			{
				memcpy(s, buffer + readOffset, size * sizeof(T));
				readOffset += size * sizeof(T);
			}
		}

	private:
		bool check(uint64 s)
		{
			if (size < readOffset + s)
			{
				size = 0;
				return false;
			}
			return true;
		}
	};

	using serialized_components = component_group_t <

		tag_component,

		// Transforms
		transform_component,
		position_component,
		position_rotation_component,
		position_scale_component,
		dynamic_transform_component,

		// Rendering
		mesh_component,
		point_light_component,
		spot_light_component,

		// Physics
		rigid_body_component,
		force_field_component,
		cloth_component,
		cloth_render_component,
		physics_reference_component,

		////PX_Physics
		//px_rigidbody_component,
		//px_box_collider,
		//px_capsule_collider,
		//px_sphere_collider,
		//px_triangle_mesh_collider,

		// Terrain
		terrain_component,
		heightmap_collider_component,
		grass_component,
		proc_placement_component,
		water_component
	> ;

	template <typename component_t>
	void serializeToMemoryStream(eentity entity, const component_t& component, write_stream& stream)
	{
		stream.write(component);
	}

	template <typename component_t>
	void deserializeFromMemoryStream(eentity entity, read_stream& stream)
	{
		entity.addComponent<component_t>();
		component_t& component = entity.getComponent<component_t>();

		stream.read(component);
	}

#define READ(type, var) type var; stream.read(var);

	template <> void serializeToMemoryStream(eentity entity, const dynamic_transform_component& component, write_stream& stream) {}
	template <> void deserializeFromMemoryStream<dynamic_transform_component>(eentity entity, read_stream& stream) { entity.addComponent<dynamic_transform_component>(); }

	template <>
	void serializeToMemoryStream(eentity entity, const mesh_component& component, write_stream& stream)
	{
		asset_handle handle = component.mesh ? component.mesh->handle : (asset_handle)0;
		uint32 flags = component.mesh ? component.mesh->flags : 0;
		stream.write(handle);
		stream.write(flags);
	}

	template <>
	void deserializeFromMemoryStream<mesh_component>(eentity entity, read_stream& stream)
	{
		READ(asset_handle, handle);
		READ(uint32, flags);

		auto mesh = loadMeshFromHandle(handle, flags);
		entity.addComponent<mesh_component>(mesh);
	}

	template <>
	void serializeToMemoryStream(eentity entity, const cloth_component& component, write_stream& stream)
	{
		stream.write(component.width);
		stream.write(component.height);
		stream.write(component.gridSizeX);
		stream.write(component.gridSizeY);
		stream.write(component.totalMass);
		stream.write(component.stiffness);
		stream.write(component.damping);
		stream.write(component.gravityFactor);
	}

	template <>
	void deserializeFromMemoryStream<cloth_component>(eentity entity, read_stream& stream)
	{
		READ(float, width);
		READ(float, height);
		READ(uint32, gridSizeX);
		READ(uint32, gridSizeY);
		READ(float, totalMass);
		READ(float, stiffness);
		READ(float, damping);
		READ(float, gravityFactor);

		entity.addComponent<cloth_component>(width, height, gridSizeX, gridSizeY, totalMass, stiffness, damping, gravityFactor);
	}

	template <> void serializeToMemoryStream(eentity entity, const cloth_render_component& component, write_stream& stream) {}
	template <> void deserializeFromMemoryStream<cloth_render_component>(eentity entity, read_stream& stream) { entity.addComponent<cloth_render_component>(); }

	template <>
	void serializeToMemoryStream(eentity entity, const physics_reference_component& component, write_stream& stream)
	{
		stream.write(component.numColliders);
		for (collider_component& collider : collider_component_iterator(entity))
		{
			stream.write<collider_union>(collider);
		}

		stream.write(component.numConstraints);
		for (auto [constraintEntity, constraintType] : constraint_entity_iterator(entity))
		{
			auto& ref = constraintEntity.getComponent<constraint_entity_reference_component>();

			stream.write(constraintType);
			stream.write(ref.entityA);
			stream.write(ref.entityB);

			switch (constraintType)
			{
			case constraint_type_distance: stream.write(constraintEntity.getComponent<distance_constraint>()); break;
			case constraint_type_ball: stream.write(constraintEntity.getComponent<ball_constraint>()); break;
			case constraint_type_fixed: stream.write(constraintEntity.getComponent<fixed_constraint>()); break;
			case constraint_type_hinge: stream.write(constraintEntity.getComponent<hinge_constraint>()); break;
			case constraint_type_cone_twist: stream.write(constraintEntity.getComponent<cone_twist_constraint>()); break;
			case constraint_type_slider: stream.write(constraintEntity.getComponent<slider_constraint>()); break;
			}
		}
	}

	template <>
	void deserializeFromMemoryStream<physics_reference_component>(eentity entity, read_stream& stream)
	{
		READ(uint32, numColliders);
		for (uint32 i = 0; i < numColliders; ++i)
		{
			READ(collider_union, u);
			entity.addComponent<collider_component>(collider_component::fromUnion(u));
		}

		READ(uint32, numConstraints);
		for (uint32 i = 0; i < numConstraints; ++i)
		{
			READ(constraint_type, constraintType);

			READ(entity_handle, entityHandleA);
			READ(entity_handle, entityHandleB);

			ASSERT(entity.handle == entityHandleA || entity.handle == entityHandleB);

			eentity a = { entityHandleA, entity.registry };
			eentity b = { entityHandleB, entity.registry };

			switch (constraintType)
			{
			case constraint_type_distance: { READ(distance_constraint, c); addConstraint(a, b, c); break; }
			case constraint_type_ball: { READ(ball_constraint, c); addConstraint(a, b, c); break; }
			case constraint_type_fixed: { READ(fixed_constraint, c); addConstraint(a, b, c); break; }
			case constraint_type_hinge: { READ(hinge_constraint, c); addConstraint(a, b, c); break; }
			case constraint_type_cone_twist: { READ(cone_twist_constraint, c); addConstraint(a, b, c); break; }
			case constraint_type_slider: { READ(slider_constraint, c); addConstraint(a, b, c); break; }
			}
		}
	}

	static void serializeTexture(const ref<dx_texture>& tex, write_stream& stream)
	{
		stream.write(tex ? tex->handle : asset_handle{ 0 });
		stream.write(tex ? tex->flags : 0u);
	}

	static void serializeMaterial(const ref<pbr_material>& mat, write_stream& stream)
	{
		stream.write(mat != nullptr);
		if (mat)
		{
			serializeTexture(mat->albedo, stream);
			serializeTexture(mat->normal, stream);
			serializeTexture(mat->roughness, stream);
			serializeTexture(mat->metallic, stream);

			stream.write(mat->emission);
			stream.write(mat->albedoTint);
			stream.write(mat->roughnessOverride);
			stream.write(mat->metallicOverride);
			stream.write(mat->shader);
			stream.write(mat->uvScale);
			stream.write(mat->translucency);
		}
	}

	NODISCARD static std::pair<asset_handle, uint32> deserializeTexture(read_stream& stream)
	{
		READ(asset_handle, handle);
		READ(uint32, flags);
		return { handle, flags };
	}

	NODISCARD static ref<pbr_material> deserializeMaterial(read_stream& stream)
	{
		ref<pbr_material> result = 0;

		READ(bool, exists);
		if (exists)
		{
			pbr_material_desc desc;

			auto [albedoHandle, albedoFlags] = deserializeTexture(stream);
			auto [normalHandle, normalFlags] = deserializeTexture(stream);
			auto [roughnessHandle, roughnessFlags] = deserializeTexture(stream);
			auto [metallicHandle, metallicFlags] = deserializeTexture(stream);

			desc.albedo = getPathFromAssetHandle(albedoHandle);
			desc.albedoFlags = albedoFlags;
			desc.normal = getPathFromAssetHandle(normalHandle);
			desc.normalFlags = normalFlags;
			desc.roughness = getPathFromAssetHandle(roughnessHandle);
			desc.roughnessFlags = roughnessFlags;
			desc.metallic = getPathFromAssetHandle(metallicHandle);
			desc.metallicFlags = metallicFlags;

			READ(vec4, emission);
			READ(vec4, albedoTint);
			READ(float, roughnessOverride);
			READ(float, metallicOverride);
			READ(pbr_material_shader, shader);
			READ(float, uvScale);
			READ(float, translucency);

			desc.emission = emission;
			desc.albedoTint = albedoTint;
			desc.roughnessOverride = roughnessOverride;
			desc.metallicOverride = metallicOverride;
			desc.shader = shader;
			desc.uvScale = uvScale;
			desc.translucency = translucency;

			result = createPBRMaterial(desc);
		}

		return result;
	}

	template <>
	void serializeToMemoryStream(eentity entity, const terrain_component& component, write_stream& stream)
	{
		stream.write(component.chunksPerDim);
		stream.write(component.chunkSize);
		stream.write(component.amplitudeScale);
		stream.write(component.genSettings);

		serializeMaterial(component.groundMaterial, stream);
		serializeMaterial(component.rockMaterial, stream);
		serializeMaterial(component.mudMaterial, stream);
	}

	template <>
	void deserializeFromMemoryStream<terrain_component>(eentity entity, read_stream& stream)
	{
		READ(uint32, chunksPerDim);
		READ(float, chunkSize);
		READ(float, amplitudeScale);
		READ(terrain_generation_settings, genSettings);

		auto ground = deserializeMaterial(stream);
		auto rock = deserializeMaterial(stream);
		auto mud = deserializeMaterial(stream);

		entity.addComponent<terrain_component>(chunksPerDim, chunkSize, amplitudeScale, ground, rock, mud, genSettings);
	}

	template <>
	void serializeToMemoryStream(eentity entity, const heightmap_collider_component& component, write_stream& stream)
	{
		stream.write(component.chunksPerDim);
		stream.write(component.chunkSize);
		stream.write(component.material);
	}

	template <>
	void deserializeFromMemoryStream<heightmap_collider_component>(eentity entity, read_stream& stream)
	{
		READ(uint32, chunksPerDim);
		READ(float, chunkSize);
		READ(physics_material, material);

		entity.addComponent<heightmap_collider_component>(chunksPerDim, chunkSize, material);
	}

	template <>
	void serializeToMemoryStream(eentity entity, const grass_component& component, write_stream& stream)
	{
		stream.write(component.settings);
	}

	template <>
	void deserializeFromMemoryStream<grass_component>(eentity entity, read_stream& stream)
	{
		READ(grass_settings, settings);
		entity.addComponent<grass_component>(settings);
	}

	template <>
	void serializeToMemoryStream(eentity entity, const proc_placement_component& component, write_stream& stream)
	{
		// TODO
	}

	template <>
	void deserializeFromMemoryStream<proc_placement_component>(eentity entity, read_stream& stream)
	{
		// TODO
	}

	template <typename Component_>
	void serializeComponentToMemoryStream(eentity entity, write_stream& stream)
	{
		if (Component_* component = entity.getComponentIfExists<Component_>())
		{
			stream.write(true);
			serializeToMemoryStream(entity, *component, stream);
		}
		else
		{
			stream.write(false);
		}
	}

	template <typename Component_>
	void deserializeComponentFromMemoryStream(eentity entity, read_stream& stream)
	{
		READ(bool, hasComponent);

		if (hasComponent)
		{
			deserializeFromMemoryStream<Component_>(entity, stream);
		}
	}

	template <typename... Component_>
	static void serializeComponentsToMemoryStream(component_group_t<Component_...>, eentity entity, write_stream& stream)
	{
		(serializeComponentToMemoryStream<Component_>(entity, stream), ...);
	}

	template <typename... Component_>
	static void deserializeComponentsFromMemoryStream(component_group_t<Component_...>, eentity entity, read_stream& stream)
	{
		(deserializeComponentFromMemoryStream<Component_>(entity, stream), ...);
	}

	uint64 serializeEntityToMemory(eentity entity, void* memory, uint64 maxSize)
	{
		write_stream stream = { (uint8*)memory, maxSize };
		serializeComponentsToMemoryStream(serialized_components{}, entity, stream);
		return stream.writeOffset;
	}

	bool deserializeEntityFromMemory(eentity entity, void* memory, uint64 size)
	{
		read_stream stream = { (uint8*)memory, size };
		deserializeComponentsFromMemoryStream(serialized_components{}, entity, stream);
		return stream.readOffset == size;
	}
}