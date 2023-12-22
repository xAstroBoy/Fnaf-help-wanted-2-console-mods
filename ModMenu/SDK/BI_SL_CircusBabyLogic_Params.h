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
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.PlayerDiscardedIcecream
	 */
	struct UBI_SL_CircusBabyLogic_C_PlayerDiscardedIcecream_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.VictoryTrigger_PostTookIcecream
	 */
	struct UBI_SL_CircusBabyLogic_C_VictoryTrigger_PostTookIcecream_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.ActivateBidybapArm
	 */
	struct UBI_SL_CircusBabyLogic_C_ActivateBidybapArm_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.VictoryTrigger_AteIcecream
	 */
	struct UBI_SL_CircusBabyLogic_C_VictoryTrigger_AteIcecream_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.VictoryTrigger_PreTookIcecream
	 */
	struct UBI_SL_CircusBabyLogic_C_VictoryTrigger_PreTookIcecream_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.HideCircusBaby
	 */
	struct UBI_SL_CircusBabyLogic_C_HideCircusBaby_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.TriggerFlashlightFlicker
	 */
	struct UBI_SL_CircusBabyLogic_C_TriggerFlashlightFlicker_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.ForceDisappearTransition
	 */
	struct UBI_SL_CircusBabyLogic_C_ForceDisappearTransition_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.UseWaypointTranform
	 */
	struct UBI_SL_CircusBabyLogic_C_UseWaypointTranform_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.SetOwnerReference
	 */
	struct UBI_SL_CircusBabyLogic_C_SetOwnerReference_Params
	{	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.HideAndSeekTriggerCameraTransition
	 */
	struct UBI_SL_CircusBabyLogic_C_HideAndSeekTriggerCameraTransition_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.OnGameEnd
	 */
	struct UBI_SL_CircusBabyLogic_C_OnGameEnd_Params
	{
	public:
		bool                                                       IsVictory;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.StartNextGameMode
	 */
	struct UBI_SL_CircusBabyLogic_C_StartNextGameMode_Params
	{
	public:
		Enum_RA_SL_CircusGameMode                                  CurrentGameRunning;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C.SetCircusBabyToMad
	 */
	struct UBI_SL_CircusBabyLogic_C_SetCircusBabyToMad_Params
	{
	public:
		bool                                                       IsCircusBabyMad;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
