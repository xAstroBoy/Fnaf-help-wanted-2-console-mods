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
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaHasCupcake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasCupcake                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaHasCupcake(bool* HasCupcake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaHasCupcake");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaHasCupcake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasCupcake != nullptr)
			*HasCupcake = params.HasCupcake;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaLeanIn
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaLeanIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaLeanIn");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaLeanIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaExited
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaExited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaExited");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaExited_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaGivenCupcake
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaGivenCupcake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaGivenCupcake");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaGivenCupcake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaTriggerJumpscare
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaTriggerJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaTriggerJumpscare");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaTriggerJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaSetOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaSetOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaSetOwnerReference");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaSetOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaOnCupcakeBeingMoved
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFChicaLogic_C::FTChicaOnCupcakeBeingMoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C.FTChicaOnCupcakeBeingMoved");
		
		UBI_RA_SL_FTFChicaLogic_C_FTChicaOnCupcakeBeingMoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_FTFChicaLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_FTFChicaLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C");
		return ptr;
	}

}


