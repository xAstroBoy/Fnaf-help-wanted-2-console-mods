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
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetCurrentVisibleRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                CurrentRoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::GetCurrentVisibleRoom(Enum_RA_SL_RoomType* CurrentRoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetCurrentVisibleRoom");
		
		ABP_RA_SL_CameraSystem_C_GetCurrentVisibleRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentRoom != nullptr)
			*CurrentRoom = params.CurrentRoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetPlushBabyPose");
		
		ABP_RA_SL_CameraSystem_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void ABP_RA_SL_CameraSystem_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetAllowedCharacters");
		
		ABP_RA_SL_CameraSystem_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetMinireenasOnDoor");
		
		ABP_RA_SL_CameraSystem_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetAssignedButton");
		
		ABP_RA_SL_CameraSystem_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetRoomType");
		
		ABP_RA_SL_CameraSystem_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CheckForRoomToAllowShockButton
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::CheckForRoomToAllowShockButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CheckForRoomToAllowShockButton");
		
		ABP_RA_SL_CameraSystem_C_CheckForRoomToAllowShockButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.SwitchBetweenMonitorScreens
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::SwitchBetweenMonitorScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.SwitchBetweenMonitorScreens");
		
		ABP_RA_SL_CameraSystem_C_SwitchBetweenMonitorScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OrganizeCameraArray
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::OrganizeCameraArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OrganizeCameraArray");
		
		ABP_RA_SL_CameraSystem_C_OrganizeCameraArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraUpdate
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::OnCameraUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraUpdate");
		
		ABP_RA_SL_CameraSystem_C_OnCameraUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetCurrentVisibleStaffbot
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::GetCurrentVisibleStaffbot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetCurrentVisibleStaffbot");
		
		ABP_RA_SL_CameraSystem_C_GetCurrentVisibleStaffbot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.UpdateVisibleCamera
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::UpdateVisibleCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.UpdateVisibleCamera");
		
		ABP_RA_SL_CameraSystem_C_UpdateVisibleCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerControlledShock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CamerToShock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::TriggerControlledShock(int32_t CamerToShock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerControlledShock");
		
		ABP_RA_SL_CameraSystem_C_TriggerControlledShock_Params params {};
		params.CamerToShock = CamerToShock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.DisablePowerReadout
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::DisablePowerReadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.DisablePowerReadout");
		
		ABP_RA_SL_CameraSystem_C_DisablePowerReadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CurrentAnimatronicOnScreen
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::CurrentAnimatronicOnScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CurrentAnimatronicOnScreen");
		
		ABP_RA_SL_CameraSystem_C_CurrentAnimatronicOnScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CameraSystem_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.AssignMinireenaToDoor");
		
		ABP_RA_SL_CameraSystem_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.ReceiveBeginPlay");
		
		ABP_RA_SL_CameraSystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerPostShock
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::TriggerPostShock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerPostShock");
		
		ABP_RA_SL_CameraSystem_C_TriggerPostShock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.SetRoomType");
		
		ABP_RA_SL_CameraSystem_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.DEBUG_TestStaticScreen
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::DEBUG_TestStaticScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.DEBUG_TestStaticScreen");
		
		ABP_RA_SL_CameraSystem_C_DEBUG_TestStaticScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerCameraStaticTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                TriggeringRoom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideTrigger                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TriggeringActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::TriggerCameraStaticTransition(Enum_RA_SL_RoomType TriggeringRoom, bool OverrideTrigger, class AActor* TriggeringActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerCameraStaticTransition");
		
		ABP_RA_SL_CameraSystem_C_TriggerCameraStaticTransition_Params params {};
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
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.NotifyOfPowerDrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CameraSystem_C::NotifyOfPowerDrain(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.NotifyOfPowerDrain");
		
		ABP_RA_SL_CameraSystem_C_NotifyOfPowerDrain_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CameraSystemPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CameraSystem_C::CameraSystemPower(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CameraSystemPower");
		
		ABP_RA_SL_CameraSystem_C_CameraSystemPower_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraButtonPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::OnCameraButtonPress(int32_t ButtonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraButtonPress");
		
		ABP_RA_SL_CameraSystem_C_OnCameraButtonPress_Params params {};
		params.ButtonID = ButtonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::OnCameraSwitch(int32_t ButtonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraSwitch");
		
		ABP_RA_SL_CameraSystem_C_OnCameraSwitch_Params params {};
		params.ButtonID = ButtonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.JobInterview_Override
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::JobInterview_Override()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.JobInterview_Override");
		
		ABP_RA_SL_CameraSystem_C_JobInterview_Override_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerCameraStatic_HideAndSeek
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_CameraSystem_C::TriggerCameraStatic_HideAndSeek(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerCameraStatic_HideAndSeek");
		
		ABP_RA_SL_CameraSystem_C_TriggerCameraStatic_HideAndSeek_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.UpdatePowerPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PowerPercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PowerUsage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::UpdatePowerPercentage(float PowerPercent, float PowerUsage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.UpdatePowerPercentage");
		
		ABP_RA_SL_CameraSystem_C_UpdatePowerPercentage_Params params {};
		params.PowerPercent = PowerPercent;
		params.PowerUsage = PowerUsage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnPowerShutOff
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::OnPowerShutOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnPowerShutOff");
		
		ABP_RA_SL_CameraSystem_C_OnPowerShutOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.JobInterview_ActivateLights
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_CameraSystem_C::JobInterview_ActivateLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.JobInterview_ActivateLights");
		
		ABP_RA_SL_CameraSystem_C_JobInterview_ActivateLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.ExecuteUbergraph_BP_RA_SL_CameraSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_CameraSystem_C::ExecuteUbergraph_BP_RA_SL_CameraSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.ExecuteUbergraph_BP_RA_SL_CameraSystem");
		
		ABP_RA_SL_CameraSystem_C_ExecuteUbergraph_BP_RA_SL_CameraSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_CameraSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_CameraSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C");
		return ptr;
	}

}


