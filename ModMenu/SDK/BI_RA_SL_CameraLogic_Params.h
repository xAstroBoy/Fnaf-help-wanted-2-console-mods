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
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.GetCurrentVisibleRoom
	 */
	struct UBI_RA_SL_CameraLogic_C_GetCurrentVisibleRoom_Params
	{
	public:
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.JobInterview_ActivateLights
	 */
	struct UBI_RA_SL_CameraLogic_C_JobInterview_ActivateLights_Params
	{	};

	/**
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.OnCameraSwitch
	 */
	struct UBI_RA_SL_CameraLogic_C_OnCameraSwitch_Params
	{
	public:
		int32_t                                                    ButtonID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.OnCameraButtonPress
	 */
	struct UBI_RA_SL_CameraLogic_C_OnCameraButtonPress_Params
	{
	public:
		int32_t                                                    ButtonID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.CurrentAnimatronicOnScreen
	 */
	struct UBI_RA_SL_CameraLogic_C_CurrentAnimatronicOnScreen_Params
	{	};

	/**
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.NotifyOfPowerDrain
	 */
	struct UBI_RA_SL_CameraLogic_C_NotifyOfPowerDrain_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_RA_SL_CameraLogic.BI_RA_SL_CameraLogic_C.TriggerCameraStaticTransition
	 */
	struct UBI_RA_SL_CameraLogic_C_TriggerCameraStaticTransition_Params
	{
	public:
		Enum_RA_SL_RoomType                                        TriggeringRoom;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OverrideTrigger;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JV4M[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TriggeringActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
