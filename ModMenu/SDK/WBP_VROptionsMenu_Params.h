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
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRInvertMovementComboBoxValue
	 */
	struct UWBP_VROptionsMenu_C_GetVRInvertMovementComboBoxValue_Params
	{
	public:
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A5HN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Set VRInvertMovementCombo Box From Settings
	 */
	struct UWBP_VROptionsMenu_C_SetVRInvertMovementComboBoxFromSettings_Params
	{
	public:
		bool                                                       Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6S7S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Setup VRWidget from Settings
	 */
	struct UWBP_VROptionsMenu_C_SetupVRWidgetfromSettings_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          Settings;                                                // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Set VRTurn Combo Box From Settings
	 */
	struct UWBP_VROptionsMenu_C_SetVRTurnComboBoxFromSettings_Params
	{
	public:
		EPlayerRotationInputType                                   Choice;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FO9Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRSettingsFromWidget
	 */
	struct UWBP_VROptionsMenu_C_GetVRSettingsFromWidget_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          Settings;                                                // 0x0000(0x0014)  (Parm, OutParm, NoDestructor)
		unsigned char                                              UnknownData_FY1T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRTurnComboBoxValue
	 */
	struct UWBP_VROptionsMenu_C_GetVRTurnComboBoxValue_Params
	{
	public:
		class UWBP_Title_Combo_Box_C*                              ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPlayerRotationInputType                                   NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2TMF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.SetVRSliderFromSettings
	 */
	struct UWBP_VROptionsMenu_C_SetVRSliderFromSettings_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ENF3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRSettingSliderValue
	 */
	struct UWBP_VROptionsMenu_C_GetVRSettingSliderValue_Params
	{
	public:
		class UWBP_Title_Slider_C*                                 Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWBP_VROptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWBP_VROptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWBP_VROptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.ExecuteUbergraph_WBP_VROptionsMenu
	 */
	struct UWBP_VROptionsMenu_C_ExecuteUbergraph_WBP_VROptionsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T309[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRBackButton__DelegateSignature
	 */
	struct UWBP_VROptionsMenu_C_OnClickedVRBackButton__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRApplyButton__DelegateSignature
	 */
	struct UWBP_VROptionsMenu_C_OnClickedVRApplyButton__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRDefaultButton__DelegateSignature
	 */
	struct UWBP_VROptionsMenu_C_OnClickedVRDefaultButton__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
