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
	 * BlueprintGeneratedClass BI_SL_BalloraLogic.BI_SL_BalloraLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_BalloraLogic_C : public UInterface
	{
	public:
		void SetBalloraDoorClosed(bool DoorIsClosed);
		void BalloraHasLeftArea();
		void BalloraAtDoor();
		void BalloraForcingJumpscare();
		void SetBalloraOwnerReference();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
