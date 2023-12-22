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
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.DecayRotation
	 */
	struct ABP_BS_SM_LazySusan_C_DecayRotation_Params
	{	};

	/**
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.CalculateRotationSpeed
	 */
	struct ABP_BS_SM_LazySusan_C_CalculateRotationSpeed_Params
	{
	public:
		float                                                      LastPosition;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentSpeed;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentPosition;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.HandleRotationSound
	 */
	struct ABP_BS_SM_LazySusan_C_HandleRotationSound_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.ReceiveTick
	 */
	struct ABP_BS_SM_LazySusan_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_BS_SM_LazySusan_C_BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_BS_SM_LazySusan_C_BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.ExecuteUbergraph_BP_BS_SM_LazySusan
	 */
	struct ABP_BS_SM_LazySusan_C_ExecuteUbergraph_BP_BS_SM_LazySusan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
