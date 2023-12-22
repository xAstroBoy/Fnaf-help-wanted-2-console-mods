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
	 * BlueprintGeneratedClass BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C
	 * Size -> 0x0196 (FullSize[0x0448] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_CircusBaby_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_ZDI9[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh_ChestCavity;                                  // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_Icecream;                                     // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh_BidyBab;                                    // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     VO_AudioSource;                                          // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Audio_VO;                                                // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AllowedTagPlushBabies;                                   // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HI3K[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_PlushBabies[0x10];                                   // 0x02F8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class ABP_RA_SL_PlushBaby_C*>                       Ref_ActivatedPlushBabies;                                // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		Enum_RA_SL_CircusGameMode                                  CurrentGameMode;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q8FG[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_HideAndSeekBaby;                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Ref_RedLightBaby;                                        // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      Ref_TagBabies;                                           // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      GameModesRunAlready;                                     // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<int32_t>                                            GamesRan;                                                // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<Enum_RA_SL_CircusGameMode>                          GameModesRan;                                            // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        Timer_TagBabySpawner;                                    // 0x0378(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       CircusBabyIsCurrentlyMad;                                // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CircusBabyIsOnLeftSide;                                  // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6BJ2[0x2];                                   // 0x0382(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AllowedRedlightPlushBabies;                              // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_Redlight;                                          // 0x0388(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Time_RedLightEndLength;                                  // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4IAT[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     Array_VO_Audio;                                          // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BABYHW200002;                                            // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  Array_VO_SoundBase;                                      // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DEBUG_AudioToPlay;                                       // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CircusBabyIsVisible;                                     // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B5MS[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChanceToFlicker;                                         // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F064[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_RandomLightFlicker;                                // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_RandomDialogue;                                    // 0x03D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_TakeIcecream;                                      // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_ToEatIcecream;                                     // 0x03E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TakeIcecreamChances;                                     // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EatIcecreamChances;                                      // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableVOAudio;                                          // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GZNI[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_LeftVisualAnchor[0x28];                              // 0x03F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Ref_RightVisualAnchor[0x28];                             // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnVictoryTrigger(bool TriggerOnLeftSide);
		void SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room);
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void OnCircuBabyMoodChange(bool IsMad, bool IsLeftSideTriggered);
		void ActivateHideAndSeekBaby();
		void ActivateRedLightBabies();
		void PickGameModeChange();
		void ActivateTagPlushBabies();
		void StoreAllPlushBabies();
		void OnGameEnd(bool IsVictory);
		void SetOwnerReference();
		void ForceDisappearTransition();
		void ActivateAnimatronicMovement();
		void SetCircusBabyToMad(bool IsCircusBabyMad);
		void StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning);
		void Redlight_TImeBeforeEnd();
		void HideAndSeekTriggerCameraTransition(bool IsEnabled);
		void DEBUG_SetCircusBabyToMad();
		void DEBUG_SetCircusBabyToCalm();
		void ReceiveBeginPlay();
		void UseWaypointTranform();
		void TriggerFlashlightFlicker();
		void CheckWhenRendered();
		void Trigger_CallCircusBaby_VO(int32_t VO_ToPlay);
		void DEBUG_FireCircusBabyVO();
		void Play_VO_HideAndSeek();
		void Play_VO_FlashlightTag();
		void Play_VO_Redlight();
		void Play_VO_GameModeSucces();
		void Play_Vo_HideSeek_Failure();
		void Play_VO_VictoryStart();
		void Play_VO_Victory_GivingIcecream();
		void Play_VO_Victory_AtDoor();
		void Play_VO_Icecream_TakingLongToEat();
		void Play_VO_Icecream_TakingLongToTake();
		void HideCircusBaby();
		void PLAY_VO_RandomBackgroundDialogue();
		void Trigger_RandomLightFlickers();
		void Lights_OvertimeTrigger();
		void VO_PlayRandomLine();
		void Event_StartTimerForRandomDialogue();
		void VictoryTrigger_PreTookIcecream();
		void ChanceToTakeIcecream();
		void OnVictory_ChanceToEatIcecream();
		void VictoryTrigger_AteIcecream();
		void ActivateBidybapArm(bool Enable);
		void VictoryTrigger_PostTookIcecream();
		void Play_VO_Icecream();
		void PlayerDiscardedIcecream();
		void JumpAheadToHideCircusBaby();
		void DisableAllVO();
		void ExecuteUbergraph_BP_RA_SL_CircusBaby(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
