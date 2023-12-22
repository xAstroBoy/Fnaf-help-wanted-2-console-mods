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
	 * 		Name   -> PredefinedFunction ABP_Audio_TestVisualizer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Audio_TestVisualizer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_TestVisualizer.BP_Audio_TestVisualizer_C");
		return ptr;
	}

}


