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
	 * BlueprintGeneratedClass BP_RA_SL_Minireena.BP_RA_SL_Minireena_C
	 * Size -> 0x003B (FullSize[0x02ED] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_Minireena_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_ZBCL[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGrabbableSnapComponent*                             GrabbableSnap;                                           // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       SetToPowerDrain;                                         // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YDR8[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_DoorMinireena[0x10];                                 // 0x02D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      WeightChanceOfDoorAttack;                                // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDeployedToPowerDrain;                                  // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PickMinireenaToDeploy();
		void CheckWhenToJumpscare();
		void CheckForUniqueTrigger();
		void OverrideTriggerReset();
		void ActivateAnimatronicMovement();
		void DetermineMinireenaBehavior();
		void DEBUG_TriggerPileOn();
		void ExecuteUbergraph_BP_RA_SL_Minireena(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
