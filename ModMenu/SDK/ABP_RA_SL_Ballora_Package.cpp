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
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Ballora_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetPlushBabyPose");
		
		UABP_RA_SL_Ballora_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Ballora_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetRoomType");
		
		UABP_RA_SL_Ballora_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetAssignedButton");
		
		UABP_RA_SL_Ballora_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Ballora_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetMinireenasOnDoor");
		
		UABP_RA_SL_Ballora_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void UABP_RA_SL_Ballora_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetAllowedCharacters");
		
		UABP_RA_SL_Ballora_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_Ballora_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimGraph");
		
		UABP_RA_SL_Ballora_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_Ballora_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AssignMinireenaToDoor");
		
		UABP_RA_SL_Ballora_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B3BB6A4C46DA300A926627B80D001CBB
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B3BB6A4C46DA300A926627B80D001CBB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B3BB6A4C46DA300A926627B80D001CBB");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B3BB6A4C46DA300A926627B80D001CBB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_421D98D5481E6876E91407A6EFB83715
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_421D98D5481E6876E91407A6EFB83715()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_421D98D5481E6876E91407A6EFB83715");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_421D98D5481E6876E91407A6EFB83715_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2FC6E9C3472C4FBC0BB7A78FCD33873C
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2FC6E9C3472C4FBC0BB7A78FCD33873C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2FC6E9C3472C4FBC0BB7A78FCD33873C");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2FC6E9C3472C4FBC0BB7A78FCD33873C_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_531DBFE34ACA9CD77C7FDFAB71D2579B
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_531DBFE34ACA9CD77C7FDFAB71D2579B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_531DBFE34ACA9CD77C7FDFAB71D2579B");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_531DBFE34ACA9CD77C7FDFAB71D2579B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_5EAD33954E5789AB0DC9179D40AAAC17
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_5EAD33954E5789AB0DC9179D40AAAC17()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_5EAD33954E5789AB0DC9179D40AAAC17");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_5EAD33954E5789AB0DC9179D40AAAC17_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_41CCDBE947D14797239052A2B7D5384F
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_41CCDBE947D14797239052A2B7D5384F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_41CCDBE947D14797239052A2B7D5384F");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_41CCDBE947D14797239052A2B7D5384F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CF9E7A1D497FC69E1F14B49BEDD7E1DC
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CF9E7A1D497FC69E1F14B49BEDD7E1DC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CF9E7A1D497FC69E1F14B49BEDD7E1DC");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CF9E7A1D497FC69E1F14B49BEDD7E1DC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_C36466FF4D20C08A6C63199A3C0F0382
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_C36466FF4D20C08A6C63199A3C0F0382()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_C36466FF4D20C08A6C63199A3C0F0382");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_C36466FF4D20C08A6C63199A3C0F0382_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_D92C6D3E4149EEF245C1D88935D1B813
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_D92C6D3E4149EEF245C1D88935D1B813()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_D92C6D3E4149EEF245C1D88935D1B813");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_D92C6D3E4149EEF245C1D88935D1B813_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_18CAB4114465724151A439ABCCFC8BC6
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_18CAB4114465724151A439ABCCFC8BC6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_18CAB4114465724151A439ABCCFC8BC6");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_18CAB4114465724151A439ABCCFC8BC6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CD63898545E0E5FD29B2BD890D19643A
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CD63898545E0E5FD29B2BD890D19643A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CD63898545E0E5FD29B2BD890D19643A");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CD63898545E0E5FD29B2BD890D19643A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_81F95408418EFD78744A9B9C9F837C00
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_81F95408418EFD78744A9B9C9F837C00()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_81F95408418EFD78744A9B9C9F837C00");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_81F95408418EFD78744A9B9C9F837C00_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B42AA5884C01DF35B6D639AA9C6D980D
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B42AA5884C01DF35B6D639AA9C6D980D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B42AA5884C01DF35B6D639AA9C6D980D");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B42AA5884C01DF35B6D639AA9C6D980D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3587C5E94629CD416B2120AD17F683F7
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3587C5E94629CD416B2120AD17F683F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3587C5E94629CD416B2120AD17F683F7");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3587C5E94629CD416B2120AD17F683F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_E14FB3094475F8B41029F587605925E8
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_E14FB3094475F8B41029F587605925E8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_E14FB3094475F8B41029F587605925E8");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_E14FB3094475F8B41029F587605925E8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3A643DC84383E1A3F8FBB399801439F6
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3A643DC84383E1A3F8FBB399801439F6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3A643DC84383E1A3F8FBB399801439F6");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3A643DC84383E1A3F8FBB399801439F6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_214B1B7D4337276BAE09ADABEB3D9328
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_214B1B7D4337276BAE09ADABEB3D9328()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_214B1B7D4337276BAE09ADABEB3D9328");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_214B1B7D4337276BAE09ADABEB3D9328_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_85CC12994F50DCBE3EE71EB89323FDCB
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_85CC12994F50DCBE3EE71EB89323FDCB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_85CC12994F50DCBE3EE71EB89323FDCB");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_85CC12994F50DCBE3EE71EB89323FDCB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_A21F93214DD193735AA729A46F451298
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_A21F93214DD193735AA729A46F451298()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_A21F93214DD193735AA729A46F451298");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_A21F93214DD193735AA729A46F451298_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2CFAC2CD4598F9112BB9F78BEB3D865F
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2CFAC2CD4598F9112BB9F78BEB3D865F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2CFAC2CD4598F9112BB9F78BEB3D865F");
		
		UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2CFAC2CD4598F9112BB9F78BEB3D865F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Ballora_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetRoomType");
		
		UABP_RA_SL_Ballora_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraForcingJumpscare
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::BalloraForcingJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraForcingJumpscare");
		
		UABP_RA_SL_Ballora_C_BalloraForcingJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetBalloraOwnerReference
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::SetBalloraOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetBalloraOwnerReference");
		
		UABP_RA_SL_Ballora_C_SetBalloraOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraAtDoor
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::BalloraAtDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraAtDoor");
		
		UABP_RA_SL_Ballora_C_BalloraAtDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_CheckForDoorStatus
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_CheckForDoorStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_CheckForDoorStatus");
		
		UABP_RA_SL_Ballora_C_AnimNotify_CheckForDoorStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_inviz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_inviz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_inviz");
		
		UABP_RA_SL_Ballora_C_AnimNotify_inviz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_viz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_viz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_viz");
		
		UABP_RA_SL_Ballora_C_AnimNotify_viz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_FlickerLight_Left
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_FlickerLight_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_FlickerLight_Left");
		
		UABP_RA_SL_Ballora_C_AnimNotify_FlickerLight_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_FlickerLight_Right
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_FlickerLight_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_FlickerLight_Right");
		
		UABP_RA_SL_Ballora_C_AnimNotify_FlickerLight_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraHasLeftArea
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::BalloraHasLeftArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraHasLeftArea");
		
		UABP_RA_SL_Ballora_C_BalloraHasLeftArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_BalloraLeftArea
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_BalloraLeftArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_BalloraLeftArea");
		
		UABP_RA_SL_Ballora_C_AnimNotify_BalloraLeftArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetBalloraDoorClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DoorIsClosed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_Ballora_C::SetBalloraDoorClosed(bool DoorIsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetBalloraDoorClosed");
		
		UABP_RA_SL_Ballora_C_SetBalloraDoorClosed_Params params {};
		params.DoorIsClosed = DoorIsClosed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_CannotReturn
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_Ballora_C::AnimNotify_CannotReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_CannotReturn");
		
		UABP_RA_SL_Ballora_C_AnimNotify_CannotReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.ExecuteUbergraph_ABP_RA_SL_Ballora
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_Ballora_C::ExecuteUbergraph_ABP_RA_SL_Ballora(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.ExecuteUbergraph_ABP_RA_SL_Ballora");
		
		UABP_RA_SL_Ballora_C_ExecuteUbergraph_ABP_RA_SL_Ballora_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_Ballora_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_Ballora_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C");
		return ptr;
	}

}


