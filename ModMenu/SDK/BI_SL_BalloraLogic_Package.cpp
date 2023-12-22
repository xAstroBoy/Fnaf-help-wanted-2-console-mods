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
	 * 		Name   -> Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.SetBalloraDoorClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoorIsClosed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_BalloraLogic_C::SetBalloraDoorClosed(bool DoorIsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.SetBalloraDoorClosed");
		
		UBI_SL_BalloraLogic_C_SetBalloraDoorClosed_Params params {};
		params.DoorIsClosed = DoorIsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.BalloraHasLeftArea
	 * 		Flags  -> ()
	 */
	void UBI_SL_BalloraLogic_C::BalloraHasLeftArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.BalloraHasLeftArea");
		
		UBI_SL_BalloraLogic_C_BalloraHasLeftArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.BalloraAtDoor
	 * 		Flags  -> ()
	 */
	void UBI_SL_BalloraLogic_C::BalloraAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.BalloraAtDoor");
		
		UBI_SL_BalloraLogic_C_BalloraAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.BalloraForcingJumpscare
	 * 		Flags  -> ()
	 */
	void UBI_SL_BalloraLogic_C::BalloraForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.BalloraForcingJumpscare");
		
		UBI_SL_BalloraLogic_C_BalloraForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.SetBalloraOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_SL_BalloraLogic_C::SetBalloraOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BalloraLogic.BI_SL_BalloraLogic_C.SetBalloraOwnerReference");
		
		UBI_SL_BalloraLogic_C_SetBalloraOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_BalloraLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_BalloraLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_BalloraLogic.BI_SL_BalloraLogic_C");
		return ptr;
	}

}


