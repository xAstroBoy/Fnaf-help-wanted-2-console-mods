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
	 * Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.PowerOutage
	 */
	struct UBI_RA_SL_ButtonLogic_C_PowerOutage_Params
	{	};

	/**
	 * Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.RemoveBlockingCharacter
	 */
	struct UBI_RA_SL_ButtonLogic_C_RemoveBlockingCharacter_Params
	{	};

	/**
	 * Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.AssignBlockingCharacter
	 */
	struct UBI_RA_SL_ButtonLogic_C_AssignBlockingCharacter_Params
	{	};

	/**
	 * Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.CheckIfButtonIsBlocked
	 */
	struct UBI_RA_SL_ButtonLogic_C_CheckIfButtonIsBlocked_Params
	{	};

	/**
	 * Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.EnableDoorButton
	 */
	struct UBI_RA_SL_ButtonLogic_C_EnableDoorButton_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.SetMaterialOnButton
	 */
	struct UBI_RA_SL_ButtonLogic_C_SetMaterialOnButton_Params
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
