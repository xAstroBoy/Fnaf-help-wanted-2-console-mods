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
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetLanguageComboBoxFromSettings
	 */
	struct UWBP_VideoOptionsMenu_C_SetLanguageComboBoxFromSettings_Params
	{
	public:
		ELocalizationCulture                                       Level;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B686[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetLanguageComboBoxValue
	 */
	struct UWBP_VideoOptionsMenu_C_GetLanguageComboBoxValue_Params
	{
	public:
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELocalizationCulture                                       Value;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S5KQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetColorBlinkdComboBoxFromSettings
	 */
	struct UWBP_VideoOptionsMenu_C_SetColorBlinkdComboBoxFromSettings_Params
	{
	public:
		EColorBlindnessType                                        Level;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AU9Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetColorBlindComboBoxValue
	 */
	struct UWBP_VideoOptionsMenu_C_GetColorBlindComboBoxValue_Params
	{
	public:
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EColorBlindnessType                                        Value;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5YQA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoSettingsFromWidget
	 */
	struct UWBP_VideoOptionsMenu_C_GetVideoSettingsFromWidget_Params
	{
	public:
		struct FVideoSettingsSaveData                              VideoSettings;                                           // 0x0000(0x0024)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetupVideoWidgetfromSettings
	 */
	struct UWBP_VideoOptionsMenu_C_SetupVideoWidgetfromSettings_Params
	{
	public:
		struct FVideoSettingsSaveData                              VideoSettingsData;                                       // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetVideoSliderFromSettings
	 */
	struct UWBP_VideoOptionsMenu_C_SetVideoSliderFromSettings_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OF4U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetVideoComboBoxFromSettings
	 */
	struct UWBP_VideoOptionsMenu_C_SetVideoComboBoxFromSettings_Params
	{
	public:
		EVisualQualityLevel                                        Level;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JXTX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetAllPlayerOverrideComboBoxes
	 */
	struct UWBP_VideoOptionsMenu_C_GetAllPlayerOverrideComboBoxes_Params
	{
	public:
		TArray<class UWBP_Title_Combo_Box_C*>                      Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoComboBoxValue
	 */
	struct UWBP_VideoOptionsMenu_C_GetVideoComboBoxValue_Params
	{
	public:
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVisualQualityLevel                                        Value;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5U85[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoSettingsSliderValue
	 */
	struct UWBP_VideoOptionsMenu_C_GetVideoSettingsSliderValue_Params
	{
	public:
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.Construct
	 */
	struct UWBP_VideoOptionsMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.ExecuteUbergraph_WBP_VideoOptionsMenu
	 */
	struct UWBP_VideoOptionsMenu_C_ExecuteUbergraph_WBP_VideoOptionsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5X50[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoBackButton__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_OnClickedVideoBackButton__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoApplyButton__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_OnClickedVideoApplyButton__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoDefaultButton__DelegateSignature
	 */
	struct UWBP_VideoOptionsMenu_C_OnClickedVideoDefaultButton__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
