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
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_GetCurrentZone
	 */
	struct ABP_ChicaCupcake_C_Cupcake_GetCurrentZone_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       CurrentZone;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_UpdateZone
	 */
	struct ABP_ChicaCupcake_C_Cupcake_UpdateZone_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       NewZone;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_ChicaHasClaimedIt
	 */
	struct ABP_ChicaCupcake_C_Cupcake_ChicaHasClaimedIt_Params
	{	};

	/**
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.OnGrabberGrabbed
	 */
	struct ABP_ChicaCupcake_C_OnGrabberGrabbed_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FH4B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.OnGrabberReleased
	 */
	struct ABP_ChicaCupcake_C_OnGrabberReleased_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Grabber;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZH75[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.BndEvt__BP_ChicaCupcake_Cupcake_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_ChicaCupcake_C_BndEvt__BP_ChicaCupcake_Cupcake_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ChicaCupcake.BP_ChicaCupcake_C.ExecuteUbergraph_BP_ChicaCupcake
	 */
	struct ABP_ChicaCupcake_C_ExecuteUbergraph_BP_ChicaCupcake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2SUM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
