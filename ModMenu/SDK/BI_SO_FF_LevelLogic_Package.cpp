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
	 * 		Name   -> Function BI_SO_FF_LevelLogic.BI_SO_FF_LevelLogic_C.GetNightDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NightDifficulty                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SO_FF_LevelLogic_C::GetNightDifficulty(int32_t* NightDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SO_FF_LevelLogic.BI_SO_FF_LevelLogic_C.GetNightDifficulty");
		
		UBI_SO_FF_LevelLogic_C_GetNightDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NightDifficulty != nullptr)
			*NightDifficulty = params.NightDifficulty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SO_FF_LevelLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SO_FF_LevelLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SO_FF_LevelLogic.BI_SO_FF_LevelLogic_C");
		return ptr;
	}

}


