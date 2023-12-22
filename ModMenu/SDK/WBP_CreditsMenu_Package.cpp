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
	 * 		Name   -> Function WBP_CreditsMenu.WBP_CreditsMenu_C.SetupCredits
	 * 		Flags  -> ()
	 */
	void UWBP_CreditsMenu_C::SetupCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsMenu.WBP_CreditsMenu_C.SetupCredits");
		
		UWBP_CreditsMenu_C_SetupCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CreditsMenu.WBP_CreditsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CreditsMenu_C::BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsMenu.WBP_CreditsMenu_C.BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UWBP_CreditsMenu_C_BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CreditsMenu.WBP_CreditsMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreditsMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsMenu.WBP_CreditsMenu_C.PreConstruct");
		
		UWBP_CreditsMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CreditsMenu.WBP_CreditsMenu_C.ExecuteUbergraph_WBP_CreditsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreditsMenu_C::ExecuteUbergraph_WBP_CreditsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsMenu.WBP_CreditsMenu_C.ExecuteUbergraph_WBP_CreditsMenu");
		
		UWBP_CreditsMenu_C_ExecuteUbergraph_WBP_CreditsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CreditsMenu.WBP_CreditsMenu_C.OnClickedCreditsBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_CreditsMenu_C::OnClickedCreditsBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreditsMenu.WBP_CreditsMenu_C.OnClickedCreditsBackButton__DelegateSignature");
		
		UWBP_CreditsMenu_C_OnClickedCreditsBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CreditsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CreditsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CreditsMenu.WBP_CreditsMenu_C");
		return ptr;
	}

}


