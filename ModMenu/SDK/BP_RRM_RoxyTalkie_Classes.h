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
	 * BlueprintGeneratedClass BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C
	 * Size -> 0x00D2 (FullSize[0x02F2] - InheritedSize[0x0220])
	 */
	class ABP_RRM_RoxyTalkie_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                PowerRateText;                                           // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Talkie_PowerIndicator_2;                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Talkie_PowerIndicator_3;                              // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Talkie_PowerIndicator_4;                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Talkie_PowerIndicator_5;                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Talkie_PowerIndicator_6;                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio;                                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoundaryHandlerComponent*                           BoundaryHandler;                                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                RoxyTalkie;                                              // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBindInputOnGrabbed*                                 BindInputOnGrabbed;                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGrabbableSnapComponent*                             GrabbableSnap;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Pulse_9E1CA7F349749D60D68B2D87898D0168;       // 0x0290(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_9E1CA7F349749D60D68B2D87898D0168;  // 0x0294(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEXM[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_GM_RoxyMakeover_C*                               GM;                                                      // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInUse;                                                 // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayingVO;                                             // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TD2Z[0x2];                                   // 0x02AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumPowerNeededToStartPlaying;                        // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerChargeMax;                                          // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentPowerLevel;                                       // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPlayTimeSeconds;                                      // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerDrainRate;                                          // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerRechargeRateSlow;                                   // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerRechargeRate;                                       // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundWave*>                                  TalkieSounds;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       FullyRanOutOfPower;                                      // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9KZE[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentPlayingTimeSeconds;                               // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FLinearColor>                                PowerLevelColors;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsBeingHeld;                                             // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LoopHapticEffect;                                        // 0x02F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPowerLevelFromPercentage(float Value, int32_t* Return);
		void SetPowerIndicator();
		void GetPowerIndicatorArray(TArray<class UStaticMeshComponent*>* Array);
		void UpdatePlayingTime(float DeltaTime);
		void HasPlayedLongEnoughForMin(bool* Return, float* RemaingTime);
		void HasMinPowerNeededToStart(bool* Return);
		float GetRechargeRate();
		void StopAudio();
		void GetPowerPercentage(float* Value);
		void Recharge(float NewParam);
		void DrainPowerFromUse(float deltaSeconds);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature();
		void BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature();
		void ReceiveTick(float DeltaSeconds);
		void FlashRoxyTalkie();
		void EndFlash();
		void ObjectDropped();
		void BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_RRM_RoxyTalkie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
