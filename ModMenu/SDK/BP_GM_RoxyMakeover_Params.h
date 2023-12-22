#pragma once

/**
 * Name: HW2
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.IsJumpscareFinished
	 */
	struct ABP_GM_RoxyMakeover_C_IsJumpscareFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.UpdatePlayerLookingAtRoxy
	 */
	struct ABP_GM_RoxyMakeover_C_UpdatePlayerLookingAtRoxy_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartLookingAwayFromRoxyTimer
	 */
	struct ABP_GM_RoxyMakeover_C_StartLookingAwayFromRoxyTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.CanPlayLookAtMeVO
	 */
	struct ABP_GM_RoxyMakeover_C_CanPlayLookAtMeVO_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WinGameVO
	 */
	struct ABP_GM_RoxyMakeover_C_WinGameVO_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Doesn'tLookAtRoxyVO
	 */
	struct ABP_GM_RoxyMakeover_C_DoesntLookAtRoxyVO_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.MakesMistakeVO
	 */
	struct ABP_GM_RoxyMakeover_C_MakesMistakeVO_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WinRoundVO
	 */
	struct ABP_GM_RoxyMakeover_C_WinRoundVO_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SignalUIForIncorrectItems
	 */
	struct ABP_GM_RoxyMakeover_C_SignalUIForIncorrectItems_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRandomLightsOutTimer
	 */
	struct ABP_GM_RoxyMakeover_C_GetRandomLightsOutTimer_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartLightsOutTimer
	 */
	struct ABP_GM_RoxyMakeover_C_StartLightsOutTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartGlitchTimer
	 */
	struct ABP_GM_RoxyMakeover_C_StartGlitchTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRandomGlitchWaitTime
	 */
	struct ABP_GM_RoxyMakeover_C_GetRandomGlitchWaitTime_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.HandleRoundTransitionsForRuinMaskRound
	 */
	struct ABP_GM_RoxyMakeover_C_HandleRoundTransitionsForRuinMaskRound_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnItemSocketed
	 */
	struct ABP_GM_RoxyMakeover_C_OnItemSocketed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.HandleRoundTransitionsSetup
	 */
	struct ABP_GM_RoxyMakeover_C_HandleRoundTransitionsSetup_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RoxyTantrumUpdate
	 */
	struct ABP_GM_RoxyMakeover_C_RoxyTantrumUpdate_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetUIRoxyMode
	 */
	struct ABP_GM_RoxyMakeover_C_SetUIRoxyMode_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundNumMakeup
	 */
	struct ABP_GM_RoxyMakeover_C_SetRoundNumMakeup_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundNumMakeup
	 */
	struct ABP_GM_RoxyMakeover_C_GetRoundNumMakeup_Params
	{
	public:
		int32_t                                                    RoundTimeMax;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundNumAccessories
	 */
	struct ABP_GM_RoxyMakeover_C_GetRoundNumAccessories_Params
	{
	public:
		int32_t                                                    RoundTimeMax;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundNumAccessories
	 */
	struct ABP_GM_RoxyMakeover_C_SetRoundNumAccessories_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetUIData
	 */
	struct ABP_GM_RoxyMakeover_C_SetUIData_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundGlitchTime
	 */
	struct ABP_GM_RoxyMakeover_C_GetRoundGlitchTime_Params
	{
	public:
		E_RM_Round                                                 Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OGZ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RoundTimeMax;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetGlitchTime
	 */
	struct ABP_GM_RoxyMakeover_C_SetGlitchTime_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetRoundTime
	 */
	struct ABP_GM_RoxyMakeover_C_SetRoundTime_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.GetRoundMaxTime
	 */
	struct ABP_GM_RoxyMakeover_C_GetRoundMaxTime_Params
	{
	public:
		E_RM_Round                                                 Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NT1W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RoundTimeMax;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Set Player Looking at Roxy
	 */
	struct ABP_GM_RoxyMakeover_C_SetPlayerLookingatRoxy_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R9QS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RoxyTantrum
	 */
	struct ABP_GM_RoxyMakeover_C_RoxyTantrum_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Handle Player Looking at Roxy
	 */
	struct ABP_GM_RoxyMakeover_C_HandlePlayerLookingatRoxy_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.Update Rage Meter
	 */
	struct ABP_GM_RoxyMakeover_C_UpdateRageMeter_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SendNumsToComputer
	 */
	struct ABP_GM_RoxyMakeover_C_SendNumsToComputer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TimeCalculator
	 */
	struct ABP_GM_RoxyMakeover_C_TimeCalculator_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_6C10FED645D58945635457AE6ACF3F4B
	 */
	struct ABP_GM_RoxyMakeover_C_OnInterrupted_6C10FED645D58945635457AE6ACF3F4B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_6C10FED645D58945635457AE6ACF3F4B
	 */
	struct ABP_GM_RoxyMakeover_C_OnBlendOut_6C10FED645D58945635457AE6ACF3F4B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_6C10FED645D58945635457AE6ACF3F4B
	 */
	struct ABP_GM_RoxyMakeover_C_OnCompleted_6C10FED645D58945635457AE6ACF3F4B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_03AF32E640C7B193C1CEE69C027500B9
	 */
	struct ABP_GM_RoxyMakeover_C_OnInterrupted_03AF32E640C7B193C1CEE69C027500B9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_03AF32E640C7B193C1CEE69C027500B9
	 */
	struct ABP_GM_RoxyMakeover_C_OnBlendOut_03AF32E640C7B193C1CEE69C027500B9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_03AF32E640C7B193C1CEE69C027500B9
	 */
	struct ABP_GM_RoxyMakeover_C_OnCompleted_03AF32E640C7B193C1CEE69C027500B9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_69CF7D3444A682D66112F6BE02480548
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyEnd_69CF7D3444A682D66112F6BE02480548_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_69CF7D3444A682D66112F6BE02480548
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyBegin_69CF7D3444A682D66112F6BE02480548_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_69CF7D3444A682D66112F6BE02480548
	 */
	struct ABP_GM_RoxyMakeover_C_OnInterrupted_69CF7D3444A682D66112F6BE02480548_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_69CF7D3444A682D66112F6BE02480548
	 */
	struct ABP_GM_RoxyMakeover_C_OnBlendOut_69CF7D3444A682D66112F6BE02480548_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_69CF7D3444A682D66112F6BE02480548
	 */
	struct ABP_GM_RoxyMakeover_C_OnCompleted_69CF7D3444A682D66112F6BE02480548_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_A78369A249CE69DA1D75998B755D3971
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyEnd_A78369A249CE69DA1D75998B755D3971_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_A78369A249CE69DA1D75998B755D3971
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyBegin_A78369A249CE69DA1D75998B755D3971_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_A78369A249CE69DA1D75998B755D3971
	 */
	struct ABP_GM_RoxyMakeover_C_OnInterrupted_A78369A249CE69DA1D75998B755D3971_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_A78369A249CE69DA1D75998B755D3971
	 */
	struct ABP_GM_RoxyMakeover_C_OnBlendOut_A78369A249CE69DA1D75998B755D3971_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_A78369A249CE69DA1D75998B755D3971
	 */
	struct ABP_GM_RoxyMakeover_C_OnCompleted_A78369A249CE69DA1D75998B755D3971_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 */
	struct ABP_GM_RoxyMakeover_C_OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 */
	struct ABP_GM_RoxyMakeover_C_OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 */
	struct ABP_GM_RoxyMakeover_C_OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0
	 */
	struct ABP_GM_RoxyMakeover_C_OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.MontiorGlitchTimer
	 */
	struct ABP_GM_RoxyMakeover_C_MontiorGlitchTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TransitionToNextRound
	 */
	struct ABP_GM_RoxyMakeover_C_TransitionToNextRound_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.SetupRoxyAccessories
	 */
	struct ABP_GM_RoxyMakeover_C_SetupRoxyAccessories_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerWin
	 */
	struct ABP_GM_RoxyMakeover_C_PlayerWin_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.TantrumTimer
	 */
	struct ABP_GM_RoxyMakeover_C_TantrumTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ResolvedTantrium
	 */
	struct ABP_GM_RoxyMakeover_C_ResolvedTantrium_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WalkieTalkieOn
	 */
	struct ABP_GM_RoxyMakeover_C_WalkieTalkieOn_Params
	{
	public:
		float                                                      TimeOnSeconds;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerDeath
	 */
	struct ABP_GM_RoxyMakeover_C_PlayerDeath_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature
	 */
	struct ABP_GM_RoxyMakeover_C_BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ShowtimeCountdown
	 */
	struct ABP_GM_RoxyMakeover_C_ShowtimeCountdown_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_WinGame
	 */
	struct ABP_GM_RoxyMakeover_C_DEBUG_WinGame_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_WinRound
	 */
	struct ABP_GM_RoxyMakeover_C_DEBUG_WinRound_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_LoseRound
	 */
	struct ABP_GM_RoxyMakeover_C_DEBUG_LoseRound_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DebugWinRoundRoxy
	 */
	struct ABP_GM_RoxyMakeover_C_DebugWinRoundRoxy_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.DEBUG_StartTantrum
	 */
	struct ABP_GM_RoxyMakeover_C_DEBUG_StartTantrum_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ReceiveBeginPlay
	 */
	struct ABP_GM_RoxyMakeover_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.WalkieTalkieOff
	 */
	struct ABP_GM_RoxyMakeover_C_WalkieTalkieOff_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.LightsOutTimer
	 */
	struct ABP_GM_RoxyMakeover_C_LightsOutTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RageValueChanged
	 */
	struct ABP_GM_RoxyMakeover_C_RageValueChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.RestartGame
	 */
	struct ABP_GM_RoxyMakeover_C_RestartGame_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.StartGame
	 */
	struct ABP_GM_RoxyMakeover_C_StartGame_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.PlayerNotLookingAtRoxyTimer
	 */
	struct ABP_GM_RoxyMakeover_C_PlayerNotLookingAtRoxyTimer_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnRageChanged
	 */
	struct ABP_GM_RoxyMakeover_C_OnRageChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.CustomEvent_1
	 */
	struct ABP_GM_RoxyMakeover_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.ExecuteUbergraph_BP_GM_RoxyMakeover
	 */
	struct ABP_GM_RoxyMakeover_C_ExecuteUbergraph_BP_GM_RoxyMakeover_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KK8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C.OnIntroVOCompleted__DelegateSignature
	 */
	struct ABP_GM_RoxyMakeover_C_OnIntroVOCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
