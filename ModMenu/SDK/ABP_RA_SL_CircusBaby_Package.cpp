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
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetPlushBabyPose");
		
		UABP_RA_SL_CircusBaby_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetRoomType");
		
		UABP_RA_SL_CircusBaby_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetAssignedButton");
		
		UABP_RA_SL_CircusBaby_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetMinireenasOnDoor");
		
		UABP_RA_SL_CircusBaby_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void UABP_RA_SL_CircusBaby_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetAllowedCharacters");
		
		UABP_RA_SL_CircusBaby_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_CircusBaby_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimGraph");
		
		UABP_RA_SL_CircusBaby_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetHeadAim
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::SetHeadAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetHeadAim");
		
		UABP_RA_SL_CircusBaby_C_SetHeadAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.PlayerDiscardedIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::PlayerDiscardedIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.PlayerDiscardedIcecream");
		
		UABP_RA_SL_CircusBaby_C_PlayerDiscardedIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ActivateBidybapArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_CircusBaby_C::ActivateBidybapArm(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ActivateBidybapArm");
		
		UABP_RA_SL_CircusBaby_C_ActivateBidybapArm_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_AteIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::VictoryTrigger_AteIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_AteIcecream");
		
		UABP_RA_SL_CircusBaby_C_VictoryTrigger_AteIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_CircusBaby_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AssignMinireenaToDoor");
		
		UABP_RA_SL_CircusBaby_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA");
		
		UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB");
		
		UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92");
		
		UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC");
		
		UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41");
		
		UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.BlueprintUpdateAnimation");
		
		UABP_RA_SL_CircusBaby_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetRoomType");
		
		UABP_RA_SL_CircusBaby_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_UseWaypointTransform
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_UseWaypointTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_UseWaypointTransform");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_UseWaypointTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetOwnerReference
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::SetOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetOwnerReference");
		
		UABP_RA_SL_CircusBaby_C_SetOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_inviz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_inviz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_inviz");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_inviz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_viz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_viz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_viz");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_viz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_FlashlightFlicker
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_FlashlightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_FlashlightFlicker");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_FlashlightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ForceDisappearTransition
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::ForceDisappearTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ForceDisappearTransition");
		
		UABP_RA_SL_CircusBaby_C_ForceDisappearTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_HideCircusBaby
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_HideCircusBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_HideCircusBaby");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_HideCircusBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.HideCircusBaby
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::HideCircusBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.HideCircusBaby");
		
		UABP_RA_SL_CircusBaby_C_HideCircusBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.OnGameEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVictory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_CircusBaby_C::OnGameEnd(bool IsVictory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.OnGameEnd");
		
		UABP_RA_SL_CircusBaby_C_OnGameEnd_Params params {};
		params.IsVictory = IsVictory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.TriggerFlashlightFlicker
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::TriggerFlashlightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.TriggerFlashlightFlicker");
		
		UABP_RA_SL_CircusBaby_C_TriggerFlashlightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.UseWaypointTranform
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::UseWaypointTranform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.UseWaypointTranform");
		
		UABP_RA_SL_CircusBaby_C_UseWaypointTranform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.HideAndSeekTriggerCameraTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_CircusBaby_C::HideAndSeekTriggerCameraTransition(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.HideAndSeekTriggerCameraTransition");
		
		UABP_RA_SL_CircusBaby_C_HideAndSeekTriggerCameraTransition_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.StartNextGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          CurrentGameRunning                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.StartNextGameMode");
		
		UABP_RA_SL_CircusBaby_C_StartNextGameMode_Params params {};
		params.CurrentGameRunning = CurrentGameRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetCircusBabyToMad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCircusBabyMad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_CircusBaby_C::SetCircusBabyToMad(bool IsCircusBabyMad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetCircusBabyToMad");
		
		UABP_RA_SL_CircusBaby_C_SetCircusBabyToMad_Params params {};
		params.IsCircusBabyMad = IsCircusBabyMad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_IdlingWithIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_IdlingWithIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_IdlingWithIcecream");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_IdlingWithIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_PreTookIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::VictoryTrigger_PreTookIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_PreTookIcecream");
		
		UABP_RA_SL_CircusBaby_C_VictoryTrigger_PreTookIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_AcitvateArm
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::AnimNotify_AcitvateArm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_AcitvateArm");
		
		UABP_RA_SL_CircusBaby_C_AnimNotify_AcitvateArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_PostTookIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_CircusBaby_C::VictoryTrigger_PostTookIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_PostTookIcecream");
		
		UABP_RA_SL_CircusBaby_C_VictoryTrigger_PostTookIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ExecuteUbergraph_ABP_RA_SL_CircusBaby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_CircusBaby_C::ExecuteUbergraph_ABP_RA_SL_CircusBaby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ExecuteUbergraph_ABP_RA_SL_CircusBaby");
		
		UABP_RA_SL_CircusBaby_C_ExecuteUbergraph_ABP_RA_SL_CircusBaby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_CircusBaby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_CircusBaby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C");
		return ptr;
	}

}


