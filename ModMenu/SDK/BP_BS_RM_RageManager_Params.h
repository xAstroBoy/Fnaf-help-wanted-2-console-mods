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
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.ConcertPercentageToIndex
	 */
	struct ABP_BS_RM_RageManager_C_ConcertPercentageToIndex_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Return;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.GetIsAtMaxRage
	 */
	struct ABP_BS_RM_RageManager_C_GetIsAtMaxRage_Params
	{
	public:
		bool                                                       MaxRage;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQEI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageTantrum
	 */
	struct ABP_BS_RM_RageManager_C_IncreaseRageTantrum_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWrongLook
	 */
	struct ABP_BS_RM_RageManager_C_IncreaseRageWrongLook_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.DecreaseRageWalkieTalkie
	 */
	struct ABP_BS_RM_RageManager_C_DecreaseRageWalkieTalkie_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWalkieTalkie
	 */
	struct ABP_BS_RM_RageManager_C_IncreaseRageWalkieTalkie_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.SetRageValue
	 */
	struct ABP_BS_RM_RageManager_C_SetRageValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.Initialize
	 */
	struct ABP_BS_RM_RageManager_C_Initialize_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.UpdateRageValue
	 */
	struct ABP_BS_RM_RageManager_C_UpdateRageValue_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.GetRagePercentage
	 */
	struct ABP_BS_RM_RageManager_C_GetRagePercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.DecreaseRageLookingAt
	 */
	struct ABP_BS_RM_RageManager_C_DecreaseRageLookingAt_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWrongItem
	 */
	struct ABP_BS_RM_RageManager_C_IncreaseRageWrongItem_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageLookingAway
	 */
	struct ABP_BS_RM_RageManager_C_IncreaseRageLookingAway_Params
	{	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.RageSound
	 */
	struct ABP_BS_RM_RageManager_C_RageSound_Params
	{
	public:
		bool                                                       Up;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.ExecuteUbergraph_BP_BS_RM_RageManager
	 */
	struct ABP_BS_RM_RageManager_C_ExecuteUbergraph_BP_BS_RM_RageManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageLevelChanged __DelegateSignature
	 */
	struct ABP_BS_RM_RageManager_C_OnRageLevelChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageValueSet__DelegateSignature
	 */
	struct ABP_BS_RM_RageManager_C_OnRageValueSet__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageValueChanged__DelegateSignature
	 */
	struct ABP_BS_RM_RageManager_C_OnRageValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
