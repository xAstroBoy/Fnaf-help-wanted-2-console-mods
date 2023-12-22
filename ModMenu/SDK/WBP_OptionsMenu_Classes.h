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
	 * WidgetBlueprintGeneratedClass WBP_OptionsMenu.WBP_OptionsMenu_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UWBP_OptionsMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Title_Button_C*                                 AudioOptions;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 BackButton;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VideoOptions;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Title_Button_C*                                 VROptions;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedAudioOptionsButton;                             // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedBackButton;                                     // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedVideoOptions;                                   // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedVROptions;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickedCreditOptions;                                  // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetupVisibleOptions();
		void BndEvt__WBP_OptionsMenu_AudioOptions_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__WBP_OptionsMenu_BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__WBP_OptionsMenu_VideoOptions_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__WBP_OptionsMenu_VROptions_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void ExecuteUbergraph_WBP_OptionsMenu(int32_t EntryPoint);
		void OnClickedCreditOptions__DelegateSignature();
		void OnClickedVROptions__DelegateSignature();
		void OnClickedVideoOptions__DelegateSignature();
		void OnClickedBackButton__DelegateSignature();
		void OnClickedAudioOptionsButton__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
