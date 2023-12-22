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
	 * Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.ResetMinireena
	 */
	struct UBI_SL_MinireenaDoorLogic_C_ResetMinireena_Params
	{	};

	/**
	 * Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.SetDoorPose
	 */
	struct UBI_SL_MinireenaDoorLogic_C_SetDoorPose_Params
	{
	public:
		Enum_RA_SL_RoomType                                        WhatSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ECUI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WhatOrderOnDoor;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.MoveToDoor
	 */
	struct UBI_SL_MinireenaDoorLogic_C_MoveToDoor_Params
	{	};

	/**
	 * Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.GetIsDeployed
	 */
	struct UBI_SL_MinireenaDoorLogic_C_GetIsDeployed_Params
	{
	public:
		bool                                                       IsDeployed;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.SetIsDeployed
	 */
	struct UBI_SL_MinireenaDoorLogic_C_SetIsDeployed_Params
	{
	public:
		bool                                                       SetIsDeployed;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
