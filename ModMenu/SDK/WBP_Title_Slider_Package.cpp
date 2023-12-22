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
	 * 		Name   -> Function WBP_Title_Slider.WBP_Title_Slider_C.GetSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Slider_C::GetSliderValue(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Slider.WBP_Title_Slider_C.GetSliderValue");
		
		UWBP_Title_Slider_C_GetSliderValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Slider.WBP_Title_Slider_C.SetSliderValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Slider_C::SetSliderValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Slider.WBP_Title_Slider_C.SetSliderValue");
		
		UWBP_Title_Slider_C_SetSliderValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Slider.WBP_Title_Slider_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Title_Slider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Slider.WBP_Title_Slider_C.PreConstruct");
		
		UWBP_Title_Slider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Slider.WBP_Title_Slider_C.BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Title_Slider_C::BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Slider.WBP_Title_Slider_C.BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");
		
		UWBP_Title_Slider_C_BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Slider.WBP_Title_Slider_C.ExecuteUbergraph_WBP_Title_Slider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Slider_C::ExecuteUbergraph_WBP_Title_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Slider.WBP_Title_Slider_C.ExecuteUbergraph_WBP_Title_Slider");
		
		UWBP_Title_Slider_C_ExecuteUbergraph_WBP_Title_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Title_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Title_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Title_Slider.WBP_Title_Slider_C");
		return ptr;
	}

}


