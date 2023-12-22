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
	 * Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.UpdateHelpyHits
	 */
	struct UBI_FC_Bab_ABP_C_UpdateHelpyHits_Params
	{
	public:
		int32_t                                                    Hits;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.GetAnimPoseEnum
	 */
	struct UBI_FC_Bab_ABP_C_GetAnimPoseEnum_Params
	{
	public:
		Enum_FC_BonkABon_AnimMode                                  AnimEnum;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.MoveFinished
	 */
	struct UBI_FC_Bab_ABP_C_MoveFinished_Params
	{	};

	/**
	 * Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.SetAnimPoseEnum
	 */
	struct UBI_FC_Bab_ABP_C_SetAnimPoseEnum_Params
	{
	public:
		Enum_FC_BonkABon_AnimMode                                  AnimPose;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
