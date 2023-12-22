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
	 * 		Name   -> Function BP_SplinePathFork.BP_SplinePathFork_C.GetPossibleForks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SplineFollowerActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathway_C*>                 PossibleSplines                                            (Parm, OutParm)
	 */
	void ABP_SplinePathFork_C::GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ABP_SplinePathway_C*>* PossibleSplines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathFork.BP_SplinePathFork_C.GetPossibleForks");
		
		ABP_SplinePathFork_C_GetPossibleForks_Params params {};
		params.SplineFollowerActor = SplineFollowerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossibleSplines != nullptr)
			*PossibleSplines = params.PossibleSplines;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SplinePathFork_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SplinePathFork_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplinePathFork.BP_SplinePathFork_C");
		return ptr;
	}

}


