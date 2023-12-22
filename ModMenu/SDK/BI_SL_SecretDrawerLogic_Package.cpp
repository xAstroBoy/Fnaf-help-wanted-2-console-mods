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
	 * 		Name   -> Function BI_SL_SecretDrawerLogic.BI_SL_SecretDrawerLogic_C.CodeEnteredSuccessfully
	 * 		Flags  -> ()
	 */
	void UBI_SL_SecretDrawerLogic_C::CodeEnteredSuccessfully()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_SecretDrawerLogic.BI_SL_SecretDrawerLogic_C.CodeEnteredSuccessfully");
		
		UBI_SL_SecretDrawerLogic_C_CodeEnteredSuccessfully_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_SecretDrawerLogic.BI_SL_SecretDrawerLogic_C.AllowInteractionWithDrawer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_SecretDrawerLogic_C::AllowInteractionWithDrawer(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_SecretDrawerLogic.BI_SL_SecretDrawerLogic_C.AllowInteractionWithDrawer");
		
		UBI_SL_SecretDrawerLogic_C_AllowInteractionWithDrawer_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_SecretDrawerLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_SecretDrawerLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_SecretDrawerLogic.BI_SL_SecretDrawerLogic_C");
		return ptr;
	}

}


