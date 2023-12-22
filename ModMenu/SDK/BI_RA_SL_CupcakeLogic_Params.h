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
	 * Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_ChicaHasClaimedIt
	 */
	struct UBI_RA_SL_CupcakeLogic_C_Cupcake_ChicaHasClaimedIt_Params
	{	};

	/**
	 * Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_GetCurrentZone
	 */
	struct UBI_RA_SL_CupcakeLogic_C_Cupcake_GetCurrentZone_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       CurrentZone;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C.Cupcake_UpdateZone
	 */
	struct UBI_RA_SL_CupcakeLogic_C_Cupcake_UpdateZone_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       NewZone;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
