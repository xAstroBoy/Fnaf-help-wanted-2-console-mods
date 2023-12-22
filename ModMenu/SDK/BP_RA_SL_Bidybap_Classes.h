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
	 * BlueprintGeneratedClass BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C
	 * Size -> 0x005A (FullSize[0x030C] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_Bidybap_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_E3VL[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Thud;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Duration;                                                // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WEPQ[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_Reset;                                             // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLoopChecksAllowed;                               // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HowManyLoopsMade;                                        // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Ref_RightLight[0x28];                                    // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    HowManyTimesDrainedPower;                                // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void UpdateCharacterPosition(bool SendToAdjacentPosition);
		void SetBidybapOwnerReference();
		void ReceiveBeginPlay();
		void CheckWhenToJumpscare();
		void CheckForUniqueTrigger();
		void OverrideTriggerReset();
		void BidybapForcingJumpscare();
		void BidybapAtVentDoor();
		void CheckForPassageBlocked();
		void ActivateAnimatronicMovement();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void ResetBidybapMovement();
		void RetriggerBidybap();
		void ExecuteUbergraph_BP_RA_SL_Bidybap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
