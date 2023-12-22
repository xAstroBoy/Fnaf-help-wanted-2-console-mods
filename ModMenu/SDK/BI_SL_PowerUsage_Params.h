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
	 * Function BI_SL_PowerUsage.BI_SL_PowerUsage_C.DisablePowerReadout
	 */
	struct UBI_SL_PowerUsage_C_DisablePowerReadout_Params
	{	};

	/**
	 * Function BI_SL_PowerUsage.BI_SL_PowerUsage_C.UpdatePowerPercentage
	 */
	struct UBI_SL_PowerUsage_C_UpdatePowerPercentage_Params
	{
	public:
		float                                                      PowerPercent;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PowerUsage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
