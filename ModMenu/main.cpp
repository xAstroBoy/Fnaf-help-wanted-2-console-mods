#include <regex>

#include "pch.h"
#include "CheatsCode.h"
#include "ConsoleUtils.h"
#include "includes.h"
#include "SDK.h"
#include <thread>
#pragma once
#pragma warning(disable: 4717)
#pragma warning(disable: 4806)
#pragma warning(disable: 305)

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "mem.h"
#include <limits>
#include <exception>
#include <typeinfo>
#include <stdexcept>
#include <thread>
#include <algorithm> // For std::transform
#include <cctype>    // For std::tolower
#include <future>
#include <regex>     // For std::regex_search
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <unordered_map>


// Command class
class Command {
public:Command() = default;  // Default constructor


	Command(const std::string& name, const std::string& description, std::function<void()> action)
		: name(name), description(description), action(action) {}

	void execute() const {
		action();
	}

	const std::string& getName() const {
		return name;
	}

	const std::string& getDescription() const {
		return description;
	}

private:
	std::string name;
	std::string description;
	std::function<void()> action;
};

bool ends_with(const std::string& mainStr, const std::string& toMatch)
{
	if (mainStr.size() >= toMatch.size() &&
		mainStr.compare(mainStr.size() - toMatch.size(), toMatch.size(), toMatch) == 0)
		return true;
	else
		return false;
}
std::unordered_map<std::string, Command> commandMap;

bool UnlimPower = false;

typedef void(__thiscall* ProcessEvent)(CG::UObject*, CG::UFunction*, void*);
ProcessEvent oProcessEvent;




// Convert a string to lowercase
std::string toLowercase(const std::string& str) {
	std::string result = str;
	std::transform(result.begin(), result.end(), result.begin(), ::tolower);
	return result;
}

std::string bool_as_text(bool b)
{
	std::stringstream converter;
	converter << std::boolalpha << b;   // flag boolalpha calls converter.setf(std::ios_base::boolalpha)
	return converter.str();
}

