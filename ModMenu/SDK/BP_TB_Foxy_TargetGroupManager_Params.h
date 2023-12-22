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
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CanSwitchToSecretTrack
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_CanSwitchToSecretTrack_Params
	{
	public:
		bool                                                       CanActivateSecret;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.Can Activate Secret
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_CanActivateSecret_Params
	{
	public:
		bool                                                       CanActivateSecret;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.GetTotalPointsScored
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_GetTotalPointsScored_Params
	{
	public:
		int32_t                                                    PointsScored;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.SetIsActive
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_SetIsActive_Params
	{
	public:
		bool                                                       IsManagerActive;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.GetIsActive
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_GetIsActive_Params
	{
	public:
		bool                                                       IsManagerActive;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.EnableTargetGallery
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_EnableTargetGallery_Params
	{
	public:
		bool                                                       ActivateGallery;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OU51[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggerBonusRound
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_TriggerBonusRound_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CheckForBonusRound
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_CheckForBonusRound_Params
	{
	public:
		bool                                                       TriggerBonusRound;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ReceiveBeginPlay
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_UpdateTargetManager
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_DEBUG_UpdateTargetManager_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.Event_TargetHasBeenHit
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_Event_TargetHasBeenHit_Params
	{
	public:
		class ABP_TB_Foxy_Target_C*                                TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_TB_Foxy_TrackTriggerType                                 TriggerType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_ToggleGroupActivation
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_DEBUG_ToggleGroupActivation_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.SetStarsTrackCanSwitch
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_SetStarsTrackCanSwitch_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_AllStarsHit
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_DEBUG_AllStarsHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_SetStarsTrackCanSwitch
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_DEBUG_SetStarsTrackCanSwitch_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.DEBUG_HitAllTargets
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_DEBUG_HitAllTargets_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_ExecuteUbergraph_BP_TB_Foxy_TargetGroupManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggeringBonusRound__DelegateSignature
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_TriggeringBonusRound__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.ActivateSecretTrack__DelegateSignature
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_ActivateSecretTrack__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.CalculatePoints__DelegateSignature
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_CalculatePoints__DelegateSignature_Params
	{
	public:
		int32_t                                                    PointsScored;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_TargetGroupManager.BP_TB_Foxy_TargetGroupManager_C.TriggerTrackChange__DelegateSignature
	 */
	struct ABP_TB_Foxy_TargetGroupManager_C_TriggerTrackChange__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
