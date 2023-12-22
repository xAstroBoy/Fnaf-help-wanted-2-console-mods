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
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.StopIncorrectPulsing
	 */
	struct UBI_BS_SM_MonitorUI_C_StopIncorrectPulsing_Params
	{	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetMontiorBackground
	 */
	struct UBI_BS_SM_MonitorUI_C_SetMontiorBackground_Params
	{
	public:
		E_BS_MakeoverGameType                                      GameType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetScreenGlitchEnabled
	 */
	struct UBI_BS_SM_MonitorUI_C_SetScreenGlitchEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ValidateAccessories
	 */
	struct UBI_BS_SM_MonitorUI_C_ValidateAccessories_Params
	{
	public:
		TArray<class UClass*>                                      Classes;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.CheckAccessories
	 */
	struct UBI_BS_SM_MonitorUI_C_CheckAccessories_Params
	{
	public:
		class UClass*                                              Hat;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              EarL;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Eyes;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Neck;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Mouth;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              EarR;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCorrect;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.CheckMakeup
	 */
	struct UBI_BS_SM_MonitorUI_C_CheckMakeup_Params
	{
	public:
		class UMakeupColorData*                                    EyeRColor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    EyeLColor;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    CheekRColor;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    CheekLColor;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    LipsColor;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCorrect;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRoxyMakeOverMode
	 */
	struct UBI_BS_SM_MonitorUI_C_SetRoxyMakeOverMode_Params
	{	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRageMeterPercentage
	 */
	struct UBI_BS_SM_MonitorUI_C_SetRageMeterPercentage_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.PassMakeupToUI
	 */
	struct UBI_BS_SM_MonitorUI_C_PassMakeupToUI_Params
	{
	public:
		class UMakeupColorData*                                    AssignedEyeRColor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    AssignedEyeLColor;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    AssignedCheekRColor;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    AssignedCheekLColor;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    AssignedLipsColor;                                       // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ResetMonitor
	 */
	struct UBI_BS_SM_MonitorUI_C_ResetMonitor_Params
	{	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.PassAccessoryToUI
	 */
	struct UBI_BS_SM_MonitorUI_C_PassAccessoryToUI_Params
	{
	public:
		class UClass*                                              AssignedHat;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AssignedEars;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AssignedEyes;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AssignedNeck;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              AssignedMouth;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRoundResult
	 */
	struct UBI_BS_SM_MonitorUI_C_SetRoundResult_Params
	{
	public:
		bool                                                       WasCorrect;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ResetTimer
	 */
	struct UBI_BS_SM_MonitorUI_C_ResetTimer_Params
	{	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.UpdateTimer
	 */
	struct UBI_BS_SM_MonitorUI_C_UpdateTimer_Params
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetMonitorAnswerText
	 */
	struct UBI_BS_SM_MonitorUI_C_SetMonitorAnswerText_Params
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_AccessoryCategory                                        AccessoryCategory;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
