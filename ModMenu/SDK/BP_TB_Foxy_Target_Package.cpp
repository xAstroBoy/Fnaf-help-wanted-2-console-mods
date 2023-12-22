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
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetActivation
	 * 		Flags  -> ()
	 */
	float ABP_TB_Foxy_Target_C::GetActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetActivation");
		
		ABP_TB_Foxy_Target_C_GetActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.HandleSecretHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::HandleSecretHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.HandleSecretHit");
		
		ABP_TB_Foxy_Target_C_HandleSecretHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TriggerAudioHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::TriggerAudioHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TriggerAudioHit");
		
		ABP_TB_Foxy_Target_C_TriggerAudioHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetOverrideTargetActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverrideTargetActivation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_Target_C::GetOverrideTargetActivation(bool* OverrideTargetActivation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetOverrideTargetActivation");
		
		ABP_TB_Foxy_Target_C_GetOverrideTargetActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OverrideTargetActivation != nullptr)
			*OverrideTargetActivation = params.OverrideTargetActivation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetOverrideTargetActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTrue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_Target_C::SetOverrideTargetActivation(bool IsTrue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetOverrideTargetActivation");
		
		ABP_TB_Foxy_Target_C_SetOverrideTargetActivation_Params params {};
		params.IsTrue = IsTrue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.StoreActivatables
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::StoreActivatables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.StoreActivatables");
		
		ABP_TB_Foxy_Target_C_StoreActivatables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetIsTargetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTargetActive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_Target_C::GetIsTargetActive(bool* IsTargetActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetIsTargetActive");
		
		ABP_TB_Foxy_Target_C_GetIsTargetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTargetActive != nullptr)
			*IsTargetActive = params.IsTargetActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActivateTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_Target_C::TargetActivation(bool ActivateTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetActivation");
		
		ABP_TB_Foxy_Target_C_TargetActivation_Params params {};
		params.ActivateTarget = ActivateTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetupTarget
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::SetupTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetupTarget");
		
		ABP_TB_Foxy_Target_C_SetupTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Change Target Color when Hit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::ChangeTargetColorwhenHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Change Target Color when Hit");
		
		ABP_TB_Foxy_Target_C_ChangeTargetColorwhenHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.CheckForActivatables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActivateItems                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_Target_C::CheckForActivatables(bool ActivateItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.CheckForActivatables");
		
		ABP_TB_Foxy_Target_C_CheckForActivatables_Params params {};
		params.ActivateItems = ActivateItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetTargetStatus
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::GetTargetStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetTargetStatus");
		
		ABP_TB_Foxy_Target_C_GetTargetStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Trigger Bonus Round
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::TriggerBonusRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Trigger Bonus Round");
		
		ABP_TB_Foxy_Target_C_TriggerBonusRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.IncrementalActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentageActivated                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_Target_C::IncrementalActivation(float PercentageActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.IncrementalActivation");
		
		ABP_TB_Foxy_Target_C_IncrementalActivation_Params params {};
		params.PercentageActivated = PercentageActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.OnTargetHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTargetHitParams                            TargetHitParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_TB_Foxy_Target_C::OnTargetHit(const struct FTargetHitParams& TargetHitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.OnTargetHit");
		
		ABP_TB_Foxy_Target_C_OnTargetHit_Params params {};
		params.TargetHitParams = TargetHitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.FlashOnHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::FlashOnHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.FlashOnHit");
		
		ABP_TB_Foxy_Target_C_FlashOnHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ReceiveBeginPlay");
		
		ABP_TB_Foxy_Target_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ResetOnHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::ResetOnHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ResetOnHit");
		
		ABP_TB_Foxy_Target_C_ResetOnHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.RespawnTarget
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::RespawnTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.RespawnTarget");
		
		ABP_TB_Foxy_Target_C_RespawnTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.OnTargetHitCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TB_Foxy_Target_C*                        TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_TB_Foxy_TrackTriggerType                         TriggerType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_Target_C::OnTargetHitCall(class ABP_TB_Foxy_Target_C* TargetActor, int32_t TargetValue, E_TB_Foxy_TrackTriggerType TriggerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.OnTargetHitCall");
		
		ABP_TB_Foxy_Target_C_OnTargetHitCall_Params params {};
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
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_UpdateTargetSetup
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::DEBUG_UpdateTargetSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_UpdateTargetSetup");
		
		ABP_TB_Foxy_Target_C_DEBUG_UpdateTargetSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_SetTargetHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::DEBUG_SetTargetHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_SetTargetHit");
		
		ABP_TB_Foxy_Target_C_DEBUG_SetTargetHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_TriggerOnHitTargetHit
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::DEBUG_TriggerOnHitTargetHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_TriggerOnHitTargetHit");
		
		ABP_TB_Foxy_Target_C_DEBUG_TriggerOnHitTargetHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Deactivated
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::Deactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Deactivated");
		
		ABP_TB_Foxy_Target_C_Deactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Activated
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Activated");
		
		ABP_TB_Foxy_Target_C_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetDisable
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::TargetDisable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetDisable");
		
		ABP_TB_Foxy_Target_C_TargetDisable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetActivate
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::TargetActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetActivate");
		
		ABP_TB_Foxy_Target_C_TargetActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetSecretTrackSwitch
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_Target_C::SetSecretTrackSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetSecretTrackSwitch");
		
		ABP_TB_Foxy_Target_C_SetSecretTrackSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ExecuteUbergraph_BP_TB_Foxy_Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_Target_C::ExecuteUbergraph_BP_TB_Foxy_Target(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ExecuteUbergraph_BP_TB_Foxy_Target");
		
		ABP_TB_Foxy_Target_C_ExecuteUbergraph_BP_TB_Foxy_Target_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetHasBeenHit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TB_Foxy_Target_C*                        TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_TB_Foxy_TrackTriggerType                         TriggerType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_Target_C::TargetHasBeenHit__DelegateSignature(class ABP_TB_Foxy_Target_C* TargetActor, int32_t TargetValue, E_TB_Foxy_TrackTriggerType TriggerType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetHasBeenHit__DelegateSignature");
		
		ABP_TB_Foxy_Target_C_TargetHasBeenHit__DelegateSignature_Params params {};
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
	 * 		Name   -> PredefinedFunction ABP_TB_Foxy_Target_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TB_Foxy_Target_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TB_Foxy_Target.BP_TB_Foxy_Target_C");
		return ptr;
	}

}


