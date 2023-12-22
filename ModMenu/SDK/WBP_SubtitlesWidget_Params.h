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
	 * Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.SetTextVisible
	 */
	struct UWBP_SubtitlesWidget_C_SetTextVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.OnShowSubtitles
	 */
	struct UWBP_SubtitlesWidget_C_OnShowSubtitles_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.UpdateSubtitles
	 */
	struct UWBP_SubtitlesWidget_C_UpdateSubtitles_Params
	{
	public:
		class FText                                                Speaker;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                InText;                                                  // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.Construct
	 */
	struct UWBP_SubtitlesWidget_C_Construct_Params
	{	};

	/**
	 * Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.SetupSubtitleStyle
	 */
	struct UWBP_SubtitlesWidget_C_SetupSubtitleStyle_Params
	{
	public:
		ESubtitlesSize                                             Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.ExecuteUbergraph_WBP_SubtitlesWidget
	 */
	struct UWBP_SubtitlesWidget_C_ExecuteUbergraph_WBP_SubtitlesWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
