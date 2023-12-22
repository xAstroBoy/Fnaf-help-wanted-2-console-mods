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
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.GetAssignedRole
	 */
	struct UABP_RA_SL_PlushBaby_C_GetAssignedRole_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  AssignedRole;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.GetActive
	 */
	struct UABP_RA_SL_PlushBaby_C_GetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AnimGraph
	 */
	struct UABP_RA_SL_PlushBaby_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetHeadAim
	 */
	struct UABP_RA_SL_PlushBaby_C_SetHeadAim_Params
	{	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.ActivateRole
	 */
	struct UABP_RA_SL_PlushBaby_C_ActivateRole_Params
	{	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AssignCircusBabyReference
	 */
	struct UABP_RA_SL_PlushBaby_C_AssignCircusBabyReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.DisallowSpecificMovement
	 */
	struct UABP_RA_SL_PlushBaby_C_DisallowSpecificMovement_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       DisallowedSide;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetActive
	 */
	struct UABP_RA_SL_PlushBaby_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.DisableRole
	 */
	struct UABP_RA_SL_PlushBaby_C_DisableRole_Params
	{	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B
	 */
	struct UABP_RA_SL_PlushBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B_Params
	{	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6
	 */
	struct UABP_RA_SL_PlushBaby_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6_Params
	{	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.BlueprintUpdateAnimation
	 */
	struct UABP_RA_SL_PlushBaby_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetAssignedRole
	 */
	struct UABP_RA_SL_PlushBaby_C_SetAssignedRole_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.SetToRun
	 */
	struct UABP_RA_SL_PlushBaby_C_SetToRun_Params
	{
	public:
		bool                                                       AllowRun;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.AssignPoseForFlashlightTag
	 */
	struct UABP_RA_SL_PlushBaby_C_AssignPoseForFlashlightTag_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   AnimationPose;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.UpdateHeadShake
	 */
	struct UABP_RA_SL_PlushBaby_C_UpdateHeadShake_Params
	{
	public:
		float                                                      ShakeAlpha;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C.ExecuteUbergraph_ABP_RA_SL_PlushBaby
	 */
	struct UABP_RA_SL_PlushBaby_C_ExecuteUbergraph_ABP_RA_SL_PlushBaby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
