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
	 * Function WBP_Title_Slider.WBP_Title_Slider_C.GetSliderValue
	 */
	struct UWBP_Title_Slider_C_GetSliderValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Title_Slider.WBP_Title_Slider_C.SetSliderValue
	 */
	struct UWBP_Title_Slider_C_SetSliderValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Title_Slider.WBP_Title_Slider_C.PreConstruct
	 */
	struct UWBP_Title_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Title_Slider.WBP_Title_Slider_C.BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UWBP_Title_Slider_C_BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Title_Slider.WBP_Title_Slider_C.ExecuteUbergraph_WBP_Title_Slider
	 */
	struct UWBP_Title_Slider_C_ExecuteUbergraph_WBP_Title_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I234[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
