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
	 * BlueprintGeneratedClass BI_SL_AnimatronicType.BI_SL_AnimatronicType_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_AnimatronicType_C : public UInterface
	{
	public:
		void DisableAllVO();
		void SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet);
		void IsDrainingPower(bool* IsDrainingPower);
		void GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
