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
	 * 		Name   -> PredefinedFunction ABP_RM_NoseAccessory_HoopRing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RM_NoseAccessory_HoopRing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RM_NoseAccessory_HoopRing.BP_RM_NoseAccessory_HoopRing_C");
		return ptr;
	}

}


