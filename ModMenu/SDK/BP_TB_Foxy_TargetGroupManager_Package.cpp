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
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CanSwitchToSecretTrack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanActivateSecret                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::CanSwitchToSecretTrack(bool* CanActivateSecret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CanSwitchToSecretTrack");
		
		ABP_TB_Foxy_TargetGroupManager_C_CanSwitchToSecretTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivateSecret != nullptr)
			*CanActivateSecret = params.CanActivateSecret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.Can Activate Secret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanActivateSecret                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::CanActivateSecret(bool* CanActivateSecret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.Can Activate Secret");
		
		ABP_TB_Foxy_TargetGroupManager_C_CanActivateSecret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanActivateSecret != nullptr)
			*CanActivateSecret = params.CanActivateSecret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.GetTotalPointsScored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointsScored                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::GetTotalPointsScored(int32_t* PointsScored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.GetTotalPointsScored");
		
		ABP_TB_Foxy_TargetGroupManager_C_GetTotalPointsScored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointsScored != nullptr)
			*PointsScored = params.PointsScored;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.SetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsManagerActive                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::SetIsActive(bool IsManagerActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.SetIsActive");
		
		ABP_TB_Foxy_TargetGroupManager_C_SetIsActive_Params params {};
		params.IsManagerActive = IsManagerActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.GetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsManagerActive                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::GetIsActive(bool* IsManagerActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.GetIsActive");
		
		ABP_TB_Foxy_TargetGroupManager_C_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsManagerActive != nullptr)
			*IsManagerActive = params.IsManagerActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.EnableTargetGallery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActivateGallery                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::EnableTargetGallery(bool ActivateGallery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.EnableTargetGallery");
		
		ABP_TB_Foxy_TargetGroupManager_C_EnableTargetGallery_Params params {};
		params.ActivateGallery = ActivateGallery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggerBonusRound
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::TriggerBonusRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggerBonusRound");
		
		ABP_TB_Foxy_TargetGroupManager_C_TriggerBonusRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CheckForBonusRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TriggerBonusRound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::CheckForBonusRound(bool* TriggerBonusRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CheckForBonusRound");
		
		ABP_TB_Foxy_TargetGroupManager_C_CheckForBonusRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TriggerBonusRound != nullptr)
			*TriggerBonusRound = params.TriggerBonusRound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ReceiveBeginPlay");
		
		ABP_TB_Foxy_TargetGroupManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_UpdateTargetManager
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::DEBUG_UpdateTargetManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_UpdateTargetManager");
		
		ABP_TB_Foxy_TargetGroupManager_C_DEBUG_UpdateTargetManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.Event_TargetHasBeenHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TB_Foxy_Target_C*                        TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_TB_Foxy_TrackTriggerType                         TriggerType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::Event_TargetHasBeenHit(class ABP_TB_Foxy_Target_C* TargetActor, int32_t TargetValue, E_TB_Foxy_TrackTriggerType TriggerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.Event_TargetHasBeenHit");
		
		ABP_TB_Foxy_TargetGroupManager_C_Event_TargetHasBeenHit_Params params {};
		params.TargetActor = TargetActor;
		params.TargetValue = TargetValue;
		params.TriggerType = TriggerType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_ToggleGroupActivation
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::DEBUG_ToggleGroupActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_ToggleGroupActivation");
		
		ABP_TB_Foxy_TargetGroupManager_C_DEBUG_ToggleGroupActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.SetStarsTrackCanSwitch
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::SetStarsTrackCanSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.SetStarsTrackCanSwitch");
		
		ABP_TB_Foxy_TargetGroupManager_C_SetStarsTrackCanSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_AllStarsHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::DEBUG_AllStarsHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_AllStarsHit");
		
		ABP_TB_Foxy_TargetGroupManager_C_DEBUG_AllStarsHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_SetStarsTrackCanSwitch
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::DEBUG_SetStarsTrackCanSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_SetStarsTrackCanSwitch");
		
		ABP_TB_Foxy_TargetGroupManager_C_DEBUG_SetStarsTrackCanSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_HitAllTargets
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::DEBUG_HitAllTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_HitAllTargets");
		
		ABP_TB_Foxy_TargetGroupManager_C_DEBUG_HitAllTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager");
		
		ABP_TB_Foxy_TargetGroupManager_C_ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggeringBonusRound__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::TriggeringBonusRound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggeringBonusRound__DelegateSignature");
		
		ABP_TB_Foxy_TargetGroupManager_C_TriggeringBonusRound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ActivateSecretTrack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::ActivateSecretTrack__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ActivateSecretTrack__DelegateSignature");
		
		ABP_TB_Foxy_TargetGroupManager_C_ActivateSecretTrack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CalculatePoints__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointsScored                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::CalculatePoints__DelegateSignature(int32_t PointsScored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CalculatePoints__DelegateSignature");
		
		ABP_TB_Foxy_TargetGroupManager_C_CalculatePoints__DelegateSignature_Params params {};
		params.PointsScored = PointsScored;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggerTrackChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_TargetGroupManager_C::TriggerTrackChange__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggerTrackChange__DelegateSignature");
		
		ABP_TB_Foxy_TargetGroupManager_C_TriggerTrackChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TB_Foxy_TargetGroupManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TB_Foxy_TargetGroupManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C");
		return ptr;
	}

}


