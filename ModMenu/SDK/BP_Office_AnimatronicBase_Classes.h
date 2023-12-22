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
	 * BlueprintGeneratedClass BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C
	 * Size -> 0x007C (FullSize[0x029C] - InheritedSize[0x0220])
	 */
	class ABP_Office_AnimatronicBase_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TEMP_ROOT_OFFSET;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActiveToGame;                                          // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PFNY[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverrideSpotID;                                          // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Office_BaseWayPoint_C*>                   Ref_AllowedWaypoints;                                    // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_Office_BaseWayPoint_C*>                   Ref_HiddenWaypoints;                                     // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      TimeBeforeMovement_Min;                                  // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeMovement_Max;                                  // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_CharacterMovement;                                 // 0x0280(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeReseting;                                      // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GS60[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_TriggerReset;                                      // 0x0290(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      MoveToAdjacentRoomPercentChance;                         // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FlickerCameraOnMovement(class UObject* WaypointPosition, class AActor* TriggeringActor);
		void SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room);
		void CreateWaypointArray();
		void MoveCharacterByID(bool SendToHidden, int32_t OverrideSpot, bool* IsSpotOccupied);
		void UpdateCharacterPosition(bool SendToAdjacentPosition);
		void SetIsActive(bool IsActiveToGame);
		void GetIsActive(bool* IsPartOfGame);
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void GetCurrentPosition(class ABP_Office_BaseWayPoint_C** CurrentPosition);
		void DEBUG_MoveForward();
		void DEBUG_MoveAdjacent();
		void DEBUG_Restart();
		void DEBUG_MoveHiddenRoom();
		void CheckWhenToJumpscare();
		void CheckWhenToReset();
		void ActivateAnimatronicMovement();
		void CheckForPassageBlocked();
		void DetermineMovementPatterns();
		void CheckForUniqueTrigger();
		void OverrideTriggerReset();
		void VictoryEvent_DestroyAnimatronic();
		void ExecuteUbergraph_BP_Office_AnimatronicBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
