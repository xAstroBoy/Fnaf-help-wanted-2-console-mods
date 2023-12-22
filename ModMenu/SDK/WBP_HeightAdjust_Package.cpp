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
	 * 		Name   -> Function WBP_HeightAdjust.WBP_HeightAdjust_C.Get_Height_TextBlock_Text_1
	 * 		Flags  -> ()
	 */
	class FText UWBP_HeightAdjust_C::Get_Height_TextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_HeightAdjust.WBP_HeightAdjust_C.Get_Height_TextBlock_Text_1");
		
		UWBP_HeightAdjust_C_Get_Height_TextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HeightAdjust_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HeightAdjust_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HeightAdjust.WBP_HeightAdjust_C");
		return ptr;
	}

}


