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
	 * WidgetBlueprintGeneratedClass WBP_AudioOptionsMenu.WBP_AudioOptionsMenu_C
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class UWBP_AudioOptionsMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Title_Button_C*                                 AudioApplyButton;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 AudioBackButton;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 AudioDefaultButton;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HW2Logo;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 JumpscareVolumeSlider;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 MasterVolumeSlider;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 MusicVolumeSlider;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 SFXVolumeSlider;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              SubtitleSizeComboBox;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 VoiceVolumeSlider;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 VRSubtitleDepthSlider;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 VRSubtitleHeightSlider;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedAudioDefaultButton;                             // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedAudioApplyButton;                               // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedAudioBackButton;                                // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetAudioSettingsFromWidget(struct FAudioSettingsSaveData* AudioSettings);
		void SetupSubtitleWidgetFromSettings(const struct FSubtitlesSettingsSaveData& SubtitleSettings);
		void SetupAudioWidgetFromSettings(const struct FAudioSettingsSaveData& AudioSettings);
		void SetVRSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider);
		void GetSubtitleSettingsFromWidget(struct FSubtitlesSettingsSaveData* SubtitleSettings);
		void SetSubtitleComboBoxFromSettings(ESubtitlesSize Choice, class UWBP_Title_Combo_Box_C* ComboBox);
		void SetAudioSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider);
		void GetAudioSettingSliderValue(class UWBP_Title_Slider_C* Slider, float* Value);
		void GetSubtitleComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, ESubtitlesSize* Value);
		void BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void ExecuteUbergraph_WBP_AudioOptionsMenu(int32_t EntryPoint);
		void OnClickedAudioBackButton__DelegateSignature();
		void OnClickedAudioApplyButton__DelegateSignature();
		void OnClickedAudioDefaultButton__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
