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
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.IsJumpscareFinished
	 * 		Flags  -> ()
	 */
	bool ABP_GM_RoxyMakeover_C::IsJumpscareFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.IsJumpscareFinished");
		
		ABP_GM_RoxyMakeover_C_IsJumpscareFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.UpdatePlayerLookingAtRoxy
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::UpdatePlayerLookingAtRoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.UpdatePlayerLookingAtRoxy");
		
		ABP_GM_RoxyMakeover_C_UpdatePlayerLookingAtRoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartLookingAwayFromRoxyTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::StartLookingAwayFromRoxyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartLookingAwayFromRoxyTimer");
		
		ABP_GM_RoxyMakeover_C_StartLookingAwayFromRoxyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.CanPlayLookAtMeVO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GM_RoxyMakeover_C::CanPlayLookAtMeVO(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.CanPlayLookAtMeVO");
		
		ABP_GM_RoxyMakeover_C_CanPlayLookAtMeVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WinGameVO
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::WinGameVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WinGameVO");
		
		ABP_GM_RoxyMakeover_C_WinGameVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Doesn'tLookAtRoxyVO
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::DoesntLookAtRoxyVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Doesn'tLookAtRoxyVO");
		
		ABP_GM_RoxyMakeover_C_DoesntLookAtRoxyVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.MakesMistakeVO
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::MakesMistakeVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.MakesMistakeVO");
		
		ABP_GM_RoxyMakeover_C_MakesMistakeVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WinRoundVO
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::WinRoundVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WinRoundVO");
		
		ABP_GM_RoxyMakeover_C_WinRoundVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SignalUIForIncorrectItems
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SignalUIForIncorrectItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SignalUIForIncorrectItems");
		
		ABP_GM_RoxyMakeover_C_SignalUIForIncorrectItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRandomLightsOutTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::GetRandomLightsOutTimer(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRandomLightsOutTimer");
		
		ABP_GM_RoxyMakeover_C_GetRandomLightsOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartLightsOutTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::StartLightsOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartLightsOutTimer");
		
		ABP_GM_RoxyMakeover_C_StartLightsOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartGlitchTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::StartGlitchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartGlitchTimer");
		
		ABP_GM_RoxyMakeover_C_StartGlitchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRandomGlitchWaitTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::GetRandomGlitchWaitTime(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRandomGlitchWaitTime");
		
		ABP_GM_RoxyMakeover_C_GetRandomGlitchWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.HandleRoundTransitionsForRuinMaskRound
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::HandleRoundTransitionsForRuinMaskRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.HandleRoundTransitionsForRuinMaskRound");
		
		ABP_GM_RoxyMakeover_C_HandleRoundTransitionsForRuinMaskRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnItemSocketed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnItemSocketed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnItemSocketed");
		
		ABP_GM_RoxyMakeover_C_OnItemSocketed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.HandleRoundTransitionsSetup
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::HandleRoundTransitionsSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.HandleRoundTransitionsSetup");
		
		ABP_GM_RoxyMakeover_C_HandleRoundTransitionsSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RoxyTantrumUpdate
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::RoxyTantrumUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RoxyTantrumUpdate");
		
		ABP_GM_RoxyMakeover_C_RoxyTantrumUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetUIRoxyMode
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetUIRoxyMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetUIRoxyMode");
		
		ABP_GM_RoxyMakeover_C_SetUIRoxyMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundNumMakeup
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetRoundNumMakeup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundNumMakeup");
		
		ABP_GM_RoxyMakeover_C_SetRoundNumMakeup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundNumMakeup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RoundTimeMax                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::GetRoundNumMakeup(int32_t* RoundTimeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundNumMakeup");
		
		ABP_GM_RoxyMakeover_C_GetRoundNumMakeup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundTimeMax != nullptr)
			*RoundTimeMax = params.RoundTimeMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundNumAccessories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RoundTimeMax                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::GetRoundNumAccessories(int32_t* RoundTimeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundNumAccessories");
		
		ABP_GM_RoxyMakeover_C_GetRoundNumAccessories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundTimeMax != nullptr)
			*RoundTimeMax = params.RoundTimeMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundNumAccessories
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetRoundNumAccessories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundNumAccessories");
		
		ABP_GM_RoxyMakeover_C_SetRoundNumAccessories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetUIData
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetUIData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetUIData");
		
		ABP_GM_RoxyMakeover_C_SetUIData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundGlitchTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_RM_Round                                         Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RoundTimeMax                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::GetRoundGlitchTime(E_RM_Round Round, float* RoundTimeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundGlitchTime");
		
		ABP_GM_RoxyMakeover_C_GetRoundGlitchTime_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundTimeMax != nullptr)
			*RoundTimeMax = params.RoundTimeMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetGlitchTime
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetGlitchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetGlitchTime");
		
		ABP_GM_RoxyMakeover_C_SetGlitchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundTime
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetRoundTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundTime");
		
		ABP_GM_RoxyMakeover_C_SetRoundTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundMaxTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_RM_Round                                         Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RoundTimeMax                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::GetRoundMaxTime(E_RM_Round Round, float* RoundTimeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundMaxTime");
		
		ABP_GM_RoxyMakeover_C_GetRoundMaxTime_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoundTimeMax != nullptr)
			*RoundTimeMax = params.RoundTimeMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Set Player Looking at Roxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GM_RoxyMakeover_C::SetPlayerLookingatRoxy(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Set Player Looking at Roxy");
		
		ABP_GM_RoxyMakeover_C_SetPlayerLookingatRoxy_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RoxyTantrum
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::RoxyTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RoxyTantrum");
		
		ABP_GM_RoxyMakeover_C_RoxyTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Handle Player Looking at Roxy
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::HandlePlayerLookingatRoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Handle Player Looking at Roxy");
		
		ABP_GM_RoxyMakeover_C_HandlePlayerLookingatRoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Update Rage Meter
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::UpdateRageMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Update Rage Meter");
		
		ABP_GM_RoxyMakeover_C_UpdateRageMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SendNumsToComputer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SendNumsToComputer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SendNumsToComputer");
		
		ABP_GM_RoxyMakeover_C_SendNumsToComputer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TimeCalculator
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::TimeCalculator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TimeCalculator");
		
		ABP_GM_RoxyMakeover_C_TimeCalculator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B");
		
		ABP_GM_RoxyMakeover_C_OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B");
		
		ABP_GM_RoxyMakeover_C_OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_6C10FED645D58945635457AE6ACF3F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnInterrupted_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_6C10FED645D58945635457AE6ACF3F4B");
		
		ABP_GM_RoxyMakeover_C_OnInterrupted_6C10FED645D58945635457AE6ACF3F4B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_6C10FED645D58945635457AE6ACF3F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnBlendOut_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_6C10FED645D58945635457AE6ACF3F4B");
		
		ABP_GM_RoxyMakeover_C_OnBlendOut_6C10FED645D58945635457AE6ACF3F4B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_6C10FED645D58945635457AE6ACF3F4B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnCompleted_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_6C10FED645D58945635457AE6ACF3F4B");
		
		ABP_GM_RoxyMakeover_C_OnCompleted_6C10FED645D58945635457AE6ACF3F4B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9");
		
		ABP_GM_RoxyMakeover_C_OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9");
		
		ABP_GM_RoxyMakeover_C_OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_03AF32E640C7B193C1CEE69C027500B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnInterrupted_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_03AF32E640C7B193C1CEE69C027500B9");
		
		ABP_GM_RoxyMakeover_C_OnInterrupted_03AF32E640C7B193C1CEE69C027500B9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_03AF32E640C7B193C1CEE69C027500B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnBlendOut_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_03AF32E640C7B193C1CEE69C027500B9");
		
		ABP_GM_RoxyMakeover_C_OnBlendOut_03AF32E640C7B193C1CEE69C027500B9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_03AF32E640C7B193C1CEE69C027500B9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnCompleted_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_03AF32E640C7B193C1CEE69C027500B9");
		
		ABP_GM_RoxyMakeover_C_OnCompleted_03AF32E640C7B193C1CEE69C027500B9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_69CF7D3444A682D66112F6BE02480548
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyEnd_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_69CF7D3444A682D66112F6BE02480548");
		
		ABP_GM_RoxyMakeover_C_OnNotifyEnd_69CF7D3444A682D66112F6BE02480548_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_69CF7D3444A682D66112F6BE02480548
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyBegin_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_69CF7D3444A682D66112F6BE02480548");
		
		ABP_GM_RoxyMakeover_C_OnNotifyBegin_69CF7D3444A682D66112F6BE02480548_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_69CF7D3444A682D66112F6BE02480548
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnInterrupted_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_69CF7D3444A682D66112F6BE02480548");
		
		ABP_GM_RoxyMakeover_C_OnInterrupted_69CF7D3444A682D66112F6BE02480548_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_69CF7D3444A682D66112F6BE02480548
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnBlendOut_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_69CF7D3444A682D66112F6BE02480548");
		
		ABP_GM_RoxyMakeover_C_OnBlendOut_69CF7D3444A682D66112F6BE02480548_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_69CF7D3444A682D66112F6BE02480548
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnCompleted_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_69CF7D3444A682D66112F6BE02480548");
		
		ABP_GM_RoxyMakeover_C_OnCompleted_69CF7D3444A682D66112F6BE02480548_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_A78369A249CE69DA1D75998B755D3971
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyEnd_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_A78369A249CE69DA1D75998B755D3971");
		
		ABP_GM_RoxyMakeover_C_OnNotifyEnd_A78369A249CE69DA1D75998B755D3971_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_A78369A249CE69DA1D75998B755D3971
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyBegin_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_A78369A249CE69DA1D75998B755D3971");
		
		ABP_GM_RoxyMakeover_C_OnNotifyBegin_A78369A249CE69DA1D75998B755D3971_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_A78369A249CE69DA1D75998B755D3971
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnInterrupted_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_A78369A249CE69DA1D75998B755D3971");
		
		ABP_GM_RoxyMakeover_C_OnInterrupted_A78369A249CE69DA1D75998B755D3971_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_A78369A249CE69DA1D75998B755D3971
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnBlendOut_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_A78369A249CE69DA1D75998B755D3971");
		
		ABP_GM_RoxyMakeover_C_OnBlendOut_A78369A249CE69DA1D75998B755D3971_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_A78369A249CE69DA1D75998B755D3971
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnCompleted_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_A78369A249CE69DA1D75998B755D3971");
		
		ABP_GM_RoxyMakeover_C_OnCompleted_A78369A249CE69DA1D75998B755D3971_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0");
		
		ABP_GM_RoxyMakeover_C_OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0");
		
		ABP_GM_RoxyMakeover_C_OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0");
		
		ABP_GM_RoxyMakeover_C_OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0");
		
		ABP_GM_RoxyMakeover_C_OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0");
		
		ABP_GM_RoxyMakeover_C_OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.MontiorGlitchTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::MontiorGlitchTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.MontiorGlitchTimer");
		
		ABP_GM_RoxyMakeover_C_MontiorGlitchTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TransitionToNextRound
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::TransitionToNextRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TransitionToNextRound");
		
		ABP_GM_RoxyMakeover_C_TransitionToNextRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetupRoxyAccessories
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::SetupRoxyAccessories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetupRoxyAccessories");
		
		ABP_GM_RoxyMakeover_C_SetupRoxyAccessories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerWin
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::PlayerWin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerWin");
		
		ABP_GM_RoxyMakeover_C_PlayerWin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TantrumTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::TantrumTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TantrumTimer");
		
		ABP_GM_RoxyMakeover_C_TantrumTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ResolvedTantrium
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::ResolvedTantrium()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ResolvedTantrium");
		
		ABP_GM_RoxyMakeover_C_ResolvedTantrium_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WalkieTalkieOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeOnSeconds                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::WalkieTalkieOn(float TimeOnSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WalkieTalkieOn");
		
		ABP_GM_RoxyMakeover_C_WalkieTalkieOn_Params params {};
		params.TimeOnSeconds = TimeOnSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerDeath
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::PlayerDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerDeath");
		
		ABP_GM_RoxyMakeover_C_PlayerDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature");
		
		ABP_GM_RoxyMakeover_C_BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ShowtimeCountdown
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::ShowtimeCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ShowtimeCountdown");
		
		ABP_GM_RoxyMakeover_C_ShowtimeCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_WinGame
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::DEBUG_WinGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_WinGame");
		
		ABP_GM_RoxyMakeover_C_DEBUG_WinGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_WinRound
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::DEBUG_WinRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_WinRound");
		
		ABP_GM_RoxyMakeover_C_DEBUG_WinRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_LoseRound
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::DEBUG_LoseRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_LoseRound");
		
		ABP_GM_RoxyMakeover_C_DEBUG_LoseRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DebugWinRoundRoxy
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::DebugWinRoundRoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DebugWinRoundRoxy");
		
		ABP_GM_RoxyMakeover_C_DebugWinRoundRoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_StartTantrum
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::DEBUG_StartTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_StartTantrum");
		
		ABP_GM_RoxyMakeover_C_DEBUG_StartTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ReceiveBeginPlay");
		
		ABP_GM_RoxyMakeover_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WalkieTalkieOff
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::WalkieTalkieOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WalkieTalkieOff");
		
		ABP_GM_RoxyMakeover_C_WalkieTalkieOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.LightsOutTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::LightsOutTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.LightsOutTimer");
		
		ABP_GM_RoxyMakeover_C_LightsOutTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RageValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::RageValueChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RageValueChanged");
		
		ABP_GM_RoxyMakeover_C_RageValueChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RestartGame
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::RestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RestartGame");
		
		ABP_GM_RoxyMakeover_C_RestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartGame
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::StartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartGame");
		
		ABP_GM_RoxyMakeover_C_StartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerNotLookingAtRoxyTimer
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::PlayerNotLookingAtRoxyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerNotLookingAtRoxyTimer");
		
		ABP_GM_RoxyMakeover_C_PlayerNotLookingAtRoxyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnRageChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::OnRageChanged(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnRageChanged");
		
		ABP_GM_RoxyMakeover_C_OnRageChanged_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.CustomEvent_1");
		
		ABP_GM_RoxyMakeover_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ExecuteUbergraph_BP_GM_RoxyMakeover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GM_RoxyMakeover_C::ExecuteUbergraph_BP_GM_RoxyMakeover(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ExecuteUbergraph_BP_GM_RoxyMakeover");
		
		ABP_GM_RoxyMakeover_C_ExecuteUbergraph_BP_GM_RoxyMakeover_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnIntroVOCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_GM_RoxyMakeover_C::OnIntroVOCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnIntroVOCompleted__DelegateSignature");
		
		ABP_GM_RoxyMakeover_C_OnIntroVOCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GM_RoxyMakeover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GM_RoxyMakeover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C");
		return ptr;
	}

}


