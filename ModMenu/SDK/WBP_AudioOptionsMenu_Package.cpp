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
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetAudioSettingsFromWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      AudioSettings                                              (Parm, OutParm, NoDestructor)
	 */
	void UWBP_AudioOptionsMenu_C::GetAudioSettingsFromWidget(struct FAudioSettingsSaveData* AudioSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetAudioSettingsFromWidget");
		
		UWBP_AudioOptionsMenu_C_GetAudioSettingsFromWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioSettings != nullptr)
			*AudioSettings = params.AudioSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetupSubtitleWidgetFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubtitlesSettingsSaveData                  SubtitleSettings                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_AudioOptionsMenu_C::SetupSubtitleWidgetFromSettings(const struct FSubtitlesSettingsSaveData& SubtitleSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetupSubtitleWidgetFromSettings");
		
		UWBP_AudioOptionsMenu_C_SetupSubtitleWidgetFromSettings_Params params {};
		params.SubtitleSettings = SubtitleSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetupAudioWidgetFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      AudioSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_AudioOptionsMenu_C::SetupAudioWidgetFromSettings(const struct FAudioSettingsSaveData& AudioSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetupAudioWidgetFromSettings");
		
		UWBP_AudioOptionsMenu_C_SetupAudioWidgetFromSettings_Params params {};
		params.AudioSettings = AudioSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetVRSliderFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AudioOptionsMenu_C::SetVRSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetVRSliderFromSettings");
		
		UWBP_AudioOptionsMenu_C_SetVRSliderFromSettings_Params params {};
		params.Value = Value;
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetSubtitleSettingsFromWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubtitlesSettingsSaveData                  SubtitleSettings                                           (Parm, OutParm, NoDestructor)
	 */
	void UWBP_AudioOptionsMenu_C::GetSubtitleSettingsFromWidget(struct FSubtitlesSettingsSaveData* SubtitleSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetSubtitleSettingsFromWidget");
		
		UWBP_AudioOptionsMenu_C_GetSubtitleSettingsFromWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubtitleSettings != nullptr)
			*SubtitleSettings = params.SubtitleSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetSubtitleComboBoxFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubtitlesSize                                     Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AudioOptionsMenu_C::SetSubtitleComboBoxFromSettings(ESubtitlesSize Choice, class UWBP_Title_Combo_Box_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetSubtitleComboBoxFromSettings");
		
		UWBP_AudioOptionsMenu_C_SetSubtitleComboBoxFromSettings_Params params {};
		params.Choice = Choice;
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetAudioSliderFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AudioOptionsMenu_C::SetAudioSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.SetAudioSliderFromSettings");
		
		UWBP_AudioOptionsMenu_C_SetAudioSliderFromSettings_Params params {};
		params.Value = Value;
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetAudioSettingSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AudioOptionsMenu_C::GetAudioSettingSliderValue(class UWBP_Title_Slider_C* Slider, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetAudioSettingSliderValue");
		
		UWBP_AudioOptionsMenu_C_GetAudioSettingSliderValue_Params params {};
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
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetSubtitleComboBoxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESubtitlesSize                                     Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AudioOptionsMenu_C::GetSubtitleComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, ESubtitlesSize* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.GetSubtitleComboBoxValue");
		
		UWBP_AudioOptionsMenu_C_GetSubtitleComboBoxValue_Params params {};
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
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_AudioOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWBP_AudioOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_AudioOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWBP_AudioOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_AudioOptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWBP_AudioOptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.ExecuteUbergraph_WBP_AudioOptionsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AudioOptionsMenu_C::ExecuteUbergraph_WBP_AudioOptionsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.ExecuteUbergraph_WBP_AudioOptionsMenu");
		
		UWBP_AudioOptionsMenu_C_ExecuteUbergraph_WBP_AudioOptionsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_AudioOptionsMenu_C::OnClickedAudioBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioBackButton__DelegateSignature");
		
		UWBP_AudioOptionsMenu_C_OnClickedAudioBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioApplyButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_AudioOptionsMenu_C::OnClickedAudioApplyButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioApplyButton__DelegateSignature");
		
		UWBP_AudioOptionsMenu_C_OnClickedAudioApplyButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioDefaultButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_AudioOptionsMenu_C::OnClickedAudioDefaultButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C.OnClickedAudioDefaultButton__DelegateSignature");
		
		UWBP_AudioOptionsMenu_C_OnClickedAudioDefaultButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_AudioOptionsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_AudioOptionsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C");
		return ptr;
	}

}


