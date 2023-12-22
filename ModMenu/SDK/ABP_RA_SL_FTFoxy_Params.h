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
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_FTFoxy_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetRoomType
	 */
	struct UABP_RA_SL_FTFoxy_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetAssignedButton
	 */
	struct UABP_RA_SL_FTFoxy_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_FTFoxy_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_FTFoxy_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimGraph
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_FTFoxy_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AdvanceFoxyPosition
	 */
	struct UABP_RA_SL_FTFoxy_C_AdvanceFoxyPosition_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129
	 */
	struct UABP_RA_SL_FTFoxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetRoomType
	 */
	struct UABP_RA_SL_FTFoxy_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetRunning
	 */
	struct UABP_RA_SL_FTFoxy_C_SetRunning_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetSpotId
	 */
	struct UABP_RA_SL_FTFoxy_C_SetSpotId_Params
	{
	public:
		int32_t                                                    SetCurrentID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FoxyReachedEndOfHallway
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_FoxyReachedEndOfHallway_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_CheckForDoorStatus
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_CheckForDoorStatus_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.SetFoxyOwnerReference
	 */
	struct UABP_RA_SL_FTFoxy_C_SetFoxyOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FlickerLight_Left
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_FlickerLight_Left_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_FlickerLight_Right
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_FlickerLight_Right_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_DoubleCheckRoom_Left
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_DoubleCheckRoom_Left_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_DoubleCheckRoom_Right
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_DoubleCheckRoom_Right_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_FTFoxy_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C.ExecuteUbergraph_ABP_RA_SL_FTFoxy
	 */
	struct UABP_RA_SL_FTFoxy_C_ExecuteUbergraph_ABP_RA_SL_FTFoxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
