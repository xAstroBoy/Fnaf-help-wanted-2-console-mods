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
	 * WidgetBlueprintGeneratedClass WBP_Title_Slider.WBP_Title_Slider_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UWBP_Title_Slider_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          SettingsName;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             TitleSlider;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SettingsDisplayName;                                     // 0x0278(0x0018) Edit, BlueprintVisible

	public:
		void GetSliderValue(float* Value);
		void SetSliderValue(float Value);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__WBP_Title_Slider_TitleSlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_Title_Slider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
