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
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   EyeLayer                                                   (Parm, OutParm, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::EyeLayer(const struct FPoseLink& InPose, struct FPoseLink* EyeLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeLayer");
		
		UABP_BS_RM_Roxy_C_EyeLayer_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EyeLayer != nullptr)
			*EyeLayer = params.EyeLayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimGraph");
		
		UABP_BS_RM_Roxy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetHeadAimLocation
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::SetHeadAimLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetHeadAimLocation");
		
		UABP_BS_RM_Roxy_C_SetHeadAimLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.CompareLidToEyeRot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        EyeSocket                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LidSocket                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewAlpha                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BS_RM_Roxy_C::CompareLidToEyeRot(float* Param, const class FName& EyeSocket, const class FName& LidSocket, float* NewAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.CompareLidToEyeRot");
		
		UABP_BS_RM_Roxy_C_CompareLidToEyeRot_Params params {};
		params.EyeSocket = EyeSocket;
		params.LidSocket = LidSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Param != nullptr)
			*Param = params.Param;
		if (NewAlpha != nullptr)
			*NewAlpha = params.NewAlpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeOffsetValue
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::SetEyeOffsetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeOffsetValue");
		
		UABP_BS_RM_Roxy_C_SetEyeOffsetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeAimLocation
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::SetEyeAimLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeAimLocation");
		
		UABP_BS_RM_Roxy_C_SetEyeAimLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9");
		
		UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BS_RM_Roxy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlueprintUpdateAnimation");
		
		UABP_BS_RM_Roxy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeAim_Timer
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::SetEyeAim_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeAim_Timer");
		
		UABP_BS_RM_Roxy_C_SetEyeAim_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlueprintBeginPlay");
		
		UABP_BS_RM_Roxy_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.ClearRoxyFaceBetweenRounds
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::ClearRoxyFaceBetweenRounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.ClearRoxyFaceBetweenRounds");
		
		UABP_BS_RM_Roxy_C_ClearRoxyFaceBetweenRounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.UpdateEyeOffset
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::UpdateEyeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.UpdateEyeOffset");
		
		UABP_BS_RM_Roxy_C_UpdateEyeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeDartValue
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::SetEyeDartValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeDartValue");
		
		UABP_BS_RM_Roxy_C_SetEyeDartValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlinkTimer
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::BlinkTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlinkTimer");
		
		UABP_BS_RM_Roxy_C_BlinkTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.Blink
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::Blink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.Blink");
		
		UABP_BS_RM_Roxy_C_Blink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AddEyeDart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     EyeDartLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BS_RM_Roxy_C::AddEyeDart(const struct FVector& EyeDartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AddEyeDart");
		
		UABP_BS_RM_Roxy_C_AddEyeDart_Params params {};
		params.EyeDartLocation = EyeDartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.TiltHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TiltHead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::TiltHead(bool TiltHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.TiltHead");
		
		UABP_BS_RM_Roxy_C_TiltHead_Params params {};
		params.TiltHead = TiltHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AllEyeAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::AllEyeAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AllEyeAim");
		
		UABP_BS_RM_Roxy_C_AllEyeAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.LidAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::LidAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.LidAim");
		
		UABP_BS_RM_Roxy_C_LidAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.Blinking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::Blinking(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.Blinking");
		
		UABP_BS_RM_Roxy_C_Blinking_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeDarts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EyeDart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::EyeDarts(bool EyeDart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeDarts");
		
		UABP_BS_RM_Roxy_C_EyeDarts_Params params {};
		params.EyeDart = EyeDart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.UpdateRageValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RageLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BS_RM_Roxy_C::UpdateRageValue(float Rage, int32_t RageLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.UpdateRageValue");
		
		UABP_BS_RM_Roxy_C_UpdateRageValue_Params params {};
		params.Rage = Rage;
		params.RageLevel = RageLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.PlayerNotLooking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerNotLooking                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::PlayerNotLooking(bool PlayerNotLooking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.PlayerNotLooking");
		
		UABP_BS_RM_Roxy_C_PlayerNotLooking_Params params {};
		params.PlayerNotLooking = PlayerNotLooking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage02
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::AnimNotify_Rage02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage02");
		
		UABP_BS_RM_Roxy_C_AnimNotify_Rage02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage03
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::AnimNotify_Rage03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage03");
		
		UABP_BS_RM_Roxy_C_AnimNotify_Rage03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage01
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::AnimNotify_Rage01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage01");
		
		UABP_BS_RM_Roxy_C_AnimNotify_Rage01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Idle
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::AnimNotify_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Idle");
		
		UABP_BS_RM_Roxy_C_AnimNotify_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	///**
	// * Function:
	// * 		RVA    -> 0x00000000
	// * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EnableNotLookingADD
	// * 		Flags  -> ()
	// * Parameters:
	// * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	// */
	//void UABP_BS_RM_Roxy_C::EnableNotLookingADD(bool Aim)
	//{
	//	static UFunction* fn = nullptr;
	//	if (!fn)
	//		fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EnableNotLookingADD");
	//	
	//	UABP_BS_RM_Roxy_C_EnableNotLookingADD_Params params {};
	//	params.Aim = Aim;
	//	
	//	auto flags = fn->FunctionFlags;
	//	UObject::ProcessEvent(fn, &params);
	//	fn->FunctionFlags = flags;
	//}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.HeadAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::HeadAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.HeadAim");
		
		UABP_BS_RM_Roxy_C_HeadAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetLipSyncAmp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amplitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BS_RM_Roxy_C::SetLipSyncAmp(float Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetLipSyncAmp");
		
		UABP_BS_RM_Roxy_C_SetLipSyncAmp_Params params {};
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlinkOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::BlinkOnce(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlinkOnce");
		
		UABP_BS_RM_Roxy_C_BlinkOnce_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_BS_RM_Roxy_C::EyeAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeAim");
		
		UABP_BS_RM_Roxy_C_EyeAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.StopTantrum
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::StopTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.StopTantrum");
		
		UABP_BS_RM_Roxy_C_StopTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.StartTantrum
	 * 		Flags  -> ()
	 */
	void UABP_BS_RM_Roxy_C::StartTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.StartTantrum");
		
		UABP_BS_RM_Roxy_C_StartTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.ExecuteUbergraph_ABP_BS_RM_Roxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_BS_RM_Roxy_C::ExecuteUbergraph_ABP_BS_RM_Roxy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.ExecuteUbergraph_ABP_BS_RM_Roxy");
		
		UABP_BS_RM_Roxy_C_ExecuteUbergraph_ABP_BS_RM_Roxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_BS_RM_Roxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_BS_RM_Roxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C");
		return ptr;
	}

}


