#include <regex>

#include "pch.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>
#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)

#include "stdafx.h"
#include <typeinfo>
#include <thread>
#include <future>
#include <thread>
#include <unordered_map>

#include "Cheats.h"
#include "ConsoleCmd.h"
#include "ProcessEventLogger.h"
#include "StringUtils.h"

typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;

void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms)
{
	//auto maxFloatValue = static_cast<float>(9999999999);
	if (!thiz || !function) {
		// Either thiz or function is null, so exit early
		return;
	}

	if (!thiz->Class) {
		// Internal class is null, so exit early
		return;
	}
	const std::string func = function->GetFullName();

	if (func == "Function SWGVRBase.HeadBlinderDetector.OnHeadOverlap") return;
	if (func == "Function SWGVRBase.HeadBlinderDetector.OnHeadEndOverlap") return;

	if (func == "Function SWGCommonGame.BoundaryComponent.OnActorBeginOverlap") return;
	if (func == "Function SWGCommonGame.BoundaryComponent.OnActorEndOverlap") return;
	if (func == "Function BP_StaticBlinder.BP_StaticBlinder_C.On Show Blinder")
	{
		auto instance = static_cast<CG::UBP_StaticBlinder_C*>(thiz);
		auto args = static_cast<CG::UBP_StaticBlinder_C_OnShowBlinder_Params*>(parms);
		if (instance != nullptr)
		{
			if (args != nullptr)
			{
				if (args->bShow)
				{
					return;
				}
			}
		}
	}
	if (func == "Function SWGVRBase.HeadBlinderDetector.SetBlinderShown")
	{
		auto instance = static_cast<CG::UHeadBlinderDetector*>(thiz);
		auto args = static_cast<CG::UHeadBlinderDetector_SetBlinderShown_Params*>(parms);
		if (instance != nullptr)
		{
			if (args != nullptr)
			{
				if (args->bShown)
				{
					return;
				}
			}
		}
	}
	if (func == "Function SWGVRBase.HeadBlinderDetector.SetBlidnerEnabled")
	{
		auto instance = static_cast<CG::UHeadBlinderDetector*>(thiz);
		auto args = static_cast<CG::UHeadBlinderDetector_SetBlidnerEnabled_Params*>(parms);
		if (instance != nullptr)
		{
			if (args != nullptr)
			{
				if (args->bEnabled)
				{
					return;
				}
			}
		}
	}

	ProcessEventLogger::ReportCustomEvent(func);

	try {
		oProcessEvent(thiz, function, parms);
	}
	catch (...) {}
}

uintptr_t GetBaseAddress(const std::wstring& moduleName)
{
	return  reinterpret_cast<uintptr_t>(GetModuleHandleW(moduleName.c_str()));
}

uintptr_t GetBaseAddress()
{
	return GetBaseAddress(L"HW2-Win64-Shipping.exe");
}

void StartProcessEventHook()
{
	uintptr_t mBaseAddress = GetBaseAddress();
	uintptr_t ProcessEventOffset = 0x13BAFF0;
	uintptr_t ProcessEventAddress = mBaseAddress + ProcessEventOffset;

	auto peFunc = reinterpret_cast<ProcessEvent>(ProcessEventAddress);
	bool processEventHooked = MH_CreateHook(peFunc, reinterpret_cast<void*>(HkProcessEvent), reinterpret_cast<void**>(&oProcessEvent)) == MH_OK && MH_EnableHook(peFunc) == MH_OK;
	if (processEventHooked)
	{
		ConsoleTools::ConsoleWrite("Hooked Process Event!");
	}
	else
	{
		ConsoleTools::ConsoleWrite("Failed to Hook Process Event!");
	}
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	if (!CG::InitSdk())
	{
		// TODO: Should handle that
		return FALSE;
	}

	// Console (Used Mainly for Debug Purpose) (not needed)
	ConsoleTools::ShowConsole();

	bool init_hook = false;
	do
	{
		std::thread executor(Cheats::CheatExecutorThread);
		executor.detach();

		std::thread ProcessEventHookThread(StartProcessEventHook);
		ProcessEventHookThread.detach();

		init_hook = true;
	} while (!init_hook);

	ConsoleCmd::initializeCommands();
	ConsoleCmd::ConsoleInput();
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		MH_Initialize();
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		//kiero::shutdown();
		break;
	}
	return TRUE;
}