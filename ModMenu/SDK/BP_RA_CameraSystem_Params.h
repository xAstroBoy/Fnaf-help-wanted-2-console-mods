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
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetActivation
	 */
	struct ABP_RA_CameraSystem_C_GetActivation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.SetCurrentRoom
	 */
	struct ABP_RA_CameraSystem_C_SetCurrentRoom_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetCurrentRoom
	 */
	struct ABP_RA_CameraSystem_C_GetCurrentRoom_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.SetIsActive
	 */
	struct ABP_RA_CameraSystem_C_SetIsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetIsActive
	 */
	struct ABP_RA_CameraSystem_C_GetIsActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.UpdateVisibleCamera
	 */
	struct ABP_RA_CameraSystem_C_UpdateVisibleCamera_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.IncrementalActivation
	 */
	struct ABP_RA_CameraSystem_C_IncrementalActivation_Params
	{
	public:
		float                                                      PercentageActivated;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.ReceiveBeginPlay
	 */
	struct ABP_RA_CameraSystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Next Camera
	 */
	struct ABP_RA_CameraSystem_C_NextCamera_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Activated
	 */
	struct ABP_RA_CameraSystem_C_Activated_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Deactivated
	 */
	struct ABP_RA_CameraSystem_C_Deactivated_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Event_OnPowerButtonPress
	 */
	struct ABP_RA_CameraSystem_C_Event_OnPowerButtonPress_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.CameraSystemPower
	 */
	struct ABP_RA_CameraSystem_C_CameraSystemPower_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.OnPowerShutOff
	 */
	struct ABP_RA_CameraSystem_C_OnPowerShutOff_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.DEBUG_CycleMoniterScreens
	 */
	struct ABP_RA_CameraSystem_C_DEBUG_CycleMoniterScreens_Params
	{	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.ExecuteUbergraph_BP_RA_CameraSystem
	 */
	struct ABP_RA_CameraSystem_C_ExecuteUbergraph_BP_RA_CameraSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.CameraSystemStatus__DelegateSignature
	 */
	struct ABP_RA_CameraSystem_C_CameraSystemStatus__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
