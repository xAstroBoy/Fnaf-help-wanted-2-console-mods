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
	 * 		Name   -> PredefinedFunction UWBP_VRReviewWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VRReviewWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VRReviewWidget.WBP_VRReviewWidget_C");
		return ptr;
	}

}


