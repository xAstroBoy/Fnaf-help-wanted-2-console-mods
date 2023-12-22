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
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Bonbon_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetPlushBabyPose");
		
		UABP_RA_SL_Bonbon_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Bonbon_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetRoomType");
		
		UABP_RA_SL_Bonbon_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetAssignedButton");
		
		UABP_RA_SL_Bonbon_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Bonbon_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetMinireenasOnDoor");
		
		UABP_RA_SL_Bonbon_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void UABP_RA_SL_Bonbon_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetAllowedCharacters");
		
		UABP_RA_SL_Bonbon_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_Bonbon_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimGraph");
		
		UABP_RA_SL_Bonbon_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_Bonbon_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AssignMinireenaToDoor");
		
		UABP_RA_SL_Bonbon_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.BonbonAtDoor
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::BonbonAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.BonbonAtDoor");
		
		UABP_RA_SL_Bonbon_C_BonbonAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.BonbonForcingJumpscare
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::BonbonForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.BonbonForcingJumpscare");
		
		UABP_RA_SL_Bonbon_C_BonbonForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D");
		
		UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900");
		
		UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9");
		
		UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658");
		
		UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61");
		
		UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573");
		
		UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Bonbon_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.SetRoomType");
		
		UABP_RA_SL_Bonbon_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_TriggerForcedJumpscare
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::AnimNotify_TriggerForcedJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_TriggerForcedJumpscare");
		
		UABP_RA_SL_Bonbon_C_AnimNotify_TriggerForcedJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_CheckHowManyIdles
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::AnimNotify_CheckHowManyIdles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_CheckHowManyIdles");
		
		UABP_RA_SL_Bonbon_C_AnimNotify_CheckHowManyIdles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.SetBonbonOwnerReference
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::SetBonbonOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.SetBonbonOwnerReference");
		
		UABP_RA_SL_Bonbon_C_SetBonbonOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_inviz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::AnimNotify_inviz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_inviz");
		
		UABP_RA_SL_Bonbon_C_AnimNotify_inviz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_viz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Bonbon_C::AnimNotify_viz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_viz");
		
		UABP_RA_SL_Bonbon_C_AnimNotify_viz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.ExecuteUbergraph_ABP_RA_SL_Bonbon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Bonbon_C::ExecuteUbergraph_ABP_RA_SL_Bonbon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.ExecuteUbergraph_ABP_RA_SL_Bonbon");
		
		UABP_RA_SL_Bonbon_C_ExecuteUbergraph_ABP_RA_SL_Bonbon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_Bonbon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_Bonbon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C");
		return ptr;
	}

}


