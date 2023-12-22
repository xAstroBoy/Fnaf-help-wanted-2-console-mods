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
	 * BlueprintGeneratedClass BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C
	 * Size -> 0x0037 (FullSize[0x02E9] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_FuntimeFreddy_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_U1OX[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_VentAttacck;                                       // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_SurpriseAttack;                                    // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_DirectAttack;                                      // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_RA_SL_Bonbon_C*                                  Ref_Bonbon;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_SummonBonBon;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableVOAudio;                                          // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void MoveCharacterByID(bool SendToHidden, int32_t OverrideSpot, bool* IsSpotOccupied);
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void SelectRoomForBonbon(bool IsFreddyOnRightSide);
		void AudioToAlertPlayer();
		void CheckWhenToJumpscare();
		void CheckForPassageBlocked();
		void ReceiveBeginPlay();
		void SummonBonBon();
		void DisableAllVO();
		void ExecuteUbergraph_BP_RA_SL_FuntimeFreddy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
