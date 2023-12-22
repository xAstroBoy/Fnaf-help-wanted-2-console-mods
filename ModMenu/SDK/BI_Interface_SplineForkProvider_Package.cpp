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
	 * 		Name   -> Function BI_Interface_SplineForkProvider.BI_Interface_SplineForkProvider_C.GetPossibleForks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SplineFollowerActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathway_C*>                 PossibleSplines                                            (Parm, OutParm)
	 */
	void UBI_Interface_SplineForkProvider_C::GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ABP_SplinePathway_C*>* PossibleSplines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_Interface_SplineForkProvider.BI_Interface_SplineForkProvider_C.GetPossibleForks");
		
		UBI_Interface_SplineForkProvider_C_GetPossibleForks_Params params {};
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
	 * 		Name   -> PredefinedFunction UBI_Interface_SplineForkProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_Interface_SplineForkProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_Interface_SplineForkProvider.BI_Interface_SplineForkProvider_C");
		return ptr;
	}

}


