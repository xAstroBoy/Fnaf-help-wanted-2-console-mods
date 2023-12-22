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
	 * Function BP_Faztoken.BP_Faztoken_C.SetupVFX
	 */
	struct ABP_Faztoken_C_SetupVFX_Params
	{	};

	/**
	 * Function BP_Faztoken.BP_Faztoken_C.HasCollectedCoin
	 */
	struct ABP_Faztoken_C_HasCollectedCoin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B2D5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Faztoken.BP_Faztoken_C.BndEvt__BP_Faztoken_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_Faztoken_C_BndEvt__BP_Faztoken_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Faztoken.BP_Faztoken_C.Collect Coin
	 */
	struct ABP_Faztoken_C_CollectCoin_Params
	{	};

	/**
	 * Function BP_Faztoken.BP_Faztoken_C.ReceiveBeginPlay
	 */
	struct ABP_Faztoken_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Faztoken.BP_Faztoken_C.BndEvt__BP_Faztoken_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_Faztoken_C_BndEvt__BP_Faztoken_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Faztoken.BP_Faztoken_C.ExecuteUbergraph_BP_Faztoken
	 */
	struct ABP_Faztoken_C_ExecuteUbergraph_BP_Faztoken_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
