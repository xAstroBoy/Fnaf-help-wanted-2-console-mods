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
	 * Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.AdvanceFoxyPosition
	 */
	struct UBI_RA_SL_FTFoxy_Logic_C_AdvanceFoxyPosition_Params
	{	};

	/**
	 * Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetFoxyOwnerReference
	 */
	struct UBI_RA_SL_FTFoxy_Logic_C_SetFoxyOwnerReference_Params
	{	};

	/**
	 * Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetRunning
	 */
	struct UBI_RA_SL_FTFoxy_Logic_C_SetRunning_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetSpotId
	 */
	struct UBI_RA_SL_FTFoxy_Logic_C_SetSpotId_Params
	{
	public:
		int32_t                                                    SetCurrentID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
