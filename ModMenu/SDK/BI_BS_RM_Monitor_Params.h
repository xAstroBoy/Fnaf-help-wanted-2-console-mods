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
	 * Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.StopTimerSound
	 */
	struct UBI_BS_RM_Monitor_C_StopTimerSound_Params
	{	};

	/**
	 * Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ResetShowTime
	 */
	struct UBI_BS_RM_Monitor_C_ResetShowTime_Params
	{
	public:
		float                                                      NewMinutes;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewSeconds;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ClearPowerMeter
	 */
	struct UBI_BS_RM_Monitor_C_ClearPowerMeter_Params
	{	};

	/**
	 * Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ResetPowerMeterUI
	 */
	struct UBI_BS_RM_Monitor_C_ResetPowerMeterUI_Params
	{	};

	/**
	 * Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.UpdatePowerMeter
	 */
	struct UBI_BS_RM_Monitor_C_UpdatePowerMeter_Params
	{
	public:
		float                                                      NewHeightPercentage;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.UpdateShowtime
	 */
	struct UBI_BS_RM_Monitor_C_UpdateShowtime_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
