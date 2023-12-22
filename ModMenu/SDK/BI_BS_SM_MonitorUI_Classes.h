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
	 * BlueprintGeneratedClass BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_BS_SM_MonitorUI_C : public UInterface
	{
	public:
		void StopIncorrectPulsing();
		void SetMontiorBackground(E_BS_MakeoverGameType GameType);
		void SetScreenGlitchEnabled(bool Enabled);
		void ValidateAccessories(TArray<class UClass*> Classes);
		void CheckAccessories(class UClass* Hat, class UClass* EarL, class UClass* Eyes, class UClass* Neck, class UClass* Mouth, class UClass* EarR, bool* IsCorrect);
		void CheckMakeup(class UMakeupColorData* EyeRColor, class UMakeupColorData* EyeLColor, class UMakeupColorData* CheekRColor, class UMakeupColorData* CheekLColor, class UMakeupColorData* LipsColor, bool* IsCorrect);
		void SetRoxyMakeOverMode();
		void SetRageMeterPercentage(float Value);
		void PassMakeupToUI(class UMakeupColorData* AssignedEyeRColor, class UMakeupColorData* AssignedEyeLColor, class UMakeupColorData* AssignedCheekRColor, class UMakeupColorData* AssignedCheekLColor, class UMakeupColorData* AssignedLipsColor);
		void ResetMonitor();
		void PassAccessoryToUI(class UClass* AssignedHat, class UClass* AssignedEars, class UClass* AssignedEyes, class UClass* AssignedNeck, class UClass* AssignedMouth);
		void SetRoundResult(bool WasCorrect);
		void ResetTimer();
		void UpdateTimer(float TimeRemaining, float TotalTime);
		void SetMonitorAnswerText(const class FString& DisplayName, E_AccessoryCategory AccessoryCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
