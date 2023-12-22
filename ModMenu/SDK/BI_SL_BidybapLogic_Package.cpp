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
	 * 		Name   -> Function BI_SL_BidybapLogic.BI_SL_BidybapLogic_C.BidybapAtVentDoor
	 * 		Flags  -> ()
	 */
	void UBI_SL_BidybapLogic_C::BidybapAtVentDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BidybapLogic.BI_SL_BidybapLogic_C.BidybapAtVentDoor");
		
		UBI_SL_BidybapLogic_C_BidybapAtVentDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BidybapLogic.BI_SL_BidybapLogic_C.BidybapForcingJumpscare
	 * 		Flags  -> ()
	 */
	void UBI_SL_BidybapLogic_C::BidybapForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BidybapLogic.BI_SL_BidybapLogic_C.BidybapForcingJumpscare");
		
		UBI_SL_BidybapLogic_C_BidybapForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BidybapLogic.BI_SL_BidybapLogic_C.SetBidybapOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_SL_BidybapLogic_C::SetBidybapOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BidybapLogic.BI_SL_BidybapLogic_C.SetBidybapOwnerReference");
		
		UBI_SL_BidybapLogic_C_SetBidybapOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_BidybapLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_BidybapLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_BidybapLogic.BI_SL_BidybapLogic_C");
		return ptr;
	}

}


