#pragma once

/**
 * Name: HW2
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetAnimatronicType
	 */
	struct ABP_GrabbableMinireena_C_GetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 Animatronic;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.IsDrainingPower
	 */
	struct ABP_GrabbableMinireena_C_IsDrainingPower_Params
	{
	public:
		bool                                                       IsDrainingPower;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetIsDeployed
	 */
	struct ABP_GrabbableMinireena_C_GetIsDeployed_Params
	{
	public:
		bool                                                       IsDeployed;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.AvalibleToCharacter
	 */
	struct ABP_GrabbableMinireena_C_AvalibleToCharacter_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           Waypoint;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAllowed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.CreateWaypointArray
	 */
	struct ABP_GrabbableMinireena_C_CreateWaypointArray_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetCurrentPosition
	 */
	struct ABP_GrabbableMinireena_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.GetCurrentPosition
	 */
	struct ABP_GrabbableMinireena_C_GetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.MoveCharacterByID
	 */
	struct ABP_GrabbableMinireena_C_MoveCharacterByID_Params
	{
	public:
		bool                                                       SendHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MD0W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverrideSpotID;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpotOccupied;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_24ZX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SendCharacterToSpecificRoom
	 */
	struct ABP_GrabbableMinireena_C_SendCharacterToSpecificRoom_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpotOccupied;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2T1V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.Find Specific Room
	 */
	struct ABP_GrabbableMinireena_C_FindSpecificRoom_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8KB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Office_BaseWayPoint_C*                           ValidWaypoint;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.Pick Waypoint to Deploy To
	 */
	struct ABP_GrabbableMinireena_C_PickWaypointtoDeployTo_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           GoingToRoom;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetAnimatronicType
	 */
	struct ABP_GrabbableMinireena_C_SetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 AnimatronicToSet;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DisableAllVO
	 */
	struct ABP_GrabbableMinireena_C_DisableAllVO_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetDoorPose
	 */
	struct ABP_GrabbableMinireena_C_SetDoorPose_Params
	{
	public:
		Enum_RA_SL_RoomType                                        WhatSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D1YW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WhatOrderOnDoor;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ResetMinireena
	 */
	struct ABP_GrabbableMinireena_C_ResetMinireena_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ReceiveBeginPlay
	 */
	struct ABP_GrabbableMinireena_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.MoveToDoor
	 */
	struct ABP_GrabbableMinireena_C_MoveToDoor_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.OnGrabberGrabbed
	 */
	struct ABP_GrabbableMinireena_C_OnGrabberGrabbed_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3VIX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.OnGrabberReleased
	 */
	struct ABP_GrabbableMinireena_C_OnGrabberReleased_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Grabber;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7CX9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.TryToDeswapnMinireena
	 */
	struct ABP_GrabbableMinireena_C_TryToDeswapnMinireena_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.SetIsDeployed
	 */
	struct ABP_GrabbableMinireena_C_SetIsDeployed_Params
	{
	public:
		bool                                                       SetIsDeployed;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DEBUG_TESTGRAB
	 */
	struct ABP_GrabbableMinireena_C_DEBUG_TESTGRAB_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.DEBUG_TestRELEASE
	 */
	struct ABP_GrabbableMinireena_C_DEBUG_TestRELEASE_Params
	{	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_GrabbableMinireena_C_BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ReceiveTick
	 */
	struct ABP_GrabbableMinireena_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_GrabbableMinireena_C_BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_GrabbableMinireena.BP_GrabbableMinireena_C.ExecuteUbergraph_BP_GrabbableMinireena
	 */
	struct ABP_GrabbableMinireena_C_ExecuteUbergraph_BP_GrabbableMinireena_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RXCL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
