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
	 * 		Name   -> Function BI_TB_Foxy_SoundTriggers.BI_TB_Foxy_SoundTriggers_C.OnClimbCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsClimbing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_TB_Foxy_SoundTriggers_C::OnClimbCall(bool IsClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_SoundTriggers.BI_TB_Foxy_SoundTriggers_C.OnClimbCall");
		
		UBI_TB_Foxy_SoundTriggers_C_OnClimbCall_Params params {};
		params.IsClimbing = IsClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_TB_Foxy_SoundTriggers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_TB_Foxy_SoundTriggers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_TB_Foxy_SoundTriggers.BI_TB_Foxy_SoundTriggers_C");
		return ptr;
	}

}


