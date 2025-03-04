// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#pragma once

#include "dx/dx_descriptor.h"
#include "dx/dx_descriptor_allocation.h"

namespace era_engine
{
	struct dx_dynamic_constant_buffer
	{
		D3D12_GPU_VIRTUAL_ADDRESS gpuPtr;
	};

	struct dx_dynamic_vertex_buffer
	{
		D3D12_VERTEX_BUFFER_VIEW view;
	};

	struct dx_dynamic_index_buffer
	{
		D3D12_INDEX_BUFFER_VIEW view;
	};

	struct dx_buffer
	{
		virtual ~dx_buffer();

		dx_resource resource;
		D3D12MA::Allocation* allocation = 0;

		dx_descriptor_allocation descriptorAllocation = {};
		dx_descriptor_allocation shaderVisibleDescriptorAllocation = {};

		dx_cpu_descriptor_handle defaultSRV;
		dx_cpu_descriptor_handle defaultUAV;

		dx_cpu_descriptor_handle cpuClearUAV;
		dx_gpu_descriptor_handle gpuClearUAV;

		dx_cpu_descriptor_handle raytracingSRV;

		D3D12_GPU_VIRTUAL_ADDRESS gpuVirtualAddress;

		bool supportsUAV;
		bool supportsSRV;
		bool supportsClearing;
		bool raytracing;

		uint32 elementSize = 0;
		uint32 elementCount = 0;
		uint32 totalSize = 0;
		D3D12_HEAP_TYPE heapType;
	};

	struct dx_vertex_buffer : dx_buffer
	{
		D3D12_VERTEX_BUFFER_VIEW view;
	};

	struct dx_index_buffer : dx_buffer
	{
		D3D12_INDEX_BUFFER_VIEW view;
	};

	struct vertex_buffer_group
	{
		ref<dx_vertex_buffer> positions;
		ref<dx_vertex_buffer> others; // Uvs, normals, tangents, etc.
	};

	struct dx_vertex_buffer_view
	{
		dx_vertex_buffer_view() { view.SizeInBytes = 0; }
		dx_vertex_buffer_view(const ref<dx_vertex_buffer>& vb) : view(vb ? vb->view : D3D12_VERTEX_BUFFER_VIEW{ 0 }) {}
		dx_vertex_buffer_view(const dx_dynamic_vertex_buffer& vb) : view(vb.view) {}
		dx_vertex_buffer_view(const dx_vertex_buffer_view&) = default;
		dx_vertex_buffer_view(dx_vertex_buffer_view&&) = default;

		dx_vertex_buffer_view& operator=(const dx_vertex_buffer_view&) = default;
		dx_vertex_buffer_view& operator=(dx_vertex_buffer_view&&) = default;

		operator bool() const { return view.SizeInBytes > 0; }
		operator const D3D12_VERTEX_BUFFER_VIEW& () const { return view; }

		D3D12_VERTEX_BUFFER_VIEW view;
	};

	struct dx_vertex_buffer_group_view
	{
		dx_vertex_buffer_group_view() { positions.view.SizeInBytes = 0; others.view.SizeInBytes = 0; }
		dx_vertex_buffer_group_view(const dx_vertex_buffer_view& positions, const dx_vertex_buffer_view& others = {}) : positions(positions), others(others) {}
		dx_vertex_buffer_group_view(const vertex_buffer_group& vb) : positions(vb.positions), others(vb.others) {}
		dx_vertex_buffer_group_view(const dx_vertex_buffer_group_view&) = default;
		dx_vertex_buffer_group_view(dx_vertex_buffer_group_view&&) = default;

		dx_vertex_buffer_group_view& operator=(const dx_vertex_buffer_group_view&) = default;
		dx_vertex_buffer_group_view& operator=(dx_vertex_buffer_group_view&&) = default;

		operator bool() const { return positions && others; }

		dx_vertex_buffer_view positions;
		dx_vertex_buffer_view others;
	};

	struct dx_index_buffer_view
	{
		dx_index_buffer_view() { view.SizeInBytes = 0; }
		dx_index_buffer_view(const ref<dx_index_buffer>& vb) : view(vb->view) {}
		dx_index_buffer_view(const dx_dynamic_index_buffer& vb) : view(vb.view) {}
		dx_index_buffer_view(const dx_index_buffer_view&) = default;
		dx_index_buffer_view(dx_index_buffer_view&&) = default;

		dx_index_buffer_view& operator=(const dx_index_buffer_view&) = default;
		dx_index_buffer_view& operator=(dx_index_buffer_view&&) = default;

		operator bool() const { return view.SizeInBytes > 0; }
		operator const D3D12_INDEX_BUFFER_VIEW& () const { return view; }

		D3D12_INDEX_BUFFER_VIEW view;
	};

	struct dx_mesh
	{
		vertex_buffer_group vertexBuffer;
		ref<dx_index_buffer> indexBuffer;
	};

	struct buffer_grave
	{
		buffer_grave() {}
		buffer_grave(const buffer_grave& o) = delete;
		buffer_grave(buffer_grave&& o) = default;

		buffer_grave& operator=(const buffer_grave& o) = delete;
		buffer_grave& operator=(buffer_grave&& o) = default;

		~buffer_grave();

		dx_resource resource;

		dx_descriptor_allocation descriptorAllocation = {};
		dx_descriptor_allocation shaderVisibleDescriptorAllocation = {};
	};

	DXGI_FORMAT getIndexBufferFormat(uint32 elementSize);

	struct map_range
	{
		uint32 firstElement = 0;
		uint32 numElements = (uint32)-1;
	};

	NODISCARD void* mapBuffer(const ref<dx_buffer>& buffer, bool intentsReading, map_range readRange = { });
	void unmapBuffer(const ref<dx_buffer>& buffer, bool hasWritten, map_range writtenRange = { });

	void updateBufferDataRange(ref<dx_buffer> buffer, const void* data, uint32 offset, uint32 size);
	void updateUploadBufferData(const ref<dx_buffer>& buffer, void* data, uint32 size);

	NODISCARD ref<dx_buffer> createBuffer(uint32 elementSize, uint32 elementCount, void* data, bool allowUnorderedAccess = false, bool allowClearing = false, D3D12_RESOURCE_STATES initialState = D3D12_RESOURCE_STATE_COMMON);
	NODISCARD ref<dx_buffer> createUploadBuffer(uint32 elementSize, uint32 elementCount, void* data);
	NODISCARD ref<dx_buffer> createReadbackBuffer(uint32 elementSize, uint32 elementCount, D3D12_RESOURCE_STATES initialState = D3D12_RESOURCE_STATE_COPY_DEST);
	NODISCARD ref<dx_vertex_buffer> createVertexBuffer(uint32 elementSize, uint32 elementCount, void* data, bool allowUnorderedAccess = false, bool allowClearing = false);
	NODISCARD ref<dx_vertex_buffer> createUploadVertexBuffer(uint32 elementSize, uint32 elementCount, void* data);
	NODISCARD ref<dx_index_buffer> createIndexBuffer(uint32 elementSize, uint32 elementCount, void* data, bool allowUnorderedAccess = false, bool allowClearing = false);

	NODISCARD ref<dx_buffer> createRaytracingTLASBuffer(uint32 size);

	void resizeBuffer(ref<dx_buffer> buffer, uint32 newElementCount, D3D12_RESOURCE_STATES initialState = D3D12_RESOURCE_STATE_COMMON);
}
