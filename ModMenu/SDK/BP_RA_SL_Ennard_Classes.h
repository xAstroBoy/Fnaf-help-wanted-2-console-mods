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
	 * BlueprintGeneratedClass BP_RA_SL_Ennard.BP_RA_SL_Ennard_C
	 * Size -> 0x0026 (FullSize[0x02D8] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_Ennard_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_5EWO[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     SC_RA_EnnardMovement;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_EnnardIdleWait;                                    // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AllowedIdleLoops;                                        // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HowManyIdleLoopsHappened;                                // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void UpdateCharacterPosition(bool SendToAdjacentPosition);
		void SetEnnardOwnerReference();
		void SetEnnardIsWaitingAtDoor(bool IsWaiting);
		void SetEnnardDoorPlayRate(bool EnablePlayrate);
		void ReceiveBeginPlay();
		void PlayAudio();
		void CheckWhenToJumpscare();
		void ActivateAnimatronicMovement();
		void DetermineMovementPatterns();
		void EnnardForceTriggeringJumpscare();
		void CheckForPassageBlocked();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void Idling_CheckDoor();
		void ExecuteUbergraph_BP_RA_SL_Ennard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
