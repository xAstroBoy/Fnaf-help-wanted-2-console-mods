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
	 * 		Name   -> Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardDoorPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnablePlayrate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RA_SL_EnnardLogic_C::SetEnnardDoorPlayRate(bool EnablePlayrate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardDoorPlayRate");
		
		UBI_RA_SL_EnnardLogic_C_SetEnnardDoorPlayRate_Params params {};
		params.EnablePlayrate = EnablePlayrate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardIsWaitingAtDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWaiting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RA_SL_EnnardLogic_C::SetEnnardIsWaitingAtDoor(bool IsWaiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardIsWaitingAtDoor");
		
		UBI_RA_SL_EnnardLogic_C_SetEnnardIsWaitingAtDoor_Params params {};
		params.IsWaiting = IsWaiting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.EnnardForceTriggeringJumpscare
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_EnnardLogic_C::EnnardForceTriggeringJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.EnnardForceTriggeringJumpscare");
		
		UBI_RA_SL_EnnardLogic_C_EnnardForceTriggeringJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_EnnardLogic_C::SetEnnardOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardOwnerReference");
		
		UBI_RA_SL_EnnardLogic_C_SetEnnardOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_EnnardLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_EnnardLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C");
		return ptr;
	}

}


