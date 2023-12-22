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
	 * 		Name   -> Function BP_FizzyFazLevelInformation.BP_FizzyFazLevelInformation_C.GetNightDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NightDifficulty                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FizzyFazLevelInformation_C::GetNightDifficulty(int32_t* NightDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FizzyFazLevelInformation.BP_FizzyFazLevelInformation_C.GetNightDifficulty");
		
		UBP_FizzyFazLevelInformation_C_GetNightDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NightDifficulty != nullptr)
			*NightDifficulty = params.NightDifficulty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FizzyFazLevelInformation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FizzyFazLevelInformation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FizzyFazLevelInformation.BP_FizzyFazLevelInformation_C");
		return ptr;
	}

}