const std::vector<std::string> ClassNames = {
};
const std::vector<std::string> FilterList = {
	"BlueprintUpdateCamera",
	"BlueprintModifyCamera",
	"K2_DestroyActor",
	"BlueprintModifyPostProcess",
	"ReceiveTick",
	"OnMotionControllerUpdated",
	"BlueprintUpdateAnimation",
	"UpdateFunc",
	"OnMoveCompleted",
	"BlueprintUpdateAnimation",
	"OnDeactivate",
	"ReceiveDeactivationAI",
	"OnMotionControllerUpdated",
	"GetCombatStateES",
	"ReceiveTick",
	"OnAudioEnvelopeValueCb",
	"BlueprintUpdateAnimation",
	"OnMovementModeChanged",
	"OnMotionControllerUpdated",
	"BlueprintPostEvaluateAnimation",
	"BlueprintModifyCamera",
	"PerformConditionCheckAI",
	"ReceiveExecuteAI",
	"ReceiveActivationAI",
	"OnActivate",
	"UpdateSpawnManager",
	"RegisterFlashlight",
	"BlueprintModifyCamera",
	"BlueprintModifyPostProcess",
	"UpdateFadeProxy",
	"OnMotionControllerUpdated",
	"OnMovementModeChanged",
	"ReadyToEndMatch",
	"Tick",
	"ReceiveTickAI",
	"PerformConditionCheckAI",
	"OnTick",
	"BlueprintUpdateAnimation",
	"ReceiveTick",
	"AnimGraphNode",
	"OnBuffsReset",
	"ValidateGameProgression",
	"ReceiveInit",
	"OnSynchronizeProperties",
	"PreConstruct",
	"Construct",
	"Destruct",
	"InitializeHUDForPlayer",
	"ReceiveInitCheatManager",
	"EnableCheats",
	"CheatAllowAutoSaving",
	"CheatSetNoDurabilityLoss",
	"ClientSetHUD",
	"ClientVoiceHandshakeComplete",
	"ClientEnableNetworkVoice",
	"ClientCapBandwidth",
	"HandleStartingNewPlayer",
	"ReadyToStartMatch",
	"PlayerCanRestart",
	"FindPlayerStart",
	"ChoosePlayerStart",
	"MustSpectate",
	"SpawnDefaultPawnFor",
	"SpawnDefaultPawnAtTransform",
	"GetDefaultPawnClassForController",
	"PawnAttached",
	"PlayerControllerAttached",
	"Initialize",
	"InitStartSpot",
	"ReceivePossessed",
	"PreApplySkin",
	"PostApplySkin",
	"ClientRestart",
	"OnPawnChanged",
	"ServerAcknowledgePossession",
	"OnApplyGameUserSettings",
	"SetPauseWidgetComponentProgress",
	"OnApplyCheatModes",
	"ClientSetRotation",
	"GetPossibleSkins",
	"GetCorpseCleanupSpawnWalkerClass",
	"InitializeAIByGameMode",
	"UpdateSkinReplicationData",
	"PhysicsVolumeChanged",
	"OnReturnedToPool",
	"ServerReleaseGrapple",
	"SignificanceChange",
	"PawnReturnedToPool",
	"StopLogic",
	"ClearCurrentTarget",
	"OnUpdateValidState",
	"IsPlayerControlled",
	"GetDesiredArchetypeBlueprint",
	"AddInventoryItemList",
	"GetSkinComponentBP",
	"Retune",
	"ResetTuning",
	"TuneObject",
	"OnSetupSection",
	"OnPopulatePage",
	"AddInventoryItemListEntry",
	"AddInventoryItem",
	"BlueprintInitializeAnimation",
	"BlueprintLinkedAnimationLayersInitialized",
	"UserConstructionScript",
	"BlueprintBeginPlay",
	"OnInitialized",
	"ReceiveBeginPlay",
	"OnInventoryAdded",
	"GivenTo",
	"ReturnToInventory",
	"OnCountChanged",
	"OnRep_bRepInsideInventory",
	"GetInventoryOfType",
	"ExecuteUbergraph",
	"OnBuffsReset",
	"OnBuffsReset",
	"GetInventoryAttachPoint",
	"GetInventorySlotGripTransform",
	"InventoryAllowed",
	"AttachInventory",
	"OnAnimationStarted",
	"SetupMaterialParameterCollectionValues",
	"OnMeshHighlightedChanged",
	"ServerShortTimeout",
	"Start Landing Recovery",
	"OnInventoryRemoved",
	"PawnDetached",
	"PlayerControllerDetached",
	"OnNewInventoryItem",
	"OnPlayerDestroyed",
	"ReceiveUnpossessed",
	"OnOwnerEndPlay",
	"ReceiveEndPlay",
	"OnPerceptionStimuliSourceEndPlay",
	"ReceiveDestroyed",
	"SetCurrentInventory",
	"Init",
	"ClientSetCinematicMode",
	"UpdateHandHidden",
	"InitSpawnManager",
	"CE_FullNightMode",
	"ReadyForPlay",
	"RestartLogic",
	"StartLogoMusic",
	"HandWasTeleported",
	"InputDeviceChanged",
	"EndPrePrologue",
	"StartFrontEndMusic",
	"OnSignificanceBinChanged",
	"GetTextValue",
	"Get_Instructions_Text_Text_1",
	"GetValue",
	"Get_Calibration_Image_Brush_1",
	"OnRecenter",
	"OnHMDRecentered",
	"AdvanceBootUp",
	"OnMouseEnter",
	"OnAnimationFinished",
	"SpawnTimerComplete",
	"OnPreviewMouseButtonDown",
	"OnBuffAdded",
	"OnAddedToFocusPath",
	"IsInteractable",
	"OnMouseMove",
	"OnMouseLeave",
	"GetFootstepSound",
	"GetAkComponentByEnum",
	"Received_Notify",
	"CheckPlayerOrientation",
	"OnAIEndPlay",
	"Start",
	"K2_Update",
	"OnInventorySlotContentChanged",
	"OnBackpackContentChanged",
	"OnInventoryCountChanged",
	"SetDurability",
	"OnComponentCollisionSettingsChanged",
	"GetSheathedInventoryMaterial",
	"OnHealthUpdated",
	"OnDoorShut",
	"GetDoorComponent",
	"OnAlarmTimerChanged",
	"AnimNotify_InNoneState",
	"AnimNotify_EnteredBaseAnimState",
	"AnimNotify_EnteredIdleState",
	"ReceivePossess",
	"OnDialogWidgetIsEnabledCallback",
	"ServerAddWeaponAttachment",
	"SetWeaponOwner",
	"WeaponOwnerUpdated",
	"AttachToWeapon",
	"WeaponAttachmentAttached",
	"ModeStoppedFiring",
	"GrabFromInventory",
	"GetGripPoint",
	"PlayGrabbedEffects",
	"ServerUpdateLevelVisibility",
	"BP_StartAnimationRedraw",
	"GetGrappleStateEnumValues",
	"OnPhysicsComponentSleep",
	"OnPhysicsComponentWake",
	"ClientUpdateLevelStreamingStatus",
	"GetGuardPointLocation",
	"IsDefaultBehaviorPatrol",
	"SetPercent",
	"OnMontageStartedEx",
	"GetFireMode",
	"OnLanded",
	"UpdateAvailability",
	"OnCharacterPostSignificance",
	"OnHitReactEnd",
	"OnShoveActorHit",
	"OnOwnerActorHit",
	"OnActorHitCustomThrowPhysics",
	"OnWeaponActorHit",
	"OnComponentHitCustomThrowPhysics",
	"OnComponentHit",
	"CanHitComponentApplyDamage",
	"ServerSetHeldBy_IFC",
	"GetCurrency",
	"OnWeaponClassChanged",
	"Grab",
	"GetInteractionHighlights",
	"OnInteractionHighlightChanged",
	"OnLoaded",
	"BP_FinishAnimationRedraw",
	"AddInteractionHighlight",
	"GetHighlightFeedback",
	"SetIsGrappleMontagePlayingFullyBlended",
	"PreActorSpawn",
	"SetIsGrappleMontagePlaying",
	"OnMontageEndedEx",
	"Hide Notify",
	"BP_HideHealthStamTimer",
	"OnAbort",
	"OnHandBeginOverlap",
	"StopAnimationAction",
	"ReceiveDeactivation",
	"ReceiveActivation",
	"RemoveInteractionHighlight",
	"OnHandEndOverlap",
	"PingOutLight",
	"IsValidInteractionHighlight",
	"GetHighlightHandPoseInfo",
	"GetHighlightHandPose",
	"GetInteractTriggerResistanceCurve",
	"GetBodyMountedInteractLocation",
	"OnSuccess",
	"OnFail_",
	"UpdateHighlight",
	"AnimNotify_IsCompleteIdleFidget",
	"OnInteractPress",
	"OnGripPress",
	"RegisterAnimInteractable_Internal",
	"GetGripFeedback",
	"GetDescription",
	"GetFlavorText",
	"GetInventoryEffectInfo",
	"FormatSalvageEntry",
	"GetDurabilityText",
	"GetDurabilityIndex",
	"UpdateItemInfo",
	"HitReactEnd",
	"PlayAnimationAction",
	"IsValidInventory",
	"AddImpulse",
	"AddAngularImpulseInRadians",
	"GetDisplayName",
	"CanBeLoaded",
	"IsClipEjectedOrChamberOpen",
	"OnInventoryPutInSlotFailed",
	"OnGripRelease",
	"GetThrowInfo",
	"ServerClearHeldBy_IFC",
	"Dropped",
	"OnHandHeldActorChange",
	"OnHeldActorDropped",
	"UnregisterAnimInteractable_Internal",
	"SendInteractPresses_Internal",
	"SetMaxCurveValues_Internal (Finger)",
	"SendMaxCurveValues_Internal",
	"HeldActorChanged",
	"OnHitByPhysicsActor",
	"OnActorBump",
	"OnMeshComponentHit",
	"ResetHitReactCanInterrupt",
	"SearchAnimationBlendOut",
	"ShowHighlight",
	"GetHighlightType",
	"GetHighlightTransform",
	"UpdateHighlightActor",
	"ReceiveActorBeginOverlap",
	"ReceiveActorEndOverlap",
	"K2_OnEndViewTarget",
	"K2_OnBecomeViewTarget",
	"K2_PostLogin",
	"Reveal Timer Return",
	"OnPlayerStay",
	"ReceiveHit",
	"SetGameTimeRemaining",
	"GetBallReturn",
	"GetReturnTrack",
	"ComponentEndOverlapSignature",
	"ComponentBoundEvent",
	"ComponentBeginOverlapSignature",
	"OnInputFocusReceived",
	"Focus Recieved PauseEvent",
	"GetActiveLane",
	"InputAxisEvent",
	"MotionControllerTrigger",
	"CustomEvent",
	"WidgetInteraction",
	"DestroyAfterHit",
	"SetRenderTransform",
	"ReloadTasks",
	"InputKeyEvent",
};
const std::vector<std::string> EndingFilterList = {
		"UpdateFunc",
		"FinishedFunc",
		"ReceiveHit",
		"TimePass",
		"UpdateTime",
};

