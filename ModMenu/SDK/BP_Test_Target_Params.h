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
	 * Function BP_Test_Target.BP_Test_Target_C.OnTargetHit
	 */
	struct ABP_Test_Target_C_OnTargetHit_Params
	{
	public:
		struct FTargetHitParams                                    TargetHitParams;                                         // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Test_Target.BP_Test_Target_C.ExecuteUbergraph_BP_Test_Target
	 */
	struct ABP_Test_Target_C_ExecuteUbergraph_BP_Test_Target_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_601I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
