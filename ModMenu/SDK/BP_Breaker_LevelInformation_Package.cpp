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
	 * 		Name   -> Function BP_Breaker_LevelInformation.BP_Breaker_LevelInformation_C.GetBreakerRoomNightDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_FTF_LevelDifficulty                        Difficulty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Breaker_LevelInformation_C::GetBreakerRoomNightDifficulty(Enum_RA_FTF_LevelDifficulty* Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Breaker_LevelInformation.BP_Breaker_LevelInformation_C.GetBreakerRoomNightDifficulty");
		
		UBP_Breaker_LevelInformation_C_GetBreakerRoomNightDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difficulty != nullptr)
			*Difficulty = params.Difficulty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Breaker_LevelInformation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Breaker_LevelInformation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Breaker_LevelInformation.BP_Breaker_LevelInformation_C");
		return ptr;
	}

}


