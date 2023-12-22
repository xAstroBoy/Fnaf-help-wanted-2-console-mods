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
	 * 		Name   -> Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.StopTimerSound
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_Monitor_C::StopTimerSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.StopTimerSound");
		
		UBI_BS_RM_Monitor_C_StopTimerSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ResetShowTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMinutes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewSeconds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Monitor_C::ResetShowTime(float NewMinutes, float NewSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ResetShowTime");
		
		UBI_BS_RM_Monitor_C_ResetShowTime_Params params {};
		params.NewMinutes = NewMinutes;
		params.NewSeconds = NewSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ClearPowerMeter
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_Monitor_C::ClearPowerMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ClearPowerMeter");
		
		UBI_BS_RM_Monitor_C_ClearPowerMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ResetPowerMeterUI
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_Monitor_C::ResetPowerMeterUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.ResetPowerMeterUI");
		
		UBI_BS_RM_Monitor_C_ResetPowerMeterUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.UpdatePowerMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewHeightPercentage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Monitor_C::UpdatePowerMeter(float NewHeightPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.UpdatePowerMeter");
		
		UBI_BS_RM_Monitor_C_UpdatePowerMeter_Params params {};
		params.NewHeightPercentage = NewHeightPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.UpdateShowtime
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_Monitor_C::UpdateShowtime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Monitor.BI_BS_RM_Monitor_C.UpdateShowtime");
		
		UBI_BS_RM_Monitor_C_UpdateShowtime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_BS_RM_Monitor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_BS_RM_Monitor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_BS_RM_Monitor.BI_BS_RM_Monitor_C");
		return ptr;
	}

}


