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
	 * 		Name   -> Function BI_TB_Foxy_PlayerInterface.BI_TB_Foxy_PlayerInterface_C.TriggerCameraFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToFade                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_TB_Foxy_PlayerInterface_C::TriggerCameraFade(bool ToFade, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_PlayerInterface.BI_TB_Foxy_PlayerInterface_C.TriggerCameraFade");
		
		UBI_TB_Foxy_PlayerInterface_C_TriggerCameraFade_Params params {};
		params.ToFade = ToFade;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_TB_Foxy_PlayerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_TB_Foxy_PlayerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_TB_Foxy_PlayerInterface.BI_TB_Foxy_PlayerInterface_C");
		return ptr;
	}

}


