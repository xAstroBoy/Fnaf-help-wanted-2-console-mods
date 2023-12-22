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
	 * 		Name   -> Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.SetTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SubtitlesWidget_C::SetTextVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.SetTextVisible");
		
		UWBP_SubtitlesWidget_C_SetTextVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.OnShowSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_SubtitlesWidget_C::OnShowSubtitles(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.OnShowSubtitles");
		
		UWBP_SubtitlesWidget_C_OnShowSubtitles_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.UpdateSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Speaker                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_SubtitlesWidget_C::UpdateSubtitles(const class FText& Speaker, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.UpdateSubtitles");
		
		UWBP_SubtitlesWidget_C_UpdateSubtitles_Params params {};
		params.Speaker = Speaker;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_SubtitlesWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.Construct");
		
		UWBP_SubtitlesWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.SetupSubtitleStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubtitlesSize                                     Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SubtitlesWidget_C::SetupSubtitleStyle(ESubtitlesSize Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.SetupSubtitleStyle");
		
		UWBP_SubtitlesWidget_C_SetupSubtitleStyle_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.ExecuteUbergraph_WBP_SubtitlesWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_SubtitlesWidget_C::ExecuteUbergraph_WBP_SubtitlesWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_SubtitlesWidget.WBP_SubtitlesWidget_C.ExecuteUbergraph_WBP_SubtitlesWidget");
		
		UWBP_SubtitlesWidget_C_ExecuteUbergraph_WBP_SubtitlesWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_SubtitlesWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_SubtitlesWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SubtitlesWidget.WBP_SubtitlesWidget_C");
		return ptr;
	}

}


