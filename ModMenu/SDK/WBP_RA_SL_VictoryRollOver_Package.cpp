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
	 * 		Name   -> Function WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C.SL_NormalScreenFade
	 * 		Flags  -> ()
	 */
	void UWBP_RA_SL_VictoryRollOver_C::SL_NormalScreenFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C.SL_NormalScreenFade");
		
		UWBP_RA_SL_VictoryRollOver_C_SL_NormalScreenFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C.SL_TriggerVictoryScreen
	 * 		Flags  -> ()
	 */
	void UWBP_RA_SL_VictoryRollOver_C::SL_TriggerVictoryScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C.SL_TriggerVictoryScreen");
		
		UWBP_RA_SL_VictoryRollOver_C_SL_TriggerVictoryScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C.ExecuteUbergraph_WBP_RA_SL_VictoryRollOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_RA_SL_VictoryRollOver_C::ExecuteUbergraph_WBP_RA_SL_VictoryRollOver(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C.ExecuteUbergraph_WBP_RA_SL_VictoryRollOver");
		
		UWBP_RA_SL_VictoryRollOver_C_ExecuteUbergraph_WBP_RA_SL_VictoryRollOver_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_RA_SL_VictoryRollOver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RA_SL_VictoryRollOver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C");
		return ptr;
	}

}


