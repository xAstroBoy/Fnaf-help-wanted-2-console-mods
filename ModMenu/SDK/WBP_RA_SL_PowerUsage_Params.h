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
	 * Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.ResetAllPowerUsageVisiblity
	 */
	struct UWBP_RA_SL_PowerUsage_C_ResetAllPowerUsageVisiblity_Params
	{	};

	/**
	 * Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.UsageDisplay
	 */
	struct UWBP_RA_SL_PowerUsage_C_UsageDisplay_Params
	{
	public:
		float                                                      CurrentPowerDrain;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.UpdatePowerPercentage
	 */
	struct UWBP_RA_SL_PowerUsage_C_UpdatePowerPercentage_Params
	{
	public:
		float                                                      PowerPercent;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PowerUsage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.DisablePowerReadout
	 */
	struct UWBP_RA_SL_PowerUsage_C_DisablePowerReadout_Params
	{	};

	/**
	 * Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.ExecuteUbergraph_WBP_RA_SL_PowerUsage
	 */
	struct UWBP_RA_SL_PowerUsage_C_ExecuteUbergraph_WBP_RA_SL_PowerUsage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
