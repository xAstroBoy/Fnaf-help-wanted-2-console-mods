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
	 * WidgetBlueprintGeneratedClass WBP_Title_Combo_Box.WBP_Title_Combo_Box_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UWBP_Title_Combo_Box_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Title_Button_C*                                 ComboButton;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LeftButton;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RightButton;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SettingsName;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                SettingsDisplayName;                                     // 0x0288(0x0018) Edit, BlueprintVisible
		TArray<class FText>                                        ComboOptions;                                            // 0x02A0(0x0010) Edit, BlueprintVisible
		int32_t                                                    Selection;                                               // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QLJB[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESWGPlatform>                                       VisibleOnPlatforms;                                      // 0x02B8(0x0010) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnChangedSelection;                                      // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateSelectionText(const class FText& Text);
		void GetSelection(int32_t* Selection);
		void SetSelection(int32_t Value);
		void UpdateSelectedOption(int32_t Selection);
		void CycleThoughOptions(int32_t Direction, int32_t CurrentSelection, int32_t* OutSeletion);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void ExecuteUbergraph_WBP_Title_Combo_Box(int32_t EntryPoint);
		void OnChangedSelection__DelegateSignature(int32_t Selection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