bool DoNotLogEvent(const std::string& funcname)
{
	std::regex FuncExample1(R"(Function\s([A-Za-z0-9]+(_[A-Za-z0-9]+)+)\.([A-Za-z0-9]+(_[A-Za-z0-9]+)+)\.)");
	auto PurgeStepOne = std::regex_replace(funcname, FuncExample1, "");

	std::regex FuncExample2(R"(Function\s[A-Za-z0-9]+\.[A-Za-z0-9]+\.)");
	auto PurgeStepTwo = std::regex_replace(PurgeStepOne, FuncExample2, "");

	std::regex FuncExample3(R"(Function\s[A-Za-z0-9]+\.[A-Za-z0-9]+_[A-Za-z0-9]+\.)");
	auto Purged = std::regex_replace(PurgeStepTwo, FuncExample3, "");
	std::string PurgedToLower = Purged;
	std::transform(PurgedToLower.begin(), PurgedToLower.end(), PurgedToLower.begin(), ::tolower);

	for (auto filter : FilterList)
	{
		std::string lowerFilter = filter;
		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);
		if (PurgedToLower.find(lowerFilter) != std::string::npos)
		{
			return true;
		}
	}
	if (PurgedToLower.find("motioncontrollertrigger") != std::string::npos)
	{
		return true;
	}

	//for (auto filter : FilterList)
	//{
	//	std::regex Anywhere(filter, std::regex_constants::icase);
	//	if (std::regex_search(Purged.begin(), Purged.end(), Anywhere, std::regex_constants::match_any)) {
	//		return true;
	//	}
	//}
	for (auto filter : EndingFilterList)
	{
		std::string lowerFilter = filter;

		std::transform(lowerFilter.begin(), lowerFilter.end(), lowerFilter.begin(), ::tolower);

		if (PurgedToLower.find(lowerFilter) != std::string::npos)
		{
			return true;
		}
	}

	return false;
}
bool LoggerActive = false;

