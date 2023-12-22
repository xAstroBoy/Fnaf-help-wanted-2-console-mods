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
	 * 		Name   -> PredefinedFunction ABP_Faztoken_SL3Desk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Faztoken_SL3Desk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Faztoken_SL3Desk.BP_Faztoken_SL3Desk_C");
		return ptr;
	}

}


