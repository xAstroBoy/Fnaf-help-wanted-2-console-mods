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
	 * Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.GetAssignedColor
	 */
	struct ABP_MakeupRefPiece_C_GetAssignedColor_Params
	{
	public:
		class UMakeupColorData*                                    AssignedColor;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.UserConstructionScript
	 */
	struct ABP_MakeupRefPiece_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.SetAssignedColor
	 */
	struct ABP_MakeupRefPiece_C_SetAssignedColor_Params
	{
	public:
		class UMakeupColorData*                                    AssignedColor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.ExecuteUbergraph_BP_MakeupRefPiece
	 */
	struct ABP_MakeupRefPiece_C_ExecuteUbergraph_BP_MakeupRefPiece_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
