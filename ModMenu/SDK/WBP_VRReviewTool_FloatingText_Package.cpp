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
	 * 		Name   -> PredefinedFunction UWBP_VRReviewTool_FloatingText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_VRReviewTool_FloatingText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VRReviewTool_FloatingText.WBP_VRReviewTool_FloatingText_C");
		return ptr;
	}

}


