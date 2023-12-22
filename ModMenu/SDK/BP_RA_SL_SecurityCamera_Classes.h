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
	 * BlueprintGeneratedClass BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C
	 * Size -> 0x0009 (FullSize[0x0231] - InheritedSize[0x0228])
	 */
	class ABP_RA_SL_SecurityCamera_C : public ASecurityCamera
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		Enum_RA_SL_RoomType                                        RoomType;                                                // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAssignedButton();
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void ExecuteUbergraph_BP_RA_SL_SecurityCamera(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
