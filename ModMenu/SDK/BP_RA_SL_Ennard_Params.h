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
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_Ennard_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.UpdateCharacterPosition
	 */
	struct ABP_RA_SL_Ennard_C_UpdateCharacterPosition_Params
	{
	public:
		bool                                                       SendToAdjacentPosition;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XL0O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardOwnerReference
	 */
	struct ABP_RA_SL_Ennard_C_SetEnnardOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardIsWaitingAtDoor
	 */
	struct ABP_RA_SL_Ennard_C_SetEnnardIsWaitingAtDoor_Params
	{
	public:
		bool                                                       IsWaiting;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SetEnnardDoorPlayRate
	 */
	struct ABP_RA_SL_Ennard_C_SetEnnardDoorPlayRate_Params
	{
	public:
		bool                                                       EnablePlayrate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Ennard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.PlayAudio
	 */
	struct ABP_RA_SL_Ennard_C_PlayAudio_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_Ennard_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_Ennard_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.DetermineMovementPatterns
	 */
	struct ABP_RA_SL_Ennard_C_DetermineMovementPatterns_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.EnnardForceTriggeringJumpscare
	 */
	struct ABP_RA_SL_Ennard_C_EnnardForceTriggeringJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.CheckForPassageBlocked
	 */
	struct ABP_RA_SL_Ennard_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_Ennard_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AOIZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.Idling_CheckDoor
	 */
	struct ABP_RA_SL_Ennard_C_Idling_CheckDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Ennard.BP_RA_SL_Ennard_C.ExecuteUbergraph_BP_RA_SL_Ennard
	 */
	struct ABP_RA_SL_Ennard_C_ExecuteUbergraph_BP_RA_SL_Ennard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DEUW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
