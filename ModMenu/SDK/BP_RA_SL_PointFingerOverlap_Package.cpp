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
	 * 		Name   -> PredefinedFunction ABP_RA_SL_PointFingerOverlap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_PointFingerOverlap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_PointFingerOverlap.BP_RA_SL_PointFingerOverlap_C");
		return ptr;
	}

}


