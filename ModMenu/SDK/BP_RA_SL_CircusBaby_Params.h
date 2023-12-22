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
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.On Victory Trigger
	 */
	struct ABP_RA_SL_CircusBaby_C_OnVictoryTrigger_Params
	{
	public:
		bool                                                       TriggerOnLeftSide;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SendCharacterToSpecificRoom
	 */
	struct ABP_RA_SL_CircusBaby_C_SendCharacterToSpecificRoom_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_CircusBaby_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnCircuBabyMoodChange
	 */
	struct ABP_RA_SL_CircusBaby_C_OnCircuBabyMoodChange_Params
	{
	public:
		bool                                                       IsMad;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLeftSideTriggered;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateHideAndSeekBaby
	 */
	struct ABP_RA_SL_CircusBaby_C_ActivateHideAndSeekBaby_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateRedLightBabies
	 */
	struct ABP_RA_SL_CircusBaby_C_ActivateRedLightBabies_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PickGameModeChange
	 */
	struct ABP_RA_SL_CircusBaby_C_PickGameModeChange_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateTagPlushBabies
	 */
	struct ABP_RA_SL_CircusBaby_C_ActivateTagPlushBabies_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.StoreAllPlushBabies
	 */
	struct ABP_RA_SL_CircusBaby_C_StoreAllPlushBabies_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnGameEnd
	 */
	struct ABP_RA_SL_CircusBaby_C_OnGameEnd_Params
	{
	public:
		bool                                                       IsVictory;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetOwnerReference
	 */
	struct ABP_RA_SL_CircusBaby_C_SetOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ForceDisappearTransition
	 */
	struct ABP_RA_SL_CircusBaby_C_ForceDisappearTransition_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_CircusBaby_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.SetCircusBabyToMad
	 */
	struct ABP_RA_SL_CircusBaby_C_SetCircusBabyToMad_Params
	{
	public:
		bool                                                       IsCircusBabyMad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.StartNextGameMode
	 */
	struct ABP_RA_SL_CircusBaby_C_StartNextGameMode_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  CurrentGameRunning;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Redlight_TImeBeforeEnd
	 */
	struct ABP_RA_SL_CircusBaby_C_Redlight_TImeBeforeEnd_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.HideAndSeekTriggerCameraTransition
	 */
	struct ABP_RA_SL_CircusBaby_C_HideAndSeekTriggerCameraTransition_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_SetCircusBabyToMad
	 */
	struct ABP_RA_SL_CircusBaby_C_DEBUG_SetCircusBabyToMad_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_SetCircusBabyToCalm
	 */
	struct ABP_RA_SL_CircusBaby_C_DEBUG_SetCircusBabyToCalm_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_CircusBaby_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.UseWaypointTranform
	 */
	struct ABP_RA_SL_CircusBaby_C_UseWaypointTranform_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.TriggerFlashlightFlicker
	 */
	struct ABP_RA_SL_CircusBaby_C_TriggerFlashlightFlicker_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.CheckWhenRendered
	 */
	struct ABP_RA_SL_CircusBaby_C_CheckWhenRendered_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Trigger_CallCircusBaby_VO
	 */
	struct ABP_RA_SL_CircusBaby_C_Trigger_CallCircusBaby_VO_Params
	{
	public:
		int32_t                                                    VO_ToPlay;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DEBUG_FireCircusBabyVO
	 */
	struct ABP_RA_SL_CircusBaby_C_DEBUG_FireCircusBabyVO_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_HideAndSeek
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_HideAndSeek_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_FlashlightTag
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_FlashlightTag_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Redlight
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_Redlight_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_GameModeSucces
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_GameModeSucces_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_Vo_HideSeek_Failure
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_Vo_HideSeek_Failure_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_VictoryStart
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_VictoryStart_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Victory_GivingIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_Victory_GivingIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Victory_AtDoor
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_Victory_AtDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream_TakingLongToEat
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_Icecream_TakingLongToEat_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream_TakingLongToTake
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_Icecream_TakingLongToTake_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.HideCircusBaby
	 */
	struct ABP_RA_SL_CircusBaby_C_HideCircusBaby_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PLAY_VO_RandomBackgroundDialogue
	 */
	struct ABP_RA_SL_CircusBaby_C_PLAY_VO_RandomBackgroundDialogue_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Trigger_RandomLightFlickers
	 */
	struct ABP_RA_SL_CircusBaby_C_Trigger_RandomLightFlickers_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Lights_OvertimeTrigger
	 */
	struct ABP_RA_SL_CircusBaby_C_Lights_OvertimeTrigger_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VO_PlayRandomLine
	 */
	struct ABP_RA_SL_CircusBaby_C_VO_PlayRandomLine_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Event_StartTimerForRandomDialogue
	 */
	struct ABP_RA_SL_CircusBaby_C_Event_StartTimerForRandomDialogue_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_PreTookIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_VictoryTrigger_PreTookIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ChanceToTakeIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_ChanceToTakeIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.OnVictory_ChanceToEatIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_OnVictory_ChanceToEatIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_AteIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_VictoryTrigger_AteIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ActivateBidybapArm
	 */
	struct ABP_RA_SL_CircusBaby_C_ActivateBidybapArm_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.VictoryTrigger_PostTookIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_VictoryTrigger_PostTookIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.Play_VO_Icecream
	 */
	struct ABP_RA_SL_CircusBaby_C_Play_VO_Icecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.PlayerDiscardedIcecream
	 */
	struct ABP_RA_SL_CircusBaby_C_PlayerDiscardedIcecream_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.JumpAheadToHideCircusBaby
	 */
	struct ABP_RA_SL_CircusBaby_C_JumpAheadToHideCircusBaby_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.DisableAllVO
	 */
	struct ABP_RA_SL_CircusBaby_C_DisableAllVO_Params
	{	};

	/**
	 * Function BP_RA_SL_CircusBaby.BP_RA_SL_CircusBaby_C.ExecuteUbergraph_BP_RA_SL_CircusBaby
	 */
	struct ABP_RA_SL_CircusBaby_C_ExecuteUbergraph_BP_RA_SL_CircusBaby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
