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
	 * BlueprintGeneratedClass BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C
	 * Size -> 0x004E (FullSize[0x02CE] - InheritedSize[0x0280])
	 */
	class ABP_Office_SL_WayPoint_C : public ABP_Office_BaseWayPoint_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		Enum_RA_SL_RoomType                                        RoomType;                                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ANZ3[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<Enum_RA_SL_AnimatronicType>                         AllowedAnimatronics;                                     // 0x0290(0x0010) Edit, BlueprintVisible
		unsigned char                                              Ref_ConnectedButton[0x28];                               // 0x02A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    MinireenaCount;                                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsClose;                                                 // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAssignedButton();
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void SetIsOccupied(bool Occupied);
		void AvailableToCharacter(class ABP_Office_AnimatronicBase_C* Character, bool* IsAllowed);
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void ReceiveBeginPlay();
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void ExecuteUbergraph_BP_Office_SL_WayPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
