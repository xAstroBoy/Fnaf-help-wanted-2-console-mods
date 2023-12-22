/**
 * Name: HW2
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetLanguageComboBoxFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocalizationCulture                               Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::SetLanguageComboBoxFromSettings(ELocalizationCulture Level, class UWBP_Title_Combo_Box_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetLanguageComboBoxFromSettings");
		
		UWBP_VideoOptionsMenu_C_SetLanguageComboBoxFromSettings_Params params {};
		params.Level = Level;
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetLanguageComboBoxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ELocalizationCulture                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::GetLanguageComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, ELocalizationCulture* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetLanguageComboBoxValue");
		
		UWBP_VideoOptionsMenu_C_GetLanguageComboBoxValue_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetColorBlinkdComboBoxFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EColorBlindnessType                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::SetColorBlinkdComboBoxFromSettings(EColorBlindnessType Level, class UWBP_Title_Combo_Box_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetColorBlinkdComboBoxFromSettings");
		
		UWBP_VideoOptionsMenu_C_SetColorBlinkdComboBoxFromSettings_Params params {};
		params.Level = Level;
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetColorBlindComboBoxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EColorBlindnessType                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::GetColorBlindComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, EColorBlindnessType* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetColorBlindComboBoxValue");
		
		UWBP_VideoOptionsMenu_C_GetColorBlindComboBoxValue_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoSettingsFromWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVideoSettingsSaveData                      VideoSettings                                              (Parm, OutParm, NoDestructor)
	 */
	void UWBP_VideoOptionsMenu_C::GetVideoSettingsFromWidget(struct FVideoSettingsSaveData* VideoSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoSettingsFromWidget");
		
		UWBP_VideoOptionsMenu_C_GetVideoSettingsFromWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VideoSettings != nullptr)
			*VideoSettings = params.VideoSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetupVideoWidgetfromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVideoSettingsSaveData                      VideoSettingsData                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_VideoOptionsMenu_C::SetupVideoWidgetfromSettings(const struct FVideoSettingsSaveData& VideoSettingsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetupVideoWidgetfromSettings");
		
		UWBP_VideoOptionsMenu_C_SetupVideoWidgetfromSettings_Params params {};
		params.VideoSettingsData = VideoSettingsData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetVideoSliderFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::SetVideoSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetVideoSliderFromSettings");
		
		UWBP_VideoOptionsMenu_C_SetVideoSliderFromSettings_Params params {};
		params.Value = Value;
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetVideoComboBoxFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVisualQualityLevel                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::SetVideoComboBoxFromSettings(EVisualQualityLevel Level, class UWBP_Title_Combo_Box_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.SetVideoComboBoxFromSettings");
		
		UWBP_VideoOptionsMenu_C_SetVideoComboBoxFromSettings_Params params {};
		params.Level = Level;
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetAllPlayerOverrideComboBoxes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWBP_Title_Combo_Box_C*>              Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWBP_VideoOptionsMenu_C::GetAllPlayerOverrideComboBoxes(TArray<class UWBP_Title_Combo_Box_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetAllPlayerOverrideComboBoxes");
		
		UWBP_VideoOptionsMenu_C_GetAllPlayerOverrideComboBoxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoComboBoxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EVisualQualityLevel                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::GetVideoComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, EVisualQualityLevel* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoComboBoxValue");
		
		UWBP_VideoOptionsMenu_C_GetVideoComboBoxValue_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoSettingsSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::GetVideoSettingsSliderValue(class UWBP_Title_Slider_C* Slider, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.GetVideoSettingsSliderValue");
		
		UWBP_VideoOptionsMenu_C_GetVideoSettingsSliderValue_Params params {};
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.Construct");
		
		UWBP_VideoOptionsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.ExecuteUbergraph_WBP_VideoOptionsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VideoOptionsMenu_C::ExecuteUbergraph_WBP_VideoOptionsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.ExecuteUbergraph_WBP_VideoOptionsMenu");
		
		UWBP_VideoOptionsMenu_C_ExecuteUbergraph_WBP_VideoOptionsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::OnClickedVideoBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoBackButton__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_OnClickedVideoBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoApplyButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::OnClickedVideoApplyButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoApplyButton__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_OnClickedVideoApplyButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoDefaultButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VideoOptionsMenu_C::OnClickedVideoDefaultButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C.OnClickedVideoDefaultButton__DelegateSignature");
		
		UWBP_VideoOptionsMenu_C_OnClickedVideoDefaultButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_VideoOptionsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VideoOptionsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C");
		return ptr;
	}

}


