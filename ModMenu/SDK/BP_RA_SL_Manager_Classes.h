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
	 * BlueprintGeneratedClass BP_RA_SL_Manager.BP_RA_SL_Manager_C
	 * Size -> 0x03E1 (FullSize[0x0601] - InheritedSize[0x0220])
	 */
	class ABP_RA_SL_Manager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TextRender_TimeCount;                                    // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_ActualTime;                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_PowerRemaining;                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_PowerConsumption;                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DEBUG_Readouts;                                          // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_TimeCount_Value;                              // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_ActualTime_Value;                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_PowerConsumption_Value;                       // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_PowerRemaining_Value;                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_Readout;                                      // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_PlayerLightFlickers_Light_03_9BEB7AE74C6EB7BB5390C9A3490C8F88; // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_PlayerLightFlickers_Light_02_9BEB7AE74C6EB7BB5390C9A3490C8F88; // 0x0284(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_PlayerLightFlickers_LightIntensity_9BEB7AE74C6EB7BB5390C9A3490C8F88; // 0x0288(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_PlayerLightFlickers__Direction_9BEB7AE74C6EB7BB5390C9A3490C8F88; // 0x028C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XNBL[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_PlayerLightFlickers;                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_RA_Door_C*>                               Ref_Door_n_Vent;                                         // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnGameStart;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameEnd;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsGameActive;                                            // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHSQ[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameTime;                                                // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerDrainLevel;                                         // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerRemaining;                                          // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_CharacterMovement;                                 // 0x02D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TimePerHour;                                             // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5T76[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHourUpdate;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        Timer_GameHour;                                          // 0x02F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentHourCount;                                        // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PerHourDrainAmount;                                      // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UpdatePowerDrain;                                        // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      PowerDrainClock;                                         // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentDrainAmount;                                      // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_RA_SL_CameraSystem_C*                            Ref_CameraSystem;                                        // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_RA_DoorButton_C*                                 Ref_ShockButton;                                         // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Office_SL_Animatronic_C*>                 Array_Animatronics;                                      // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		Enum_RA_SL_GameType                                        SelectedGameMode;                                        // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U709[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_Office_AnimatronicBase_C*>                Array_ActiveAnimatronics;                                // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              Ref_OfficeLights[0x10];                                  // 0x0358(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FScriptMulticastDelegate                             ShutOffPower;                                            // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsAnimatronicDrainingPower;                              // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLWJ[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_Darkroom[0x28];                                      // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       NightData;                                               // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FF2W[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_GameModeSpecificTools[0x10];                         // 0x03B0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       AnimatronicDrainIncreaseHappened;                        // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SCUM[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_AlarmClock[0x28];                                    // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Ref_DoorButtons[0x10];                                   // 0x03F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Ref_FoxyCurtainMeshes[0x10];                             // 0x0400(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Ref_SecretDrawer[0x28];                                  // 0x0410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Ref_HallwayRightLights[0x50];                            // 0x0438(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              Ref_HallwayLeftLights[0x50];                             // 0x0488(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              MapLightsToFlicker[0x50];                                // 0x04D8(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              Ref_OfficeVent_Lights[0x50];                             // 0x0528(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              Ref_OfficeRoom_Lights[0x50];                             // 0x0578(0x0050) UNKNOWN PROPERTY: MapProperty
		int32_t                                                    FlickerTriggerLoops;                                     // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FlickerLoopsThatHappened;                                // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Office_SL_Animatronic_C*                         PowerOutageJumpscareCharacter;                           // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_PoweroutageKill;                                   // 0x05D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                CupcakeKeepAway_AchievementName;                         // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CupcakeKeepAwayCompleted;                                // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartingGameFromHub;                                     // 0x05E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NENW[0x6];                                   // 0x05EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Ref_AmbScatterSound[0x10];                               // 0x05F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       PlayerIsWinningGame;                                     // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnGameEndViaJumpscare();
		void CheckForAchievementsOnVictory();
		void GetAnimatronicOnCamera(class ABP_Office_AnimatronicBase_C** CharacterOnScreen);
		void ActivateCameraShock();
		void CheckForAnimatonicDrainingPower(bool IsDraining, bool* IsThereStillDrain);
		void RanOutOfPower();
		void SetupDoorsAndVents();
		void SetupGameMode(Enum_RA_SL_GameType GameMode);
		void Timeline_PlayerLightFlickers__FinishedFunc();
		void Timeline_PlayerLightFlickers__UpdateFunc();
		void ReceiveBeginPlay();
		void DEBUGAdvanceActiveCharacters();
		void DEBUGRestartActiveCharacter();
		void DEBUGMoveActiveToHiddenRoom();
		void DEBUGMoveActiveCharactersAdjacent();
		void OnDoorInteraction(class ABP_Office_BaseWayPoint_C* AssignedWaypoint, bool IsClosed);
		void Start_SisterLocationOffice();
		void End_SisterLocationGame(bool DidPlayerWin, class ABP_Office_AnimatronicBase_C* JumpscaringCharacter);
		void DEBUG_StartGame();
		void ReceiveTick(float DeltaSeconds);
		void OnHourIncrement();
		void Event_HourUpdate(int32_t CurrentHour);
		void Event_UpdatePowerDrain(bool IncreaseDrain, bool CausedByAnimatronic);
		void Event_CameraSystemPower(bool IsOn);
		void TriggerControlledShock(class AButtonBase* Button);
		void DEBUG_SetGameToPrivateRoom();
		void DEBUG_SetGameToFuntimeGang();
		void DEBUG_SetGameToJobInterview();
		void DEBUG_SetGameToPuppetMaster();
		void TriggerPowerShutOffEvents();
		void DEBUG_MonitorShock();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void DEBUG_FlickerRight();
		void DEBUG_FlickerLeft();
		void DEBUG_FlickerVents();
		void DEBUG_FlickerRoom();
		void DEBUG_StopFlicker();
		void PowerOutage_JumpcareGametype();
		void DEBUG_TestPowerOutage();
		void CheckForPowerDrainFlicker();
		void UpdateAchievement_CupcakeKeepAway();
		void DEBUG_WinGame();
		void ExecuteUbergraph_BP_RA_SL_Manager(int32_t EntryPoint);
		void ShutOffPower__DelegateSignature();
		void UpdatePowerDrain__DelegateSignature(bool IncreaseDrain, bool CausedByAnimatronic);
		void OnHourUpdate__DelegateSignature(int32_t CurrentHour);
		void OnGameEnd__DelegateSignature(bool DidPlayerWin, class ABP_Office_AnimatronicBase_C* JumpscaringCharacter);
		void OnGameStart__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
