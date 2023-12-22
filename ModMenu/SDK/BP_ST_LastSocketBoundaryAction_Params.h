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
	 * Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.OnBoundryHit
	 */
	struct UBP_ST_LastSocketBoundaryAction_C_OnBoundryHit_Params
	{	};

	/**
	 * Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.MarkBeingDestoryedAfterRound
	 */
	struct UBP_ST_LastSocketBoundaryAction_C_MarkBeingDestoryedAfterRound_Params
	{	};

	/**
	 * Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.OnBoundaryHit
	 */
	struct UBP_ST_LastSocketBoundaryAction_C_OnBoundaryHit_Params
	{
	public:
		class AActor*                                              ActorHittingBoundary;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.Setup
	 */
	struct UBP_ST_LastSocketBoundaryAction_C_Setup_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.ExecuteUbergraph_BP_ST_LastSocketBoundaryAction
	 */
	struct UBP_ST_LastSocketBoundaryAction_C_ExecuteUbergraph_BP_ST_LastSocketBoundaryAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OLVY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
