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
	 * 		Name   -> Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_ChicaHasClaimedIt
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_CupcakeLogic_C::Cupcake_ChicaHasClaimedIt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_ChicaHasClaimedIt");
		
		UBI_RA_SL_CupcakeLogic_C_Cupcake_ChicaHasClaimedIt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_GetCurrentZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               CurrentZone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_CupcakeLogic_C::Cupcake_GetCurrentZone(Enum_RA_SL_AreaZones* CurrentZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_GetCurrentZone");
		
		UBI_RA_SL_CupcakeLogic_C_Cupcake_GetCurrentZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentZone != nullptr)
			*CurrentZone = params.CurrentZone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_UpdateZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               NewZone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_CupcakeLogic_C::Cupcake_UpdateZone(Enum_RA_SL_AreaZones NewZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_UpdateZone");
		
		UBI_RA_SL_CupcakeLogic_C_Cupcake_UpdateZone_Params params {};
		params.NewZone = NewZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_CupcakeLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_CupcakeLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C");
		return ptr;
	}

}


