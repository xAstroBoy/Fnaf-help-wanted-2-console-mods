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
	 * 		Name   -> PredefinedFunction USequenceDirector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceDirector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LS_BS_RRM_LightsOutSequence_2.SequenceDirector_C");
		return ptr;
	}

}


