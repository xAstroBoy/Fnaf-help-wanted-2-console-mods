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
	 * BlueprintGeneratedClass BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_BS_RM_RoxyAnim_C : public UInterface
	{
	public:
		void EyeAim(bool Aim);
		void BlinkOnce(bool Blink);
		void HeadAim(bool Aim);
		void EnableNotLookingADD(bool Aim);
		void StopTantrum();
		void StartTantrum();
		void UpdateRageValue(float Rage, int32_t RageLevel);
		void EyeDarts(bool EyeDart);
		void Blinking(bool Blink);
		void LidAim(bool Aim);
		void AllEyeAim(bool Aim);
		void TiltHead(bool TiltHead);
		void AddEyeDart(const struct FVector& EyeDartLocation);
		void ClearRoxyFaceBetweenRounds();
		void PlayerNotLooking(bool PlayerNotLooking);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
