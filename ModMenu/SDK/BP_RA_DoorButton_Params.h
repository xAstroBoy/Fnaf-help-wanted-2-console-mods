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
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.ChangeButtonMaterialState
	 */
	struct ABP_RA_DoorButton_C_ChangeButtonMaterialState_Params
	{
	public:
		bool                                                       EnabledButton;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5OY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.CheckOverlappingHandForHaptic
	 */
	struct ABP_RA_DoorButton_C_CheckOverlappingHandForHaptic_Params
	{	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.SetMaterialOnButton
	 */
	struct ABP_RA_DoorButton_C_SetMaterialOnButton_Params
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.EnableDoorButton
	 */
	struct ABP_RA_DoorButton_C_EnableDoorButton_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.Event_ButtonReleased
	 */
	struct ABP_RA_DoorButton_C_Event_ButtonReleased_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.CheckIfButtonIsBlocked
	 */
	struct ABP_RA_DoorButton_C_CheckIfButtonIsBlocked_Params
	{	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.AssignBlockingCharacter
	 */
	struct ABP_RA_DoorButton_C_AssignBlockingCharacter_Params
	{	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.RemoveBlockingCharacter
	 */
	struct ABP_RA_DoorButton_C_RemoveBlockingCharacter_Params
	{	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.UpdateLightColor
	 */
	struct ABP_RA_DoorButton_C_UpdateLightColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.Event_ButtonPressed
	 */
	struct ABP_RA_DoorButton_C_Event_ButtonPressed_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.BndEvt__BP_RA_DoorButton_TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_RA_DoorButton_C_BndEvt__BP_RA_DoorButton_TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ZPX[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.ReceiveBeginPlay
	 */
	struct ABP_RA_DoorButton_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.PowerOutage
	 */
	struct ABP_RA_DoorButton_C_PowerOutage_Params
	{	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.BndEvt__BP_RA_DoorButton_TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_RA_DoorButton_C_BndEvt__BP_RA_DoorButton_TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_DoorButton.BP_RA_DoorButton_C.ExecuteUbergraph_BP_RA_DoorButton
	 */
	struct ABP_RA_DoorButton_C_ExecuteUbergraph_BP_RA_DoorButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EELQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
