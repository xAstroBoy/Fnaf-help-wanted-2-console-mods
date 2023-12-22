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
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.GetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_PlushBaby_C::GetActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.GetActive");
		
		ABP_RA_SL_PlushBaby_C_GetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.GetAssignedRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          AssignedRole                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::GetAssignedRole(Enum_RA_SL_CircusGameMode* AssignedRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.GetAssignedRole");
		
		ABP_RA_SL_PlushBaby_C_GetAssignedRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssignedRole != nullptr)
			*AssignedRole = params.AssignedRole;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.FindRoomNotBeingWatched
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::FindRoomNotBeingWatched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.FindRoomNotBeingWatched");
		
		ABP_RA_SL_PlushBaby_C_FindRoomNotBeingWatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.HandleRedLightMechanics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSpotOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_PlushBaby_C::HandleRedLightMechanics(bool* IsSpotOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.HandleRedLightMechanics");
		
		ABP_RA_SL_PlushBaby_C_HandleRedLightMechanics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpotOccupied != nullptr)
			*IsSpotOccupied = params.IsSpotOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DetermineWhereCircusBabyIsBlocking
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::DetermineWhereCircusBabyIsBlocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DetermineWhereCircusBabyIsBlocking");
		
		ABP_RA_SL_PlushBaby_C_DetermineWhereCircusBabyIsBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_PlushbabyWalk__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::Timeline_PlushbabyWalk__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_PlushbabyWalk__FinishedFunc");
		
		ABP_RA_SL_PlushBaby_C_Timeline_PlushbabyWalk__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_PlushbabyWalk__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::Timeline_PlushbabyWalk__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_PlushbabyWalk__UpdateFunc");
		
		ABP_RA_SL_PlushBaby_C_Timeline_PlushbabyWalk__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetAssignedRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::SetAssignedRole(Enum_RA_SL_CircusGameMode Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetAssignedRole");
		
		ABP_RA_SL_PlushBaby_C_SetAssignedRole_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetToRun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowRun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_PlushBaby_C::SetToRun(bool AllowRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetToRun");
		
		ABP_RA_SL_PlushBaby_C_SetToRun_Params params {};
		params.AllowRun = AllowRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.AssignPoseForFlashlightTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           AnimationPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::AssignPoseForFlashlightTag(Enum_RA_SL_PlushBabyPose AnimationPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.AssignPoseForFlashlightTag");
		
		ABP_RA_SL_PlushBaby_C_AssignPoseForFlashlightTag_Params params {};
		params.AnimationPose = AnimationPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.UpdateHeadShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShakeAlpha                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::UpdateHeadShake(float ShakeAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.UpdateHeadShake");
		
		ABP_RA_SL_PlushBaby_C_UpdateHeadShake_Params params {};
		params.ShakeAlpha = ShakeAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ReceiveBeginPlay");
		
		ABP_RA_SL_PlushBaby_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ReceiveTick");
		
		ABP_RA_SL_PlushBaby_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature");
		
		ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_PlushBaby_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.WakeUpPlushBaby
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::WakeUpPlushBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.WakeUpPlushBaby");
		
		ABP_RA_SL_PlushBaby_C_WakeUpPlushBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ResetPlushBaby
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::ResetPlushBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ResetPlushBaby");
		
		ABP_RA_SL_PlushBaby_C_ResetPlushBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TotalSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature(float TotalSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature");
		
		ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature_Params params {};
		params.TotalSeconds = TotalSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature");
		
		ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature");
		
		ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_PlushBaby_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ActivateRole
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::ActivateRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ActivateRole");
		
		ABP_RA_SL_PlushBaby_C_ActivateRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_PlushBaby_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetActive");
		
		ABP_RA_SL_PlushBaby_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DisableRole
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::DisableRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DisableRole");
		
		ABP_RA_SL_PlushBaby_C_DisableRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DEBUG_ScareAwayPlushBaby
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::DEBUG_ScareAwayPlushBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DEBUG_ScareAwayPlushBaby");
		
		ABP_RA_SL_PlushBaby_C_DEBUG_ScareAwayPlushBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBabyToHide
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::PlushBabyToHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBabyToHide");
		
		ABP_RA_SL_PlushBaby_C_PlushBabyToHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CheckForUniqueTrigger
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::CheckForUniqueTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CheckForUniqueTrigger");
		
		ABP_RA_SL_PlushBaby_C_CheckForUniqueTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ResetHideAndSeek
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::ResetHideAndSeek()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ResetHideAndSeek");
		
		ABP_RA_SL_PlushBaby_C_ResetHideAndSeek_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CircusBabyIsMad
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::CircusBabyIsMad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CircusBabyIsMad");
		
		ABP_RA_SL_PlushBaby_C_CircusBabyIsMad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DisallowSpecificMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               DisallowedSide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::DisallowSpecificMovement(Enum_RA_SL_AreaZones DisallowedSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DisallowSpecificMovement");
		
		ABP_RA_SL_PlushBaby_C_DisallowSpecificMovement_Params params {};
		params.DisallowedSide = DisallowedSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.AssignCircusBabyReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::AssignCircusBabyReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.AssignCircusBabyReference");
		
		ABP_RA_SL_PlushBaby_C_AssignCircusBabyReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Stop_Walk
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::Timeline_Stop_Walk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Stop_Walk");
		
		ABP_RA_SL_PlushBaby_C_Timeline_Stop_Walk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Play_Walk
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::Timeline_Play_Walk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Play_Walk");
		
		ABP_RA_SL_PlushBaby_C_Timeline_Play_Walk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Start_Walk
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::Timeline_Start_Walk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Start_Walk");
		
		ABP_RA_SL_PlushBaby_C_Timeline_Start_Walk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBaby_HideAudioForFlashlightTag
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::PlushBaby_HideAudioForFlashlightTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBaby_HideAudioForFlashlightTag");
		
		ABP_RA_SL_PlushBaby_C_PlushBaby_HideAudioForFlashlightTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBabyKills
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_PlushBaby_C::PlushBabyKills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBabyKills");
		
		ABP_RA_SL_PlushBaby_C_PlushBabyKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ExecuteUbergraph_BP_RA_SL_PlushBaby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_PlushBaby_C::ExecuteUbergraph_BP_RA_SL_PlushBaby(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ExecuteUbergraph_BP_RA_SL_PlushBaby");
		
		ABP_RA_SL_PlushBaby_C_ExecuteUbergraph_BP_RA_SL_PlushBaby_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_PlushBaby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_PlushBaby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C");
		return ptr;
	}

}


