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
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.FlickerCameraOnMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WaypointPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TriggeringActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_AnimatronicBase_C::FlickerCameraOnMovement(class UObject* WaypointPosition, class AActor* TriggeringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.FlickerCameraOnMovement");
		
		ABP_Office_AnimatronicBase_C_FlickerCameraOnMovement_Params params {};
		params.WaypointPosition = WaypointPosition;
		params.TriggeringActor = TriggeringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SendCharacterToSpecificRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_AnimatronicBase_C::SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SendCharacterToSpecificRoom");
		
		ABP_Office_AnimatronicBase_C_SendCharacterToSpecificRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CreateWaypointArray
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::CreateWaypointArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CreateWaypointArray");
		
		ABP_Office_AnimatronicBase_C_CreateWaypointArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.MoveCharacterByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OverrideSpot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpotOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_AnimatronicBase_C::MoveCharacterByID(bool SendToHidden, int32_t OverrideSpot, bool* IsSpotOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.MoveCharacterByID");
		
		ABP_Office_AnimatronicBase_C_MoveCharacterByID_Params params {};
		params.SendToHidden = SendToHidden;
		params.OverrideSpot = OverrideSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpotOccupied != nullptr)
			*IsSpotOccupied = params.IsSpotOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.UpdateCharacterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToAdjacentPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_AnimatronicBase_C::UpdateCharacterPosition(bool SendToAdjacentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.UpdateCharacterPosition");
		
		ABP_Office_AnimatronicBase_C_UpdateCharacterPosition_Params params {};
		params.SendToAdjacentPosition = SendToAdjacentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActiveToGame                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_AnimatronicBase_C::SetIsActive(bool IsActiveToGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SetIsActive");
		
		ABP_Office_AnimatronicBase_C_SetIsActive_Params params {};
		params.IsActiveToGame = IsActiveToGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.GetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPartOfGame                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_AnimatronicBase_C::GetIsActive(bool* IsPartOfGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.GetIsActive");
		
		ABP_Office_AnimatronicBase_C_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPartOfGame != nullptr)
			*IsPartOfGame = params.IsPartOfGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_AnimatronicBase_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SetCurrentPosition");
		
		ABP_Office_AnimatronicBase_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.GetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_AnimatronicBase_C::GetCurrentPosition(class ABP_Office_BaseWayPoint_C** CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.GetCurrentPosition");
		
		ABP_Office_AnimatronicBase_C_GetCurrentPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPosition != nullptr)
			*CurrentPosition = params.CurrentPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveForward
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::DEBUG_MoveForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveForward");
		
		ABP_Office_AnimatronicBase_C_DEBUG_MoveForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveAdjacent
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::DEBUG_MoveAdjacent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveAdjacent");
		
		ABP_Office_AnimatronicBase_C_DEBUG_MoveAdjacent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_Restart
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::DEBUG_Restart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_Restart");
		
		ABP_Office_AnimatronicBase_C_DEBUG_Restart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveHiddenRoom
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::DEBUG_MoveHiddenRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveHiddenRoom");
		
		ABP_Office_AnimatronicBase_C_DEBUG_MoveHiddenRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckWhenToJumpscare");
		
		ABP_Office_AnimatronicBase_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckWhenToReset
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::CheckWhenToReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckWhenToReset");
		
		ABP_Office_AnimatronicBase_C_CheckWhenToReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.ActivateAnimatronicMovement");
		
		ABP_Office_AnimatronicBase_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckForPassageBlocked
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::CheckForPassageBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckForPassageBlocked");
		
		ABP_Office_AnimatronicBase_C_CheckForPassageBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DetermineMovementPatterns
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::DetermineMovementPatterns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DetermineMovementPatterns");
		
		ABP_Office_AnimatronicBase_C_DetermineMovementPatterns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckForUniqueTrigger
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::CheckForUniqueTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckForUniqueTrigger");
		
		ABP_Office_AnimatronicBase_C_CheckForUniqueTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.OverrideTriggerReset
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::OverrideTriggerReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.OverrideTriggerReset");
		
		ABP_Office_AnimatronicBase_C_OverrideTriggerReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.VictoryEvent_DestroyAnimatronic
	 * 		Flags  -> ()
	 */
	void ABP_Office_AnimatronicBase_C::VictoryEvent_DestroyAnimatronic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.VictoryEvent_DestroyAnimatronic");
		
		ABP_Office_AnimatronicBase_C_VictoryEvent_DestroyAnimatronic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.ExecuteUbergraph_BP_Office_AnimatronicBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_AnimatronicBase_C::ExecuteUbergraph_BP_Office_AnimatronicBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.ExecuteUbergraph_BP_Office_AnimatronicBase");
		
		ABP_Office_AnimatronicBase_C_ExecuteUbergraph_BP_Office_AnimatronicBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Office_AnimatronicBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Office_AnimatronicBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C");
		return ptr;
	}

}


