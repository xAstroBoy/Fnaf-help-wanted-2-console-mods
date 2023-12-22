/**
 * Name: HW2
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.SetAllControllerSwitchersToIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PauseMenu_C::SetAllControllerSwitchersToIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.SetAllControllerSwitchersToIndex");
		
		UWBP_PauseMenu_C_SetAllControllerSwitchersToIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.SetupControllerSwitcher
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::SetupControllerSwitcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.SetupControllerSwitcher");
		
		UWBP_PauseMenu_C_SetupControllerSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.ReturnToOptionsRoot
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::ReturnToOptionsRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.ReturnToOptionsRoot");
		
		UWBP_PauseMenu_C_ReturnToOptionsRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseContinueButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_PauseContinueButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseContinueButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_PauseContinueButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseRestartButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_PauseRestartButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseRestartButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_PauseRestartButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseReturnToHubButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_PauseReturnToHubButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseReturnToHubButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_PauseReturnToHubButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseCheatsButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_PauseCheatsButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_PauseCheatsButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_PauseCheatsButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_12_OnClickedBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_12_OnClickedBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_12_OnClickedBackButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_12_OnClickedBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_14_OnClickedVideoOptions__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_14_OnClickedVideoOptions__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_14_OnClickedVideoOptions__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_14_OnClickedVideoOptions__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_20_OnClickedVideoApplyButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_20_OnClickedVideoApplyButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_20_OnClickedVideoApplyButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_20_OnClickedVideoApplyButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_23_OnClickedVideoBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_23_OnClickedVideoBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_23_OnClickedVideoBackButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_VideoOptions_K2Node_ComponentBoundEvent_23_OnClickedVideoBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_5_OnClickedAudioApplyButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_5_OnClickedAudioApplyButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_5_OnClickedAudioApplyButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_5_OnClickedAudioApplyButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_6_OnClickedAudioBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_6_OnClickedAudioBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_6_OnClickedAudioBackButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_WBP_AudioOptionsMenu_K2Node_ComponentBoundEvent_6_OnClickedAudioBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_10_OnClickedAudioOptionsButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_10_OnClickedAudioOptionsButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_10_OnClickedAudioOptionsButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_10_OnClickedAudioOptionsButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_0_OnClickedVRApplyButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_0_OnClickedVRApplyButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_0_OnClickedVRApplyButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_0_OnClickedVRApplyButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_4_OnClickedVRBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_4_OnClickedVRBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_4_OnClickedVRBackButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_VROptionsMenu_K2Node_ComponentBoundEvent_4_OnClickedVRBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_15_OnClickedVROptions__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_15_OnClickedVROptions__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_15_OnClickedVROptions__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_15_OnClickedVROptions__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_7_OnClickedCreditOptions__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_7_OnClickedCreditOptions__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_7_OnClickedCreditOptions__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_OptionsMenu_K2Node_ComponentBoundEvent_7_OnClickedCreditOptions__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_CreditsMenu_K2Node_ComponentBoundEvent_8_OnClickedCreditsBackButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::BndEvt__WBP_PauseMenu_CreditsMenu_K2Node_ComponentBoundEvent_8_OnClickedCreditsBackButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.BndEvt__WBP_PauseMenu_CreditsMenu_K2Node_ComponentBoundEvent_8_OnClickedCreditsBackButton__DelegateSignature");
		
		UWBP_PauseMenu_C_BndEvt__WBP_PauseMenu_CreditsMenu_K2Node_ComponentBoundEvent_8_OnClickedCreditsBackButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PauseMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.Construct");
		
		UWBP_PauseMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PauseMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.PreConstruct");
		
		UWBP_PauseMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PauseMenu.WBP_PauseMenu_C.ExecuteUbergraph_WBP_PauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PauseMenu_C::ExecuteUbergraph_WBP_PauseMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_PauseMenu.WBP_PauseMenu_C.ExecuteUbergraph_WBP_PauseMenu");
		
		UWBP_PauseMenu_C_ExecuteUbergraph_WBP_PauseMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PauseMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PauseMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PauseMenu.WBP_PauseMenu_C");
		return ptr;
	}

}


