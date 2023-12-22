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
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_Bonbon_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetRoomType
	 */
	struct UABP_RA_SL_Bonbon_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetAssignedButton
	 */
	struct UABP_RA_SL_Bonbon_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_Bonbon_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_Bonbon_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimGraph
	 */
	struct UABP_RA_SL_Bonbon_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_Bonbon_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.BonbonAtDoor
	 */
	struct UABP_RA_SL_Bonbon_C_BonbonAtDoor_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.BonbonForcingJumpscare
	 */
	struct UABP_RA_SL_Bonbon_C_BonbonForcingJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D
	 */
	struct UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900
	 */
	struct UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9
	 */
	struct UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658
	 */
	struct UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61
	 */
	struct UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573
	 */
	struct UABP_RA_SL_Bonbon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.SetRoomType
	 */
	struct UABP_RA_SL_Bonbon_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_TriggerForcedJumpscare
	 */
	struct UABP_RA_SL_Bonbon_C_AnimNotify_TriggerForcedJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_CheckHowManyIdles
	 */
	struct UABP_RA_SL_Bonbon_C_AnimNotify_CheckHowManyIdles_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.SetBonbonOwnerReference
	 */
	struct UABP_RA_SL_Bonbon_C_SetBonbonOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_Bonbon_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_Bonbon_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C.ExecuteUbergraph_ABP_RA_SL_Bonbon
	 */
	struct UABP_RA_SL_Bonbon_C_ExecuteUbergraph_ABP_RA_SL_Bonbon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
