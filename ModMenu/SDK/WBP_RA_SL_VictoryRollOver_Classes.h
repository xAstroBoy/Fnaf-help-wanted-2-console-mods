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
	 * WidgetBlueprintGeneratedClass WBP_RA_SL_VictoryRollOver.WBP_RA_SL_VictoryRollOver_C
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UWBP_RA_SL_VictoryRollOver_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    VictoryRollOver;                                         // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		void SL_NormalScreenFade();
		void SL_TriggerVictoryScreen();
		void ExecuteUbergraph_WBP_RA_SL_VictoryRollOver(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
