// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#pragma once

#include "core/math.h"

#include "animation/animation.h"

#include "geometry/mesh.h"

namespace era_engine
{
	struct skeleton_asset
	{
		std::vector<animation::skeleton_joint> joints;
		std::unordered_map<std::string, uint32> nameToJointID;
	};

	struct animation_asset
	{
		std::string name;
		float duration;

		std::unordered_map<std::string, animation::animation_joint> joints;

		std::vector<float> positionTimestamps;
		std::vector<float> rotationTimestamps;
		std::vector<float> scaleTimestamps;

		std::vector<vec3> positionKeyframes;
		std::vector<quat> rotationKeyframes;
		std::vector<vec3> scaleKeyframes;
	};

	struct submesh_asset
	{
		int32 materialIndex;

		std::vector<vec3> positions;
		std::vector<vec2> uvs;
		std::vector<vec3> normals;
		std::vector<vec3> tangents;
		std::vector<uint32> colors;
		std::vector<animation::skinning_weights> skin;

		std::vector<indexed_triangle16> triangles;
	};

	struct mesh_asset
	{
		std::string name;
		std::vector<submesh_asset> submeshes;
		int32 skeletonIndex;
	};

	struct pbr_material_desc;

	struct model_asset
	{
		uint32 flags;
		std::vector<mesh_asset> meshes;
		std::vector<pbr_material_desc> materials;
		std::vector<skeleton_asset> skeletons;
		std::vector<animation_asset> animations;
	};

	enum mesh_flags
	{
		mesh_flag_load_uvs = (1 << 0),
		mesh_flag_flip_uvs_vertically = (1 << 1),
		mesh_flag_load_normals = (1 << 2),
		mesh_flag_load_tangents = (1 << 3),
		mesh_flag_gen_normals = (1 << 4), // Only if mesh has no normals.
		mesh_flag_gen_tangents = (1 << 5), // Only if mesh has no tangents.
		mesh_flag_load_colors = (1 << 6), // Only if mesh has no tangents.
		mesh_flag_load_skin = (1 << 7),

		mesh_flag_default = mesh_flag_load_uvs | mesh_flag_flip_uvs_vertically |
		mesh_flag_load_normals | mesh_flag_gen_normals |
		mesh_flag_load_tangents | mesh_flag_gen_tangents |
		mesh_flag_load_colors | mesh_flag_load_skin,
	};

	NODISCARD model_asset load3DModelFromFile(const fs::path& path, uint32 meshFlags = mesh_flag_default);

	bool isMeshExtension(const fs::path& extension);
	bool isMeshExtension(const std::string& extension);
}