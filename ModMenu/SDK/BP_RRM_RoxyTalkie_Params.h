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
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerLevelFromPercentage
	 */
	struct ABP_RRM_RoxyTalkie_C_GetPowerLevelFromPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Return;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.SetPowerIndicator
	 */
	struct ABP_RRM_RoxyTalkie_C_SetPowerIndicator_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerIndicatorArray
	 */
	struct ABP_RRM_RoxyTalkie_C_GetPowerIndicatorArray_Params
	{
	public:
		TArray<class UStaticMeshComponent*>                        Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.UpdatePlayingTime
	 */
	struct ABP_RRM_RoxyTalkie_C_UpdatePlayingTime_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.HasPlayedLongEnoughForMin
	 */
	struct ABP_RRM_RoxyTalkie_C_HasPlayedLongEnoughForMin_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8SCS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RemaingTime;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.HasMinPowerNeededToStart
	 */
	struct ABP_RRM_RoxyTalkie_C_HasMinPowerNeededToStart_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetRechargeRate
	 */
	struct ABP_RRM_RoxyTalkie_C_GetRechargeRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.StopAudio
	 */
	struct ABP_RRM_RoxyTalkie_C_StopAudio_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerPercentage
	 */
	struct ABP_RRM_RoxyTalkie_C_GetPowerPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Recharge
	 */
	struct ABP_RRM_RoxyTalkie_C_Recharge_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EJWM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.DrainPowerFromUse
	 */
	struct ABP_RRM_RoxyTalkie_C_DrainPowerFromUse_Params
	{
	public:
		float                                                      deltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Timeline_0__FinishedFunc
	 */
	struct ABP_RRM_RoxyTalkie_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Timeline_0__UpdateFunc
	 */
	struct ABP_RRM_RoxyTalkie_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature
	 */
	struct ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature
	 */
	struct ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ReceiveTick
	 */
	struct ABP_RRM_RoxyTalkie_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.FlashRoxyTalkie
	 */
	struct ABP_RRM_RoxyTalkie_C_FlashRoxyTalkie_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.EndFlash
	 */
	struct ABP_RRM_RoxyTalkie_C_EndFlash_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ObjectDropped
	 */
	struct ABP_RRM_RoxyTalkie_C_ObjectDropped_Params
	{	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ExecuteUbergraph_BP_RRM_RoxyTalkie
	 */
	struct ABP_RRM_RoxyTalkie_C_ExecuteUbergraph_BP_RRM_RoxyTalkie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
