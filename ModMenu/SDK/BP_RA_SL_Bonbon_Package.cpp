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
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bonbon_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SetCurrentPosition");
		
		ABP_RA_SL_Bonbon_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.UpdateCharacterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToAdjacentPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Bonbon_C::UpdateCharacterPosition(bool SendToAdjacentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.UpdateCharacterPosition");
		
		ABP_RA_SL_Bonbon_C_UpdateCharacterPosition_Params params {};
		params.SendToAdjacentPosition = SendToAdjacentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.FindRoo
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::FindRoo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.FindRoo");
		
		ABP_RA_SL_Bonbon_C_FindRoo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_Bonbon_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Bonbon_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.PrimeBonbon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bonbon_C::PrimeBonbon(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.PrimeBonbon");
		
		ABP_RA_SL_Bonbon_C_PrimeBonbon_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_Bonbon_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.CheckForPassageBlocked
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::CheckForPassageBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.CheckForPassageBlocked");
		
		ABP_RA_SL_Bonbon_C_CheckForPassageBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.BonbonAtDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::BonbonAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.BonbonAtDoor");
		
		ABP_RA_SL_Bonbon_C_BonbonAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.BonbonForcingJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::BonbonForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.BonbonForcingJumpscare");
		
		ABP_RA_SL_Bonbon_C_BonbonForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerBonbonRightDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::DEBUG_TriggerBonbonRightDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerBonbonRightDoor");
		
		ABP_RA_SL_Bonbon_C_DEBUG_TriggerBonbonRightDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerLeftDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::DEBUG_TriggerLeftDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerLeftDoor");
		
		ABP_RA_SL_Bonbon_C_DEBUG_TriggerLeftDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerVentDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::DEBUG_TriggerVentDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerVentDoor");
		
		ABP_RA_SL_Bonbon_C_DEBUG_TriggerVentDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bonbon_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SL_TriggerLightFlicker");
		
		ABP_RA_SL_Bonbon_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SetBonbonOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Bonbon_C::SetBonbonOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SetBonbonOwnerReference");
		
		ABP_RA_SL_Bonbon_C_SetBonbonOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ExecuteUbergraph_BP_RA_SL_Bonbon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Bonbon_C::ExecuteUbergraph_BP_RA_SL_Bonbon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ExecuteUbergraph_BP_RA_SL_Bonbon");
		
		ABP_RA_SL_Bonbon_C_ExecuteUbergraph_BP_RA_SL_Bonbon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Bonbon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Bonbon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C");
		return ptr;
	}

}


