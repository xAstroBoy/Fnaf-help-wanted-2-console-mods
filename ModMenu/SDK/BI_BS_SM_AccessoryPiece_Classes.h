﻿#pragma once

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
	 * BlueprintGeneratedClass BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_BS_SM_AccessoryPiece_C : public UInterface
	{
	public:
		void SetBust(class ABP_BS_SM_Bust_C* Bust);
		void SetIsUsed(bool IsUsed);
		void GetIsUsed(bool* IsUsed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
