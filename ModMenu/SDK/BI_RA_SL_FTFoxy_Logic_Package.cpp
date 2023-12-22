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
	 * 		Name   -> Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.AdvanceFoxyPosition
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFoxy_Logic_C::AdvanceFoxyPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.AdvanceFoxyPosition");
		
		UBI_RA_SL_FTFoxy_Logic_C_AdvanceFoxyPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetFoxyOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_FTFoxy_Logic_C::SetFoxyOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetFoxyOwnerReference");
		
		UBI_RA_SL_FTFoxy_Logic_C_SetFoxyOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RA_SL_FTFoxy_Logic_C::SetRunning(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetRunning");
		
		UBI_RA_SL_FTFoxy_Logic_C_SetRunning_Params params {};
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetSpotId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetCurrentID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_FTFoxy_Logic_C::SetSpotId(int32_t SetCurrentID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C.SetSpotId");
		
		UBI_RA_SL_FTFoxy_Logic_C_SetSpotId_Params params {};
		params.SetCurrentID = SetCurrentID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_FTFoxy_Logic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_FTFoxy_Logic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C");
		return ptr;
	}

}


