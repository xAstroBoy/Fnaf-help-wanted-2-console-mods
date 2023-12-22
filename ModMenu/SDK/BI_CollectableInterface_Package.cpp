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
	 * 		Name   -> Function BI_CollectableInterface.BI_CollectableInterface_C.OnVannyDollRetrieved
	 * 		Flags  -> ()
	 */
	void UBI_CollectableInterface_C::OnVannyDollRetrieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_CollectableInterface.BI_CollectableInterface_C.OnVannyDollRetrieved");
		
		UBI_CollectableInterface_C_OnVannyDollRetrieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_CollectableInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_CollectableInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_CollectableInterface.BI_CollectableInterface_C");
		return ptr;
	}

}


