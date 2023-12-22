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
	 * WidgetBlueprintGeneratedClass WBP_VROptionsMenu.WBP_VROptionsMenu_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UWBP_VROptionsMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              HW2Logo_3;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              InvertMovementStyleComboBox;                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 TurnSpeedSlider;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Combo_Box_C*                              TurnStyleComboBox;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VRApplyButton;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VRBackButton;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VRDefaultButton;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Slider_C*                                 VRHeightSlider;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedVRDefaultButton;                                // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedVRApplyButton;                                  // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedVRBackButton;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetVRInvertMovementComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, bool* NewParam);
		void SetVRInvertMovementComboBoxFromSettings(bool Choice, class UWBP_Title_Combo_Box_C* ComboBox);
		void SetupVRWidgetfromSettings(const struct FVRComfortSettingsSaveData& Settings);
		void SetVRTurnComboBoxFromSettings(EPlayerRotationInputType Choice, class UWBP_Title_Combo_Box_C* ComboBox);
		void GetVRSettingsFromWidget(struct FVRComfortSettingsSaveData* Settings);
		void GetVRTurnComboBoxValue(class UWBP_Title_Combo_Box_C* ComboBox, EPlayerRotationInputType* NewParam);
		void SetVRSliderFromSettings(float Value, class UWBP_Title_Slider_C* Slider);
		void GetVRSettingSliderValue(class UWBP_Title_Slider_C* Slider, float* Value);
		void BndEvt__WBP_VideoOptionsMenu_VideoDefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_VideoApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__WBP_VideoOptionsMenu_VideoBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void ExecuteUbergraph_WBP_VROptionsMenu(int32_t EntryPoint);
		void OnClickedVRBackButton__DelegateSignature();
		void OnClickedVRApplyButton__DelegateSignature();
		void OnClickedVRDefaultButton__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
