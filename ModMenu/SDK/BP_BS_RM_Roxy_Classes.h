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
	 * BlueprintGeneratedClass BP_BS_RM_Roxy.BP_BS_RM_Roxy_C
	 * Size -> 0x01C8 (FullSize[0x0448] - InheritedSize[0x0280])
	 */
	class ABP_BS_RM_Roxy_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     VO;                                                      // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_LipSyncComp_C*                                   BP_LipSyncComp;                                          // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Hair;                                                    // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CheekLOverlap;                                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CheekROverlap;                                           // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LipOverlap;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EyeROverlap;                                             // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EyeLOverlap;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       HandCollider;                                            // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EyeDartCube04;                                           // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EyeDartCube03;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EyeDartCube02;                                           // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EyeDartCube01;                                           // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Neck;                                                    // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    EarL;                                                    // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Nose;                                                    // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Eyes;                                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceSceneComponent*                         VisualSourceScene;                                       // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisualSourceComponent*                              VisualSource;                                            // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Chair;                                                   // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMeshRoxy;                                        // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MakeupBrushRef;                                          // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMakeupColorData*                                    EyeLColor;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              HairActor;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ForeheadActor;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              EyeActor;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              NeckActor;                                               // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              NoseActor;                                               // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              EyebrowRActor;                                           // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              EyebrowLActor;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              EarLActor;                                               // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_GM_RoxyMakeover_C*                               GM;                                                      // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBP_BS_RM_MakeupColorMap>                    MakeupMap;                                               // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UMakeupColorData*                                    EyeRColor;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMakeupColorData*                                    LipColor;                                                // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMakeupColorData*                                    CheekRColor;                                             // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMakeupColorData*                                    CheekLColor;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BS_RM_RageManager_C*                             RageManager;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        NotLookingMontage;                                       // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHandOverlapping;                                       // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MWBT[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        OverlappingTimer;                                        // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AActor*                                              OverlappingObject;                                       // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundBase*>                                  Round2WinVO;                                             // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USoundBase*>                                  PlayerMakesMistakeVO;                                    // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USoundBase*>                                  PlayerLooksAwayVO;                                       // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       LipsAreGreen;                                            // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheekRIsGreen;                                           // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CheekLIsGreen;                                           // 0x041A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EyeRIsGreen;                                             // 0x041B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EyeLIsGreen;                                             // 0x041C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayingLookAtMeVO;                                     // 0x041D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S52W[0x2];                                   // 0x041E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinWaitTimeForLookAtMeVO;                                // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWaitTimeForLookAtMeVO;                                // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnvelopeValue;                                           // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        AchievementTag;                                          // 0x042C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_71AN[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BlinderVolume_C*                                 BlinderVolume1;                                          // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BlinderVolume_C*                                 BlinderVolume2;                                          // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StopAllVO();
		void CanPlayVO(bool* NewParam);
		void ItsNotEasyAchievement();
		void GetAllAccessorieSockets(TArray<class USocketComponent*>* Array);
		void RemoveAndDestorySocketActor(class USocketComponent* Socket);
		void ClearMakupForNewRound();
		void SetLeftCheekColor(class UMakeupColorData* Color);
		void SetRightCheekColor(class UMakeupColorData* Color);
		void SetLipColor(class UMakeupColorData* Color);
		void SetRightEyeColor(class UMakeupColorData* Color);
		void SetLeftEyeColor(class UMakeupColorData* Color);
		bool EarSocketIsCorrect();
		bool LeftEyebrowSocketIsCorrect();
		bool RightEyebrowSocketIsCorrect();
		void NoseSocketIsCorrect(bool* NewParam);
		bool NeckSocketIsCorrect();
		bool EyeSocketIsCorrect();
		bool ForeheadSocketIsCorrect();
		bool HairSocketIsCorrect();
		bool LeftCheekIsCorrect();
		bool RightCheekIsCorrect();
		bool LipIsCorrect();
		bool RightEyeIsCorrect();
		bool LeftEyeIsCorrect();
		void Initialize(E_RM_Round Round);
		bool IsBrushActor(class UObject* TestObject, class UMakeupColorData** Color);
		void HandleBushColoringEvent(const class FName& materialParamName, class UMakeupColorData* BrushColor, const class FName& MaterialColorParamName, class UMeshComponent* MeshTargetr, class UMakeupColorData** CurrentBrushColor);
		void IsLookCorrect(bool* LookIsCorrect);
		void GLRoxyHW200002();
		void GLRoxyHW200003();
		void GLRoxyHW200004();
		void GLRoxyHW200006();
		void GLRoxyHW200008();
		void GLRoxyHW200009();
		void GLRoxyHW200010();
		void GLRoxyHW200012b();
		void GLRoxyHW200012c();
		void GLRoxyHW200014();
		void GLRoxyHW200016();
		void GLRoxyHW200017();
		void GLRoxyHW200018();
		void GLRoxyHW200019();
		void GLRoxyHW200019a();
		void PlayerNotLooking(bool PlayerNotLooking);
		void AddEyeDart(const struct FVector& EyeDartLocation);
		void TiltHead(bool TiltHead);
		void AllEyeAim(bool Aim);
		void LidAim(bool Aim);
		void Blinking(bool Blink);
		void EyeDarts(bool EyeDart);
		void UpdateRageValue(float Rage, int32_t RageLevel);
		void StartTantrum();
		void StopTantrum();
		void EnableNotLookingADD(bool Aim);
		void HeadAim(bool Aim);
		void BlinkOnce(bool Blink);
		void EyeAim(bool Aim);
		void BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		void BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		void BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		void BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		void BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature(class UVisualSourceComponent* VisualSource, class USightComponent* SightSource, bool bVisible);
		void ClearRoxyFaceBetweenRounds();
		void ReceiveBeginPlay();
		void BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason);
		void BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason);
		void BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason);
		void BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason);
		void BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void CheckHandOverlapping();
		void BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		void BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason);
		void DEBUG_StopLidAim();
		void DEBUG_StopAllEyeAim();
		void DEBUG_StopEyeDarts();
		void DEBUG_StopBlinking();
		void UpdateRage(int32_t Value);
		void GLRoxyHW200001();
		void GLRoxyHW200005();
		void GLRoxyHW200007();
		void GLRoxyHW200011();
		void GLRoxyHW200012();
		void GLRoxyHW200013();
		void GLRoxyHW200015();
		void BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature(class USoundWave* PlayingSoundWave, float EnvelopeValue);
		void ExecuteUbergraph_BP_BS_RM_Roxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
