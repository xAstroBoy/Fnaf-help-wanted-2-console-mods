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
	 * 		Name   -> Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.UpdateClockTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentHour                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Clock_C::UpdateClockTime(int32_t CurrentHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.UpdateClockTime");
		
		ABP_RA_SL_Clock_C_UpdateClockTime_Params params {};
		params.CurrentHour = CurrentHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.BreakAlarmClock
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Clock_C::BreakAlarmClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.BreakAlarmClock");
		
		ABP_RA_SL_Clock_C_BreakAlarmClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.DEBUG_IncreaseClockHour
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Clock_C::DEBUG_IncreaseClockHour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.DEBUG_IncreaseClockHour");
		
		ABP_RA_SL_Clock_C_DEBUG_IncreaseClockHour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.DEBUG_BreakClock
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Clock_C::DEBUG_BreakClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.DEBUG_BreakClock");
		
		ABP_RA_SL_Clock_C_DEBUG_BreakClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Clock_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Clock_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.ExecuteUbergraph_BP_RA_SL_Clock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Clock_C::ExecuteUbergraph_BP_RA_SL_Clock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Clock.BP_RA_SL_Clock_C.ExecuteUbergraph_BP_RA_SL_Clock");
		
		ABP_RA_SL_Clock_C_ExecuteUbergraph_BP_RA_SL_Clock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Clock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Clock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Clock.BP_RA_SL_Clock_C");
		return ptr;
	}

}


