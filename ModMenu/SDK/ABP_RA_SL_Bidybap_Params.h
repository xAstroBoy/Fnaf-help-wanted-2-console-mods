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
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_Bidybap_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.GetRoomType
	 */
	struct UABP_RA_SL_Bidybap_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.GetAssignedButton
	 */
	struct UABP_RA_SL_Bidybap_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_Bidybap_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_Bidybap_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AnimGraph
	 */
	struct UABP_RA_SL_Bidybap_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_Bidybap_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.BidybapForcingJumpscare
	 */
	struct UABP_RA_SL_Bidybap_C_BidybapForcingJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_E606B0EC41A19B4572DBFFA97F4AE867
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_E606B0EC41A19B4572DBFFA97F4AE867_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_D22CD170496912C66A53E08A5781C36C
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_D22CD170496912C66A53E08A5781C36C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_ED2673F14970055AAB531598EF60B29B
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_ED2673F14970055AAB531598EF60B29B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_45765CD74AC2A00705212393384884E7
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_45765CD74AC2A00705212393384884E7_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_FB5455DE488E31138A21E3B8849F23BA
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_FB5455DE488E31138A21E3B8849F23BA_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_2AED7940460C32D27DB251B176412BCE
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_2AED7940460C32D27DB251B176412BCE_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_1933D782436EF58ABBF14FA2E43BF3B8
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_1933D782436EF58ABBF14FA2E43BF3B8_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_3B55046148BC3F966D6F99912689D79F
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_3B55046148BC3F966D6F99912689D79F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_E285BCB84BE32008126502A35DCC0AD6
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_E285BCB84BE32008126502A35DCC0AD6_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_B37B5BF54C39CD89F34002A4155CD62B
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_B37B5BF54C39CD89F34002A4155CD62B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_AC30F70C4CEF96C9933201B5FEF18C8F
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_AC30F70C4CEF96C9933201B5FEF18C8F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_A9B4E4264232B251AA8596A61EA45DBC
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_A9B4E4264232B251AA8596A61EA45DBC_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_A1C9E8CB4742BDCF6C5DE08DC36AD940
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_A1C9E8CB4742BDCF6C5DE08DC36AD940_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_D27A6CB643BABBEECD5740A17BAC8AE1
	 */
	struct UABP_RA_SL_Bidybap_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_D27A6CB643BABBEECD5740A17BAC8AE1_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.SetRoomType
	 */
	struct UABP_RA_SL_Bidybap_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.SetBidybapOwnerReference
	 */
	struct UABP_RA_SL_Bidybap_C_SetBidybapOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.BidybapAtVentDoor
	 */
	struct UABP_RA_SL_Bidybap_C_BidybapAtVentDoor_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AnimNotify_BidybapEnteredVent
	 */
	struct UABP_RA_SL_Bidybap_C_AnimNotify_BidybapEnteredVent_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AnimNotify_CheckToTriggerJumpscare
	 */
	struct UABP_RA_SL_Bidybap_C_AnimNotify_CheckToTriggerJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_Bidybap_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_Bidybap_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.AnimNotify_FlickerLight_vent
	 */
	struct UABP_RA_SL_Bidybap_C_AnimNotify_FlickerLight_vent_Params
	{	};

	/**
	 * Function ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C.ExecuteUbergraph_ABP_RA_SL_Bidybap
	 */
	struct UABP_RA_SL_Bidybap_C_ExecuteUbergraph_ABP_RA_SL_Bidybap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
