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
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.GetIsUsed
	 */
	struct ABP_BS_SM_EyesAccessory_C_GetIsUsed_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.ResocketToBust
	 */
	struct ABP_BS_SM_EyesAccessory_C_ResocketToBust_Params
	{	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.SetIsUsed
	 */
	struct ABP_BS_SM_EyesAccessory_C_SetIsUsed_Params
	{
	public:
		bool                                                       IsUsed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.OnEndHoverSocket
	 */
	struct ABP_BS_SM_EyesAccessory_C_OnEndHoverSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.OnBeginHoverSocket
	 */
	struct ABP_BS_SM_EyesAccessory_C_OnBeginHoverSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanSocket;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.SetBust
	 */
	struct ABP_BS_SM_EyesAccessory_C_SetBust_Params
	{
	public:
		class ABP_BS_SM_Bust_C*                                    Bust;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature
	 */
	struct ABP_BS_SM_EyesAccessory_C_BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.ForceBoundaryAction
	 */
	struct ABP_BS_SM_EyesAccessory_C_ForceBoundaryAction_Params
	{	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.OnInsertedInSocket
	 */
	struct ABP_BS_SM_EyesAccessory_C_OnInsertedInSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.OnRemovedFromSocket
	 */
	struct ABP_BS_SM_EyesAccessory_C_OnRemovedFromSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_SM_EyesAccessory.BP_BS_SM_EyesAccessory_C.ExecuteUbergraph_BP_BS_SM_EyesAccessory
	 */
	struct ABP_BS_SM_EyesAccessory_C_ExecuteUbergraph_BP_BS_SM_EyesAccessory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
