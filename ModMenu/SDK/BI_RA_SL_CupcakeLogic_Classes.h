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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BI_RA_SL_CupcakeLogic.BI_RA_SL_CupcakeLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_RA_SL_CupcakeLogic_C : public UInterface
	{
	public:
		void Cupcake_ChicaHasClaimedIt();
		void Cupcake_GetCurrentZone(Enum_RA_SL_AreaZones* CurrentZone);
		void Cupcake_UpdateZone(Enum_RA_SL_AreaZones NewZone);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
