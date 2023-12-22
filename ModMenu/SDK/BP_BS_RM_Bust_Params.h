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
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.DestoryAllExistingProps
	 */
	struct ABP_BS_RM_Bust_C_DestoryAllExistingProps_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllEyeSockets
	 */
	struct ABP_BS_RM_Bust_C_GetAllEyeSockets_Params
	{
	public:
		TArray<class USocketComponent*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllNeckSockets
	 */
	struct ABP_BS_RM_Bust_C_GetAllNeckSockets_Params
	{
	public:
		TArray<class USocketComponent*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllEarSockets
	 */
	struct ABP_BS_RM_Bust_C_GetAllEarSockets_Params
	{
	public:
		TArray<class USocketComponent*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllNoseSockets
	 */
	struct ABP_BS_RM_Bust_C_GetAllNoseSockets_Params
	{
	public:
		TArray<class USocketComponent*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllHeadSockets
	 */
	struct ABP_BS_RM_Bust_C_GetAllHeadSockets_Params
	{
	public:
		TArray<class USocketComponent*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.FindOpenSocket
	 */
	struct ABP_BS_RM_Bust_C_FindOpenSocket_Params
	{
	public:
		TArray<class USocketComponent*>                            Sockets;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAccessoriesMapping
	 */
	struct ABP_BS_RM_Bust_C_GetAccessoriesMapping_Params
	{
	public:
		TArray<struct FBP_BS_SM_AccessoriesMapping>                Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ShuffleAndAssign
	 */
	struct ABP_BS_RM_Bust_C_ShuffleAndAssign_Params
	{
	public:
		TArray<class UClass*>                                      OptionsArray;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              Acessory1;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Acessory2;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Acessory3;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Acessory4;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      ItemsToDisplay;                                          // 0x0030(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenMouthSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenMouthSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenLeftEyeSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenLeftEyeSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenRightEyeSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenRightEyeSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.SpawnMask
	 */
	struct ABP_BS_RM_Bust_C_SpawnMask_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ReceiveBeginPlay
	 */
	struct ABP_BS_RM_Bust_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ResetBusts
	 */
	struct ABP_BS_RM_Bust_C_ResetBusts_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.LookAt
	 */
	struct ABP_BS_RM_Bust_C_LookAt_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.DetermineLookAtPercentage
	 */
	struct ABP_BS_RM_Bust_C_DetermineLookAtPercentage_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.EstablishAccessories
	 */
	struct ABP_BS_RM_Bust_C_EstablishAccessories_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.SpawnAccessoriesOnBusts
	 */
	struct ABP_BS_RM_Bust_C_SpawnAccessoriesOnBusts_Params
	{	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenEyesSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenEyesSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenNeckSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenNeckSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenNoseSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenNoseSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenEarsSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenEarsSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenHeadSocket
	 */
	struct ABP_BS_RM_Bust_C_AssignToOpenHeadSocket_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ExecuteUbergraph_BP_BS_RM_Bust
	 */
	struct ABP_BS_RM_Bust_C_ExecuteUbergraph_BP_BS_RM_Bust_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
