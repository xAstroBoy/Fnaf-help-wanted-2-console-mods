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
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bidybap_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SetCurrentPosition");
		
		ABP_RA_SL_Bidybap_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.UpdateCharacterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToAdjacentPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Bidybap_C::UpdateCharacterPosition(bool SendToAdjacentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.UpdateCharacterPosition");
		
		ABP_RA_SL_Bidybap_C_UpdateCharacterPosition_Params params {};
		params.SendToAdjacentPosition = SendToAdjacentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SetBidybapOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::SetBidybapOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SetBidybapOwnerReference");
		
		ABP_RA_SL_Bidybap_C_SetBidybapOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Bidybap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_Bidybap_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckForUniqueTrigger
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::CheckForUniqueTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckForUniqueTrigger");
		
		ABP_RA_SL_Bidybap_C_CheckForUniqueTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.OverrideTriggerReset
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::OverrideTriggerReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.OverrideTriggerReset");
		
		ABP_RA_SL_Bidybap_C_OverrideTriggerReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.BidybapForcingJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::BidybapForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.BidybapForcingJumpscare");
		
		ABP_RA_SL_Bidybap_C_BidybapForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.BidybapAtVentDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::BidybapAtVentDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.BidybapAtVentDoor");
		
		ABP_RA_SL_Bidybap_C_BidybapAtVentDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckForPassageBlocked
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::CheckForPassageBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckForPassageBlocked");
		
		ABP_RA_SL_Bidybap_C_CheckForPassageBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_Bidybap_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bidybap_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SL_TriggerLightFlicker");
		
		ABP_RA_SL_Bidybap_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ResetBidybapMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::ResetBidybapMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ResetBidybapMovement");
		
		ABP_RA_SL_Bidybap_C_ResetBidybapMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.RetriggerBidybap
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bidybap_C::RetriggerBidybap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.RetriggerBidybap");
		
		ABP_RA_SL_Bidybap_C_RetriggerBidybap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ExecuteUbergraph_BP_RA_SL_Bidybap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bidybap_C::ExecuteUbergraph_BP_RA_SL_Bidybap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ExecuteUbergraph_BP_RA_SL_Bidybap");
		
		ABP_RA_SL_Bidybap_C_ExecuteUbergraph_BP_RA_SL_Bidybap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Bidybap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Bidybap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C");
		return ptr;
	}

}


