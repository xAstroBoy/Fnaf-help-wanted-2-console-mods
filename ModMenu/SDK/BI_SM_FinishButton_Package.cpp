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
	 * 		Name   -> Function BI_SM_FinishButton.BI_SM_FinishButton_C.UsedHandToPressButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasPressedWithHand                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SM_FinishButton_C::UsedHandToPressButton(bool* WasPressedWithHand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SM_FinishButton.BI_SM_FinishButton_C.UsedHandToPressButton");
		
		UBI_SM_FinishButton_C_UsedHandToPressButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasPressedWithHand != nullptr)
			*WasPressedWithHand = params.WasPressedWithHand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SM_FinishButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SM_FinishButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SM_FinishButton.BI_SM_FinishButton_C");
		return ptr;
	}

}


