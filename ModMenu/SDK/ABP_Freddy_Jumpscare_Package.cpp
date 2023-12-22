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
	 * 		Name   -> Function ABP_Freddy_Jumpscare.ABP_Freddy_Jumpscare_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Freddy_Jumpscare_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Freddy_Jumpscare.ABP_Freddy_Jumpscare_C.AnimGraph");
		
		UABP_Freddy_Jumpscare_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Freddy_Jumpscare.ABP_Freddy_Jumpscare_C.ExecuteUbergraph_ABP_Freddy_Jumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Freddy_Jumpscare_C::ExecuteUbergraph_ABP_Freddy_Jumpscare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Freddy_Jumpscare.ABP_Freddy_Jumpscare_C.ExecuteUbergraph_ABP_Freddy_Jumpscare");
		
		UABP_Freddy_Jumpscare_C_ExecuteUbergraph_ABP_Freddy_Jumpscare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Freddy_Jumpscare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Freddy_Jumpscare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Freddy_Jumpscare.ABP_Freddy_Jumpscare_C");
		return ptr;
	}

}


