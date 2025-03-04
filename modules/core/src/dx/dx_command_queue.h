// Copyright (c) 2023-present Eldar Muradov. All rights reserved.

#pragma once

#include "dx/dx.h"

namespace era_engine
{
	struct dx_command_list;

	struct dx_command_queue
	{
		void initialize(dx_device device, D3D12_COMMAND_LIST_TYPE type);

		uint64 signal();
		NODISCARD bool isFenceComplete(uint64 fenceValue) const;
		void waitForFence(uint64 fenceValue);
		void waitForOtherQueue(dx_command_queue& other);
		void waitForOtherQueue(dx_command_queue& other, uint64 fenceValue);
		void flush();

		uint64 timeStampFrequency; // In Hz.
		int64 timeStampToCPU; // GPU queue - CPU.

		D3D12_COMMAND_LIST_TYPE commandListType;
		com<ID3D12CommandQueue>	commandQueue;
		com<ID3D12Fence> fence;
		volatile uint64 fenceValue;

		dx_command_list* runningCommandLists;
		dx_command_list* newestRunningCommandList;
		dx_command_list* freeCommandLists;

		volatile uint32 numRunningCommandLists;
		volatile uint32 totalNumCommandLists; // Used only for validation.

		HANDLE processThreadHandle;

		std::mutex commandListMutex;
	};
}