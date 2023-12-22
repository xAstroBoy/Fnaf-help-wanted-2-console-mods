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
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetConstraintBase
	 */
	struct UABP_PlayerHand_C_GetConstraintBase_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetComponentsInGrabRange
	 */
	struct UABP_PlayerHand_C_GetComponentsInGrabRange_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ActorsInGrabRange;                                       // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetGrabConstraintComponent
	 */
	struct UABP_PlayerHand_C_GetGrabConstraintComponent_Params
	{
	public:
		class UPhysicsConstraintComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetGrabDetector
	 */
	struct UABP_PlayerHand_C_GetGrabDetector_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandPrimitive
	 */
	struct UABP_PlayerHand_C_GetHandPrimitive_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandState
	 */
	struct UABP_PlayerHand_C_GetHandState_Params
	{
	public:
		EHandModelState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandType
	 */
	struct UABP_PlayerHand_C_GetHandType_Params
	{
	public:
		ESWGVRBaseHand                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.AnimGraph
	 */
	struct UABP_PlayerHand_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.HandCreationFinished
	 */
	struct UABP_PlayerHand_C_HandCreationFinished_Params
	{
	public:
		class UVRHandComponent*                                    HandComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.SetGrabHoverStateEnable
	 */
	struct UABP_PlayerHand_C_SetGrabHoverStateEnable_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandType
	 */
	struct UABP_PlayerHand_C_SetHandType_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandVisibility
	 */
	struct UABP_PlayerHand_C_SetHandVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.UnconstrainComponent
	 */
	struct UABP_PlayerHand_C_UnconstrainComponent_Params
	{	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.ConstrainComponentToHand
	 */
	struct UABP_PlayerHand_C_ConstrainComponentToHand_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponentToConstrain;                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandProximity
	 */
	struct UABP_PlayerHand_C_SetHandProximity_Params
	{
	public:
		float                                                      Proximity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandGrip
	 */
	struct UABP_PlayerHand_C_SetHandGrip_Params
	{
	public:
		float                                                      GripValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandState
	 */
	struct UABP_PlayerHand_C_SetHandState_Params
	{
	public:
		EHandModelState                                            State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_PlayerHand.ABP_PlayerHand_C.ExecuteUbergraph_ABP_PlayerHand
	 */
	struct UABP_PlayerHand_C_ExecuteUbergraph_ABP_PlayerHand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
