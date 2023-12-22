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
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRInvertMovementComboBoxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_VROptionsMenu_C::GetVRInvertMovementComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRInvertMovementComboBoxValue");
		
		UWBP_VROptionsMenu_C_GetVRInvertMovementComboBoxValue_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Set VRInvertMovementCombo Box From Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VROptionsMenu_C::SetVRInvertMovementComboBoxFromSettings(bool Choice, class UWBP_Title_Combo_Box_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Set VRInvertMovementCombo Box From Settings");
		
		UWBP_VROptionsMenu_C_SetVRInvertMovementComboBoxFromSettings_Params params {};
		params.Choice = Choice;
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Setup VRWidget from Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRComfortSettingsSaveData                  Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_VROptionsMenu_C::SetupVRWidgetfromSettings(const struct FVRComfortSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Setup VRWidget from Settings");
		
		UWBP_VROptionsMenu_C_SetupVRWidgetfromSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Set VRTurn Combo Box From Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerRotationInputType                           Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VROptionsMenu_C::SetVRTurnComboBoxFromSettings(EPlayerRotationInputType Choice, class UWBP_Title_Combo_Box_C* ComboBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.Set VRTurn Combo Box From Settings");
		
		UWBP_VROptionsMenu_C_SetVRTurnComboBoxFromSettings_Params params {};
		params.Choice = Choice;
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRSettingsFromWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRComfortSettingsSaveData                  Settings                                                   (Parm, OutParm, NoDestructor)
	 */
	void UWBP_VROptionsMenu_C::GetVRSettingsFromWidget(struct FVRComfortSettingsSaveData* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRSettingsFromWidget");
		
		UWBP_VROptionsMenu_C_GetVRSettingsFromWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRTurnComboBoxValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Combo_Box_C*                      ComboBox                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPlayerRotationInputType                           NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VROptionsMenu_C::GetVRTurnComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, EPlayerRotationInputType* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRTurnComboBoxValue");
		
		UWBP_VROptionsMenu_C_GetVRTurnComboBoxValue_Params params {};
		params.ComboBox = ComboBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.SetVRSliderFromSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VROptionsMenu_C::SetVRSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.SetVRSliderFromSettings");
		
		UWBP_VROptionsMenu_C_SetVRSliderFromSettings_Params params {};
		params.Value = Value;
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRSettingSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Title_Slider_C*                         Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VROptionsMenu_C::GetVRSettingSliderValue(class UWBP_Title_Slider_C* Slider, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.GetVRSettingSliderValue");
		
		UWBP_VROptionsMenu_C_GetVRSettingSliderValue_Params params {};
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
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VROptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWBP_VROptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VROptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWBP_VROptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VROptionsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWBP_VROptionsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.ExecuteUbergraph_WBP_VROptionsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_VROptionsMenu_C::ExecuteUbergraph_WBP_VROptionsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.ExecuteUbergraph_WBP_VROptionsMenu");
		
		UWBP_VROptionsMenu_C_ExecuteUbergraph_WBP_VROptionsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VROptionsMenu_C::OnClickedVRBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRBackButton__DelegateSignature");
		
		UWBP_VROptionsMenu_C_OnClickedVRBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRApplyButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VROptionsMenu_C::OnClickedVRApplyButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRApplyButton__DelegateSignature");
		
		UWBP_VROptionsMenu_C_OnClickedVRApplyButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRDefaultButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_VROptionsMenu_C::OnClickedVRDefaultButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_VROptionsMenu.WBP_VROptionsMenu_C.OnClickedVRDefaultButton__DelegateSignature");
		
		UWBP_VROptionsMenu_C_OnClickedVRDefaultButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_VROptionsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VROptionsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VROptionsMenu.WBP_VROptionsMenu_C");
		return ptr;
	}

}


