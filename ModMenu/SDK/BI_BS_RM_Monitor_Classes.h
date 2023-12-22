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
	 * BlueprintGeneratedClass BI_BS_RM_Monitor.BI_BS_RM_Monitor_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_BS_RM_Monitor_C : public UInterface
	{
	public:
		void StopTimerSound();
		void ResetShowTime(float NewMinutes, float NewSeconds);
		void ClearPowerMeter();
		void ResetPowerMeterUI();
		void UpdatePowerMeter(float NewHeightPercentage);
		void UpdateShowtime();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
