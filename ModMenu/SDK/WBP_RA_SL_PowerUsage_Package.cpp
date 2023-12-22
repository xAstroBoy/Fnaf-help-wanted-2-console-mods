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
	 * 		Name   -> Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.ResetAllPowerUsageVisiblity
	 * 		Flags  -> ()
	 */
	void UWBP_RA_SL_PowerUsage_C::ResetAllPowerUsageVisiblity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.ResetAllPowerUsageVisiblity");
		
		UWBP_RA_SL_PowerUsage_C_ResetAllPowerUsageVisiblity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.UsageDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentPowerDrain                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RA_SL_PowerUsage_C::UsageDisplay(float CurrentPowerDrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.UsageDisplay");
		
		UWBP_RA_SL_PowerUsage_C_UsageDisplay_Params params {};
		params.CurrentPowerDrain = CurrentPowerDrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.UpdatePowerPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PowerPercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PowerUsage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RA_SL_PowerUsage_C::UpdatePowerPercentage(float PowerPercent, float PowerUsage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.UpdatePowerPercentage");
		
		UWBP_RA_SL_PowerUsage_C_UpdatePowerPercentage_Params params {};
		params.PowerPercent = PowerPercent;
		params.PowerUsage = PowerUsage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.DisablePowerReadout
	 * 		Flags  -> ()
	 */
	void UWBP_RA_SL_PowerUsage_C::DisablePowerReadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.DisablePowerReadout");
		
		UWBP_RA_SL_PowerUsage_C_DisablePowerReadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.ExecuteUbergraph_WBP_RA_SL_PowerUsage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RA_SL_PowerUsage_C::ExecuteUbergraph_WBP_RA_SL_PowerUsage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C.ExecuteUbergraph_WBP_RA_SL_PowerUsage");
		
		UWBP_RA_SL_PowerUsage_C_ExecuteUbergraph_WBP_RA_SL_PowerUsage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RA_SL_PowerUsage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RA_SL_PowerUsage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RA_SL_PowerUsage.WBP_RA_SL_PowerUsage_C");
		return ptr;
	}

}


