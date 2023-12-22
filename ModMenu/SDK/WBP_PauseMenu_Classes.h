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
	 * WidgetBlueprintGeneratedClass WBP_PauseMenu.WBP_PauseMenu_C
	 * Size -> 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
	 */
	class UWBP_PauseMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_AudioOptionsMenu_C*                             AudioOptionsMenu;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BlackBGCredits;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 ContinueButton;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CreditsMenu_C*                                  CreditsMenu;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HW2Logo;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HW2Logo_2;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelName_TextBlock;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 OptionsButton;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_OptionsMenu_C*                                  OptionsMenu;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 PauseCheatsButton;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 RestartButton;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 ReturnToHubButton;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Temp;                                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Temp_3;                                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TempScreenWidth;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionText;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_VideoOptionsMenu_C*                             VideoOptions;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_VROptionsMenu_C*                                VROptionsMenu;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Demo_ControllerViewLeft_C*                      WBP_Demo_ControllerViewLeft;                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Demo_ControllerViewRight_C*                     WBP_Demo_ControllerViewRight;                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetAllControllerSwitchersToIndex(int32_t Index);
		void SetupControllerSwitcher();
		void ReturnToOptionsRoot();
		void BndEvt__WBP_PauseMenu_PauseContinueButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void BndEvt__WBP_PauseMenu_PauseRestartButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__WBP_PauseMenu_PauseReturnToHubButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__WBP_PauseMenu_PauseCheatsButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__WBP_PauseMenu_OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_12_OnClickedBackButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_14_OnClickedVideoOptions__DelegateSignature();
		void BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_20_OnClickedVideoApplyButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_23_OnClickedVideoBackButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_5_OnClickedAudioApplyButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_6_OnClickedAudioBackButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_10_OnClickedAudioOptionsButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_0_OnClickedVRApplyButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_4_OnClickedVRBackButton__DelegateSignature();
		void BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_15_OnClickedVROptions__DelegateSignature();
		void BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_7_OnClickedCreditOptions__DelegateSignature();
		void BndEvt__WBP_PauseMenu_CreditsMenu_K2Node_ComponentBoundEvent_8_OnClickedCreditsBackButton__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_PauseMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
