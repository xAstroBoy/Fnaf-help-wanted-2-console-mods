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
	 * BlueprintGeneratedClass BI_RA_SL_FTFChicaLogic.BI_RA_SL_FTFChicaLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_RA_SL_FTFChicaLogic_C : public UInterface
	{
	public:
		void FTChicaHasCupcake(bool* HasCupcake);
		void FTChicaLeanIn();
		void FTChicaExited();
		void FTChicaGivenCupcake();
		void FTChicaTriggerJumpscare();
		void FTChicaSetOwnerReference();
		void FTChicaOnCupcakeBeingMoved();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
