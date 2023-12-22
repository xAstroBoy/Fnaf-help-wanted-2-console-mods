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
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.GetIsDeployed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDeployed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_MinireenaDoors_C::GetIsDeployed(bool* IsDeployed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.GetIsDeployed");
		
		UABP_RA_SL_MinireenaDoors_C_GetIsDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDeployed != nullptr)
			*IsDeployed = params.IsDeployed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_MinireenaDoors_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.AnimGraph");
		
		UABP_RA_SL_MinireenaDoors_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.MoveToDoor
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::MoveToDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.MoveToDoor");
		
		UABP_RA_SL_MinireenaDoors_C_MoveToDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.SetIsDeployed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetIsDeployed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_MinireenaDoors_C::SetIsDeployed(bool SetIsDeployed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.SetIsDeployed");
		
		UABP_RA_SL_MinireenaDoors_C_SetIsDeployed_Params params {};
		params.SetIsDeployed = SetIsDeployed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F44C90B34E07E36665A9009FE54A23B0
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F44C90B34E07E36665A9009FE54A23B0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F44C90B34E07E36665A9009FE54A23B0");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F44C90B34E07E36665A9009FE54A23B0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_22D1199C46EF4F79EFACB2962DAD369A
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_22D1199C46EF4F79EFACB2962DAD369A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_22D1199C46EF4F79EFACB2962DAD369A");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_22D1199C46EF4F79EFACB2962DAD369A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F85873304C27B53B6E1015B3E91F534C
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F85873304C27B53B6E1015B3E91F534C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F85873304C27B53B6E1015B3E91F534C");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F85873304C27B53B6E1015B3E91F534C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_BAFA4367441664A52CA3BF958E9CDD92
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_BAFA4367441664A52CA3BF958E9CDD92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_BAFA4367441664A52CA3BF958E9CDD92");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_BAFA4367441664A52CA3BF958E9CDD92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_7E395F8042D8285A80D5CBB32D983948
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_7E395F8042D8285A80D5CBB32D983948()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_7E395F8042D8285A80D5CBB32D983948");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_7E395F8042D8285A80D5CBB32D983948_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_465DDD4D421C073874C557A4889DFED7
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_465DDD4D421C073874C557A4889DFED7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_465DDD4D421C073874C557A4889DFED7");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_465DDD4D421C073874C557A4889DFED7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_3071B4F44146045E08E4B59B9F936007
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_3071B4F44146045E08E4B59B9F936007()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_3071B4F44146045E08E4B59B9F936007");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_3071B4F44146045E08E4B59B9F936007_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_FD7FC03540C223896A487A8C5BCA6107
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_FD7FC03540C223896A487A8C5BCA6107()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_FD7FC03540C223896A487A8C5BCA6107");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_FD7FC03540C223896A487A8C5BCA6107_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_189EE22B4BDE221549FEAD86EBC8A6CA
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_189EE22B4BDE221549FEAD86EBC8A6CA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_189EE22B4BDE221549FEAD86EBC8A6CA");
		
		UABP_RA_SL_MinireenaDoors_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_189EE22B4BDE221549FEAD86EBC8A6CA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.SetDoorPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                WhatSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WhatOrderOnDoor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_MinireenaDoors_C::SetDoorPose(Enum_RA_SL_RoomType WhatSide, int32_t WhatOrderOnDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.SetDoorPose");
		
		UABP_RA_SL_MinireenaDoors_C_SetDoorPose_Params params {};
		params.WhatSide = WhatSide;
		params.WhatOrderOnDoor = WhatOrderOnDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.ResetMinireena
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_MinireenaDoors_C::ResetMinireena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.ResetMinireena");
		
		UABP_RA_SL_MinireenaDoors_C_ResetMinireena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.ExecuteUbergraph_ABP_RA_SL_MinireenaDoors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_MinireenaDoors_C::ExecuteUbergraph_ABP_RA_SL_MinireenaDoors(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C.ExecuteUbergraph_ABP_RA_SL_MinireenaDoors");
		
		UABP_RA_SL_MinireenaDoors_C_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_MinireenaDoors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_MinireenaDoors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C");
		return ptr;
	}

}


