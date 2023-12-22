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
	 * BlueprintGeneratedClass BI_FC_Bab_ABP.BI_FC_Bab_ABP_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_FC_Bab_ABP_C : public UInterface
	{
	public:
		void UpdateHelpyHits(int32_t Hits);
		void GetAnimPoseEnum(Enum_FC_BonkABon_AnimMode* AnimEnum);
		void MoveFinished();
		void SetAnimPoseEnum(Enum_FC_BonkABon_AnimMode AnimPose);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
