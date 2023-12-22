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
	 * 		Name   -> Function BI_RRM_Manager.BI_RRM_Manager_C.DebugWinRoundRoxy
	 * 		Flags  -> ()
	 */
	void UBI_RRM_Manager_C::DebugWinRoundRoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RRM_Manager.BI_RRM_Manager_C.DebugWinRoundRoxy");
		
		UBI_RRM_Manager_C_DebugWinRoundRoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RRM_Manager.BI_RRM_Manager_C.WalkieTalkieOff
	 * 		Flags  -> ()
	 */
	void UBI_RRM_Manager_C::WalkieTalkieOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RRM_Manager.BI_RRM_Manager_C.WalkieTalkieOff");
		
		UBI_RRM_Manager_C_WalkieTalkieOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RRM_Manager.BI_RRM_Manager_C.WalkieTalkieOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeOnSeconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RRM_Manager_C::WalkieTalkieOn(float TimeOnSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RRM_Manager.BI_RRM_Manager_C.WalkieTalkieOn");
		
		UBI_RRM_Manager_C_WalkieTalkieOn_Params params {};
		params.TimeOnSeconds = TimeOnSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RRM_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RRM_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RRM_Manager.BI_RRM_Manager_C");
		return ptr;
	}

}


