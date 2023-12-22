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
	 * BlueprintGeneratedClass BP_RA_SL_Ballora.BP_RA_SL_Ballora_C
	 * Size -> 0x0027 (FullSize[0x02D9] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_Ballora_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_GN6M[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     SC_Movement;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       InHiddenROom;                                            // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SMV3[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_BalloraSpinningAway;                               // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       PastDoorCheck;                                           // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void ActivateAnimatronicMovement();
		void BalloraForcingJumpscare();
		void DetermineMovementPatterns();
		void CheckWhenToJumpscare();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void CheckToReturnToDoor();
		void BalloraHasLeftArea();
		void ReceiveBeginPlay();
		void SetBalloraDoorClosed(bool DoorIsClosed);
		void Ballora_FadeAudioTrigger();
		void BalloraAtDoor();
		void SetBalloraOwnerReference();
		void ExecuteUbergraph_BP_RA_SL_Ballora(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
