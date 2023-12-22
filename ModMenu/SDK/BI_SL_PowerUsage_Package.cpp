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
	 * 		Name   -> Function BI_SL_PowerUsage.BI_SL_PowerUsage_C.DisablePowerReadout
	 * 		Flags  -> ()
	 */
	void UBI_SL_PowerUsage_C::DisablePowerReadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PowerUsage.BI_SL_PowerUsage_C.DisablePowerReadout");
		
		UBI_SL_PowerUsage_C_DisablePowerReadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PowerUsage.BI_SL_PowerUsage_C.UpdatePowerPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PowerPercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PowerUsage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_PowerUsage_C::UpdatePowerPercentage(float PowerPercent, float PowerUsage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PowerUsage.BI_SL_PowerUsage_C.UpdatePowerPercentage");
		
		UBI_SL_PowerUsage_C_UpdatePowerPercentage_Params params {};
		params.PowerPercent = PowerPercent;
		params.PowerUsage = PowerUsage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_PowerUsage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_PowerUsage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_PowerUsage.BI_SL_PowerUsage_C");
		return ptr;
	}

}