bool AllowAllFunctions = true;
void ReportCustomEvent(const std::string& funcname) {
	if (!LoggerActive) return;

	auto BlockLogging = DoNotLogEvent(funcname);
	if (BlockLogging) return;

	// If AllowAllFunctions is true, we report all events.
	// Otherwise, we proceed to check if the remaining string contains any of the specified class names.
	if (AllowAllFunctions) {
		ConsoleTools::ConsoleWrite(funcname);
		return;
	}

	// Strip the function name from the input string
	std::string eventNameWithoutFunction = funcname.substr(0, funcname.find("("));

	// Check if the remaining string matches any of the specified class names
	for (const auto& ClassName : ClassNames) {
		if (eventNameWithoutFunction.find(ClassName) != std::string::npos) {
			ConsoleTools::ConsoleWrite(funcname);
			return;
		}
	}
}

CG::AWorldSettings* GetWorldSettings()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr)
	{
		if (world->PersistentLevel != nullptr)
		{
			return world->PersistentLevel->WorldSettings;
		}
	}
	return nullptr;
}

CG::ULocalPlayer* GetActiveLocalPlayer()
{
	auto world = (*CG::UWorld::GWorld);
	if (world != nullptr && world->OwningGameInstance != nullptr && world->OwningGameInstance->LocalPlayers.Count() > 0)
	{
		auto localPlayer = world->OwningGameInstance->LocalPlayers[0];
		if (localPlayer != nullptr && localPlayer->PlayerController != nullptr)
		{
			return localPlayer;
		}
	}
	return nullptr;
}

CG::APlayerController* GetActivePlayerController()
{
	auto LocalPlayer = GetActiveLocalPlayer();
	if (LocalPlayer != nullptr)
	{
		return LocalPlayer->PlayerController;
	}
	return nullptr;
}

