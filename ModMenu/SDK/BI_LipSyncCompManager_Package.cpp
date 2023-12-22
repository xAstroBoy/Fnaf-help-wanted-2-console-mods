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
	 * 		Name   -> Function BI_LipSyncCompManager.BI_LipSyncCompManager_C.StopJawFlap
	 * 		Flags  -> ()
	 */
	void UBI_LipSyncCompManager_C::StopJawFlap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LipSyncCompManager.BI_LipSyncCompManager_C.StopJawFlap");
		
		UBI_LipSyncCompManager_C_StopJawFlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_LipSyncCompManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_LipSyncCompManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_LipSyncCompManager.BI_LipSyncCompManager_C");
		return ptr;
	}

}


