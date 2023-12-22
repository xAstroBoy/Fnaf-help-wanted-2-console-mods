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
	 * Function BP_RA_ConsoleButton.BP_RA_ConsoleButton_C.ReceiveBeginPlay
	 */
	struct ABP_RA_ConsoleButton_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_ConsoleButton.BP_RA_ConsoleButton_C.Event_ButtonPressed
	 */
	struct ABP_RA_ConsoleButton_C_Event_ButtonPressed_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_ConsoleButton.BP_RA_ConsoleButton_C.Event_ButtonReleased
	 */
	struct ABP_RA_ConsoleButton_C_Event_ButtonReleased_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_ConsoleButton.BP_RA_ConsoleButton_C.ExecuteUbergraph_BP_RA_ConsoleButton
	 */
	struct ABP_RA_ConsoleButton_C_ExecuteUbergraph_BP_RA_ConsoleButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W0SS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
