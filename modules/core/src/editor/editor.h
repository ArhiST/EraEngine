// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#pragma once

#include "core/camera_controller.h"
#include "core/system.h"
#include "core/imgui.h"

#include "editor/editor_icons.h"
#include "editor/undo_stack.h"
#include "editor/transformation_gizmo.h"
#include "editor/asset_editor_panel.h"

#include "rendering/main_renderer.h"

#include "physics/physics.h"

#include "scene/scene.h"

#include "asset/file_registry.h"

namespace era_engine
{
	struct application;

	struct eeditor
	{
		void initialize(editor_scene* scene, main_renderer* renderer, editor_panels* editorPanels);

		bool update(const user_input& input, ldr_render_pass* ldrRenderPass, float dt);

		void render(ldr_render_pass* ldrRenderPass, float dt);

		eentity selectedEntity;
		physics_settings physicsSettings;

	private:
		struct undo_buffer
		{
			uint8 before[128];
			template <typename T> inline T& as() { return *(T*)before; }
		};

		void forceStart();
		void forcePause();
		void forceStop();

		void visualizePhysics(ldr_render_pass* ldrRenderPass) const;

		void drawSettings(float dt);
		bool drawMainMenuBar();
		bool drawSceneHierarchy();
		void renderChilds(eentity& entity);
		bool handleUserInput(const user_input& input, ldr_render_pass* ldrRenderPass, float dt);
		bool drawEntityCreationPopup();

		void updateSelectedEntityUIRotation();

		void setSelectedEntity(eentity entity);

		bool editCamera(render_camera& camera);
		bool editTonemapping(tonemap_settings& tonemap);
		bool editSunShadowParameters(directional_light& sun);
		bool editAO(bool& enable, hbao_settings& settings, const ref<dx_texture>& aoTexture);
		bool editSSS(bool& enable, sss_settings& settings, const ref<dx_texture>& sssTexture);
		bool editSSR(bool& enable, ssr_settings& settings, const ref<dx_texture>& ssrTexture);
		bool editTAA(bool& enable, taa_settings& settings, const ref<dx_texture>& velocityTexture);
		bool editBloom(bool& enable, bloom_settings& settings, const ref<dx_texture>& bloomTexture);
		bool editSharpen(bool& enable, sharpen_settings& settings);

		void onObjectMoved();

		void serializeToFile();
		bool deserializeFromFile();
		bool deserializeFromCurrentFile(const fs::path& path);

		template <typename Value_, typename Action_, typename... Args_>
		void undoable(const char* undoLabel, Value_ before, Value_& now, Args_... args);

		eentity selectedColliderEntity;
		eentity selectedConstraintEntity;

		editor_scene* scene = nullptr;
		main_renderer* renderer = nullptr;
		editor_panels* editorPanels = nullptr;

		application* app = nullptr;

		undo_stack undoStacks[2];
		undo_buffer undoBuffers[2];

		undo_stack* currentUndoStack = nullptr;
		undo_buffer* currentUndoBuffer = nullptr;

		transformation_gizmo gizmo;

		camera_controller cameraController;

		vec3 selectedEntityEulerRotation;

		system_info systemInfo;

		bool renderPhysicsShapes = false;

		friend struct selection_undo;
		friend struct application;
	};

	void editTexture(const char* name, ref<dx_texture>& tex, uint32 loadFlags);

	void editMesh(const char* name, ref<multi_mesh>& mesh, uint32 loadFlags);

	void editMaterial(const ref<pbr_material>& material);
	
	void editSubmeshTransform(trs* transform);
}