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
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.GetAnimPoseEnum
	 */
	struct UABP_SL_TiltArms_C_GetAnimPoseEnum_Params
	{
	public:
		Enum_FC_BonkABon_AnimMode                                  AnimEnum;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.AnimGraph
	 */
	struct UABP_SL_TiltArms_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.SetAnimPoseEnum
	 */
	struct UABP_SL_TiltArms_C_SetAnimPoseEnum_Params
	{
	public:
		Enum_FC_BonkABon_AnimMode                                  AnimPose;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.BlueprintUpdateAnimation
	 */
	struct UABP_SL_TiltArms_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.UpdateHelpyHits
	 */
	struct UABP_SL_TiltArms_C_UpdateHelpyHits_Params
	{
	public:
		int32_t                                                    Hits;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65
	 */
	struct UABP_SL_TiltArms_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65_Params
	{	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.MoveFinished
	 */
	struct UABP_SL_TiltArms_C_MoveFinished_Params
	{	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018
	 */
	struct UABP_SL_TiltArms_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018_Params
	{	};

	/**
	 * Function ABP_SL_TiltArms.ABP_SL_TiltArms_C.ExecuteUbergraph_ABP_SL_TiltArms
	 */
	struct UABP_SL_TiltArms_C_ExecuteUbergraph_ABP_SL_TiltArms_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2U12[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
