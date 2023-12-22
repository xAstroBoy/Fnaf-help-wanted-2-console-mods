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
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeLayer
	 */
	struct UABP_BS_RM_Roxy_C_EyeLayer_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           EyeLayer;                                                // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimGraph
	 */
	struct UABP_BS_RM_Roxy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetHeadAimLocation
	 */
	struct UABP_BS_RM_Roxy_C_SetHeadAimLocation_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.CompareLidToEyeRot
	 */
	struct UABP_BS_RM_Roxy_C_CompareLidToEyeRot_Params
	{
	public:
		float                                                      Param;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                EyeSocket;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LidSocket;                                               // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewAlpha;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeOffsetValue
	 */
	struct UABP_BS_RM_Roxy_C_SetEyeOffsetValue_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeAimLocation
	 */
	struct UABP_BS_RM_Roxy_C_SetEyeAimLocation_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9
	 */
	struct UABP_BS_RM_Roxy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlueprintUpdateAnimation
	 */
	struct UABP_BS_RM_Roxy_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeAim_Timer
	 */
	struct UABP_BS_RM_Roxy_C_SetEyeAim_Timer_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlueprintBeginPlay
	 */
	struct UABP_BS_RM_Roxy_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.ClearRoxyFaceBetweenRounds
	 */
	struct UABP_BS_RM_Roxy_C_ClearRoxyFaceBetweenRounds_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.UpdateEyeOffset
	 */
	struct UABP_BS_RM_Roxy_C_UpdateEyeOffset_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetEyeDartValue
	 */
	struct UABP_BS_RM_Roxy_C_SetEyeDartValue_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlinkTimer
	 */
	struct UABP_BS_RM_Roxy_C_BlinkTimer_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.Blink
	 */
	struct UABP_BS_RM_Roxy_C_Blink_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AddEyeDart
	 */
	struct UABP_BS_RM_Roxy_C_AddEyeDart_Params
	{
	public:
		struct FVector                                             EyeDartLocation;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.TiltHead
	 */
	struct UABP_BS_RM_Roxy_C_TiltHead_Params
	{
	public:
		bool                                                       TiltHead;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AllEyeAim
	 */
	struct UABP_BS_RM_Roxy_C_AllEyeAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.LidAim
	 */
	struct UABP_BS_RM_Roxy_C_LidAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.Blinking
	 */
	struct UABP_BS_RM_Roxy_C_Blinking_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeDarts
	 */
	struct UABP_BS_RM_Roxy_C_EyeDarts_Params
	{
	public:
		bool                                                       EyeDart;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.UpdateRageValue
	 */
	struct UABP_BS_RM_Roxy_C_UpdateRageValue_Params
	{
	public:
		float                                                      Rage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RageLevel;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.PlayerNotLooking
	 */
	struct UABP_BS_RM_Roxy_C_PlayerNotLooking_Params
	{
	public:
		bool                                                       PlayerNotLooking;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage02
	 */
	struct UABP_BS_RM_Roxy_C_AnimNotify_Rage02_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage03
	 */
	struct UABP_BS_RM_Roxy_C_AnimNotify_Rage03_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Rage01
	 */
	struct UABP_BS_RM_Roxy_C_AnimNotify_Rage01_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.AnimNotify_Idle
	 */
	struct UABP_BS_RM_Roxy_C_AnimNotify_Idle_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EnableNotLookingADD
	 */
	struct UABP_BS_RM_Roxy_C_EnableNotLookingADD_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.HeadAim
	 */
	struct UABP_BS_RM_Roxy_C_HeadAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.SetLipSyncAmp
	 */
	struct UABP_BS_RM_Roxy_C_SetLipSyncAmp_Params
	{
	public:
		float                                                      Amplitude;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.BlinkOnce
	 */
	struct UABP_BS_RM_Roxy_C_BlinkOnce_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.EyeAim
	 */
	struct UABP_BS_RM_Roxy_C_EyeAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.StopTantrum
	 */
	struct UABP_BS_RM_Roxy_C_StopTantrum_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.StartTantrum
	 */
	struct UABP_BS_RM_Roxy_C_StartTantrum_Params
	{	};

	/**
	 * Function ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C.ExecuteUbergraph_ABP_BS_RM_Roxy
	 */
	struct UABP_BS_RM_Roxy_C_ExecuteUbergraph_ABP_BS_RM_Roxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9YKF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
