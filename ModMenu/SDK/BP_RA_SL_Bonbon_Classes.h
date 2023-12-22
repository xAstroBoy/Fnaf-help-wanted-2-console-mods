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
	 * BlueprintGeneratedClass BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C
	 * Size -> 0x0026 (FullSize[0x02D8] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_Bonbon_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_JWX0[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Thud;                                              // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_RA_SL_FuntimeFreddy_C*                           Ref_FuntimeFreddy;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_BonbonAttack;                                      // 0x02D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void UpdateCharacterPosition(bool SendToAdjacentPosition);
		void FindRoo();
		void ActivateAnimatronicMovement();
		void ReceiveBeginPlay();
		void PrimeBonbon(Enum_RA_SL_RoomType Room);
		void CheckWhenToJumpscare();
		void CheckForPassageBlocked();
		void BonbonAtDoor();
		void BonbonForcingJumpscare();
		void DEBUG_TriggerBonbonRightDoor();
		void DEBUG_TriggerLeftDoor();
		void DEBUG_TriggerVentDoor();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void SetBonbonOwnerReference();
		void ExecuteUbergraph_BP_RA_SL_Bonbon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
