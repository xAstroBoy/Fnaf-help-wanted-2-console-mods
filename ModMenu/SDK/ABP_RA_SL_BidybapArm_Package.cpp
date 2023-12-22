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
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_BidybapArm_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetRoomType");
		
		UABP_RA_SL_BidybapArm_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetAssignedButton");
		
		UABP_RA_SL_BidybapArm_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_BidybapArm_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetMinireenasOnDoor");
		
		UABP_RA_SL_BidybapArm_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void UABP_RA_SL_BidybapArm_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetAllowedCharacters");
		
		UABP_RA_SL_BidybapArm_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_BidybapArm_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetPlushBabyPose");
		
		UABP_RA_SL_BidybapArm_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_BidybapArm_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.AnimGraph");
		
		UABP_RA_SL_BidybapArm_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.PlayerDiscardedIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::PlayerDiscardedIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.PlayerDiscardedIcecream");
		
		UABP_RA_SL_BidybapArm_C_PlayerDiscardedIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_BidybapArm_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.AssignMinireenaToDoor");
		
		UABP_RA_SL_BidybapArm_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_PostTookIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::VictoryTrigger_PostTookIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_PostTookIcecream");
		
		UABP_RA_SL_BidybapArm_C_VictoryTrigger_PostTookIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_AteIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::VictoryTrigger_AteIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_AteIcecream");
		
		UABP_RA_SL_BidybapArm_C_VictoryTrigger_AteIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_PreTookIcecream
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::VictoryTrigger_PreTookIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_PreTookIcecream");
		
		UABP_RA_SL_BidybapArm_C_VictoryTrigger_PreTookIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.HideCircusBaby
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::HideCircusBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.HideCircusBaby");
		
		UABP_RA_SL_BidybapArm_C_HideCircusBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.TriggerFlashlightFlicker
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::TriggerFlashlightFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.TriggerFlashlightFlicker");
		
		UABP_RA_SL_BidybapArm_C_TriggerFlashlightFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ForceDisappearTransition
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::ForceDisappearTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ForceDisappearTransition");
		
		UABP_RA_SL_BidybapArm_C_ForceDisappearTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.UseWaypointTranform
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::UseWaypointTranform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.UseWaypointTranform");
		
		UABP_RA_SL_BidybapArm_C_UseWaypointTranform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetOwnerReference
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::SetOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetOwnerReference");
		
		UABP_RA_SL_BidybapArm_C_SetOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.HideAndSeekTriggerCameraTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_BidybapArm_C::HideAndSeekTriggerCameraTransition(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.HideAndSeekTriggerCameraTransition");
		
		UABP_RA_SL_BidybapArm_C_HideAndSeekTriggerCameraTransition_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.OnGameEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVictory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_BidybapArm_C::OnGameEnd(bool IsVictory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.OnGameEnd");
		
		UABP_RA_SL_BidybapArm_C_OnGameEnd_Params params {};
		params.IsVictory = IsVictory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.StartNextGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          CurrentGameRunning                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_BidybapArm_C::StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.StartNextGameMode");
		
		UABP_RA_SL_BidybapArm_C_StartNextGameMode_Params params {};
		params.CurrentGameRunning = CurrentGameRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetCircusBabyToMad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCircusBabyMad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_BidybapArm_C::SetCircusBabyToMad(bool IsCircusBabyMad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetCircusBabyToMad");
		
		UABP_RA_SL_BidybapArm_C_SetCircusBabyToMad_Params params {};
		params.IsCircusBabyMad = IsCircusBabyMad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC");
		
		UABP_RA_SL_BidybapArm_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_BidybapArm_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F");
		
		UABP_RA_SL_BidybapArm_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ActivateBidybapArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_BidybapArm_C::ActivateBidybapArm(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ActivateBidybapArm");
		
		UABP_RA_SL_BidybapArm_C_ActivateBidybapArm_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_BidybapArm_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetRoomType");
		
		UABP_RA_SL_BidybapArm_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ExecuteUbergraph_ABP_RA_SL_BidybapArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_BidybapArm_C::ExecuteUbergraph_ABP_RA_SL_BidybapArm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ExecuteUbergraph_ABP_RA_SL_BidybapArm");
		
		UABP_RA_SL_BidybapArm_C_ExecuteUbergraph_ABP_RA_SL_BidybapArm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_BidybapArm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_BidybapArm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C");
		return ptr;
	}

}


