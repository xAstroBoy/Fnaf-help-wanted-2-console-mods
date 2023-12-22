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
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.HandleAdjecentAmbience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_Door_C::HandleAdjecentAmbience(bool Close)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.HandleAdjecentAmbience");
		
		ABP_RA_Door_C_HandleAdjecentAmbience_Params params {};
		params.Close = Close;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.Activated
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.Activated");
		
		ABP_RA_Door_C_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.Deactivated
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::Deactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.Deactivated");
		
		ABP_RA_Door_C_Deactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.OnDoorDeactivation
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::OnDoorDeactivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.OnDoorDeactivation");
		
		ABP_RA_Door_C_OnDoorDeactivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.DEBUG: CloseDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::DEBUGCloseDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.DEBUG: CloseDoor");
		
		ABP_RA_Door_C_DEBUGCloseDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.DEBUG: OpenDoor
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::DEBUGOpenDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.DEBUG: OpenDoor");
		
		ABP_RA_Door_C_DEBUGOpenDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.IncrementalActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentageActivated                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_Door_C::IncrementalActivation(float PercentageActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.IncrementalActivation");
		
		ABP_RA_Door_C_IncrementalActivation_Params params {};
		params.PercentageActivated = PercentageActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.ReceiveBeginPlay");
		
		ABP_RA_Door_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.Event_DoorInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   AssignedWaypoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsClosed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_Door_C::Event_DoorInteraction(class ABP_Office_BaseWayPoint_C* AssignedWaypoint, bool IsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.Event_DoorInteraction");
		
		ABP_RA_Door_C_Event_DoorInteraction_Params params {};
		params.AssignedWaypoint = AssignedWaypoint;
		params.IsClosed = IsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.ActivateSparks
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::ActivateSparks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.ActivateSparks");
		
		ABP_RA_Door_C_ActivateSparks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.ExecuteUbergraph_BP_RA_Door
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_Door_C::ExecuteUbergraph_BP_RA_Door(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.ExecuteUbergraph_BP_RA_Door");
		
		ABP_RA_Door_C_ExecuteUbergraph_BP_RA_Door_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.DeactivateDoor__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_Door_C::DeactivateDoor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.DeactivateDoor__DelegateSignature");
		
		ABP_RA_Door_C_DeactivateDoor__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_Door.BP_RA_Door_C.DoorInteraction__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   AssignedWaypoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsClosed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_Door_C::DoorInteraction__DelegateSignature(class ABP_Office_BaseWayPoint_C* AssignedWaypoint, bool IsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_Door.BP_RA_Door_C.DoorInteraction__DelegateSignature");
		
		ABP_RA_Door_C_DoorInteraction__DelegateSignature_Params params {};
		params.AssignedWaypoint = AssignedWaypoint;
		params.IsClosed = IsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_Door_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_Door_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_Door.BP_RA_Door_C");
		return ptr;
	}

}


