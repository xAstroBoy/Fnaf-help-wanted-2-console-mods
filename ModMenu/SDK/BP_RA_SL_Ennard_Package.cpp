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
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Ennard_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetCurrentPosition");
		
		ABP_RA_SL_Ennard_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.UpdateCharacterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToAdjacentPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Ennard_C::UpdateCharacterPosition(bool SendToAdjacentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.UpdateCharacterPosition");
		
		ABP_RA_SL_Ennard_C_UpdateCharacterPosition_Params params {};
		params.SendToAdjacentPosition = SendToAdjacentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::SetEnnardOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardOwnerReference");
		
		ABP_RA_SL_Ennard_C_SetEnnardOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardIsWaitingAtDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWaiting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Ennard_C::SetEnnardIsWaitingAtDoor(bool IsWaiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardIsWaitingAtDoor");
		
		ABP_RA_SL_Ennard_C_SetEnnardIsWaitingAtDoor_Params params {};
		params.IsWaiting = IsWaiting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardDoorPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnablePlayrate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Ennard_C::SetEnnardDoorPlayRate(bool EnablePlayrate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardDoorPlayRate");
		
		ABP_RA_SL_Ennard_C_SetEnnardDoorPlayRate_Params params {};
		params.EnablePlayrate = EnablePlayrate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Ennard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.PlayAudio
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::PlayAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.PlayAudio");
		
		ABP_RA_SL_Ennard_C_PlayAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_Ennard_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_Ennard_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.DetermineMovementPatterns
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::DetermineMovementPatterns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.DetermineMovementPatterns");
		
		ABP_RA_SL_Ennard_C_DetermineMovementPatterns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.EnnardForceTriggeringJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::EnnardForceTriggeringJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.EnnardForceTriggeringJumpscare");
		
		ABP_RA_SL_Ennard_C_EnnardForceTriggeringJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.CheckForPassageBlocked
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::CheckForPassageBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.CheckForPassageBlocked");
		
		ABP_RA_SL_Ennard_C_CheckForPassageBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Ennard_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SL_TriggerLightFlicker");
		
		ABP_RA_SL_Ennard_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.Idling_CheckDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ennard_C::Idling_CheckDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.Idling_CheckDoor");
		
		ABP_RA_SL_Ennard_C_Idling_CheckDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ExecuteUbergraph_BP_RA_SL_Ennard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Ennard_C::ExecuteUbergraph_BP_RA_SL_Ennard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ExecuteUbergraph_BP_RA_SL_Ennard");
		
		ABP_RA_SL_Ennard_C_ExecuteUbergraph_BP_RA_SL_Ennard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Ennard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Ennard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Ennard.BP_RA_SL_Ennard_C");
		return ptr;
	}

}


