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
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         Animatronic                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetAnimatronicType");
		
		ABP_GrabbableMinireena_C_GetAnimatronicType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Animatronic != nullptr)
			*Animatronic = params.Animatronic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.IsDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDrainingPower                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GrabbableMinireena_C::IsDrainingPower(bool* IsDrainingPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.IsDrainingPower");
		
		ABP_GrabbableMinireena_C_IsDrainingPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDrainingPower != nullptr)
			*IsDrainingPower = params.IsDrainingPower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetIsDeployed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDeployed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GrabbableMinireena_C::GetIsDeployed(bool* IsDeployed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetIsDeployed");
		
		ABP_GrabbableMinireena_C_GetIsDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDeployed != nullptr)
			*IsDeployed = params.IsDeployed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.AvalibleToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   Waypoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAllowed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GrabbableMinireena_C::AvalibleToCharacter(class ABP_Office_BaseWayPoint_C* Waypoint, bool* IsAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.AvalibleToCharacter");
		
		ABP_GrabbableMinireena_C_AvalibleToCharacter_Params params {};
		params.Waypoint = Waypoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowed != nullptr)
			*IsAllowed = params.IsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.CreateWaypointArray
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::CreateWaypointArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.CreateWaypointArray");
		
		ABP_GrabbableMinireena_C_CreateWaypointArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetCurrentPosition");
		
		ABP_GrabbableMinireena_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::GetCurrentPosition(class ABP_Office_BaseWayPoint_C** CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetCurrentPosition");
		
		ABP_GrabbableMinireena_C_GetCurrentPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentPosition != nullptr)
			*CurrentPosition = params.CurrentPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.MoveCharacterByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OverrideSpotID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpotOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GrabbableMinireena_C::MoveCharacterByID(bool SendHidden, int32_t OverrideSpotID, bool* IsSpotOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.MoveCharacterByID");
		
		ABP_GrabbableMinireena_C_MoveCharacterByID_Params params {};
		params.SendHidden = SendHidden;
		params.OverrideSpotID = OverrideSpotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpotOccupied != nullptr)
			*IsSpotOccupied = params.IsSpotOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SendCharacterToSpecificRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpotOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GrabbableMinireena_C::SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room, bool* IsSpotOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SendCharacterToSpecificRoom");
		
		ABP_GrabbableMinireena_C_SendCharacterToSpecificRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpotOccupied != nullptr)
			*IsSpotOccupied = params.IsSpotOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.Find Specific Room
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_Office_BaseWayPoint_C*                   ValidWaypoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::FindSpecificRoom(Enum_RA_SL_RoomType Room, class ABP_Office_BaseWayPoint_C** ValidWaypoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.Find Specific Room");
		
		ABP_GrabbableMinireena_C_FindSpecificRoom_Params params {};
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
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.Pick Waypoint to Deploy To
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   GoingToRoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::PickWaypointtoDeployTo(class ABP_Office_BaseWayPoint_C** GoingToRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.Pick Waypoint to Deploy To");
		
		ABP_GrabbableMinireena_C_PickWaypointtoDeployTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GoingToRoom != nullptr)
			*GoingToRoom = params.GoingToRoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         AnimatronicToSet                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetAnimatronicType");
		
		ABP_GrabbableMinireena_C_SetAnimatronicType_Params params {};
		params.AnimatronicToSet = AnimatronicToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DisableAllVO
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::DisableAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DisableAllVO");
		
		ABP_GrabbableMinireena_C_DisableAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetDoorPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                WhatSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WhatOrderOnDoor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::SetDoorPose(Enum_RA_SL_RoomType WhatSide, int32_t WhatOrderOnDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetDoorPose");
		
		ABP_GrabbableMinireena_C_SetDoorPose_Params params {};
		params.WhatSide = WhatSide;
		params.WhatOrderOnDoor = WhatOrderOnDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ResetMinireena
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::ResetMinireena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ResetMinireena");
		
		ABP_GrabbableMinireena_C_ResetMinireena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ReceiveBeginPlay");
		
		ABP_GrabbableMinireena_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.MoveToDoor
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::MoveToDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.MoveToDoor");
		
		ABP_GrabbableMinireena_C_MoveToDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.OnGrabberGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       GrabberPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.OnGrabberGrabbed");
		
		ABP_GrabbableMinireena_C_OnGrabberGrabbed_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.OnGrabberReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.OnGrabberReleased");
		
		ABP_GrabbableMinireena_C_OnGrabberReleased_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.Grabber = Grabber;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.TryToDeswapnMinireena
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::TryToDeswapnMinireena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.TryToDeswapnMinireena");
		
		ABP_GrabbableMinireena_C_TryToDeswapnMinireena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetIsDeployed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetIsDeployed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GrabbableMinireena_C::SetIsDeployed(bool SetIsDeployed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetIsDeployed");
		
		ABP_GrabbableMinireena_C_SetIsDeployed_Params params {};
		params.SetIsDeployed = SetIsDeployed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DEBUG_TESTGRAB
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::DEBUG_TESTGRAB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DEBUG_TESTGRAB");
		
		ABP_GrabbableMinireena_C_DEBUG_TESTGRAB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DEBUG_TestRELEASE
	 * 		Flags  -> ()
	 */
	void ABP_GrabbableMinireena_C::DEBUG_TestRELEASE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DEBUG_TestRELEASE");
		
		ABP_GrabbableMinireena_C_DEBUG_TestRELEASE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_GrabbableMinireena_C::BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_GrabbableMinireena_C_BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ReceiveTick");
		
		ABP_GrabbableMinireena_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_GrabbableMinireena_C::BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_GrabbableMinireena_C_BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ExecuteUbergraph_BP_GrabbableMinireena
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrabbableMinireena_C::ExecuteUbergraph_BP_GrabbableMinireena(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ExecuteUbergraph_BP_GrabbableMinireena");
		
		ABP_GrabbableMinireena_C_ExecuteUbergraph_BP_GrabbableMinireena_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GrabbableMinireena_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrabbableMinireena_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrabbableMinireena.BP_GrabbableMinireena_C");
		return ptr;
	}

}


