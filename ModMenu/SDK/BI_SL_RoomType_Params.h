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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.GetPlushBabyPose
	 */
	struct UBI_SL_RoomType_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.GetAllowedCharacters
	 */
	struct UBI_SL_RoomType_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.AssignMinireenaToDoor
	 */
	struct UBI_SL_RoomType_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.GetMinireenasOnDoor
	 */
	struct UBI_SL_RoomType_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.GetAssignedButton
	 */
	struct UBI_SL_RoomType_C_GetAssignedButton_Params
	{	};

	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.SetRoomType
	 */
	struct UBI_SL_RoomType_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_RoomType.BI_SL_RoomType_C.GetRoomType
	 */
	struct UBI_SL_RoomType_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
