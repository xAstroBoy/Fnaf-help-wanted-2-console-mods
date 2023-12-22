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
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Ballora_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetCurrentPosition");
		
		ABP_RA_SL_Ballora_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_Ballora_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraForcingJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::BalloraForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraForcingJumpscare");
		
		ABP_RA_SL_Ballora_C_BalloraForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.DetermineMovementPatterns
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::DetermineMovementPatterns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.DetermineMovementPatterns");
		
		ABP_RA_SL_Ballora_C_DetermineMovementPatterns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_Ballora_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Ballora_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SL_TriggerLightFlicker");
		
		ABP_RA_SL_Ballora_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.CheckToReturnToDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::CheckToReturnToDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.CheckToReturnToDoor");
		
		ABP_RA_SL_Ballora_C_CheckToReturnToDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraHasLeftArea
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::BalloraHasLeftArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraHasLeftArea");
		
		ABP_RA_SL_Ballora_C_BalloraHasLeftArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Ballora_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetBalloraDoorClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoorIsClosed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Ballora_C::SetBalloraDoorClosed(bool DoorIsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetBalloraDoorClosed");
		
		ABP_RA_SL_Ballora_C_SetBalloraDoorClosed_Params params {};
		params.DoorIsClosed = DoorIsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.Ballora_FadeAudioTrigger
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::Ballora_FadeAudioTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.Ballora_FadeAudioTrigger");
		
		ABP_RA_SL_Ballora_C_Ballora_FadeAudioTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraAtDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::BalloraAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraAtDoor");
		
		ABP_RA_SL_Ballora_C_BalloraAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetBalloraOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Ballora_C::SetBalloraOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetBalloraOwnerReference");
		
		ABP_RA_SL_Ballora_C_SetBalloraOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ExecuteUbergraph_BP_RA_SL_Ballora
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Ballora_C::ExecuteUbergraph_BP_RA_SL_Ballora(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ExecuteUbergraph_BP_RA_SL_Ballora");
		
		ABP_RA_SL_Ballora_C_ExecuteUbergraph_BP_RA_SL_Ballora_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Ballora_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Ballora_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Ballora.BP_RA_SL_Ballora_C");
		return ptr;
	}

}


