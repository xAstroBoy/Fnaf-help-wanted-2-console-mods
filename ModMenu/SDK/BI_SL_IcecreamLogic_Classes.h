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
	 * BlueprintGeneratedClass BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_IcecreamLogic_C : public UInterface
	{
	public:
		void PlayerTrashedIcecream();
		void AteIceCream();
		void PlayerTookIceCream();
		void SetCircusBabyOwnerReference();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
