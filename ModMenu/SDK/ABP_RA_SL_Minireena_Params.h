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
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_Minireena_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.GetRoomType
	 */
	struct UABP_RA_SL_Minireena_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.GetAssignedButton
	 */
	struct UABP_RA_SL_Minireena_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_Minireena_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_Minireena_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.AnimGraph
	 */
	struct UABP_RA_SL_Minireena_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_Minireena_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.SetRoomType
	 */
	struct UABP_RA_SL_Minireena_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Minireena.ABP_RA_SL_Minireena_C.ExecuteUbergraph_ABP_RA_SL_Minireena
	 */
	struct UABP_RA_SL_Minireena_C_ExecuteUbergraph_ABP_RA_SL_Minireena_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
