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
	 * BlueprintGeneratedClass BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C
	 * Size -> 0x0016 (FullSize[0x02B2] - InheritedSize[0x029C])
	 */
	class ABP_Office_SL_Animatronic_C : public ABP_Office_AnimatronicBase_C
	{
	public:
		unsigned char                                              UnknownData_EDJY[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_RA_SL_Manager_C*                                 Ref_GameManager;                                         // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnimatronicDrainingPower;                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Enum_RA_SL_AnimatronicType                                 AnimatronicType;                                         // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsDrainingPower(bool* IsDrainingPower);
		void GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic);
		void FlickerCameraOnMovement(class UObject* WaypointPosition, class AActor* TriggeringActor);
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void DetermineIfRoomIsOccupied(Enum_RA_SL_RoomType Room, bool* IsOccupied);
		void SetIsDrainingPower(bool AnimatronicDrainingPower);
		void GetIsDrainingPower(bool* IsDrainingPower);
		void FindSpecificRoom_SL(Enum_RA_SL_RoomType Room, class ABP_Office_BaseWayPoint_C** ValidWaypoint);
		void SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet);
		void DisableAllVO();
		void ReceiveBeginPlay();
		void DEBUG_TestCharacterJumpscare();
		void ExecuteUbergraph_BP_Office_SL_Animatronic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