void SpawnCheatManager(CG::APlayerController* Pc)
{
	if (Pc != nullptr)
	{
		if (Pc->CheatManager == nullptr)
		{
			if (CG::UCheatManager* Cm = static_cast<CG::UCheatManager*>(Pc->CheatClass->CreateDefaultObject()))
			{
				if (Cm != nullptr)
				{
					Cm->Outer = Pc;
					Pc->CheatManager = Cm;
					//Cm->ReceiveInitCheatManager();
					//Pc->EnableCheats();
					ConsoleTools::ConsoleWrite("Spawned " + Cm->GetFullName() + " !");
					//SpawnConsole();
				}
			}
		}
	}
}






void SetPowerInOffice()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_RA_SL_Manager_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				mods->PowerRemaining = static_cast<float>(101);
			}
		}
	}
}
void SetPowerRoxyTalkie()
{
	auto instances = CG::UObject::FindObjects<CG::ABP_RRM_RoxyTalkie_C>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->RoxyTalkie != nullptr)
				{
					mods->CurrentPowerLevel = static_cast<float>(100);
				}
			}
		}
	}
}

void UnlockLevels()
{
	auto instances = CG::UObject::FindObjects<CG::UThumperGameManager>();
	if (!instances.empty())
	{
		for (auto& mods : instances)
		{
			if (mods != nullptr)
			{
				if (mods->SaveGameData != nullptr)
				{
					mods->UnlockAllLevels();
				}
			}
		}
	}
}

void ExecutorThread()
{
	while (true)
	{
		try {
			if (UnlimPower)
			{
				SetPowerInOffice();
				SetPowerRoxyTalkie();
			}
		}
		catch (...) {}
	}
}






void HelpCommand() {
	ConsoleTools::ConsoleWrite("Mod Console Available commands:");
	for (const auto& entry : commandMap) {
		ConsoleTools::ConsoleWrite(entry.second.getName() + " - " + entry.second.getDescription());
	}
}


void UnlimitedPowerCommand() {
	UnlimPower = !UnlimPower;
	ConsoleTools::ConsoleWrite("Unlimited Power: " + bool_as_text(UnlimPower));
}

void LogEventsCommand() {
	LoggerActive = !LoggerActive;
	ConsoleTools::ConsoleWrite("Process Event Logger: " + bool_as_text(LoggerActive));
}

void UnlockLevelsCommand() {
	UnlockLevels();
	ConsoleTools::ConsoleWrite("Unlocked Levels");
}


// Initialize commands
void initializeCommands() {
	commandMap["help"] = Command("help", "Shows this help menu.", HelpCommand);
	commandMap["unlimitedpower"] = Command("unlimitedpower", "Freezes power to 100% always.", UnlimitedPowerCommand);
	commandMap["logevents"] = Command("logevents", "Expose all ProcessEvent functions in console.", LogEventsCommand);
	commandMap["unlocklevels"] = Command("unlocklevels", "Unlocks all levels.", UnlockLevelsCommand);
}



void ConsoleInput() {
	while (true) {
		ConsoleTools::ConsoleWrite("ModConsole Commands:  ");
		std::string input;
		std::getline(std::cin, input);

		// Convert input to lowercase
		std::string lowercaseInput = toLowercase(input);

		// Check if the input is empty
		if (lowercaseInput.empty()) {
			ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
			continue; // Continue the loop to prompt for input again
		}

		// Look up the command in the map
		auto it = commandMap.find(lowercaseInput);
		if (it != commandMap.end()) {
			// Execute the command
			it->second.execute();
			 continue; // process the valid command and prompt for input again
		}
		else {
			ConsoleTools::ConsoleWrite("Command Not found. Type help for command list.");
			continue; // Continue the loop to prompt for input again
		}
	}
}




void HkProcessEvent(CG::UObject* thiz, CG::UFunction* function, void* parms)
{
	auto maxFloatValue = static_cast<float>(9999999999);
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

	ReportCustomEvent(func);

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
		std::thread executor(ExecutorThread);
		executor.detach();

		std::thread ProcessEventHookThread(StartProcessEventHook);
		ProcessEventHookThread.detach();

		init_hook = true;
	} while (!init_hook);

	initializeCommands();
	ConsoleInput();
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