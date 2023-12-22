/**
 * Name: HW2
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameEndViaJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::OnGameEndViaJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameEndViaJumpscare");
		
		ABP_RA_SL_Manager_C_OnGameEndViaJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForAchievementsOnVictory
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::CheckForAchievementsOnVictory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForAchievementsOnVictory");
		
		ABP_RA_SL_Manager_C_CheckForAchievementsOnVictory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.GetAnimatronicOnCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_AnimatronicBase_C*                CharacterOnScreen                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::GetAnimatronicOnCamera(class ABP_Office_AnimatronicBase_C** CharacterOnScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.GetAnimatronicOnCamera");
		
		ABP_RA_SL_Manager_C_GetAnimatronicOnCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterOnScreen != nullptr)
			*CharacterOnScreen = params.CharacterOnScreen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ActivateCameraShock
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::ActivateCameraShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ActivateCameraShock");
		
		ABP_RA_SL_Manager_C_ActivateCameraShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForAnimatonicDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDraining                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsThereStillDrain                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Manager_C::CheckForAnimatonicDrainingPower(bool IsDraining, bool* IsThereStillDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForAnimatonicDrainingPower");
		
		ABP_RA_SL_Manager_C_CheckForAnimatonicDrainingPower_Params params {};
		params.IsDraining = IsDraining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsThereStillDrain != nullptr)
			*IsThereStillDrain = params.IsThereStillDrain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.RanOutOfPower
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::RanOutOfPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.RanOutOfPower");
		
		ABP_RA_SL_Manager_C_RanOutOfPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SetupDoorsAndVents
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::SetupDoorsAndVents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SetupDoorsAndVents");
		
		ABP_RA_SL_Manager_C_SetupDoorsAndVents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SetupGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_GameType                                GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::SetupGameMode(Enum_RA_SL_GameType GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SetupGameMode");
		
		ABP_RA_SL_Manager_C_SetupGameMode_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Timeline_PlayerLightFlickers__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::Timeline_PlayerLightFlickers__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Timeline_PlayerLightFlickers__FinishedFunc");
		
		ABP_RA_SL_Manager_C_Timeline_PlayerLightFlickers__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Timeline_PlayerLightFlickers__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::Timeline_PlayerLightFlickers__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Timeline_PlayerLightFlickers__UpdateFunc");
		
		ABP_RA_SL_Manager_C_Timeline_PlayerLightFlickers__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Manager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: AdvanceActiveCharacters
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUGAdvanceActiveCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: AdvanceActiveCharacters");
		
		ABP_RA_SL_Manager_C_DEBUGAdvanceActiveCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: RestartActiveCharacter
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUGRestartActiveCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: RestartActiveCharacter");
		
		ABP_RA_SL_Manager_C_DEBUGRestartActiveCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: MoveActiveToHiddenRoom
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUGMoveActiveToHiddenRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: MoveActiveToHiddenRoom");
		
		ABP_RA_SL_Manager_C_DEBUGMoveActiveToHiddenRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: MoveActiveCharactersAdjacent
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUGMoveActiveCharactersAdjacent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: MoveActiveCharactersAdjacent");
		
		ABP_RA_SL_Manager_C_DEBUGMoveActiveCharactersAdjacent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnDoorInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   AssignedWaypoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsClosed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Manager_C::OnDoorInteraction(class ABP_Office_BaseWayPoint_C* AssignedWaypoint, bool IsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnDoorInteraction");
		
		ABP_RA_SL_Manager_C_OnDoorInteraction_Params params {};
		params.AssignedWaypoint = AssignedWaypoint;
		params.IsClosed = IsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Start_SisterLocationOffice
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::Start_SisterLocationOffice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Start_SisterLocationOffice");
		
		ABP_RA_SL_Manager_C_Start_SisterLocationOffice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.End_SisterLocationGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DidPlayerWin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Office_AnimatronicBase_C*                JumpscaringCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::End_SisterLocationGame(bool DidPlayerWin, class ABP_Office_AnimatronicBase_C* JumpscaringCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.End_SisterLocationGame");
		
		ABP_RA_SL_Manager_C_End_SisterLocationGame_Params params {};
		params.DidPlayerWin = DidPlayerWin;
		params.JumpscaringCharacter = JumpscaringCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_StartGame
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_StartGame");
		
		ABP_RA_SL_Manager_C_DEBUG_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ReceiveTick");
		
		ABP_RA_SL_Manager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnHourIncrement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::OnHourIncrement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnHourIncrement");
		
		ABP_RA_SL_Manager_C_OnHourIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_HourUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentHour                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::Event_HourUpdate(int32_t CurrentHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_HourUpdate");
		
		ABP_RA_SL_Manager_C_Event_HourUpdate_Params params {};
		params.CurrentHour = CurrentHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_UpdatePowerDrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IncreaseDrain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CausedByAnimatronic                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Manager_C::Event_UpdatePowerDrain(bool IncreaseDrain, bool CausedByAnimatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_UpdatePowerDrain");
		
		ABP_RA_SL_Manager_C_Event_UpdatePowerDrain_Params params {};
		params.IncreaseDrain = IncreaseDrain;
		params.CausedByAnimatronic = CausedByAnimatronic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_CameraSystemPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Manager_C::Event_CameraSystemPower(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_CameraSystemPower");
		
		ABP_RA_SL_Manager_C_Event_CameraSystemPower_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.TriggerControlledShock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::TriggerControlledShock(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.TriggerControlledShock");
		
		ABP_RA_SL_Manager_C_TriggerControlledShock_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToPrivateRoom
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_SetGameToPrivateRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToPrivateRoom");
		
		ABP_RA_SL_Manager_C_DEBUG_SetGameToPrivateRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToFuntimeGang
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_SetGameToFuntimeGang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToFuntimeGang");
		
		ABP_RA_SL_Manager_C_DEBUG_SetGameToFuntimeGang_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToJobInterview
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_SetGameToJobInterview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToJobInterview");
		
		ABP_RA_SL_Manager_C_DEBUG_SetGameToJobInterview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToPuppetMaster
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_SetGameToPuppetMaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToPuppetMaster");
		
		ABP_RA_SL_Manager_C_DEBUG_SetGameToPuppetMaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.TriggerPowerShutOffEvents
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::TriggerPowerShutOffEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.TriggerPowerShutOffEvents");
		
		ABP_RA_SL_Manager_C_TriggerPowerShutOffEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_MonitorShock
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_MonitorShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_MonitorShock");
		
		ABP_RA_SL_Manager_C_DEBUG_MonitorShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SL_TriggerLightFlicker");
		
		ABP_RA_SL_Manager_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerRight
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_FlickerRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerRight");
		
		ABP_RA_SL_Manager_C_DEBUG_FlickerRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerLeft
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_FlickerLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerLeft");
		
		ABP_RA_SL_Manager_C_DEBUG_FlickerLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerVents
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_FlickerVents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerVents");
		
		ABP_RA_SL_Manager_C_DEBUG_FlickerVents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerRoom
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_FlickerRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerRoom");
		
		ABP_RA_SL_Manager_C_DEBUG_FlickerRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_StopFlicker
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_StopFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_StopFlicker");
		
		ABP_RA_SL_Manager_C_DEBUG_StopFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.PowerOutage_JumpcareGametype
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::PowerOutage_JumpcareGametype()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.PowerOutage_JumpcareGametype");
		
		ABP_RA_SL_Manager_C_PowerOutage_JumpcareGametype_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_TestPowerOutage
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_TestPowerOutage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_TestPowerOutage");
		
		ABP_RA_SL_Manager_C_DEBUG_TestPowerOutage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForPowerDrainFlicker
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::CheckForPowerDrainFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForPowerDrainFlicker");
		
		ABP_RA_SL_Manager_C_CheckForPowerDrainFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.UpdateAchievement_CupcakeKeepAway
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::UpdateAchievement_CupcakeKeepAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.UpdateAchievement_CupcakeKeepAway");
		
		ABP_RA_SL_Manager_C_UpdateAchievement_CupcakeKeepAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_WinGame
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::DEBUG_WinGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_WinGame");
		
		ABP_RA_SL_Manager_C_DEBUG_WinGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ExecuteUbergraph_BP_RA_SL_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::ExecuteUbergraph_BP_RA_SL_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ExecuteUbergraph_BP_RA_SL_Manager");
		
		ABP_RA_SL_Manager_C_ExecuteUbergraph_BP_RA_SL_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ShutOffPower__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::ShutOffPower__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ShutOffPower__DelegateSignature");
		
		ABP_RA_SL_Manager_C_ShutOffPower__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.UpdatePowerDrain__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IncreaseDrain                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CausedByAnimatronic                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Manager_C::UpdatePowerDrain__DelegateSignature(bool IncreaseDrain, bool CausedByAnimatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.UpdatePowerDrain__DelegateSignature");
		
		ABP_RA_SL_Manager_C_UpdatePowerDrain__DelegateSignature_Params params {};
		params.IncreaseDrain = IncreaseDrain;
		params.CausedByAnimatronic = CausedByAnimatronic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnHourUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentHour                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::OnHourUpdate__DelegateSignature(int32_t CurrentHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnHourUpdate__DelegateSignature");
		
		ABP_RA_SL_Manager_C_OnHourUpdate__DelegateSignature_Params params {};
		params.CurrentHour = CurrentHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DidPlayerWin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_Office_AnimatronicBase_C*                JumpscaringCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Manager_C::OnGameEnd__DelegateSignature(bool DidPlayerWin, class ABP_Office_AnimatronicBase_C* JumpscaringCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameEnd__DelegateSignature");
		
		ABP_RA_SL_Manager_C_OnGameEnd__DelegateSignature_Params params {};
		params.DidPlayerWin = DidPlayerWin;
		params.JumpscaringCharacter = JumpscaringCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Manager_C::OnGameStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameStart__DelegateSignature");
		
		ABP_RA_SL_Manager_C_OnGameStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Manager.BP_RA_SL_Manager_C");
		return ptr;
	}

}


