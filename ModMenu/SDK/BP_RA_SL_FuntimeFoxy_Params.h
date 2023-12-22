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
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckIfPathIsBlocked
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_CheckIfPathIsBlocked_Params
	{
	public:
		bool                                                       IsFullyBlocked;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T9BB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.UpdateCharacterPosition
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_UpdateCharacterPosition_Params
	{
	public:
		bool                                                       SendToAdjacentPosition;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_INEB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.PutFoxyInUniqueStart
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_PutFoxyInUniqueStart_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetRunning
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_SetRunning_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetFoxyOwnerReference
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_SetFoxyOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ReceiveTick
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.AdvanceFoxy
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_AdvanceFoxy_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.FoxyWantsToMoveForward
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_FoxyWantsToMoveForward_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.PauseFoxyWhileWatched
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_PauseFoxyWhileWatched_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ResumeFoxyTimer
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_ResumeFoxyTimer_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.FoxyWatchedToClosely
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_FoxyWatchedToClosely_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.Reset_PauseFoxyWhileWatched
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_Reset_PauseFoxyWhileWatched_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckForPassageBlocked
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.TriggerOnFoxyRunning
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_TriggerOnFoxyRunning_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_SetupFoxyToRun
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_DEBUG_SetupFoxyToRun_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetSpotId
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_SetSpotId_Params
	{
	public:
		int32_t                                                    SetCurrentID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_AdvanceFoxy
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_DEBUG_AdvanceFoxy_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.AdvanceFoxyPosition
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_AdvanceFoxyPosition_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_StartFoxy
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_DEBUG_StartFoxy_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BZ7D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ExecuteUbergraph_BP_RA_SL_FuntimeFoxy
	 */
	struct ABP_RA_SL_FuntimeFoxy_C_ExecuteUbergraph_BP_RA_SL_FuntimeFoxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
