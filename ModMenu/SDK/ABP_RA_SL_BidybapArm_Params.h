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
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetRoomType
	 */
	struct UABP_RA_SL_BidybapArm_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetAssignedButton
	 */
	struct UABP_RA_SL_BidybapArm_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_BidybapArm_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_BidybapArm_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_BidybapArm_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.AnimGraph
	 */
	struct UABP_RA_SL_BidybapArm_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.PlayerDiscardedIcecream
	 */
	struct UABP_RA_SL_BidybapArm_C_PlayerDiscardedIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_BidybapArm_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_PostTookIcecream
	 */
	struct UABP_RA_SL_BidybapArm_C_VictoryTrigger_PostTookIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_AteIcecream
	 */
	struct UABP_RA_SL_BidybapArm_C_VictoryTrigger_AteIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.VictoryTrigger_PreTookIcecream
	 */
	struct UABP_RA_SL_BidybapArm_C_VictoryTrigger_PreTookIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.HideCircusBaby
	 */
	struct UABP_RA_SL_BidybapArm_C_HideCircusBaby_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.TriggerFlashlightFlicker
	 */
	struct UABP_RA_SL_BidybapArm_C_TriggerFlashlightFlicker_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ForceDisappearTransition
	 */
	struct UABP_RA_SL_BidybapArm_C_ForceDisappearTransition_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.UseWaypointTranform
	 */
	struct UABP_RA_SL_BidybapArm_C_UseWaypointTranform_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetOwnerReference
	 */
	struct UABP_RA_SL_BidybapArm_C_SetOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.HideAndSeekTriggerCameraTransition
	 */
	struct UABP_RA_SL_BidybapArm_C_HideAndSeekTriggerCameraTransition_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.OnGameEnd
	 */
	struct UABP_RA_SL_BidybapArm_C_OnGameEnd_Params
	{
	public:
		bool                                                       IsVictory;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.StartNextGameMode
	 */
	struct UABP_RA_SL_BidybapArm_C_StartNextGameMode_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  CurrentGameRunning;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetCircusBabyToMad
	 */
	struct UABP_RA_SL_BidybapArm_C_SetCircusBabyToMad_Params
	{
	public:
		bool                                                       IsCircusBabyMad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC
	 */
	struct UABP_RA_SL_BidybapArm_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F
	 */
	struct UABP_RA_SL_BidybapArm_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F_Params
	{	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ActivateBidybapArm
	 */
	struct UABP_RA_SL_BidybapArm_C_ActivateBidybapArm_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.SetRoomType
	 */
	struct UABP_RA_SL_BidybapArm_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C.ExecuteUbergraph_ABP_RA_SL_BidybapArm
	 */
	struct UABP_RA_SL_BidybapArm_C_ExecuteUbergraph_ABP_RA_SL_BidybapArm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
