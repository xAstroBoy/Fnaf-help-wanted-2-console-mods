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
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.GetPlushBabyPose
	 */
	struct ABP_RA_SL_SecurityCamera_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.GetAllowedCharacters
	 */
	struct ABP_RA_SL_SecurityCamera_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.GetMinireenasOnDoor
	 */
	struct ABP_RA_SL_SecurityCamera_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.GetAssignedButton
	 */
	struct ABP_RA_SL_SecurityCamera_C_GetAssignedButton_Params
	{	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.GetRoomType
	 */
	struct ABP_RA_SL_SecurityCamera_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.SetRoomType
	 */
	struct ABP_RA_SL_SecurityCamera_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.AssignMinireenaToDoor
	 */
	struct ABP_RA_SL_SecurityCamera_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_SecurityCamera.BP_RA_SL_SecurityCamera_C.ExecuteUbergraph_BP_RA_SL_SecurityCamera
	 */
	struct ABP_RA_SL_SecurityCamera_C_ExecuteUbergraph_BP_RA_SL_SecurityCamera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
