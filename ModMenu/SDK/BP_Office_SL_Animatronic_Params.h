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
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.IsDrainingPower
	 */
	struct ABP_Office_SL_Animatronic_C_IsDrainingPower_Params
	{
	public:
		bool                                                       IsDrainingPower;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.GetAnimatronicType
	 */
	struct ABP_Office_SL_Animatronic_C_GetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 Animatronic;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.FlickerCameraOnMovement
	 */
	struct ABP_Office_SL_Animatronic_C_FlickerCameraOnMovement_Params
	{
	public:
		class UObject*                                             WaypointPosition;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TriggeringActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetCurrentPosition
	 */
	struct ABP_Office_SL_Animatronic_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DetermineIfRoomIsOccupied
	 */
	struct ABP_Office_SL_Animatronic_C_DetermineIfRoomIsOccupied_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOccupied;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UL2R[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetIsDrainingPower
	 */
	struct ABP_Office_SL_Animatronic_C_SetIsDrainingPower_Params
	{
	public:
		bool                                                       AnimatronicDrainingPower;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K63D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.GetIsDrainingPower
	 */
	struct ABP_Office_SL_Animatronic_C_GetIsDrainingPower_Params
	{
	public:
		bool                                                       IsDrainingPower;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.FindSpecificRoom_SL
	 */
	struct ABP_Office_SL_Animatronic_C_FindSpecificRoom_SL_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7EJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Office_BaseWayPoint_C*                           ValidWaypoint;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.SetAnimatronicType
	 */
	struct ABP_Office_SL_Animatronic_C_SetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 AnimatronicToSet;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DisableAllVO
	 */
	struct ABP_Office_SL_Animatronic_C_DisableAllVO_Params
	{	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.ReceiveBeginPlay
	 */
	struct ABP_Office_SL_Animatronic_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.DEBUG_TestCharacterJumpscare
	 */
	struct ABP_Office_SL_Animatronic_C_DEBUG_TestCharacterJumpscare_Params
	{	};

	/**
	 * Function BP_Office_SL_Animatronic.BP_Office_SL_Animatronic_C.ExecuteUbergraph_BP_Office_SL_Animatronic
	 */
	struct ABP_Office_SL_Animatronic_C_ExecuteUbergraph_BP_Office_SL_Animatronic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
