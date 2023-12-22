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
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetAudioSettingsFromWidget
	 */
	struct UWBP_AudioOptionsMenu_C_GetAudioSettingsFromWidget_Params
	{
	public:
		struct FAudioSettingsSaveData                              AudioSettings;                                           // 0x0000(0x0014)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetupSubtitleWidgetFromSettings
	 */
	struct UWBP_AudioOptionsMenu_C_SetupSubtitleWidgetFromSettings_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          SubtitleSettings;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetupAudioWidgetFromSettings
	 */
	struct UWBP_AudioOptionsMenu_C_SetupAudioWidgetFromSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              AudioSettings;                                           // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetVRSliderFromSettings
	 */
	struct UWBP_AudioOptionsMenu_C_SetVRSliderFromSettings_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QM9W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetSubtitleSettingsFromWidget
	 */
	struct UWBP_AudioOptionsMenu_C_GetSubtitleSettingsFromWidget_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          SubtitleSettings;                                        // 0x0000(0x000C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetSubtitleComboBoxFromSettings
	 */
	struct UWBP_AudioOptionsMenu_C_SetSubtitleComboBoxFromSettings_Params
	{
	public:
		ESubtitlesSize                                             Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OZQ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetAudioSliderFromSettings
	 */
	struct UWBP_AudioOptionsMenu_C_SetAudioSliderFromSettings_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QG7M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetAudioSettingSliderValue
	 */
	struct UWBP_AudioOptionsMenu_C_GetAudioSettingSliderValue_Params
	{
	public:
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetSubtitleComboBoxValue
	 */
	struct UWBP_AudioOptionsMenu_C_GetSubtitleComboBoxValue_Params
	{
	public:
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubtitlesSize                                             Value;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IBIL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWBP_AudioOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWBP_AudioOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWBP_AudioOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.ExecuteUbergraph_WBP_AudioOptionsMenu
	 */
	struct UWBP_AudioOptionsMenu_C_ExecuteUbergraph_WBP_AudioOptionsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DUGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioBackButton__DelegateSignature
	 */
	struct UWBP_AudioOptionsMenu_C_OnClickedAudioBackButton__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioApplyButton__DelegateSignature
	 */
	struct UWBP_AudioOptionsMenu_C_OnClickedAudioApplyButton__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioDefaultButton__DelegateSignature
	 */
	struct UWBP_AudioOptionsMenu_C_OnClickedAudioDefaultButton__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
