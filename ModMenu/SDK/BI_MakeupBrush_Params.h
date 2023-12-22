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
	 * Function BI_MakeupBrush.BI_MakeupBrush_C.HapticsEffect
	 */
	struct UBI_MakeupBrush_C_HapticsEffect_Params
	{	};

	/**
	 * Function BI_MakeupBrush.BI_MakeupBrush_C.PowderPoof
	 */
	struct UBI_MakeupBrush_C_PowderPoof_Params
	{	};

	/**
	 * Function BI_MakeupBrush.BI_MakeupBrush_C.GetBrushColor
	 */
	struct UBI_MakeupBrush_C_GetBrushColor_Params
	{
	public:
		class UMakeupColorData*                                    CurrentBrushColor;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_MakeupBrush.BI_MakeupBrush_C.SetBrushColor
	 */
	struct UBI_MakeupBrush_C_SetBrushColor_Params
	{
	public:
		class UMakeupColorData*                                    NewColor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
