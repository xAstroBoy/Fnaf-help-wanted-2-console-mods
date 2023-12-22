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
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.GetAssignedRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          AssignedRole                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::GetAssignedRole(Enum_RA_SL_CircusGameMode* AssignedRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.GetAssignedRole");
		
		UABP_RA_SL_PlushBaby_C_GetAssignedRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssignedRole != nullptr)
			*AssignedRole = params.AssignedRole;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.GetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_PlushBaby_C::GetActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.GetActive");
		
		UABP_RA_SL_PlushBaby_C_GetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_PlushBaby_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AnimGraph");
		
		UABP_RA_SL_PlushBaby_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetHeadAim
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_PlushBaby_C::SetHeadAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetHeadAim");
		
		UABP_RA_SL_PlushBaby_C_SetHeadAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.ActivateRole
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_PlushBaby_C::ActivateRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.ActivateRole");
		
		UABP_RA_SL_PlushBaby_C_ActivateRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AssignCircusBabyReference
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_PlushBaby_C::AssignCircusBabyReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AssignCircusBabyReference");
		
		UABP_RA_SL_PlushBaby_C_AssignCircusBabyReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.DisallowSpecificMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               DisallowedSide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::DisallowSpecificMovement(Enum_RA_SL_AreaZones DisallowedSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.DisallowSpecificMovement");
		
		UABP_RA_SL_PlushBaby_C_DisallowSpecificMovement_Params params {};
		params.DisallowedSide = DisallowedSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_PlushBaby_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetActive");
		
		UABP_RA_SL_PlushBaby_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.DisableRole
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_PlushBaby_C::DisableRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.DisableRole");
		
		UABP_RA_SL_PlushBaby_C_DisableRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_PlushBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B");
		
		UABP_RA_SL_PlushBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_PlushBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6");
		
		UABP_RA_SL_PlushBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.BlueprintUpdateAnimation");
		
		UABP_RA_SL_PlushBaby_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetAssignedRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::SetAssignedRole(Enum_RA_SL_CircusGameMode Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetAssignedRole");
		
		UABP_RA_SL_PlushBaby_C_SetAssignedRole_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetToRun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowRun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_PlushBaby_C::SetToRun(bool AllowRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetToRun");
		
		UABP_RA_SL_PlushBaby_C_SetToRun_Params params {};
		params.AllowRun = AllowRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AssignPoseForFlashlightTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           AnimationPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::AssignPoseForFlashlightTag(Enum_RA_SL_PlushBabyPose AnimationPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AssignPoseForFlashlightTag");
		
		UABP_RA_SL_PlushBaby_C_AssignPoseForFlashlightTag_Params params {};
		params.AnimationPose = AnimationPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.UpdateHeadShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShakeAlpha                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::UpdateHeadShake(float ShakeAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.UpdateHeadShake");
		
		UABP_RA_SL_PlushBaby_C_UpdateHeadShake_Params params {};
		params.ShakeAlpha = ShakeAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.ExecuteUbergraph_ABP_RA_SL_PlushBaby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_PlushBaby_C::ExecuteUbergraph_ABP_RA_SL_PlushBaby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.ExecuteUbergraph_ABP_RA_SL_PlushBaby");
		
		UABP_RA_SL_PlushBaby_C_ExecuteUbergraph_ABP_RA_SL_PlushBaby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_PlushBaby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_PlushBaby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C");
		return ptr;
	}

}


