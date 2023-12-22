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
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.IsDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDrainingPower                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_SL_Animatronic_C::IsDrainingPower(bool* IsDrainingPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.IsDrainingPower");
		
		ABP_Office_SL_Animatronic_C_IsDrainingPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDrainingPower != nullptr)
			*IsDrainingPower = params.IsDrainingPower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.GetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         Animatronic                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_SL_Animatronic_C::GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.GetAnimatronicType");
		
		ABP_Office_SL_Animatronic_C_GetAnimatronicType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Animatronic != nullptr)
			*Animatronic = params.Animatronic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.FlickerCameraOnMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WaypointPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TriggeringActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_SL_Animatronic_C::FlickerCameraOnMovement(class UObject* WaypointPosition, class AActor* TriggeringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.FlickerCameraOnMovement");
		
		ABP_Office_SL_Animatronic_C_FlickerCameraOnMovement_Params params {};
		params.WaypointPosition = WaypointPosition;
		params.TriggeringActor = TriggeringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_SL_Animatronic_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetCurrentPosition");
		
		ABP_Office_SL_Animatronic_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DetermineIfRoomIsOccupied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOccupied                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_SL_Animatronic_C::DetermineIfRoomIsOccupied(Enum_RA_SL_RoomType Room, bool* IsOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DetermineIfRoomIsOccupied");
		
		ABP_Office_SL_Animatronic_C_DetermineIfRoomIsOccupied_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOccupied != nullptr)
			*IsOccupied = params.IsOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetIsDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AnimatronicDrainingPower                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_SL_Animatronic_C::SetIsDrainingPower(bool AnimatronicDrainingPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetIsDrainingPower");
		
		ABP_Office_SL_Animatronic_C_SetIsDrainingPower_Params params {};
		params.AnimatronicDrainingPower = AnimatronicDrainingPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.GetIsDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDrainingPower                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_SL_Animatronic_C::GetIsDrainingPower(bool* IsDrainingPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.GetIsDrainingPower");
		
		ABP_Office_SL_Animatronic_C_GetIsDrainingPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDrainingPower != nullptr)
			*IsDrainingPower = params.IsDrainingPower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.FindSpecificRoom_SL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Office_BaseWayPoint_C*                   ValidWaypoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_SL_Animatronic_C::FindSpecificRoom_SL(Enum_RA_SL_RoomType Room, class ABP_Office_BaseWayPoint_C** ValidWaypoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.FindSpecificRoom_SL");
		
		ABP_Office_SL_Animatronic_C_FindSpecificRoom_SL_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidWaypoint != nullptr)
			*ValidWaypoint = params.ValidWaypoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         AnimatronicToSet                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_SL_Animatronic_C::SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetAnimatronicType");
		
		ABP_Office_SL_Animatronic_C_SetAnimatronicType_Params params {};
		params.AnimatronicToSet = AnimatronicToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DisableAllVO
	 * 		Flags  -> ()
	 */
	void ABP_Office_SL_Animatronic_C::DisableAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DisableAllVO");
		
		ABP_Office_SL_Animatronic_C_DisableAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Office_SL_Animatronic_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.ReceiveBeginPlay");
		
		ABP_Office_SL_Animatronic_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DEBUG_TestCharacterJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_Office_SL_Animatronic_C::DEBUG_TestCharacterJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DEBUG_TestCharacterJumpscare");
		
		ABP_Office_SL_Animatronic_C_DEBUG_TestCharacterJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.ExecuteUbergraph_BP_Office_SL_Animatronic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_SL_Animatronic_C::ExecuteUbergraph_BP_Office_SL_Animatronic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.ExecuteUbergraph_BP_Office_SL_Animatronic");
		
		ABP_Office_SL_Animatronic_C_ExecuteUbergraph_BP_Office_SL_Animatronic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Office_SL_Animatronic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Office_SL_Animatronic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C");
		return ptr;
	}

}


