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
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.GetAnimatronicType
	 */
	struct ABP_SL_Office_Darkroom_C_GetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 Animatronic;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.IsDrainingPower
	 */
	struct ABP_SL_Office_Darkroom_C_IsDrainingPower_Params
	{
	public:
		bool                                                       IsDrainingPower;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.DetermineAnimatronicTriggeringJumpscare
	 */
	struct ABP_SL_Office_Darkroom_C_DetermineAnimatronicTriggeringJumpscare_Params
	{	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.TriggerJumpscare
	 */
	struct ABP_SL_Office_Darkroom_C_TriggerJumpscare_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 TriggeringAnimatronic;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.DisableAllVO
	 */
	struct ABP_SL_Office_Darkroom_C_DisableAllVO_Params
	{	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.ReceiveBeginPlay
	 */
	struct ABP_SL_Office_Darkroom_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.SetAnimatronicType
	 */
	struct ABP_SL_Office_Darkroom_C_SetAnimatronicType_Params
	{
	public:
		Enum_RA_SL_AnimatronicType                                 AnimatronicToSet;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.InitiateJumpscare
	 */
	struct ABP_SL_Office_Darkroom_C_InitiateJumpscare_Params
	{	};

	/**
	 * Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.ExecuteUbergraph_BP_SL_Office_Darkroom
	 */
	struct ABP_SL_Office_Darkroom_C_ExecuteUbergraph_BP_SL_Office_Darkroom_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
