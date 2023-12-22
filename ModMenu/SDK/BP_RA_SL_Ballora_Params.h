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
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_Ballora_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_Ballora_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraForcingJumpscare
	 */
	struct ABP_RA_SL_Ballora_C_BalloraForcingJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.DetermineMovementPatterns
	 */
	struct ABP_RA_SL_Ballora_C_DetermineMovementPatterns_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_Ballora_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_Ballora_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WF4G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.CheckToReturnToDoor
	 */
	struct ABP_RA_SL_Ballora_C_CheckToReturnToDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraHasLeftArea
	 */
	struct ABP_RA_SL_Ballora_C_BalloraHasLeftArea_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Ballora_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetBalloraDoorClosed
	 */
	struct ABP_RA_SL_Ballora_C_SetBalloraDoorClosed_Params
	{
	public:
		bool                                                       DoorIsClosed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.Ballora_FadeAudioTrigger
	 */
	struct ABP_RA_SL_Ballora_C_Ballora_FadeAudioTrigger_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.BalloraAtDoor
	 */
	struct ABP_RA_SL_Ballora_C_BalloraAtDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.SetBalloraOwnerReference
	 */
	struct ABP_RA_SL_Ballora_C_SetBalloraOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_Ballora.BP_RA_SL_Ballora_C.ExecuteUbergraph_BP_RA_SL_Ballora
	 */
	struct ABP_RA_SL_Ballora_C_ExecuteUbergraph_BP_RA_SL_Ballora_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
