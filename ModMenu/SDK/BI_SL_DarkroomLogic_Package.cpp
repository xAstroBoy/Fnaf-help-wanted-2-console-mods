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
	 * 		Name   -> Function BI_SL_DarkroomLogic.BI_SL_DarkroomLogic_C.TriggerJumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         TriggeringAnimatronic                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_DarkroomLogic_C::TriggerJumpscare(Enum_RA_SL_AnimatronicType TriggeringAnimatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_DarkroomLogic.BI_SL_DarkroomLogic_C.TriggerJumpscare");
		
		UBI_SL_DarkroomLogic_C_TriggerJumpscare_Params params {};
		params.TriggeringAnimatronic = TriggeringAnimatronic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_DarkroomLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_DarkroomLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_DarkroomLogic.BI_SL_DarkroomLogic_C");
		return ptr;
	}

}


