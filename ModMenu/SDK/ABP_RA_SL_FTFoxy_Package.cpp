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
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFoxy_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetPlushBabyPose");
		
		UABP_RA_SL_FTFoxy_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFoxy_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetRoomType");
		
		UABP_RA_SL_FTFoxy_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetAssignedButton");
		
		UABP_RA_SL_FTFoxy_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFoxy_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetMinireenasOnDoor");
		
		UABP_RA_SL_FTFoxy_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void UABP_RA_SL_FTFoxy_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetAllowedCharacters");
		
		UABP_RA_SL_FTFoxy_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_FTFoxy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimGraph");
		
		UABP_RA_SL_FTFoxy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_FTFoxy_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AssignMinireenaToDoor");
		
		UABP_RA_SL_FTFoxy_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AdvanceFoxyPosition
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AdvanceFoxyPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AdvanceFoxyPosition");
		
		UABP_RA_SL_FTFoxy_C_AdvanceFoxyPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129");
		
		UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFoxy_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetRoomType");
		
		UABP_RA_SL_FTFoxy_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_FTFoxy_C::SetRunning(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetRunning");
		
		UABP_RA_SL_FTFoxy_C_SetRunning_Params params {};
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetSpotId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetCurrentID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFoxy_C::SetSpotId(int32_t SetCurrentID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetSpotId");
		
		UABP_RA_SL_FTFoxy_C_SetSpotId_Params params {};
		params.SetCurrentID = SetCurrentID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FoxyReachedEndOfHallway
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_FoxyReachedEndOfHallway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FoxyReachedEndOfHallway");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_FoxyReachedEndOfHallway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_CheckForDoorStatus
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_CheckForDoorStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_CheckForDoorStatus");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_CheckForDoorStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetFoxyOwnerReference
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::SetFoxyOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetFoxyOwnerReference");
		
		UABP_RA_SL_FTFoxy_C_SetFoxyOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FlickerLight_Left
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_FlickerLight_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FlickerLight_Left");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_FlickerLight_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FlickerLight_Right
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_FlickerLight_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FlickerLight_Right");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_FlickerLight_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_DoubleCheckRoom_Left
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_DoubleCheckRoom_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_DoubleCheckRoom_Left");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_DoubleCheckRoom_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_DoubleCheckRoom_Right
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_DoubleCheckRoom_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_DoubleCheckRoom_Right");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_DoubleCheckRoom_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_inviz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_inviz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_inviz");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_inviz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_viz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFoxy_C::AnimNotify_viz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_viz");
		
		UABP_RA_SL_FTFoxy_C_AnimNotify_viz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.ExecuteUbergraph_ABP_RA_SL_FTFoxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFoxy_C::ExecuteUbergraph_ABP_RA_SL_FTFoxy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.ExecuteUbergraph_ABP_RA_SL_FTFoxy");
		
		UABP_RA_SL_FTFoxy_C_ExecuteUbergraph_ABP_RA_SL_FTFoxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_FTFoxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_FTFoxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C");
		return ptr;
	}

}


