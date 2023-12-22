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
	 * BlueprintGeneratedClass BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_PlushBabyLogic_C : public UInterface
	{
	public:
		void UpdateHeadShake(float ShakeAlpha);
		void AssignPoseForFlashlightTag(Enum_RA_SL_PlushBabyPose AnimationPose);
		void SetToRun(bool AllowRun);
		void SetAssignedRole(Enum_RA_SL_CircusGameMode Role);
		void AssignCircusBabyReference();
		void DisallowSpecificMovement(Enum_RA_SL_AreaZones DisallowedSide);
		void GetActive(bool* IsActive);
		void SetActive(bool IsActive);
		void DisableRole();
		void ActivateRole();
		void GetAssignedRole(Enum_RA_SL_CircusGameMode* AssignedRole);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
