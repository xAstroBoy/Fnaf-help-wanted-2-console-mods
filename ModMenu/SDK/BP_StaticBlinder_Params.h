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
	 * Function BP_StaticBlinder.BP_StaticBlinder_C.ReceiveBeginPlay
	 */
	struct UBP_StaticBlinder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_StaticBlinder.BP_StaticBlinder_C.On Show Blinder
	 */
	struct UBP_StaticBlinder_C_OnShowBlinder_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StaticBlinder.BP_StaticBlinder_C.Setup Widget
	 */
	struct UBP_StaticBlinder_C_SetupWidget_Params
	{	};

	/**
	 * Function BP_StaticBlinder.BP_StaticBlinder_C.ExecuteUbergraph_BP_StaticBlinder
	 */
	struct UBP_StaticBlinder_C_ExecuteUbergraph_BP_StaticBlinder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5GJH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
