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
	 * 		Name   -> Function BI_RA_SL_LevelLogic.BI_RA_SL_LevelLogic_C.GetNightData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_GameType                                GameMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_LevelLogic_C::GetNightData(Enum_RA_SL_GameType* GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_LevelLogic.BI_RA_SL_LevelLogic_C.GetNightData");
		
		UBI_RA_SL_LevelLogic_C_GetNightData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameMode != nullptr)
			*GameMode = params.GameMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_LevelLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_LevelLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_LevelLogic.BI_RA_SL_LevelLogic_C");
		return ptr;
	}

}


