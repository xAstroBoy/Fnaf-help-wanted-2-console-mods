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
	 * 		Name   -> PredefinedFunction UVRDebugDrawingWorldSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRDebugDrawingWorldSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRDebugDrawingWorldSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewScreenWidget.OnAcceptClicked
	 * 		Flags  -> ()
	 */
	void UVRReviewScreenWidget::OnAcceptClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewScreenWidget.OnAcceptClicked");
		
		UVRReviewScreenWidget_OnAcceptClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewScreenWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewScreenWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewScreenWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRReviewScreenWidgetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRReviewScreenWidgetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewScreenWidgetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewTextWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewTextWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewTextWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolActorComponent.GetMainMenu
	 * 		Flags  -> ()
	 */
	class AVRReviewToolMainMenuWidgetActor* UVRReviewToolActorComponent::GetMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolActorComponent.GetMainMenu");
		
		UVRReviewToolActorComponent_GetMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolDataSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolDataSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolDataSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolFloatingText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolFloatingText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolFloatingText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRReviewToolFloatingTextActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRReviewToolFloatingTextActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolFloatingTextActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolModuleBase.OnExitModule
	 * 		Flags  -> ()
	 */
	void UVRReviewToolModuleBase::OnExitModule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolModuleBase.OnExitModule");
		
		UVRReviewToolModuleBase_OnExitModule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolModuleBase.OnEnterModule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ActiveModuleIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRReviewToolModuleBase::OnEnterModule(int32_t ActiveModuleIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolModuleBase.OnEnterModule");
		
		UVRReviewToolModuleBase_OnEnterModule_Params params {};
		params.ActiveModuleIndex = ActiveModuleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolModuleBase.OnActorSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  OutHit                                                     (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRReviewToolModuleBase::OnActorSelected(const struct FHitResult& OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolModuleBase.OnActorSelected");
		
		UVRReviewToolModuleBase_OnActorSelected_Params params {};
		params.OutHit = OutHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolModuleBase.EnterActorSelection
	 * 		Flags  -> ()
	 */
	void UVRReviewToolModuleBase::EnterActorSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolModuleBase.EnterActorSelection");
		
		UVRReviewToolModuleBase_EnterActorSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolModuleBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolModuleBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolModuleBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolFloatingTextMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolFloatingTextMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolFloatingTextMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolMainMenu.SwapToPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRReviewToolToggleButton*                   ToggleButton                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRReviewToolMainMenu::SwapToPanel(class UVRReviewToolToggleButton* ToggleButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolMainMenu.SwapToPanel");
		
		UVRReviewToolMainMenu_SwapToPanel_Params params {};
		params.ToggleButton = ToggleButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolMainMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolMainMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolMainMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolMainMenuWidgetActor.GetMainMenu
	 * 		Flags  -> ()
	 */
	class UVRReviewToolMainMenu* AVRReviewToolMainMenuWidgetActor::GetMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolMainMenuWidgetActor.GetMainMenu");
		
		AVRReviewToolMainMenuWidgetActor_GetMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRReviewToolMainMenuWidgetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRReviewToolMainMenuWidgetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolMainMenuWidgetActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolModuleInterface.SetModuleIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRReviewToolModuleInterface::SetModuleIndex(int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolModuleInterface.SetModuleIndex");
		
		UVRReviewToolModuleInterface_SetModuleIndex_Params params {};
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolModuleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolModuleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolModuleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolModuleUI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolModuleUI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolModuleUI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRReviewToolPlayerPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRReviewToolPlayerPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolPlayerPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolSaveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolSaveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolSaveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRReviewTool.VRReviewToolToggleButton.ToggleOnClick
	 * 		Flags  -> ()
	 */
	void UVRReviewToolToggleButton::ToggleOnClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VRReviewTool.VRReviewToolToggleButton.ToggleOnClick");
		
		UVRReviewToolToggleButton_ToggleOnClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRReviewToolToggleButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRReviewToolToggleButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewToolToggleButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRReviewWidgetActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRReviewWidgetActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VRReviewTool.VRReviewWidgetActor");
		return ptr;
	}

}


