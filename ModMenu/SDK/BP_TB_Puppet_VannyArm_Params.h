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
	 * Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.SetupVannyArm
	 */
	struct ABP_TB_Puppet_VannyArm_C_SetupVannyArm_Params
	{
	public:
		class AActor*                                              GameManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.StartVannyArm
	 */
	struct ABP_TB_Puppet_VannyArm_C_StartVannyArm_Params
	{	};

	/**
	 * Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.OnCollected
	 */
	struct ABP_TB_Puppet_VannyArm_C_OnCollected_Params
	{	};

	/**
	 * Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.CollectDoll
	 */
	struct ABP_TB_Puppet_VannyArm_C_CollectDoll_Params
	{	};

	/**
	 * Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.DebugVannyArm
	 */
	struct ABP_TB_Puppet_VannyArm_C_DebugVannyArm_Params
	{	};

	/**
	 * Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.ExecuteUbergraph_BP_TB_Puppet_VannyArm
	 */
	struct ABP_TB_Puppet_VannyArm_C_ExecuteUbergraph_BP_TB_Puppet_VannyArm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RPC2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
