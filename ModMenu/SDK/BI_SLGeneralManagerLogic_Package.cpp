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
	 * 		Name   -> Function BI_SLGeneralManagerLogic.BI_SLGeneralManagerLogic_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SLGeneralManagerLogic_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SLGeneralManagerLogic.BI_SLGeneralManagerLogic_C.SL_TriggerLightFlicker");
		
		UBI_SLGeneralManagerLogic_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SLGeneralManagerLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SLGeneralManagerLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SLGeneralManagerLogic.BI_SLGeneralManagerLogic_C");
		return ptr;
	}

}


