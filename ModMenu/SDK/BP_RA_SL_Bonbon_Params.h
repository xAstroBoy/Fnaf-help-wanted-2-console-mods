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
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_Bonbon_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.UpdateCharacterPosition
	 */
	struct ABP_RA_SL_Bonbon_C_UpdateCharacterPosition_Params
	{
	public:
		bool                                                       SendToAdjacentPosition;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.FindRoo
	 */
	struct ABP_RA_SL_Bonbon_C_FindRoo_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_Bonbon_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Bonbon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.PrimeBonbon
	 */
	struct ABP_RA_SL_Bonbon_C_PrimeBonbon_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_Bonbon_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.CheckForPassageBlocked
	 */
	struct ABP_RA_SL_Bonbon_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.BonbonAtDoor
	 */
	struct ABP_RA_SL_Bonbon_C_BonbonAtDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.BonbonForcingJumpscare
	 */
	struct ABP_RA_SL_Bonbon_C_BonbonForcingJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerBonbonRightDoor
	 */
	struct ABP_RA_SL_Bonbon_C_DEBUG_TriggerBonbonRightDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerLeftDoor
	 */
	struct ABP_RA_SL_Bonbon_C_DEBUG_TriggerLeftDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.DEBUG_TriggerVentDoor
	 */
	struct ABP_RA_SL_Bonbon_C_DEBUG_TriggerVentDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_Bonbon_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W5VV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.SetBonbonOwnerReference
	 */
	struct ABP_RA_SL_Bonbon_C_SetBonbonOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_Bonbon.BP_RA_SL_Bonbon_C.ExecuteUbergraph_BP_RA_SL_Bonbon
	 */
	struct ABP_RA_SL_Bonbon_C_ExecuteUbergraph_BP_RA_SL_Bonbon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFW9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
