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
	 * Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.DisableAllVO
	 */
	struct UBI_SL_AnimatronicType_C_DisableAllVO_Params
	{	};

	/**
	 * Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.SetAnimatronicType
	 */
	struct UBI_SL_AnimatronicType_C_SetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 AnimatronicToSet;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.IsDrainingPower
	 */
	struct UBI_SL_AnimatronicType_C_IsDrainingPower_Params
	{
	public:
		bool                                                       IsDrainingPower;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.GetAnimatronicType
	 */
	struct UBI_SL_AnimatronicType_C_GetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 Animatronic;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
