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
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameEndViaJumpscare
	 */
	struct ABP_RA_SL_Manager_C_OnGameEndViaJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForAchievementsOnVictory
	 */
	struct ABP_RA_SL_Manager_C_CheckForAchievementsOnVictory_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.GetAnimatronicOnCamera
	 */
	struct ABP_RA_SL_Manager_C_GetAnimatronicOnCamera_Params
	{
	public:
		class ABP_Office_AnimatronicBase_C*                        CharacterOnScreen;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ActivateCameraShock
	 */
	struct ABP_RA_SL_Manager_C_ActivateCameraShock_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForAnimatonicDrainingPower
	 */
	struct ABP_RA_SL_Manager_C_CheckForAnimatonicDrainingPower_Params
	{
	public:
		bool                                                       IsDraining;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsThereStillDrain;                                       // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.RanOutOfPower
	 */
	struct ABP_RA_SL_Manager_C_RanOutOfPower_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SetupDoorsAndVents
	 */
	struct ABP_RA_SL_Manager_C_SetupDoorsAndVents_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SetupGameMode
	 */
	struct ABP_RA_SL_Manager_C_SetupGameMode_Params
	{
	public:
		Enum_RA_SL_GameType                                        GameMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NAZ4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Timeline_PlayerLightFlickers__FinishedFunc
	 */
	struct ABP_RA_SL_Manager_C_Timeline_PlayerLightFlickers__FinishedFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Timeline_PlayerLightFlickers__UpdateFunc
	 */
	struct ABP_RA_SL_Manager_C_Timeline_PlayerLightFlickers__UpdateFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Manager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: AdvanceActiveCharacters
	 */
	struct ABP_RA_SL_Manager_C_DEBUGAdvanceActiveCharacters_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: RestartActiveCharacter
	 */
	struct ABP_RA_SL_Manager_C_DEBUGRestartActiveCharacter_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: MoveActiveToHiddenRoom
	 */
	struct ABP_RA_SL_Manager_C_DEBUGMoveActiveToHiddenRoom_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG: MoveActiveCharactersAdjacent
	 */
	struct ABP_RA_SL_Manager_C_DEBUGMoveActiveCharactersAdjacent_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnDoorInteraction
	 */
	struct ABP_RA_SL_Manager_C_OnDoorInteraction_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           AssignedWaypoint;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsClosed;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Start_SisterLocationOffice
	 */
	struct ABP_RA_SL_Manager_C_Start_SisterLocationOffice_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.End_SisterLocationGame
	 */
	struct ABP_RA_SL_Manager_C_End_SisterLocationGame_Params
	{
	public:
		bool                                                       DidPlayerWin;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KI79[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Office_AnimatronicBase_C*                        JumpscaringCharacter;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_StartGame
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_StartGame_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ReceiveTick
	 */
	struct ABP_RA_SL_Manager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnHourIncrement
	 */
	struct ABP_RA_SL_Manager_C_OnHourIncrement_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_HourUpdate
	 */
	struct ABP_RA_SL_Manager_C_Event_HourUpdate_Params
	{
	public:
		int32_t                                                    CurrentHour;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_UpdatePowerDrain
	 */
	struct ABP_RA_SL_Manager_C_Event_UpdatePowerDrain_Params
	{
	public:
		bool                                                       IncreaseDrain;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CausedByAnimatronic;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.Event_CameraSystemPower
	 */
	struct ABP_RA_SL_Manager_C_Event_CameraSystemPower_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.TriggerControlledShock
	 */
	struct ABP_RA_SL_Manager_C_TriggerControlledShock_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToPrivateRoom
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_SetGameToPrivateRoom_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToFuntimeGang
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_SetGameToFuntimeGang_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToJobInterview
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_SetGameToJobInterview_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_SetGameToPuppetMaster
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_SetGameToPuppetMaster_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.TriggerPowerShutOffEvents
	 */
	struct ABP_RA_SL_Manager_C_TriggerPowerShutOffEvents_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_MonitorShock
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_MonitorShock_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_Manager_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FXD7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerRight
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_FlickerRight_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerLeft
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_FlickerLeft_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerVents
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_FlickerVents_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_FlickerRoom
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_FlickerRoom_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_StopFlicker
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_StopFlicker_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.PowerOutage_JumpcareGametype
	 */
	struct ABP_RA_SL_Manager_C_PowerOutage_JumpcareGametype_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_TestPowerOutage
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_TestPowerOutage_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.CheckForPowerDrainFlicker
	 */
	struct ABP_RA_SL_Manager_C_CheckForPowerDrainFlicker_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.UpdateAchievement_CupcakeKeepAway
	 */
	struct ABP_RA_SL_Manager_C_UpdateAchievement_CupcakeKeepAway_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.DEBUG_WinGame
	 */
	struct ABP_RA_SL_Manager_C_DEBUG_WinGame_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ExecuteUbergraph_BP_RA_SL_Manager
	 */
	struct ABP_RA_SL_Manager_C_ExecuteUbergraph_BP_RA_SL_Manager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.ShutOffPower__DelegateSignature
	 */
	struct ABP_RA_SL_Manager_C_ShutOffPower__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.UpdatePowerDrain__DelegateSignature
	 */
	struct ABP_RA_SL_Manager_C_UpdatePowerDrain__DelegateSignature_Params
	{
	public:
		bool                                                       IncreaseDrain;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CausedByAnimatronic;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnHourUpdate__DelegateSignature
	 */
	struct ABP_RA_SL_Manager_C_OnHourUpdate__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentHour;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameEnd__DelegateSignature
	 */
	struct ABP_RA_SL_Manager_C_OnGameEnd__DelegateSignature_Params
	{
	public:
		bool                                                       DidPlayerWin;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W0M0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_Office_AnimatronicBase_C*                        JumpscaringCharacter;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Manager.BP_RA_SL_Manager_C.OnGameStart__DelegateSignature
	 */
	struct ABP_RA_SL_Manager_C_OnGameStart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
