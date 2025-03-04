// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#pragma once

#include "core/math.h"

#include "scene/scene.h"

namespace era_engine
{
	struct rigid_body_global_state
	{
		// Don't change the order here. It's currently required by the SIMD code
		quat rotation;
		vec3 localCOGPosition;
		vec3 position;
		mat3 invInertia;
		float invMass;
		vec3 linearVelocity;
		vec3 angularVelocity;
	};

	struct rigid_body_component
	{
		rigid_body_component() : rigid_body_component(true, 1.f) {}
		rigid_body_component(bool kinematic, float gravityFactor = 1.f, float linearDamping = 0.4f, float angularDamping = 0.4f);
		void recalculateProperties(entt::registry* registry, const struct physics_reference_component& reference);
		NODISCARD vec3 getGlobalCOGPosition(const trs& transform) const;
		NODISCARD vec3 getGlobalPointVelocity(const trs& transform, vec3 localP) const;

		void applyGravityAndIntegrateForces(rigid_body_global_state& global, const trs& transform, float dt);
		void integrateVelocity(const rigid_body_global_state& global, trs& transform, float dt);

		// In entity's local space
		vec3 localCOGPosition;
		float invMass;
		mat3 invInertia;

		float gravityFactor;
		float linearDamping;
		float angularDamping;

		// In global space
		vec3 linearVelocity;
		vec3 angularVelocity;

		vec3 forceAccumulator;
		vec3 torqueAccumulator;
	};

	struct physics_transform0_component : trs
	{
		physics_transform0_component() {}
		physics_transform0_component(const trs& t) : trs(t) {}
	};

	struct physics_transform1_component : trs
	{
		physics_transform1_component() {}
		physics_transform1_component(const trs& t) : trs(t) {}
	};
}