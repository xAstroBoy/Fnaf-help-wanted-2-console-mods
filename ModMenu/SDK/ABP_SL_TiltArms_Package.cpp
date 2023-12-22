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
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.GetAnimPoseEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_FC_BonkABon_AnimMode                          AnimEnum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SL_TiltArms_C::GetAnimPoseEnum(Enum_FC_BonkABon_AnimMode* AnimEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.GetAnimPoseEnum");
		
		UABP_SL_TiltArms_C_GetAnimPoseEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimEnum != nullptr)
			*AnimEnum = params.AnimEnum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_SL_TiltArms_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.AnimGraph");
		
		UABP_SL_TiltArms_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.SetAnimPoseEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_FC_BonkABon_AnimMode                          AnimPose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SL_TiltArms_C::SetAnimPoseEnum(Enum_FC_BonkABon_AnimMode AnimPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.SetAnimPoseEnum");
		
		UABP_SL_TiltArms_C_SetAnimPoseEnum_Params params {};
		params.AnimPose = AnimPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SL_TiltArms_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.BlueprintUpdateAnimation");
		
		UABP_SL_TiltArms_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.UpdateHelpyHits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SL_TiltArms_C::UpdateHelpyHits(int32_t Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.UpdateHelpyHits");
		
		UABP_SL_TiltArms_C_UpdateHelpyHits_Params params {};
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65
	 * 		Flags  -> ()
	 */
	void UABP_SL_TiltArms_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65");
		
		UABP_SL_TiltArms_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.MoveFinished
	 * 		Flags  -> ()
	 */
	void UABP_SL_TiltArms_C::MoveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.MoveFinished");
		
		UABP_SL_TiltArms_C_MoveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018
	 * 		Flags  -> ()
	 */
	void UABP_SL_TiltArms_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018");
		
		UABP_SL_TiltArms_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.ExecuteUbergraph_ABP_SL_TiltArms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_SL_TiltArms_C::ExecuteUbergraph_ABP_SL_TiltArms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.ExecuteUbergraph_ABP_SL_TiltArms");
		
		UABP_SL_TiltArms_C_ExecuteUbergraph_ABP_SL_TiltArms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_SL_TiltArms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_SL_TiltArms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_SL_TiltArms.ABP_SL_TiltArms_C");
		return ptr;
	}

}


