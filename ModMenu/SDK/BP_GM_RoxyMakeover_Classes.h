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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_GM_RoxyMakeover.BP_GM_RoxyMakeover_C
	 * Size -> 0x01D1 (FullSize[0x03F1] - InheritedSize[0x0220])
	 */
	class ABP_GM_RoxyMakeover_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ShowtimeHandle;                                          // 0x0230(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		E_RM_Round                                                 ERound;                                                  // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bJumpscareFinished;                                      // 0x0239(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LETH[0x2];                                   // 0x023A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentRoundTime;                                        // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoundOneTime;                                            // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoundTwoTime;                                            // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoundThreeTime;                                          // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoundFourTime;                                           // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitingForMaskTime;                                      // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0F1U[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ComputerRefTransform;                                    // 0x0260(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class ABP_BS_RM_Bust_C*                                    Busts;                                                   // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentScreenGlitchWaitTime;                             // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenGlitchWaitTimeR1;                                  // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenGlitchWaitTimeR2;                                  // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenGlitchWaitTimeR3;                                  // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DarkRoom_Jumpscare_C*                            JumpscareDarkroom;                                       // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumAccessoriesR1;                                        // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumAccessoriesR2;                                        // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumAccessoriesR3;                                        // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumAccessoriesR4;                                        // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentNumAccessoriesForRound;                           // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CrruentNumMakeupForRound;                                // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumMakeupR1;                                             // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumMakeupR2;                                             // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumMakeupR3;                                             // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_306K[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BS_RM_ComputerRef_C*                             ComputerRef;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_VRPlayer_C*                                      Player;                                                  // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BS_RM_Roxy_C*                                    Roxy;                                                    // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRuinedMakeover;                                        // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BGRG[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TantrumWaitTime;                                         // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TantrumWaitTimeRandomDelta;                              // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInTrantrum;                                            // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZZEN[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        RoxyTantrumTimer;                                        // 0x0300(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TantumUpdateTime;                                        // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3CO8[0x4];                                   // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_FinishButton_C*                                  SubmitButton;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrevPlayerLookingAtRoxy;                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SubmissionInProgress;                                    // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerLookingAtRoxy;                                     // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1BZN[0x5];                                   // 0x031B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Monitor;                                                 // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BS_RM_RageManager_C*                             RageManager;                                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        WinGameMontage;                                          // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        WinRoundMontage;                                         // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        LoseRoundMontage;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        NotLookingMontage;                                       // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GiveMeTheMaskMontage;                                    // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWaitingForFinalMask;                                   // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q8YN[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScreenGlitchWaitTimeR4;                                  // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenGlitchWaitTimeRandomDelta;                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumMakeupR4;                                             // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RoxyFinalMaskActorTag;                                   // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BS_RM_LazySusan_C*                               LazySuzan;                                               // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenGlitchMinTimeOff;                                  // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenGlitchMaxTimeOff;                                  // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GlitchTimerHandle;                                       // 0x0380(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      MinWalkieLisitenTime;                                    // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightsOutWaitTime;                                       // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightOutWaitTimeRandomDelta;                             // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E7NA[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LightsOutTimerHandle;                                    // 0x0398(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class ULevelSequence*>                              LightsOutLevelSequences;                                 // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ULevelSequence*                                      IntroLevelSequence;                                      // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_RRM_RoxyTalkie_C*                                WalkieTalkie;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtRageTimerStartRageTime;                            // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8VZ1[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LookAtTimerHandle;                                       // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentLookingAwayTime;                                  // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtRageTickTime;                                      // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameIsWon;                                               // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SUMR[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIntroVOCompleted;                                      // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       WaitingForIntroVO;                                       // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsJumpscareFinished();
		void UpdatePlayerLookingAtRoxy();
		void StartLookingAwayFromRoxyTimer();
		void CanPlayLookAtMeVO(bool* NewParam);
		void WinGameVO();
		void DoesntLookAtRoxyVO();
		void MakesMistakeVO();
		void WinRoundVO();
		void SignalUIForIncorrectItems();
		void GetRandomLightsOutTimer(float* Value);
		void StartLightsOutTimer();
		void StartGlitchTimer();
		void GetRandomGlitchWaitTime(float* Value);
		void HandleRoundTransitionsForRuinMaskRound();
		void OnItemSocketed(class AActor* Actor);
		void HandleRoundTransitionsSetup();
		void RoxyTantrumUpdate();
		void SetUIRoxyMode();
		void SetRoundNumMakeup();
		void GetRoundNumMakeup(int32_t* RoundTimeMax);
		void GetRoundNumAccessories(int32_t* RoundTimeMax);
		void SetRoundNumAccessories();
		void SetUIData();
		void GetRoundGlitchTime(E_RM_Round Round, float* RoundTimeMax);
		void SetGlitchTime();
		void SetRoundTime();
		void GetRoundMaxTime(E_RM_Round Round, float* RoundTimeMax);
		void SetPlayerLookingatRoxy(bool Value);
		void RoxyTantrum();
		void HandlePlayerLookingatRoxy();
		void UpdateRageMeter();
		void SendNumsToComputer();
		void TimeCalculator();
		void OnNotifyEnd_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName);
		void OnNotifyBegin_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName);
		void OnInterrupted_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName);
		void OnBlendOut_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName);
		void OnCompleted_6C10FED645D58945635457AE6ACF3F4B(const class FName& NotifyName);
		void OnNotifyEnd_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName);
		void OnNotifyBegin_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName);
		void OnInterrupted_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName);
		void OnBlendOut_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName);
		void OnCompleted_03AF32E640C7B193C1CEE69C027500B9(const class FName& NotifyName);
		void OnNotifyEnd_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName);
		void OnNotifyBegin_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName);
		void OnInterrupted_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName);
		void OnBlendOut_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName);
		void OnCompleted_69CF7D3444A682D66112F6BE02480548(const class FName& NotifyName);
		void OnNotifyEnd_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName);
		void OnNotifyBegin_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName);
		void OnInterrupted_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName);
		void OnBlendOut_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName);
		void OnCompleted_A78369A249CE69DA1D75998B755D3971(const class FName& NotifyName);
		void OnNotifyEnd_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName);
		void OnNotifyBegin_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName);
		void OnInterrupted_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName);
		void OnBlendOut_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName);
		void OnCompleted_95E2F8F747A5CC9D3D1EB1AEC8E765C0(const class FName& NotifyName);
		void MontiorGlitchTimer();
		void TransitionToNextRound();
		void SetupRoxyAccessories();
		void PlayerWin();
		void TantrumTimer();
		void ResolvedTantrium();
		void WalkieTalkieOn(float TimeOnSeconds);
		void PlayerDeath();
		void BndEvt__BP_GM_RoxyMakeover_Button_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature(class AButtonBase* Button);
		void ShowtimeCountdown();
		void DEBUG_WinGame();
		void DEBUG_WinRound();
		void DEBUG_LoseRound();
		void DebugWinRoundRoxy();
		void DEBUG_StartTantrum();
		void ReceiveBeginPlay();
		void WalkieTalkieOff();
		void LightsOutTimer();
		void RageValueChanged(float Value);
		void RestartGame();
		void StartGame();
		void PlayerNotLookingAtRoxyTimer();
		void OnRageChanged(float Value);
		void CustomEvent_1();
		void ExecuteUbergraph_BP_GM_RoxyMakeover(int32_t EntryPoint);
		void OnIntroVOCompleted__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
