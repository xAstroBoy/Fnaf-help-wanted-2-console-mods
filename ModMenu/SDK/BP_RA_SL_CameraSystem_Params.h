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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetCurrentVisibleRoom
	 */
	struct ABP_RA_SL_CameraSystem_C_GetCurrentVisibleRoom_Params
	{
	public:
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetPlushBabyPose
	 */
	struct ABP_RA_SL_CameraSystem_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetAllowedCharacters
	 */
	struct ABP_RA_SL_CameraSystem_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetMinireenasOnDoor
	 */
	struct ABP_RA_SL_CameraSystem_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetAssignedButton
	 */
	struct ABP_RA_SL_CameraSystem_C_GetAssignedButton_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetRoomType
	 */
	struct ABP_RA_SL_CameraSystem_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CheckForRoomToAllowShockButton
	 */
	struct ABP_RA_SL_CameraSystem_C_CheckForRoomToAllowShockButton_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.SwitchBetweenMonitorScreens
	 */
	struct ABP_RA_SL_CameraSystem_C_SwitchBetweenMonitorScreens_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OrganizeCameraArray
	 */
	struct ABP_RA_SL_CameraSystem_C_OrganizeCameraArray_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraUpdate
	 */
	struct ABP_RA_SL_CameraSystem_C_OnCameraUpdate_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.GetCurrentVisibleStaffbot
	 */
	struct ABP_RA_SL_CameraSystem_C_GetCurrentVisibleStaffbot_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.UpdateVisibleCamera
	 */
	struct ABP_RA_SL_CameraSystem_C_UpdateVisibleCamera_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerControlledShock
	 */
	struct ABP_RA_SL_CameraSystem_C_TriggerControlledShock_Params
	{
	public:
		int32_t                                                    CamerToShock;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.DisablePowerReadout
	 */
	struct ABP_RA_SL_CameraSystem_C_DisablePowerReadout_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CurrentAnimatronicOnScreen
	 */
	struct ABP_RA_SL_CameraSystem_C_CurrentAnimatronicOnScreen_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.AssignMinireenaToDoor
	 */
	struct ABP_RA_SL_CameraSystem_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_CameraSystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerPostShock
	 */
	struct ABP_RA_SL_CameraSystem_C_TriggerPostShock_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.SetRoomType
	 */
	struct ABP_RA_SL_CameraSystem_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.DEBUG_TestStaticScreen
	 */
	struct ABP_RA_SL_CameraSystem_C_DEBUG_TestStaticScreen_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerCameraStaticTransition
	 */
	struct ABP_RA_SL_CameraSystem_C_TriggerCameraStaticTransition_Params
	{
	public:
		Enum_RA_SL_RoomType                                        TriggeringRoom;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OverrideTrigger;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7W05[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TriggeringActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.NotifyOfPowerDrain
	 */
	struct ABP_RA_SL_CameraSystem_C_NotifyOfPowerDrain_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.CameraSystemPower
	 */
	struct ABP_RA_SL_CameraSystem_C_CameraSystemPower_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraButtonPress
	 */
	struct ABP_RA_SL_CameraSystem_C_OnCameraButtonPress_Params
	{
	public:
		int32_t                                                    ButtonID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnCameraSwitch
	 */
	struct ABP_RA_SL_CameraSystem_C_OnCameraSwitch_Params
	{
	public:
		int32_t                                                    ButtonID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.JobInterview_Override
	 */
	struct ABP_RA_SL_CameraSystem_C_JobInterview_Override_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.TriggerCameraStatic_HideAndSeek
	 */
	struct ABP_RA_SL_CameraSystem_C_TriggerCameraStatic_HideAndSeek_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.UpdatePowerPercentage
	 */
	struct ABP_RA_SL_CameraSystem_C_UpdatePowerPercentage_Params
	{
	public:
		float                                                      PowerPercent;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PowerUsage;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.OnPowerShutOff
	 */
	struct ABP_RA_SL_CameraSystem_C_OnPowerShutOff_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.JobInterview_ActivateLights
	 */
	struct ABP_RA_SL_CameraSystem_C_JobInterview_ActivateLights_Params
	{	};

	/**
	 * Function BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C.ExecuteUbergraph_BP_RA_SL_CameraSystem
	 */
	struct ABP_RA_SL_CameraSystem_C_ExecuteUbergraph_BP_RA_SL_CameraSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
