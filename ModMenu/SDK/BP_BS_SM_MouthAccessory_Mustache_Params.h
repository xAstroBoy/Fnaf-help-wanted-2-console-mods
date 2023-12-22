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
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.GetIsUsed
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_GetIsUsed_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.ReceiveBeginPlay
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.SetIsUsed
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_SetIsUsed_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.BndEvt__BP_BS_SM_NeckAccessory_BowTie_StaticMesh_0_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_BndEvt__BP_BS_SM_NeckAccessory_BowTie_StaticMesh_0_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_SM_MouthAccessory_Mustache.BP_BS_SM_MouthAccessory_Mustache_C.ExecuteUbergraph_BP_BS_SM_MouthAccessory_Mustache
	 */
	struct ABP_BS_SM_MouthAccessory_Mustache_C_ExecuteUbergraph_BP_BS_SM_MouthAccessory_Mustache_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
