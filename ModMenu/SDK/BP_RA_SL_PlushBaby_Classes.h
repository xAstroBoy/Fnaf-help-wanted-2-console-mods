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
	 * BlueprintGeneratedClass BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C
	 * Size -> 0x00EA (FullSize[0x039C] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_PlushBaby_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_ZNK7[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                RenderPlane;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RattleAudio;                                             // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceSceneComponent*                         VisualSourceScene;                                       // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     TEMP_Audio_Giggle;                                       // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFlashlightReactionComponent*                        FlashlightReaction;                                      // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_PlushbabyWalk_Walking_3478ADF64386888FF1AE10A22FB35A1E; // 0x02E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_PlushbabyWalk__Direction_3478ADF64386888FF1AE10A22FB35A1E; // 0x02EC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V8ZZ[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_PlushbabyWalk;                                  // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_TagBabyKill;                                       // 0x02F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		Enum_RA_SL_CircusGameMode                                  AssignedRole;                                            // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U0NZ[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_HideAndSeek;                                       // 0x0308(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimePlayedHideAndSeek;                                   // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MX38[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_HideAndSeekTriggeredCircus;                        // 0x0318(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		Enum_RA_SL_AreaZones                                       DisallowedSide;                                          // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LK8M[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_CircusBaby[0x28];                                    // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Redlight_FinalWalkDistance;                              // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timer_PlushBabyRun;                                      // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PathBlocked;                                             // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FlashlightSeen;                                          // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HPTL[0x6];                                   // 0x035A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicMaterial_PlushBabyBody;                           // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Ref_CameraMonitor[0x28];                                 // 0x0368(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    IntervalCheckForFlashlightTag;                           // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Spawned;                                                 // 0x0394(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LVQ2[0x3];                                   // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntervalCheckForRedlightGreenlight;                      // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetActive(bool* IsActive);
		void GetAssignedRole(Enum_RA_SL_CircusGameMode* AssignedRole);
		void FindRoomNotBeingWatched();
		void HandleRedLightMechanics(bool* IsSpotOccupied);
		void DetermineWhereCircusBabyIsBlocking();
		void Timeline_PlushbabyWalk__FinishedFunc();
		void Timeline_PlushbabyWalk__UpdateFunc();
		void SetAssignedRole(Enum_RA_SL_CircusGameMode Role);
		void SetToRun(bool AllowRun);
		void AssignPoseForFlashlightTag(Enum_RA_SL_PlushBabyPose AnimationPose);
		void UpdateHeadShake(float ShakeAlpha);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature();
		void ActivateAnimatronicMovement();
		void WakeUpPlushBaby();
		void ResetPlushBaby();
		void BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature(float TotalSeconds);
		void BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature();
		void BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature();
		void CheckWhenToJumpscare();
		void ActivateRole();
		void SetActive(bool IsActive);
		void DisableRole();
		void DEBUG_ScareAwayPlushBaby();
		void PlushBabyToHide();
		void CheckForUniqueTrigger();
		void ResetHideAndSeek();
		void CircusBabyIsMad();
		void DisallowSpecificMovement(Enum_RA_SL_AreaZones DisallowedSide);
		void AssignCircusBabyReference();
		void Timeline_Stop_Walk();
		void Timeline_Play_Walk();
		void Timeline_Start_Walk();
		void PlushBaby_HideAudioForFlashlightTag();
		void PlushBabyKills();
		void ExecuteUbergraph_BP_RA_SL_PlushBaby(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
