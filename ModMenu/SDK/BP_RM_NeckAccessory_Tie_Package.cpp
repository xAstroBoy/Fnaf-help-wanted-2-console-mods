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
	 * 		Name   -> PredefinedFunction ABP_RM_NeckAccessory_Tie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RM_NeckAccessory_Tie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RM_NeckAccessory_Tie.BP_RM_NeckAccessory_Tie_C");
		return ptr;
	}

}


