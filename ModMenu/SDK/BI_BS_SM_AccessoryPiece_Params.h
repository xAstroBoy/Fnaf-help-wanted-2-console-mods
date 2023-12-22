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
	 * Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.SetBust
	 */
	struct UBI_BS_SM_AccessoryPiece_C_SetBust_Params
	{
	public:
		class ABP_BS_SM_Bust_C*                                    Bust;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.SetIsUsed
	 */
	struct UBI_BS_SM_AccessoryPiece_C_SetIsUsed_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.GetIsUsed
	 */
	struct UBI_BS_SM_AccessoryPiece_C_GetIsUsed_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
