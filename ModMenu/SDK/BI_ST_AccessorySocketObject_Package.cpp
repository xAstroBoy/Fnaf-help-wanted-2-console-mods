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
	 * 		Name   -> Function BI_ST_AccessorySocketObject.BI_ST_AccessorySocketObject_C.MarkBeingDestoryedAfterRound
	 * 		Flags  -> ()
	 */
	void UBI_ST_AccessorySocketObject_C::MarkBeingDestoryedAfterRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_ST_AccessorySocketObject.BI_ST_AccessorySocketObject_C.MarkBeingDestoryedAfterRound");
		
		UBI_ST_AccessorySocketObject_C_MarkBeingDestoryedAfterRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_ST_AccessorySocketObject.BI_ST_AccessorySocketObject_C.OnBoundryHit
	 * 		Flags  -> ()
	 */
	void UBI_ST_AccessorySocketObject_C::OnBoundryHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_ST_AccessorySocketObject.BI_ST_AccessorySocketObject_C.OnBoundryHit");
		
		UBI_ST_AccessorySocketObject_C_OnBoundryHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_ST_AccessorySocketObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_ST_AccessorySocketObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_ST_AccessorySocketObject.BI_ST_AccessorySocketObject_C");
		return ptr;
	}

}


