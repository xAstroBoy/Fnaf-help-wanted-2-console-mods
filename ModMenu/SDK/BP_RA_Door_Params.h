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
	 * Function BP_RA_Door.BP_RA_Door_C.HandleAdjecentAmbience
	 */
	struct ABP_RA_Door_C_HandleAdjecentAmbience_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OYJZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.Activated
	 */
	struct ABP_RA_Door_C_Activated_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.Deactivated
	 */
	struct ABP_RA_Door_C_Deactivated_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.OnDoorDeactivation
	 */
	struct ABP_RA_Door_C_OnDoorDeactivation_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.DEBUG: CloseDoor
	 */
	struct ABP_RA_Door_C_DEBUGCloseDoor_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.DEBUG: OpenDoor
	 */
	struct ABP_RA_Door_C_DEBUGOpenDoor_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.IncrementalActivation
	 */
	struct ABP_RA_Door_C_IncrementalActivation_Params
	{
	public:
		float                                                      PercentageActivated;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.ReceiveBeginPlay
	 */
	struct ABP_RA_Door_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.Event_DoorInteraction
	 */
	struct ABP_RA_Door_C_Event_DoorInteraction_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           AssignedWaypoint;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsClosed;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.ActivateSparks
	 */
	struct ABP_RA_Door_C_ActivateSparks_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.ExecuteUbergraph_BP_RA_Door
	 */
	struct ABP_RA_Door_C_ExecuteUbergraph_BP_RA_Door_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.DeactivateDoor__DelegateSignature
	 */
	struct ABP_RA_Door_C_DeactivateDoor__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RA_Door.BP_RA_Door_C.DoorInteraction__DelegateSignature
	 */
	struct ABP_RA_Door_C_DoorInteraction__DelegateSignature_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           AssignedWaypoint;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsClosed;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
