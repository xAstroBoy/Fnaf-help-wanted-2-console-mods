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
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.GetPlushBabyPose
	 */
	struct ABP_Office_SL_WayPoint_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.GetAllowedCharacters
	 */
	struct ABP_Office_SL_WayPoint_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.GetMinireenasOnDoor
	 */
	struct ABP_Office_SL_WayPoint_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.GetAssignedButton
	 */
	struct ABP_Office_SL_WayPoint_C_GetAssignedButton_Params
	{	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.GetRoomType
	 */
	struct ABP_Office_SL_WayPoint_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.SetIsOccupied
	 */
	struct ABP_Office_SL_WayPoint_C_SetIsOccupied_Params
	{
	public:
		bool                                                       Occupied;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OZGR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.AvailableToCharacter
	 */
	struct ABP_Office_SL_WayPoint_C_AvailableToCharacter_Params
	{
	public:
		class ABP_Office_AnimatronicBase_C*                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAllowed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.SetRoomType
	 */
	struct ABP_Office_SL_WayPoint_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.ReceiveBeginPlay
	 */
	struct ABP_Office_SL_WayPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.AssignMinireenaToDoor
	 */
	struct ABP_Office_SL_WayPoint_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_SL_WayPoint.BP_Office_SL_WayPoint_C.ExecuteUbergraph_BP_Office_SL_WayPoint
	 */
	struct ABP_Office_SL_WayPoint_C_ExecuteUbergraph_BP_Office_SL_WayPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
