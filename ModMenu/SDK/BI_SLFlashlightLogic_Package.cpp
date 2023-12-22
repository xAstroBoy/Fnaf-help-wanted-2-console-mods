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
	 * 		Name   -> Function BI_SLFlashlightLogic.BI_SLFlashlightLogic_C.OverrideDisableFlashlight
	 * 		Flags  -> ()
	 */
	void UBI_SLFlashlightLogic_C::OverrideDisableFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SLFlashlightLogic.BI_SLFlashlightLogic_C.OverrideDisableFlashlight");
		
		UBI_SLFlashlightLogic_C_OverrideDisableFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SLFlashlightLogic.BI_SLFlashlightLogic_C.EnticePlayer
	 * 		Flags  -> ()
	 */
	void UBI_SLFlashlightLogic_C::EnticePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SLFlashlightLogic.BI_SLFlashlightLogic_C.EnticePlayer");
		
		UBI_SLFlashlightLogic_C_EnticePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SLFlashlightLogic.BI_SLFlashlightLogic_C.FlickerFlashlight
	 * 		Flags  -> ()
	 */
	void UBI_SLFlashlightLogic_C::FlickerFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SLFlashlightLogic.BI_SLFlashlightLogic_C.FlickerFlashlight");
		
		UBI_SLFlashlightLogic_C_FlickerFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SLFlashlightLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SLFlashlightLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SLFlashlightLogic.BI_SLFlashlightLogic_C");
		return ptr;
	}

}


