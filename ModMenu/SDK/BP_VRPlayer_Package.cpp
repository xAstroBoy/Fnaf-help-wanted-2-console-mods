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
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.ResetHandState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::ResetHandState(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.ResetHandState");
		
		ABP_VRPlayer_C_ResetHandState_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.GetCameraBrightnessSetting
	 * 		Flags  -> ()
	 */
	float ABP_VRPlayer_C::GetCameraBrightnessSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.GetCameraBrightnessSetting");
		
		ABP_VRPlayer_C_GetCameraBrightnessSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.GetInvertHandControls
	 * 		Flags  -> ()
	 */
	bool ABP_VRPlayer_C::GetInvertHandControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.GetInvertHandControls");
		
		ABP_VRPlayer_C_GetInvertHandControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.GetPlayerInputRotationScale
	 * 		Flags  -> ()
	 */
	float ABP_VRPlayer_C::GetPlayerInputRotationScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.GetPlayerInputRotationScale");
		
		ABP_VRPlayer_C_GetPlayerInputRotationScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.GetPlayerInputRotationType
	 * 		Flags  -> ()
	 */
	EPlayerRotationInputType ABP_VRPlayer_C::GetPlayerInputRotationType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.GetPlayerInputRotationType");
		
		ABP_VRPlayer_C_GetPlayerInputRotationType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubtitlesSize                                     Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::SetVRSubtitlesSize(ESubtitlesSize Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesSize");
		
		ABP_VRPlayer_C_SetVRSubtitlesSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitles
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_C::SetupSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitles");
		
		ABP_VRPlayer_C_SetupSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesDepth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::SetVRSubtitlesDepth(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesDepth");
		
		ABP_VRPlayer_C_SetVRSubtitlesDepth_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::SetVRSubtitlesHeight(float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesHeight");
		
		ABP_VRPlayer_C_SetVRSubtitlesHeight_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitlesStereoLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetupComplete                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VRPlayer_C::SetupSubtitlesStereoLayer(bool* SetupComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitlesStereoLayer");
		
		ABP_VRPlayer_C_SetupSubtitlesStereoLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetupComplete != nullptr)
			*SetupComplete = params.SetupComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.GetHandActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ChildActor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::GetHandActor(ESWGVRBaseHand Index, class AActor** ChildActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.GetHandActor");
		
		ABP_VRPlayer_C_GetHandActor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChildActor != nullptr)
			*ChildActor = params.ChildActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.OnShowSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VRPlayer_C::OnShowSubtitles(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.OnShowSubtitles");
		
		ABP_VRPlayer_C_OnShowSubtitles_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.UpdateSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Speaker                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_VRPlayer_C::UpdateSubtitles(const class FText& Speaker, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.UpdateSubtitles");
		
		ABP_VRPlayer_C_UpdateSubtitles_Params params {};
		params.Speaker = Speaker;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.ReceiveTick");
		
		ABP_VRPlayer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.ReceiveBeginPlay");
		
		ABP_VRPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.OnShowFPSWatermark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VRPlayer_C::OnShowFPSWatermark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.OnShowFPSWatermark");
		
		ABP_VRPlayer_C_OnShowFPSWatermark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.OnPlayerSettingsLoaded
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_C::OnPlayerSettingsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.OnPlayerSettingsLoaded");
		
		ABP_VRPlayer_C_OnPlayerSettingsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.OnShowMemoryWatermark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VRPlayer_C::OnShowMemoryWatermark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.OnShowMemoryWatermark");
		
		ABP_VRPlayer_C_OnShowMemoryWatermark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Edible                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature(class UEaterComponent* EaterComponent, class AActor* Edible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature");
		
		ABP_VRPlayer_C_BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature_Params params {};
		params.EaterComponent = EaterComponent;
		params.Edible = Edible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.OnPlayerSettingsSaved
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_C::OnPlayerSettingsSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.OnPlayerSettingsSaved");
		
		ABP_VRPlayer_C_OnPlayerSettingsSaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.ReceivePossessed");
		
		ABP_VRPlayer_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitleStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubtitlesSize                                     Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::SetupSubtitleStyle(ESubtitlesSize Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitleStyle");
		
		ABP_VRPlayer_C_SetupSubtitleStyle_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_VRPlayer_C::BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature");
		
		ABP_VRPlayer_C_BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.ReceiveUnpossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.ReceiveUnpossessed");
		
		ABP_VRPlayer_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer.BP_VRPlayer_C.ExecuteUbergraph_BP_VRPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_C::ExecuteUbergraph_BP_VRPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer.BP_VRPlayer_C.ExecuteUbergraph_BP_VRPlayer");
		
		ABP_VRPlayer_C_ExecuteUbergraph_BP_VRPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VRPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VRPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VRPlayer.BP_VRPlayer_C");
		return ptr;
	}

}


