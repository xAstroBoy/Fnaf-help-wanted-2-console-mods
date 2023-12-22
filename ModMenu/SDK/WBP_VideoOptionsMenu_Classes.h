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
	 * WidgetBlueprintGeneratedClass WBP_VideoOptionsMenu.WBP_VideoOptionsMenu_C
	 * Size -> 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
	 */
	class UWBP_VideoOptionsMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Title_Combo_Box_C*                              AntiAliasQuality;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 BrightnessSlider;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              CharacterQuality;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 ColorBlindnessSlider;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              ColorBlindnessType;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 ContrastSlider;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              EffectsQuality;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              EnviromentQuality;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 GammaSlider;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              GlobalQuality;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HW2Logo_3;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LanguageChoicesBox;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              LanguageComboBox;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              ReflectionQuality;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              ResolutionQuality;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              ShadowQuality;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Temp;                                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              TextureQuality;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VideoApplyButton;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VideoBackButton;                                         // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VideoDefaultButton;                                      // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedVideoDefaultButton;                             // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedVideoApplyButton;                               // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedVideoBackButton;                                // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<ESWGPlatform>                                       LanguageVisibleOnPlatforms;                              // 0x0340(0x0010) Edit, BlueprintVisible

	public:
		void SetLanguageComboBoxFromSettings(ELocalizationCulture Level, class UWBP_Title_Combo_Box_C* ComboBox);
		void GetLanguageComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, ELocalizationCulture* Value);
		void SetColorBlinkdComboBoxFromSettings(EColorBlindnessType Level, class UWBP_Title_Combo_Box_C* ComboBox);
		void GetColorBlindComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, EColorBlindnessType* Value);
		void GetVideoSettingsFromWidget(struct FVideoSettingsSaveData* VideoSettings);
		void SetupVideoWidgetfromSettings(const struct FVideoSettingsSaveData& VideoSettingsData);
		void SetVideoSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider);
		void SetVideoComboBoxFromSettings(EVisualQualityLevel Level, class UWBP_Title_Combo_Box_C* ComboBox);
		void GetAllPlayerOverrideComboBoxes(TArray<class UWBP_Title_Combo_Box_C*>* Array);
		void GetVideoComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, EVisualQualityLevel* Value);
		void GetVideoSettingsSliderValue(class UWBP_Title_Slider_C* Slider, float* Value);
		void BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_GlobalQuality_K2Node_ComponentBoundEvent_3_OnChangedSelection__DelegateSignature(int32_t Selection);
		void Construct();
		void ExecuteUbergraph_WBP_VideoOptionsMenu(int32_t EntryPoint);
		void OnClickedVideoBackButton__DelegateSignature();
		void OnClickedVideoApplyButton__DelegateSignature();
		void OnClickedVideoDefaultButton__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
