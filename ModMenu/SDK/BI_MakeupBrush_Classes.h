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
	 * BlueprintGeneratedClass BI_MakeupBrush.BI_MakeupBrush_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_MakeupBrush_C : public UInterface
	{
	public:
		void HapticsEffect();
		void PowderPoof();
		void GetBrushColor(class UMakeupColorData** CurrentBrushColor);
		void SetBrushColor(class UMakeupColorData* NewColor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
