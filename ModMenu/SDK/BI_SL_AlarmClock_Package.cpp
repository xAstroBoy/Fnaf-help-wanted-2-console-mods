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
	 * 		Name   -> Function BI_SL_AlarmClock.BI_SL_AlarmClock_C.BreakAlarmClock
	 * 		Flags  -> ()
	 */
	void UBI_SL_AlarmClock_C::BreakAlarmClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_AlarmClock.BI_SL_AlarmClock_C.BreakAlarmClock");
		
		UBI_SL_AlarmClock_C_BreakAlarmClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_AlarmClock.BI_SL_AlarmClock_C.UpdateClockTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentHour                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_AlarmClock_C::UpdateClockTime(int32_t CurrentHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_AlarmClock.BI_SL_AlarmClock_C.UpdateClockTime");
		
		UBI_SL_AlarmClock_C_UpdateClockTime_Params params {};
		params.CurrentHour = CurrentHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_AlarmClock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_AlarmClock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_AlarmClock.BI_SL_AlarmClock_C");
		return ptr;
	}

}


