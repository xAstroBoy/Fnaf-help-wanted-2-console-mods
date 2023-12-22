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
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.On Victory Trigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TriggerOnLeftSide                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CircusBaby_C::OnVictoryTrigger(bool TriggerOnLeftSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.On Victory Trigger");
		
		ABP_RA_SL_CircusBaby_C_OnVictoryTrigger_Params params {};
		params.TriggerOnLeftSide = TriggerOnLeftSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SendCharacterToSpecificRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CircusBaby_C::SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SendCharacterToSpecificRoom");
		
		ABP_RA_SL_CircusBaby_C_SendCharacterToSpecificRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CircusBaby_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetCurrentPosition");
		
		ABP_RA_SL_CircusBaby_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnCircuBabyMoodChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLeftSideTriggered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CircusBaby_C::OnCircuBabyMoodChange(bool IsMad, bool IsLeftSideTriggered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnCircuBabyMoodChange");
		
		ABP_RA_SL_CircusBaby_C_OnCircuBabyMoodChange_Params params {};
		params.IsMad = IsMad;
		params.IsLeftSideTriggered = IsLeftSideTriggered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateHideAndSeekBaby
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ActivateHideAndSeekBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateHideAndSeekBaby");
		
		ABP_RA_SL_CircusBaby_C_ActivateHideAndSeekBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateRedLightBabies
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ActivateRedLightBabies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateRedLightBabies");
		
		ABP_RA_SL_CircusBaby_C_ActivateRedLightBabies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PickGameModeChange
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::PickGameModeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PickGameModeChange");
		
		ABP_RA_SL_CircusBaby_C_PickGameModeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateTagPlushBabies
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ActivateTagPlushBabies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateTagPlushBabies");
		
		ABP_RA_SL_CircusBaby_C_ActivateTagPlushBabies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.StoreAllPlushBabies
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::StoreAllPlushBabies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.StoreAllPlushBabies");
		
		ABP_RA_SL_CircusBaby_C_StoreAllPlushBabies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnGameEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVictory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CircusBaby_C::OnGameEnd(bool IsVictory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnGameEnd");
		
		ABP_RA_SL_CircusBaby_C_OnGameEnd_Params params {};
		params.IsVictory = IsVictory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::SetOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetOwnerReference");
		
		ABP_RA_SL_CircusBaby_C_SetOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ForceDisappearTransition
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ForceDisappearTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ForceDisappearTransition");
		
		ABP_RA_SL_CircusBaby_C_ForceDisappearTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_CircusBaby_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetCircusBabyToMad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCircusBabyMad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CircusBaby_C::SetCircusBabyToMad(bool IsCircusBabyMad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetCircusBabyToMad");
		
		ABP_RA_SL_CircusBaby_C_SetCircusBabyToMad_Params params {};
		params.IsCircusBabyMad = IsCircusBabyMad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.StartNextGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          CurrentGameRunning                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CircusBaby_C::StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.StartNextGameMode");
		
		ABP_RA_SL_CircusBaby_C_StartNextGameMode_Params params {};
		params.CurrentGameRunning = CurrentGameRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Redlight_TImeBeforeEnd
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Redlight_TImeBeforeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Redlight_TImeBeforeEnd");
		
		ABP_RA_SL_CircusBaby_C_Redlight_TImeBeforeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.HideAndSeekTriggerCameraTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CircusBaby_C::HideAndSeekTriggerCameraTransition(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.HideAndSeekTriggerCameraTransition");
		
		ABP_RA_SL_CircusBaby_C_HideAndSeekTriggerCameraTransition_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_SetCircusBabyToMad
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::DEBUG_SetCircusBabyToMad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_SetCircusBabyToMad");
		
		ABP_RA_SL_CircusBaby_C_DEBUG_SetCircusBabyToMad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_SetCircusBabyToCalm
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::DEBUG_SetCircusBabyToCalm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_SetCircusBabyToCalm");
		
		ABP_RA_SL_CircusBaby_C_DEBUG_SetCircusBabyToCalm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ReceiveBeginPlay");
		
		ABP_RA_SL_CircusBaby_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.UseWaypointTranform
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::UseWaypointTranform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.UseWaypointTranform");
		
		ABP_RA_SL_CircusBaby_C_UseWaypointTranform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.TriggerFlashlightFlicker
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::TriggerFlashlightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.TriggerFlashlightFlicker");
		
		ABP_RA_SL_CircusBaby_C_TriggerFlashlightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.CheckWhenRendered
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::CheckWhenRendered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.CheckWhenRendered");
		
		ABP_RA_SL_CircusBaby_C_CheckWhenRendered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Trigger_CallCircusBaby_VO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VO_ToPlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CircusBaby_C::Trigger_CallCircusBaby_VO(int32_t VO_ToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Trigger_CallCircusBaby_VO");
		
		ABP_RA_SL_CircusBaby_C_Trigger_CallCircusBaby_VO_Params params {};
		params.VO_ToPlay = VO_ToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_FireCircusBabyVO
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::DEBUG_FireCircusBabyVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_FireCircusBabyVO");
		
		ABP_RA_SL_CircusBaby_C_DEBUG_FireCircusBabyVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_HideAndSeek
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_HideAndSeek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_HideAndSeek");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_HideAndSeek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_FlashlightTag
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_FlashlightTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_FlashlightTag");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_FlashlightTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Redlight
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_Redlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Redlight");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_Redlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_GameModeSucces
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_GameModeSucces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_GameModeSucces");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_GameModeSucces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_Vo_HideSeek_Failure
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_Vo_HideSeek_Failure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_Vo_HideSeek_Failure");
		
		ABP_RA_SL_CircusBaby_C_Play_Vo_HideSeek_Failure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_VictoryStart
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_VictoryStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_VictoryStart");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_VictoryStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Victory_GivingIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_Victory_GivingIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Victory_GivingIcecream");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_Victory_GivingIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Victory_AtDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_Victory_AtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Victory_AtDoor");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_Victory_AtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream_TakingLongToEat
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_Icecream_TakingLongToEat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream_TakingLongToEat");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_Icecream_TakingLongToEat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream_TakingLongToTake
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_Icecream_TakingLongToTake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream_TakingLongToTake");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_Icecream_TakingLongToTake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.HideCircusBaby
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::HideCircusBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.HideCircusBaby");
		
		ABP_RA_SL_CircusBaby_C_HideCircusBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PLAY_VO_RandomBackgroundDialogue
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::PLAY_VO_RandomBackgroundDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PLAY_VO_RandomBackgroundDialogue");
		
		ABP_RA_SL_CircusBaby_C_PLAY_VO_RandomBackgroundDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Trigger_RandomLightFlickers
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Trigger_RandomLightFlickers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Trigger_RandomLightFlickers");
		
		ABP_RA_SL_CircusBaby_C_Trigger_RandomLightFlickers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Lights_OvertimeTrigger
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Lights_OvertimeTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Lights_OvertimeTrigger");
		
		ABP_RA_SL_CircusBaby_C_Lights_OvertimeTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VO_PlayRandomLine
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::VO_PlayRandomLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VO_PlayRandomLine");
		
		ABP_RA_SL_CircusBaby_C_VO_PlayRandomLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Event_StartTimerForRandomDialogue
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Event_StartTimerForRandomDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Event_StartTimerForRandomDialogue");
		
		ABP_RA_SL_CircusBaby_C_Event_StartTimerForRandomDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_PreTookIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::VictoryTrigger_PreTookIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_PreTookIcecream");
		
		ABP_RA_SL_CircusBaby_C_VictoryTrigger_PreTookIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ChanceToTakeIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::ChanceToTakeIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ChanceToTakeIcecream");
		
		ABP_RA_SL_CircusBaby_C_ChanceToTakeIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnVictory_ChanceToEatIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::OnVictory_ChanceToEatIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnVictory_ChanceToEatIcecream");
		
		ABP_RA_SL_CircusBaby_C_OnVictory_ChanceToEatIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_AteIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::VictoryTrigger_AteIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_AteIcecream");
		
		ABP_RA_SL_CircusBaby_C_VictoryTrigger_AteIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateBidybapArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CircusBaby_C::ActivateBidybapArm(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateBidybapArm");
		
		ABP_RA_SL_CircusBaby_C_ActivateBidybapArm_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_PostTookIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::VictoryTrigger_PostTookIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_PostTookIcecream");
		
		ABP_RA_SL_CircusBaby_C_VictoryTrigger_PostTookIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::Play_VO_Icecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream");
		
		ABP_RA_SL_CircusBaby_C_Play_VO_Icecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PlayerDiscardedIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::PlayerDiscardedIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PlayerDiscardedIcecream");
		
		ABP_RA_SL_CircusBaby_C_PlayerDiscardedIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.JumpAheadToHideCircusBaby
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::JumpAheadToHideCircusBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.JumpAheadToHideCircusBaby");
		
		ABP_RA_SL_CircusBaby_C_JumpAheadToHideCircusBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DisableAllVO
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CircusBaby_C::DisableAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DisableAllVO");
		
		ABP_RA_SL_CircusBaby_C_DisableAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ExecuteUbergraph_BP_RA_SL_CircusBaby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CircusBaby_C::ExecuteUbergraph_BP_RA_SL_CircusBaby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ExecuteUbergraph_BP_RA_SL_CircusBaby");
		
		ABP_RA_SL_CircusBaby_C_ExecuteUbergraph_BP_RA_SL_CircusBaby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_CircusBaby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_CircusBaby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C");
		return ptr;
	}

}


