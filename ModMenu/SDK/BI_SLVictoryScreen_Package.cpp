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
	 * 		Name   -> Function BI_SLVictoryScreen.BI_SLVictoryScreen_C.SL_NormalScreenFade
	 * 		Flags  -> ()
	 */
	void UBI_SLVictoryScreen_C::SL_NormalScreenFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SLVictoryScreen.BI_SLVictoryScreen_C.SL_NormalScreenFade");
		
		UBI_SLVictoryScreen_C_SL_NormalScreenFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SLVictoryScreen.BI_SLVictoryScreen_C.SL_TriggerVictoryScreen
	 * 		Flags  -> ()
	 */
	void UBI_SLVictoryScreen_C::SL_TriggerVictoryScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SLVictoryScreen.BI_SLVictoryScreen_C.SL_TriggerVictoryScreen");
		
		UBI_SLVictoryScreen_C_SL_TriggerVictoryScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SLVictoryScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SLVictoryScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SLVictoryScreen.BI_SLVictoryScreen_C");
		return ptr;
	}

}


