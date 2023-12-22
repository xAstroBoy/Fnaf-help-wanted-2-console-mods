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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GrabbableMinireena.BP_GrabbableMinireena_C
	 * Size -> 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
	 */
	class ABP_GrabbableMinireena_C : public AGrabbableSnapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCapsuleComponent*                                   GrabCapsule;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   RootCapsule;                                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		Enum_RA_SL_AreaZones                                       CupcakeCurrentZone;                                      // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Reference;                                               // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NTHC[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_Office_BaseWayPoint_C*>                   Ref_AllowedWaypoints;                                    // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Office_BaseWayPoint_C*>                   Ref_HiddenWaypoints;                                     // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       IsDeployed;                                              // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GSPK[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              PairedButton;                                            // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGrabbed;                                               // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NKO[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetOrderNumber;                                          // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Office_BaseWayPoint_C*                           PairedDoor;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic);
		void IsDrainingPower(bool* IsDrainingPower);
		void GetIsDeployed(bool* IsDeployed);
		void AvalibleToCharacter(class ABP_Office_BaseWayPoint_C* Waypoint, bool* IsAllowed);
		void CreateWaypointArray();
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void GetCurrentPosition(class ABP_Office_BaseWayPoint_C** CurrentPosition);
		void MoveCharacterByID(bool SendHidden, int32_t OverrideSpotID, bool* IsSpotOccupied);
		void SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room, bool* IsSpotOccupied);
		void FindSpecificRoom(Enum_RA_SL_RoomType Room, class ABP_Office_BaseWayPoint_C** ValidWaypoint);
		void PickWaypointtoDeployTo(class ABP_Office_BaseWayPoint_C** GoingToRoom);
		void SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet);
		void DisableAllVO();
		void SetDoorPose(Enum_RA_SL_RoomType WhatSide, int32_t WhatOrderOnDoor);
		void ResetMinireena();
		void ReceiveBeginPlay();
		void MoveToDoor();
		void OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void TryToDeswapnMinireena();
		void SetIsDeployed(bool SetIsDeployed);
		void DEBUG_TESTGRAB();
		void DEBUG_TestRELEASE();
		void BndEvt__BP_GrabbableMinireena_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BP_GrabbableMinireena_RootCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_GrabbableMinireena(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
