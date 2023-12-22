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
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_FTFreddy_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetRoomType
	 */
	struct UABP_RA_SL_FTFreddy_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetAssignedButton
	 */
	struct UABP_RA_SL_FTFreddy_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_FTFreddy_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_FTFreddy_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimGraph
	 */
	struct UABP_RA_SL_FTFreddy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_FTFreddy_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1
	 */
	struct UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4
	 */
	struct UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65
	 */
	struct UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB
	 */
	struct UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.SetRoomType
	 */
	struct UABP_RA_SL_FTFreddy_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_FTFreddy_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_FTFreddy_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.ExecuteUbergraph_ABP_RA_SL_FTFreddy
	 */
	struct UABP_RA_SL_FTFreddy_C_ExecuteUbergraph_ABP_RA_SL_FTFreddy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
