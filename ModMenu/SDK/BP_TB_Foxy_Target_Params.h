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
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetActivation
	 */
	struct ABP_TB_Foxy_Target_C_GetActivation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.HandleSecretHit
	 */
	struct ABP_TB_Foxy_Target_C_HandleSecretHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TriggerAudioHit
	 */
	struct ABP_TB_Foxy_Target_C_TriggerAudioHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetOverrideTargetActivation
	 */
	struct ABP_TB_Foxy_Target_C_GetOverrideTargetActivation_Params
	{
	public:
		bool                                                       OverrideTargetActivation;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetOverrideTargetActivation
	 */
	struct ABP_TB_Foxy_Target_C_SetOverrideTargetActivation_Params
	{
	public:
		bool                                                       IsTrue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.StoreActivatables
	 */
	struct ABP_TB_Foxy_Target_C_StoreActivatables_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetIsTargetActive
	 */
	struct ABP_TB_Foxy_Target_C_GetIsTargetActive_Params
	{
	public:
		bool                                                       IsTargetActive;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetActivation
	 */
	struct ABP_TB_Foxy_Target_C_TargetActivation_Params
	{
	public:
		bool                                                       ActivateTarget;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetupTarget
	 */
	struct ABP_TB_Foxy_Target_C_SetupTarget_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Change Target Color when Hit
	 */
	struct ABP_TB_Foxy_Target_C_ChangeTargetColorwhenHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.CheckForActivatables
	 */
	struct ABP_TB_Foxy_Target_C_CheckForActivatables_Params
	{
	public:
		bool                                                       ActivateItems;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AJJZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.GetTargetStatus
	 */
	struct ABP_TB_Foxy_Target_C_GetTargetStatus_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Trigger Bonus Round
	 */
	struct ABP_TB_Foxy_Target_C_TriggerBonusRound_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.IncrementalActivation
	 */
	struct ABP_TB_Foxy_Target_C_IncrementalActivation_Params
	{
	public:
		float                                                      PercentageActivated;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.OnTargetHit
	 */
	struct ABP_TB_Foxy_Target_C_OnTargetHit_Params
	{
	public:
		struct FTargetHitParams                                    TargetHitParams;                                         // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.FlashOnHit
	 */
	struct ABP_TB_Foxy_Target_C_FlashOnHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ReceiveBeginPlay
	 */
	struct ABP_TB_Foxy_Target_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ResetOnHit
	 */
	struct ABP_TB_Foxy_Target_C_ResetOnHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.RespawnTarget
	 */
	struct ABP_TB_Foxy_Target_C_RespawnTarget_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.OnTargetHitCall
	 */
	struct ABP_TB_Foxy_Target_C_OnTargetHitCall_Params
	{
	public:
		class ABP_TB_Foxy_Target_C*                                TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_TB_Foxy_TrackTriggerType                                 TriggerType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_UpdateTargetSetup
	 */
	struct ABP_TB_Foxy_Target_C_DEBUG_UpdateTargetSetup_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_SetTargetHit
	 */
	struct ABP_TB_Foxy_Target_C_DEBUG_SetTargetHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.DEBUG_TriggerOnHitTargetHit
	 */
	struct ABP_TB_Foxy_Target_C_DEBUG_TriggerOnHitTargetHit_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Deactivated
	 */
	struct ABP_TB_Foxy_Target_C_Deactivated_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.Activated
	 */
	struct ABP_TB_Foxy_Target_C_Activated_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetDisable
	 */
	struct ABP_TB_Foxy_Target_C_TargetDisable_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetActivate
	 */
	struct ABP_TB_Foxy_Target_C_TargetActivate_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.SetSecretTrackSwitch
	 */
	struct ABP_TB_Foxy_Target_C_SetSecretTrackSwitch_Params
	{	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.ExecuteUbergraph_BP_TB_Foxy_Target
	 */
	struct ABP_TB_Foxy_Target_C_ExecuteUbergraph_BP_TB_Foxy_Target_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_Target.BP_TB_Foxy_Target_C.TargetHasBeenHit__DelegateSignature
	 */
	struct ABP_TB_Foxy_Target_C_TargetHasBeenHit__DelegateSignature_Params
	{
	public:
		class ABP_TB_Foxy_Target_C*                                TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetValue;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_TB_Foxy_TrackTriggerType                                 TriggerType;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
