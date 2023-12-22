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
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.GetToolEnum
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_GetToolEnum_Params
	{
	public:
		Enum_SO_FA_ToolSelection                                   ToolSelection;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.Activate
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_Activate_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.Deactivate
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_Deactivate_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnInstantiate
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_OnInstantiate_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ReturnToSocket
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_ReturnToSocket_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.SetReturnSocket
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_SetReturnSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ItemAction
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_ItemAction_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.PlayToolHaptics
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_PlayToolHaptics_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnBeginHoverSocket
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_OnBeginHoverSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanSocket;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnEndHoverSocket
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_OnEndHoverSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnInsertedInSocket
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_OnInsertedInSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnRemovedFromSocket
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_OnRemovedFromSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable
	 */
	struct ABP_RA_SL_DeskObjectGrabbable_C_ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
