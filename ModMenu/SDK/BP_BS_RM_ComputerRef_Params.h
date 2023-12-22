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
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ResetAssignments
	 */
	struct ABP_BS_RM_ComputerRef_C_ResetAssignments_Params
	{	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayForehead
	 */
	struct ABP_BS_RM_ComputerRef_C_SetDisplayForehead_Params
	{
	public:
		class UClass*                                              AssignedEyes;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SaveAssignedColors
	 */
	struct ABP_BS_RM_ComputerRef_C_SaveAssignedColors_Params
	{	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayEyes
	 */
	struct ABP_BS_RM_ComputerRef_C_SetDisplayEyes_Params
	{
	public:
		class UClass*                                              AssignedEyes;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayNeck
	 */
	struct ABP_BS_RM_ComputerRef_C_SetDisplayNeck_Params
	{
	public:
		class UClass*                                              AssignedNeck;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayMustache
	 */
	struct ABP_BS_RM_ComputerRef_C_SetDisplayMustache_Params
	{
	public:
		class UClass*                                              AssignedMustache;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayEars
	 */
	struct ABP_BS_RM_ComputerRef_C_SetDisplayEars_Params
	{
	public:
		class UClass*                                              AssignedEars;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayHat
	 */
	struct ABP_BS_RM_ComputerRef_C_SetDisplayHat_Params
	{
	public:
		class UClass*                                              AssignedHat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.PickRandomAccessory
	 */
	struct ABP_BS_RM_ComputerRef_C_PickRandomAccessory_Params
	{	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.PickRandomMakeup
	 */
	struct ABP_BS_RM_ComputerRef_C_PickRandomMakeup_Params
	{	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ReceiveBeginPlay
	 */
	struct ABP_BS_RM_ComputerRef_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetBust
	 */
	struct ABP_BS_RM_ComputerRef_C_SetBust_Params
	{
	public:
		class ABP_BS_RM_Bust_C*                                    BustRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ExecuteUbergraph_BP_BS_RM_ComputerRef
	 */
	struct ABP_BS_RM_ComputerRef_C_ExecuteUbergraph_BP_BS_RM_ComputerRef_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TIC1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
