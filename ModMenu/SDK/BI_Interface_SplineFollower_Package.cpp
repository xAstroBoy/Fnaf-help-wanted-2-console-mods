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
	 * 		Name   -> Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.StartMovementAlongSpline
	 * 		Flags  -> ()
	 */
	void UBI_Interface_SplineFollower_C::StartMovementAlongSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.StartMovementAlongSpline");
		
		UBI_Interface_SplineFollower_C_StartMovementAlongSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.SetSplineFollowerContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBI_Interface_SplineFollower_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.SetSplineFollowerContext");
		
		UBI_Interface_SplineFollower_C_SetSplineFollowerContext_Params params {};
		params.SplineFollowerContext = SplineFollowerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.GetSplineFollowerContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBI_Interface_SplineFollower_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.GetSplineFollowerContext");
		
		UBI_Interface_SplineFollower_C_GetSplineFollowerContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineFollowerContext != nullptr)
			*SplineFollowerContext = params.SplineFollowerContext;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.GetPossibleSplinePaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_SplinePathway_C*>                 PossiblePaths                                              (Parm, OutParm)
	 */
	void UBI_Interface_SplineFollower_C::GetPossibleSplinePaths(TArray<class ABP_SplinePathway_C*>* PossiblePaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.GetPossibleSplinePaths");
		
		UBI_Interface_SplineFollower_C_GetPossibleSplinePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossiblePaths != nullptr)
			*PossiblePaths = params.PossiblePaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_Interface_SplineFollower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_Interface_SplineFollower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_Interface_SplineFollower.BI_Interface_SplineFollower_C");
		return ptr;
	}

}


