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
	 * Function BI_SL_AlarmClock.BI_SL_AlarmClock_C.BreakAlarmClock
	 */
	struct UBI_SL_AlarmClock_C_BreakAlarmClock_Params
	{	};

	/**
	 * Function BI_SL_AlarmClock.BI_SL_AlarmClock_C.UpdateClockTime
	 */
	struct UBI_SL_AlarmClock_C_UpdateClockTime_Params
	{
	public:
		int32_t                                                    CurrentHour;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
