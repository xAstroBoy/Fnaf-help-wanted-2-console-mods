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
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.GetActive
	 */
	struct ABP_RA_SL_PlushBaby_C_GetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.GetAssignedRole
	 */
	struct ABP_RA_SL_PlushBaby_C_GetAssignedRole_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  AssignedRole;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.FindRoomNotBeingWatched
	 */
	struct ABP_RA_SL_PlushBaby_C_FindRoomNotBeingWatched_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.HandleRedLightMechanics
	 */
	struct ABP_RA_SL_PlushBaby_C_HandleRedLightMechanics_Params
	{
	public:
		bool                                                       IsSpotOccupied;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PHCZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DetermineWhereCircusBabyIsBlocking
	 */
	struct ABP_RA_SL_PlushBaby_C_DetermineWhereCircusBabyIsBlocking_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_PlushbabyWalk__FinishedFunc
	 */
	struct ABP_RA_SL_PlushBaby_C_Timeline_PlushbabyWalk__FinishedFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_PlushbabyWalk__UpdateFunc
	 */
	struct ABP_RA_SL_PlushBaby_C_Timeline_PlushbabyWalk__UpdateFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetAssignedRole
	 */
	struct ABP_RA_SL_PlushBaby_C_SetAssignedRole_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetToRun
	 */
	struct ABP_RA_SL_PlushBaby_C_SetToRun_Params
	{
	public:
		bool                                                       AllowRun;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.AssignPoseForFlashlightTag
	 */
	struct ABP_RA_SL_PlushBaby_C_AssignPoseForFlashlightTag_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   AnimationPose;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.UpdateHeadShake
	 */
	struct ABP_RA_SL_PlushBaby_C_UpdateHeadShake_Params
	{
	public:
		float                                                      ShakeAlpha;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_PlushBaby_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ReceiveTick
	 */
	struct ABP_RA_SL_PlushBaby_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature
	 */
	struct ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_0_OnFlashlightReaction__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_PlushBaby_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.WakeUpPlushBaby
	 */
	struct ABP_RA_SL_PlushBaby_C_WakeUpPlushBaby_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ResetPlushBaby
	 */
	struct ABP_RA_SL_PlushBaby_C_ResetPlushBaby_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature
	 */
	struct ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_1_FlashlightVisibleTimeUpdate__DelegateSignature_Params
	{
	public:
		float                                                      TotalSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature
	 */
	struct ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_2_OnFlashlightReaction__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature
	 */
	struct ABP_RA_SL_PlushBaby_C_BndEvt__BP_RA_CN_PlushBaby_FlashlightReaction_K2Node_ComponentBoundEvent_3_OnFlashlightReaction__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_PlushBaby_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ActivateRole
	 */
	struct ABP_RA_SL_PlushBaby_C_ActivateRole_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.SetActive
	 */
	struct ABP_RA_SL_PlushBaby_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DisableRole
	 */
	struct ABP_RA_SL_PlushBaby_C_DisableRole_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DEBUG_ScareAwayPlushBaby
	 */
	struct ABP_RA_SL_PlushBaby_C_DEBUG_ScareAwayPlushBaby_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBabyToHide
	 */
	struct ABP_RA_SL_PlushBaby_C_PlushBabyToHide_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CheckForUniqueTrigger
	 */
	struct ABP_RA_SL_PlushBaby_C_CheckForUniqueTrigger_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ResetHideAndSeek
	 */
	struct ABP_RA_SL_PlushBaby_C_ResetHideAndSeek_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.CircusBabyIsMad
	 */
	struct ABP_RA_SL_PlushBaby_C_CircusBabyIsMad_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.DisallowSpecificMovement
	 */
	struct ABP_RA_SL_PlushBaby_C_DisallowSpecificMovement_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       DisallowedSide;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.AssignCircusBabyReference
	 */
	struct ABP_RA_SL_PlushBaby_C_AssignCircusBabyReference_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Stop_Walk
	 */
	struct ABP_RA_SL_PlushBaby_C_Timeline_Stop_Walk_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Play_Walk
	 */
	struct ABP_RA_SL_PlushBaby_C_Timeline_Play_Walk_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.Timeline_Start_Walk
	 */
	struct ABP_RA_SL_PlushBaby_C_Timeline_Start_Walk_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBaby_HideAudioForFlashlightTag
	 */
	struct ABP_RA_SL_PlushBaby_C_PlushBaby_HideAudioForFlashlightTag_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.PlushBabyKills
	 */
	struct ABP_RA_SL_PlushBaby_C_PlushBabyKills_Params
	{	};

	/**
	 * Function BP_RA_SL_PlushBaby.BP_RA_SL_PlushBaby_C.ExecuteUbergraph_BP_RA_SL_PlushBaby
	 */
	struct ABP_RA_SL_PlushBaby_C_ExecuteUbergraph_BP_RA_SL_PlushBaby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
