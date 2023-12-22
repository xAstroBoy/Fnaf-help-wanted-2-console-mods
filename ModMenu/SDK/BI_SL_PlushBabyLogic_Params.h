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
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.UpdateHeadShake
	 */
	struct UBI_SL_PlushBabyLogic_C_UpdateHeadShake_Params
	{
	public:
		float                                                      ShakeAlpha;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.AssignPoseForFlashlightTag
	 */
	struct UBI_SL_PlushBabyLogic_C_AssignPoseForFlashlightTag_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   AnimationPose;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetToRun
	 */
	struct UBI_SL_PlushBabyLogic_C_SetToRun_Params
	{
	public:
		bool                                                       AllowRun;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetAssignedRole
	 */
	struct UBI_SL_PlushBabyLogic_C_SetAssignedRole_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.AssignCircusBabyReference
	 */
	struct UBI_SL_PlushBabyLogic_C_AssignCircusBabyReference_Params
	{	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.DisallowSpecificMovement
	 */
	struct UBI_SL_PlushBabyLogic_C_DisallowSpecificMovement_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       DisallowedSide;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.GetActive
	 */
	struct UBI_SL_PlushBabyLogic_C_GetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetActive
	 */
	struct UBI_SL_PlushBabyLogic_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.DisableRole
	 */
	struct UBI_SL_PlushBabyLogic_C_DisableRole_Params
	{	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.ActivateRole
	 */
	struct UBI_SL_PlushBabyLogic_C_ActivateRole_Params
	{	};

	/**
	 * Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.GetAssignedRole
	 */
	struct UBI_SL_PlushBabyLogic_C_GetAssignedRole_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  AssignedRole;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
