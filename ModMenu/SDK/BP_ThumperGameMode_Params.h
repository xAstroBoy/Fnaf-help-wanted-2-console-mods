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
	 * Function BP_ThumperGameMode.BP_ThumperGameMode_C.SetMixerVolume
	 */
	struct ABP_ThumperGameMode_C_SetMixerVolume_Params
	{
	public:
		class USoundClass*                                         Mixer;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Volume;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ThumperGameMode.BP_ThumperGameMode_C.ApplyAudioSettings
	 */
	struct ABP_ThumperGameMode_C_ApplyAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              Setting;                                                 // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_ThumperGameMode.BP_ThumperGameMode_C.ReceiveBeginPlay
	 */
	struct ABP_ThumperGameMode_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ThumperGameMode.BP_ThumperGameMode_C.OnApplyAudioSettings
	 */
	struct ABP_ThumperGameMode_C_OnApplyAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              Settings;                                                // 0x0000(0x0014)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_ThumperGameMode.BP_ThumperGameMode_C.ExecuteUbergraph_BP_ThumperGameMode
	 */
	struct ABP_ThumperGameMode_C_ExecuteUbergraph_BP_ThumperGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A26H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
