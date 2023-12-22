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
	 * 		Name   -> Function BI_SL_BreakerRoomLevelData.BI_SL_BreakerRoomLevelData_C.GetBreakerRoomNightDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_FTF_LevelDifficulty                        Difficulty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_BreakerRoomLevelData_C::GetBreakerRoomNightDifficulty(Enum_RA_FTF_LevelDifficulty* Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_BreakerRoomLevelData.BI_SL_BreakerRoomLevelData_C.GetBreakerRoomNightDifficulty");
		
		UBI_SL_BreakerRoomLevelData_C_GetBreakerRoomNightDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difficulty != nullptr)
			*Difficulty = params.Difficulty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_BreakerRoomLevelData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_BreakerRoomLevelData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_BreakerRoomLevelData.BI_SL_BreakerRoomLevelData_C");
		return ptr;
	}

}


