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
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_Bidybap_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.UpdateCharacterPosition
	 */
	struct ABP_RA_SL_Bidybap_C_UpdateCharacterPosition_Params
	{
	public:
		bool                                                       SendToAdjacentPosition;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SetBidybapOwnerReference
	 */
	struct ABP_RA_SL_Bidybap_C_SetBidybapOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Bidybap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_Bidybap_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckForUniqueTrigger
	 */
	struct ABP_RA_SL_Bidybap_C_CheckForUniqueTrigger_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.OverrideTriggerReset
	 */
	struct ABP_RA_SL_Bidybap_C_OverrideTriggerReset_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.BidybapForcingJumpscare
	 */
	struct ABP_RA_SL_Bidybap_C_BidybapForcingJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.BidybapAtVentDoor
	 */
	struct ABP_RA_SL_Bidybap_C_BidybapAtVentDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.CheckForPassageBlocked
	 */
	struct ABP_RA_SL_Bidybap_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_Bidybap_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_Bidybap_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWTS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ResetBidybapMovement
	 */
	struct ABP_RA_SL_Bidybap_C_ResetBidybapMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.RetriggerBidybap
	 */
	struct ABP_RA_SL_Bidybap_C_RetriggerBidybap_Params
	{	};

	/**
	 * Function BP_RA_SL_Bidybap.BP_RA_SL_Bidybap_C.ExecuteUbergraph_BP_RA_SL_Bidybap
	 */
	struct ABP_RA_SL_Bidybap_C_ExecuteUbergraph_BP_RA_SL_Bidybap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6UIF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
