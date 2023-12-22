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
	 * BlueprintGeneratedClass BI_RA_SL_EnnardLogic.BI_RA_SL_EnnardLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_RA_SL_EnnardLogic_C : public UInterface
	{
	public:
		void SetEnnardDoorPlayRate(bool EnablePlayrate);
		void SetEnnardIsWaitingAtDoor(bool IsWaiting);
		void EnnardForceTriggeringJumpscare();
		void SetEnnardOwnerReference();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
