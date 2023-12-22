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
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.UpdateSelectionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Title_Combo_Box_C::UpdateSelectionText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.UpdateSelectionText");
		
		UWBP_Title_Combo_Box_C_UpdateSelectionText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.GetSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Combo_Box_C::GetSelection(int32_t* Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.GetSelection");
		
		UWBP_Title_Combo_Box_C_GetSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Selection != nullptr)
			*Selection = params.Selection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.SetSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Combo_Box_C::SetSelection(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.SetSelection");
		
		UWBP_Title_Combo_Box_C_SetSelection_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.UpdateSelectedOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Combo_Box_C::UpdateSelectedOption(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.UpdateSelectedOption");
		
		UWBP_Title_Combo_Box_C_UpdateSelectedOption_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.CycleThoughOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutSeletion                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Combo_Box_C::CycleThoughOptions(int32_t Direction, int32_t CurrentSelection, int32_t* OutSeletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.CycleThoughOptions");
		
		UWBP_Title_Combo_Box_C_CycleThoughOptions_Params params {};
		params.Direction = Direction;
		params.CurrentSelection = CurrentSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSeletion != nullptr)
			*OutSeletion = params.OutSeletion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Title_Combo_Box_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.PreConstruct");
		
		UWBP_Title_Combo_Box_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Title_Combo_Box_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.Construct");
		
		UWBP_Title_Combo_Box_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Title_Combo_Box_C::BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Title_Combo_Box_C_BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Title_Combo_Box_C::BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Title_Combo_Box_C_BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Title_Combo_Box_C::BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWBP_Title_Combo_Box_C_BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.ExecuteUbergraph_WBP_Title_Combo_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Combo_Box_C::ExecuteUbergraph_WBP_Title_Combo_Box(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.ExecuteUbergraph_WBP_Title_Combo_Box");
		
		UWBP_Title_Combo_Box_C_ExecuteUbergraph_WBP_Title_Combo_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.OnChangedSelection__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Title_Combo_Box_C::OnChangedSelection__DelegateSignature(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.OnChangedSelection__DelegateSignature");
		
		UWBP_Title_Combo_Box_C_OnChangedSelection__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Title_Combo_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Title_Combo_Box_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Title_Combo_Box.WBP_Title_Combo_Box_C");
		return ptr;
	}

}


