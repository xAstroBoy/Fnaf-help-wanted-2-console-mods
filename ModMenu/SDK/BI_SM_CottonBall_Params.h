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
	 * Function BI_SM_CottonBall.BI_SM_CottonBall_C.GetCottonBallColor
	 */
	struct UBI_SM_CottonBall_C_GetCottonBallColor_Params
	{
	public:
		class UMakeupColorData*                                    CurrentCottonBallColor;                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SM_CottonBall.BI_SM_CottonBall_C.SetCottonBallColor
	 */
	struct UBI_SM_CottonBall_C_SetCottonBallColor_Params
	{
	public:
		class UMakeupColorData*                                    NewColor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
