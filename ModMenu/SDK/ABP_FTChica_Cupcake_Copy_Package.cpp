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
	 * 		Name   -> Function ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_FTChica_Cupcake_Copy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C.AnimGraph");
		
		UABP_FTChica_Cupcake_Copy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_Copy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C.BlueprintUpdateAnimation");
		
		UABP_FTChica_Cupcake_Copy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C.ExecuteUbergraph_ABP_FTChica_Cupcake_Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_Copy_C::ExecuteUbergraph_ABP_FTChica_Cupcake_Copy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C.ExecuteUbergraph_ABP_FTChica_Cupcake_Copy");
		
		UABP_FTChica_Cupcake_Copy_C_ExecuteUbergraph_ABP_FTChica_Cupcake_Copy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FTChica_Cupcake_Copy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FTChica_Cupcake_Copy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FTChica_Cupcake_Copy.ABP_FTChica_Cupcake_Copy_C");
		return ptr;
	}

}


