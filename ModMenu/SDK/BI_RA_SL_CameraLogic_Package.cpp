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
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.GetCurrentVisibleRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                CurrentRoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_CameraLogic_C::GetCurrentVisibleRoom(Enum_RA_SL_RoomType* CurrentRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.GetCurrentVisibleRoom");
		
		UBI_RA_SL_CameraLogic_C_GetCurrentVisibleRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentRoom != nullptr)
			*CurrentRoom = params.CurrentRoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.JobInterview_ActivateLights
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_CameraLogic_C::JobInterview_ActivateLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.JobInterview_ActivateLights");
		
		UBI_RA_SL_CameraLogic_C_JobInterview_ActivateLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.OnCameraSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_CameraLogic_C::OnCameraSwitch(int32_t ButtonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.OnCameraSwitch");
		
		UBI_RA_SL_CameraLogic_C_OnCameraSwitch_Params params {};
		params.ButtonID = ButtonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.OnCameraButtonPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_CameraLogic_C::OnCameraButtonPress(int32_t ButtonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.OnCameraButtonPress");
		
		UBI_RA_SL_CameraLogic_C_OnCameraButtonPress_Params params {};
		params.ButtonID = ButtonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.CurrentAnimatronicOnScreen
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_CameraLogic_C::CurrentAnimatronicOnScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.CurrentAnimatronicOnScreen");
		
		UBI_RA_SL_CameraLogic_C_CurrentAnimatronicOnScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.NotifyOfPowerDrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RA_SL_CameraLogic_C::NotifyOfPowerDrain(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.NotifyOfPowerDrain");
		
		UBI_RA_SL_CameraLogic_C_NotifyOfPowerDrain_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.TriggerCameraStaticTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                TriggeringRoom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideTrigger                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TriggeringActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_CameraLogic_C::TriggerCameraStaticTransition(Enum_RA_SL_RoomType TriggeringRoom, bool OverrideTrigger, class AActor* TriggeringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.TriggerCameraStaticTransition");
		
		UBI_RA_SL_CameraLogic_C_TriggerCameraStaticTransition_Params params {};
		params.TriggeringRoom = TriggeringRoom;
		params.OverrideTrigger = OverrideTrigger;
		params.TriggeringActor = TriggeringActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_CameraLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_CameraLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C");
		return ptr;
	}

}


