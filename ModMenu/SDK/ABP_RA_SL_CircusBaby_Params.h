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
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_CircusBaby_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetRoomType
	 */
	struct UABP_RA_SL_CircusBaby_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetAssignedButton
	 */
	struct UABP_RA_SL_CircusBaby_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_CircusBaby_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_CircusBaby_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimGraph
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetHeadAim
	 */
	struct UABP_RA_SL_CircusBaby_C_SetHeadAim_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.PlayerDiscardedIcecream
	 */
	struct UABP_RA_SL_CircusBaby_C_PlayerDiscardedIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ActivateBidybapArm
	 */
	struct UABP_RA_SL_CircusBaby_C_ActivateBidybapArm_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_AteIcecream
	 */
	struct UABP_RA_SL_CircusBaby_C_VictoryTrigger_AteIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_CircusBaby_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA
	 */
	struct UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB
	 */
	struct UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92
	 */
	struct UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC
	 */
	struct UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41
	 */
	struct UABP_RA_SL_CircusBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.BlueprintUpdateAnimation
	 */
	struct UABP_RA_SL_CircusBaby_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetRoomType
	 */
	struct UABP_RA_SL_CircusBaby_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_UseWaypointTransform
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_UseWaypointTransform_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetOwnerReference
	 */
	struct UABP_RA_SL_CircusBaby_C_SetOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_FlashlightFlicker
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_FlashlightFlicker_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ForceDisappearTransition
	 */
	struct UABP_RA_SL_CircusBaby_C_ForceDisappearTransition_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_HideCircusBaby
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_HideCircusBaby_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.HideCircusBaby
	 */
	struct UABP_RA_SL_CircusBaby_C_HideCircusBaby_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.OnGameEnd
	 */
	struct UABP_RA_SL_CircusBaby_C_OnGameEnd_Params
	{
	public:
		bool                                                       IsVictory;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.TriggerFlashlightFlicker
	 */
	struct UABP_RA_SL_CircusBaby_C_TriggerFlashlightFlicker_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.UseWaypointTranform
	 */
	struct UABP_RA_SL_CircusBaby_C_UseWaypointTranform_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.HideAndSeekTriggerCameraTransition
	 */
	struct UABP_RA_SL_CircusBaby_C_HideAndSeekTriggerCameraTransition_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.StartNextGameMode
	 */
	struct UABP_RA_SL_CircusBaby_C_StartNextGameMode_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  CurrentGameRunning;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.SetCircusBabyToMad
	 */
	struct UABP_RA_SL_CircusBaby_C_SetCircusBabyToMad_Params
	{
	public:
		bool                                                       IsCircusBabyMad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_IdlingWithIcecream
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_IdlingWithIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_PreTookIcecream
	 */
	struct UABP_RA_SL_CircusBaby_C_VictoryTrigger_PreTookIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.AnimNotify_AcitvateArm
	 */
	struct UABP_RA_SL_CircusBaby_C_AnimNotify_AcitvateArm_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.VictoryTrigger_PostTookIcecream
	 */
	struct UABP_RA_SL_CircusBaby_C_VictoryTrigger_PostTookIcecream_Params
	{	};

	/**
	 * Function ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C.ExecuteUbergraph_ABP_RA_SL_CircusBaby
	 */
	struct UABP_RA_SL_CircusBaby_C_ExecuteUbergraph_ABP_RA_SL_CircusBaby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
