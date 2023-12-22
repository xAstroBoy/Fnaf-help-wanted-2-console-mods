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
	 * Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.UpdateClockTime
	 */
	struct ABP_RA_SL_Clock_C_UpdateClockTime_Params
	{
	public:
		int32_t                                                    CurrentHour;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.BreakAlarmClock
	 */
	struct ABP_RA_SL_Clock_C_BreakAlarmClock_Params
	{	};

	/**
	 * Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.DEBUG_IncreaseClockHour
	 */
	struct ABP_RA_SL_Clock_C_DEBUG_IncreaseClockHour_Params
	{	};

	/**
	 * Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.DEBUG_BreakClock
	 */
	struct ABP_RA_SL_Clock_C_DEBUG_BreakClock_Params
	{	};

	/**
	 * Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Clock_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.ExecuteUbergraph_BP_RA_SL_Clock
	 */
	struct ABP_RA_SL_Clock_C_ExecuteUbergraph_BP_RA_SL_Clock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
