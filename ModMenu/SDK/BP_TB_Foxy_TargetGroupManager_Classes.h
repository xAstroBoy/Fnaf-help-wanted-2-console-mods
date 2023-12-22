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
	 * BlueprintGeneratedClass BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C
	 * Size -> 0x0101 (FullSize[0x0321] - InheritedSize[0x0220])
	 */
	class ABP_TB_Foxy_TargetGroupManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     sfx_BonusRound;                                          // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_BonusRound;                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_GalleryName;                                  // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_TB_Foxy_Target_C*>                        Ref_TargetGroup;                                         // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FName                                                GalleryName;                                             // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasBonusRound;                                           // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AGQI[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_TB_Foxy_Target_C*>                        Ref_BonusRoundTargets;                                   // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       BonusRoundTriggered;                                     // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsManagerActive;                                         // 0x0281(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K8CY[0x2];                                   // 0x0282(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PointsScored;                                            // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ManagerID;                                               // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6KXU[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TriggerTrackChange;                                      // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CalculatePoints;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       StartActive;                                             // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EDQZ[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GalleryTimeOverride;                                     // 0x02B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Ref_Activatables;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		int32_t                                                    TotalScored;                                             // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FTRP[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_TB_Foxy_Target_C*>                        SecretTargetsHit;                                        // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    MaxNumberOfSecretTargets;                                // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SecretAcquired;                                          // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SK29[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ActivateSecretTrack;                                     // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsTrackSwitch;                                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       CanSwitchTrack;                                          // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6RX1[0x6];                                   // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_TB_Foxy_TargetGroupManager_C*                    Ref_SecretTrackSwitchTargetManager;                      // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_TB_Foxy_Target_C*                                Ref_FinalSecretStartTrackSwitch;                         // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TriggeringBonusRound;                                    // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       DEBUG_CanAccessSecret;                                   // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void CanSwitchToSecretTrack(bool* CanActivateSecret);
		void CanActivateSecret(bool* CanActivateSecret);
		void GetTotalPointsScored(int32_t* PointsScored);
		void SetIsActive(bool IsManagerActive);
		void GetIsActive(bool* IsManagerActive);
		void EnableTargetGallery(bool ActivateGallery);
		void TriggerBonusRound();
		void CheckForBonusRound(bool* TriggerBonusRound);
		void ReceiveBeginPlay();
		void DEBUG_UpdateTargetManager();
		void Event_TargetHasBeenHit(class ABP_TB_Foxy_Target_C* TargetActor, int32_t TargetValue, E_TB_Foxy_TrackTriggerType TriggerType);
		void DEBUG_ToggleGroupActivation();
		void SetStarsTrackCanSwitch();
		void DEBUG_AllStarsHit();
		void DEBUG_SetStarsTrackCanSwitch();
		void DEBUG_HitAllTargets();
		void ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager(int32_t EntryPoint);
		void TriggeringBonusRound__DelegateSignature();
		void ActivateSecretTrack__DelegateSignature();
		void CalculatePoints__DelegateSignature(int32_t PointsScored);
		void TriggerTrackChange__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
