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
	 * BlueprintGeneratedClass BP_TB_Foxy_Target.BP_TB_Foxy_Target_C
	 * Size -> 0x0059 (FullSize[0x0291] - InheritedSize[0x0238])
	 */
	class ABP_TB_Foxy_Target_C : public ABP_Test_Target_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Done_Button_Body;                                     // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SFX_HitSound;                                            // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             TargetHasBeenHit;                                        // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		E_TB_Foxy_TrackTriggerType                                 TypeOfTarget;                                            // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_TB_Foxy_TargetValue                                      TargetValue;                                             // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MGRJ[0x2];                                   // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowMultipleHits;                                       // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Cooldown;                                                // 0x0269(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasBonusRound;                                           // 0x026A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TargetHit;                                               // 0x026B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FC9T[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Ref_Activatables;                                        // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       TargetRespawns;                                          // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CVSW[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBeforeRespawn;                                       // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideTargetActivation;                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsTargetActive;                                          // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_URJJ[0x2];                                   // 0x028A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TargetGroupID;                                           // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanActivateSecret;                                       // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		float GetActivation();
		void HandleSecretHit();
		void TriggerAudioHit();
		void GetOverrideTargetActivation(bool* OverrideTargetActivation);
		void SetOverrideTargetActivation(bool IsTrue);
		void StoreActivatables();
		void GetIsTargetActive(bool* IsTargetActive);
		void TargetActivation(bool ActivateTarget);
		void SetupTarget();
		void ChangeTargetColorwhenHit();
		void CheckForActivatables(bool ActivateItems);
		void GetTargetStatus();
		void TriggerBonusRound();
		void IncrementalActivation(float PercentageActivated);
		void OnTargetHit(const struct FTargetHitParams& TargetHitParams);
		void FlashOnHit();
		void ReceiveBeginPlay();
		void ResetOnHit();
		void RespawnTarget();
		void OnTargetHitCall(class ABP_TB_Foxy_Target_C* TargetActor, int32_t TargetValue, E_TB_Foxy_TrackTriggerType TriggerType);
		void DEBUG_UpdateTargetSetup();
		void DEBUG_SetTargetHit();
		void DEBUG_TriggerOnHitTargetHit();
		void Deactivated();
		void Activated();
		void TargetDisable();
		void TargetActivate();
		void SetSecretTrackSwitch();
		void ExecuteUbergraph_BP_TB_Foxy_Target(int32_t EntryPoint);
		void TargetHasBeenHit__DelegateSignature(class ABP_TB_Foxy_Target_C* TargetActor, int32_t TargetValue, E_TB_Foxy_TrackTriggerType TriggerType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
