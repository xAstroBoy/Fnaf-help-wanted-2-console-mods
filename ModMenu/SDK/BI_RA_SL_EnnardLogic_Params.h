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
	 * Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardDoorPlayRate
	 */
	struct UBI_RA_SL_EnnardLogic_C_SetEnnardDoorPlayRate_Params
	{
	public:
		bool                                                       EnablePlayrate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardIsWaitingAtDoor
	 */
	struct UBI_RA_SL_EnnardLogic_C_SetEnnardIsWaitingAtDoor_Params
	{
	public:
		bool                                                       IsWaiting;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.EnnardForceTriggeringJumpscare
	 */
	struct UBI_RA_SL_EnnardLogic_C_EnnardForceTriggeringJumpscare_Params
	{	};

	/**
	 * Function BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C.SetEnnardOwnerReference
	 */
	struct UBI_RA_SL_EnnardLogic_C_SetEnnardOwnerReference_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
