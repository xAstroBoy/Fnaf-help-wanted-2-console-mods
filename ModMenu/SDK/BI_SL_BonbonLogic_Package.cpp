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
	 * 		Name   -> Function BI_SL_BonbonLogic.BI_SL_BonbonLogic_C.BonbonAtDoor
	 * 		Flags  -> ()
	 */
	void UBI_SL_BonbonLogic_C::BonbonAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BonbonLogic.BI_SL_BonbonLogic_C.BonbonAtDoor");
		
		UBI_SL_BonbonLogic_C_BonbonAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BonbonLogic.BI_SL_BonbonLogic_C.BonbonForcingJumpscare
	 * 		Flags  -> ()
	 */
	void UBI_SL_BonbonLogic_C::BonbonForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BonbonLogic.BI_SL_BonbonLogic_C.BonbonForcingJumpscare");
		
		UBI_SL_BonbonLogic_C_BonbonForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BonbonLogic.BI_SL_BonbonLogic_C.SetBonbonOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_SL_BonbonLogic_C::SetBonbonOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BonbonLogic.BI_SL_BonbonLogic_C.SetBonbonOwnerReference");
		
		UBI_SL_BonbonLogic_C_SetBonbonOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_BonbonLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_BonbonLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_BonbonLogic.BI_SL_BonbonLogic_C");
		return ptr;
	}

}


