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
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ShuffleAndAssign
	 */
	struct ABP_BS_SM_Bust_C_ShuffleAndAssign_Params
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
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ReceiveBeginPlay
	 */
	struct ABP_BS_SM_Bust_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ResetBusts
	 */
	struct ABP_BS_SM_Bust_C_ResetBusts_Params
	{	};

	/**
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.LookAt
	 */
	struct ABP_BS_SM_Bust_C_LookAt_Params
	{	};

	/**
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.DetermineLookAtPercentage
	 */
	struct ABP_BS_SM_Bust_C_DetermineLookAtPercentage_Params
	{	};

	/**
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.EstablishAccessories
	 */
	struct ABP_BS_SM_Bust_C_EstablishAccessories_Params
	{	};

	/**
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.SpawnAccessoriesOnBusts
	 */
	struct ABP_BS_SM_Bust_C_SpawnAccessoriesOnBusts_Params
	{	};

	/**
	 * Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ExecuteUbergraph_BP_BS_SM_Bust
	 */
	struct ABP_BS_SM_Bust_C_ExecuteUbergraph_BP_BS_SM_Bust_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HA87[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
