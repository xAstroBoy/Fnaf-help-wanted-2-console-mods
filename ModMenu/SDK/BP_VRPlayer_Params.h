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
	 * Function BP_VRPlayer.BP_VRPlayer_C.ResetHandState
	 */
	struct ABP_VRPlayer_C_ResetHandState_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X6MG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.GetCameraBrightnessSetting
	 */
	struct ABP_VRPlayer_C_GetCameraBrightnessSetting_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LT2W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.GetInvertHandControls
	 */
	struct ABP_VRPlayer_C_GetInvertHandControls_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7D2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.GetPlayerInputRotationScale
	 */
	struct ABP_VRPlayer_C_GetPlayerInputRotationScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1ZI7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.GetPlayerInputRotationType
	 */
	struct ABP_VRPlayer_C_GetPlayerInputRotationType_Params
	{
	public:
		EPlayerRotationInputType                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VF67[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesSize
	 */
	struct ABP_VRPlayer_C_SetVRSubtitlesSize_Params
	{
	public:
		ESubtitlesSize                                             Size;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1S25[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitles
	 */
	struct ABP_VRPlayer_C_SetupSubtitles_Params
	{	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesDepth
	 */
	struct ABP_VRPlayer_C_SetVRSubtitlesDepth_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.SetVRSubtitlesHeight
	 */
	struct ABP_VRPlayer_C_SetVRSubtitlesHeight_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitlesStereoLayer
	 */
	struct ABP_VRPlayer_C_SetupSubtitlesStereoLayer_Params
	{
	public:
		bool                                                       SetupComplete;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XXOL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.GetHandActor
	 */
	struct ABP_VRPlayer_C_GetHandActor_Params
	{
	public:
		ESWGVRBaseHand                                             Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ILDZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ChildActor;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.OnShowSubtitles
	 */
	struct ABP_VRPlayer_C_OnShowSubtitles_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.UpdateSubtitles
	 */
	struct ABP_VRPlayer_C_UpdateSubtitles_Params
	{
	public:
		class FText                                                Speaker;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                InText;                                                  // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.ReceiveTick
	 */
	struct ABP_VRPlayer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.ReceiveBeginPlay
	 */
	struct ABP_VRPlayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.OnShowFPSWatermark
	 */
	struct ABP_VRPlayer_C_OnShowFPSWatermark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.OnPlayerSettingsLoaded
	 */
	struct ABP_VRPlayer_C_OnPlayerSettingsLoaded_Params
	{	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.OnShowMemoryWatermark
	 */
	struct ABP_VRPlayer_C_OnShowMemoryWatermark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature
	 */
	struct ABP_VRPlayer_C_BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature_Params
	{
	public:
		class UEaterComponent*                                     EaterComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Edible;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.OnPlayerSettingsSaved
	 */
	struct ABP_VRPlayer_C_OnPlayerSettingsSaved_Params
	{	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.ReceivePossessed
	 */
	struct ABP_VRPlayer_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.SetupSubtitleStyle
	 */
	struct ABP_VRPlayer_C_SetupSubtitleStyle_Params
	{
	public:
		ESubtitlesSize                                             Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature
	 */
	struct ABP_VRPlayer_C_BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.ReceiveUnpossessed
	 */
	struct ABP_VRPlayer_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_VRPlayer.BP_VRPlayer_C.ExecuteUbergraph_BP_VRPlayer
	 */
	struct ABP_VRPlayer_C_ExecuteUbergraph_BP_VRPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
