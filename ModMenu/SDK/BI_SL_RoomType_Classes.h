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
	 * BlueprintGeneratedClass BI_SL_RoomType.BI_SL_RoomType_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_RoomType_C : public UInterface
	{
	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAssignedButton();
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
