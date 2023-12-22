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
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.FlickerCameraOnMovement
	 */
	struct ABP_Office_AnimatronicBase_C_FlickerCameraOnMovement_Params
	{
	public:
		class UObject*                                             WaypointPosition;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              TriggeringActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SendCharacterToSpecificRoom
	 */
	struct ABP_Office_AnimatronicBase_C_SendCharacterToSpecificRoom_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CreateWaypointArray
	 */
	struct ABP_Office_AnimatronicBase_C_CreateWaypointArray_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.MoveCharacterByID
	 */
	struct ABP_Office_AnimatronicBase_C_MoveCharacterByID_Params
	{
	public:
		bool                                                       SendToHidden;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L7U7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverrideSpot;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpotOccupied;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.UpdateCharacterPosition
	 */
	struct ABP_Office_AnimatronicBase_C_UpdateCharacterPosition_Params
	{
	public:
		bool                                                       SendToAdjacentPosition;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SetIsActive
	 */
	struct ABP_Office_AnimatronicBase_C_SetIsActive_Params
	{
	public:
		bool                                                       IsActiveToGame;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.GetIsActive
	 */
	struct ABP_Office_AnimatronicBase_C_GetIsActive_Params
	{
	public:
		bool                                                       IsPartOfGame;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.SetCurrentPosition
	 */
	struct ABP_Office_AnimatronicBase_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.GetCurrentPosition
	 */
	struct ABP_Office_AnimatronicBase_C_GetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveForward
	 */
	struct ABP_Office_AnimatronicBase_C_DEBUG_MoveForward_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveAdjacent
	 */
	struct ABP_Office_AnimatronicBase_C_DEBUG_MoveAdjacent_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_Restart
	 */
	struct ABP_Office_AnimatronicBase_C_DEBUG_Restart_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DEBUG_MoveHiddenRoom
	 */
	struct ABP_Office_AnimatronicBase_C_DEBUG_MoveHiddenRoom_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckWhenToJumpscare
	 */
	struct ABP_Office_AnimatronicBase_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckWhenToReset
	 */
	struct ABP_Office_AnimatronicBase_C_CheckWhenToReset_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.ActivateAnimatronicMovement
	 */
	struct ABP_Office_AnimatronicBase_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckForPassageBlocked
	 */
	struct ABP_Office_AnimatronicBase_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.DetermineMovementPatterns
	 */
	struct ABP_Office_AnimatronicBase_C_DetermineMovementPatterns_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.CheckForUniqueTrigger
	 */
	struct ABP_Office_AnimatronicBase_C_CheckForUniqueTrigger_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.OverrideTriggerReset
	 */
	struct ABP_Office_AnimatronicBase_C_OverrideTriggerReset_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.VictoryEvent_DestroyAnimatronic
	 */
	struct ABP_Office_AnimatronicBase_C_VictoryEvent_DestroyAnimatronic_Params
	{	};

	/**
	 * Function BP_Office_AnimatronicBase.BP_Office_AnimatronicBase_C.ExecuteUbergraph_BP_Office_AnimatronicBase
	 */
	struct ABP_Office_AnimatronicBase_C_ExecuteUbergraph_BP_Office_AnimatronicBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QCWN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
