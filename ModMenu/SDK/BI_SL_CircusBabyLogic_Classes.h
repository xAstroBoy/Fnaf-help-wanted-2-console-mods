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
	 * BlueprintGeneratedClass BI_SL_CircusBabyLogic.BI_SL_CircusBabyLogic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_CircusBabyLogic_C : public UInterface
	{
	public:
		void PlayerDiscardedIcecream();
		void VictoryTrigger_PostTookIcecream();
		void ActivateBidybapArm(bool Enable);
		void VictoryTrigger_AteIcecream();
		void VictoryTrigger_PreTookIcecream();
		void HideCircusBaby();
		void TriggerFlashlightFlicker();
		void ForceDisappearTransition();
		void UseWaypointTranform();
		void SetOwnerReference();
		void HideAndSeekTriggerCameraTransition(bool IsEnabled);
		void OnGameEnd(bool IsVictory);
		void StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning);
		void SetCircusBabyToMad(bool IsCircusBabyMad);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
