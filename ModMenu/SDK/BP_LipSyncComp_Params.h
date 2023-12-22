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
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.SpecifyTarget
	 */
	struct UBP_LipSyncComp_C_SpecifyTarget_Params
	{
	public:
		class UObject*                                             NewObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.UpdateFromEnvelopeValue
	 */
	struct UBP_LipSyncComp_C_UpdateFromEnvelopeValue_Params
	{
	public:
		class USoundWave*                                          SoundWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Envelope;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.AddTarget
	 */
	struct UBP_LipSyncComp_C_AddTarget_Params
	{
	public:
		class UObject*                                             NewItem;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HX38[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.Setup Targets
	 */
	struct UBP_LipSyncComp_C_SetupTargets_Params
	{	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.ReceiveBeginPlay
	 */
	struct UBP_LipSyncComp_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.ReceiveTick
	 */
	struct UBP_LipSyncComp_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.StopJawFlap
	 */
	struct UBP_LipSyncComp_C_StopJawFlap_Params
	{	};

	/**
	 * Function BP_LipSyncComp.BP_LipSyncComp_C.ExecuteUbergraph_BP_LipSyncComp
	 */
	struct UBP_LipSyncComp_C_ExecuteUbergraph_BP_LipSyncComp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
