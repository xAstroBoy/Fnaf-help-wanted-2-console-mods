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
	 * BlueprintGeneratedClass BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_RA_SL_CameraLogic_C : public UInterface
	{
	public:
		void GetCurrentVisibleRoom(Enum_RA_SL_RoomType* CurrentRoom);
		void JobInterview_ActivateLights();
		void OnCameraSwitch(int32_t ButtonID);
		void OnCameraButtonPress(int32_t ButtonID);
		void CurrentAnimatronicOnScreen();
		void NotifyOfPowerDrain(bool IsActive);
		void TriggerCameraStaticTransition(Enum_RA_SL_RoomType TriggeringRoom, bool OverrideTrigger, class AActor* TriggeringActor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
