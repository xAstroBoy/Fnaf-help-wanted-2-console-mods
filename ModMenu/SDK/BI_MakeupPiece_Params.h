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
	 * Function BI_MakeupPiece.BI_MakeupPiece_C.GetAssignedColor
	 */
	struct UBI_MakeupPiece_C_GetAssignedColor_Params
	{
	public:
		class UMakeupColorData*                                    AssignedColor;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_MakeupPiece.BI_MakeupPiece_C.SetAssignedColor
	 */
	struct UBI_MakeupPiece_C_SetAssignedColor_Params
	{
	public:
		class UMakeupColorData*                                    AssignedColor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
