/**
 * Name: HW2
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.StopIncorrectPulsing
	 * 		Flags  -> ()
	 */
	void UBI_BS_SM_MonitorUI_C::StopIncorrectPulsing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.StopIncorrectPulsing");
		
		UBI_BS_SM_MonitorUI_C_StopIncorrectPulsing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetMontiorBackground
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BS_MakeoverGameType                              GameType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_MonitorUI_C::SetMontiorBackground(E_BS_MakeoverGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetMontiorBackground");
		
		UBI_BS_SM_MonitorUI_C_SetMontiorBackground_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetScreenGlitchEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_SM_MonitorUI_C::SetScreenGlitchEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetScreenGlitchEnabled");
		
		UBI_BS_SM_MonitorUI_C_SetScreenGlitchEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ValidateAccessories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              Classes                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBI_BS_SM_MonitorUI_C::ValidateAccessories(TArray<class UClass*> Classes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ValidateAccessories");
		
		UBI_BS_SM_MonitorUI_C_ValidateAccessories_Params params {};
		params.Classes = Classes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.CheckAccessories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Hat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      EarL                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Eyes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Neck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Mouth                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      EarR                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCorrect                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_SM_MonitorUI_C::CheckAccessories(class UClass* Hat, class UClass* EarL, class UClass* Eyes, class UClass* Neck, class UClass* Mouth, class UClass* EarR, bool* IsCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.CheckAccessories");
		
		UBI_BS_SM_MonitorUI_C_CheckAccessories_Params params {};
		params.Hat = Hat;
		params.EarL = EarL;
		params.Eyes = Eyes;
		params.Neck = Neck;
		params.Mouth = Mouth;
		params.EarR = EarR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCorrect != nullptr)
			*IsCorrect = params.IsCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.CheckMakeup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            EyeRColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            EyeLColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            CheekRColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            CheekLColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            LipsColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCorrect                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_SM_MonitorUI_C::CheckMakeup(class UMakeupColorData* EyeRColor, class UMakeupColorData* EyeLColor, class UMakeupColorData* CheekRColor, class UMakeupColorData* CheekLColor, class UMakeupColorData* LipsColor, bool* IsCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.CheckMakeup");
		
		UBI_BS_SM_MonitorUI_C_CheckMakeup_Params params {};
		params.EyeRColor = EyeRColor;
		params.EyeLColor = EyeLColor;
		params.CheekRColor = CheekRColor;
		params.CheekLColor = CheekLColor;
		params.LipsColor = LipsColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCorrect != nullptr)
			*IsCorrect = params.IsCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRoxyMakeOverMode
	 * 		Flags  -> ()
	 */
	void UBI_BS_SM_MonitorUI_C::SetRoxyMakeOverMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRoxyMakeOverMode");
		
		UBI_BS_SM_MonitorUI_C_SetRoxyMakeOverMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRageMeterPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_MonitorUI_C::SetRageMeterPercentage(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRageMeterPercentage");
		
		UBI_BS_SM_MonitorUI_C_SetRageMeterPercentage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.PassMakeupToUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            AssignedEyeRColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            AssignedEyeLColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            AssignedCheekRColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            AssignedCheekLColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            AssignedLipsColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_MonitorUI_C::PassMakeupToUI(class UMakeupColorData* AssignedEyeRColor, class UMakeupColorData* AssignedEyeLColor, class UMakeupColorData* AssignedCheekRColor, class UMakeupColorData* AssignedCheekLColor, class UMakeupColorData* AssignedLipsColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.PassMakeupToUI");
		
		UBI_BS_SM_MonitorUI_C_PassMakeupToUI_Params params {};
		params.AssignedEyeRColor = AssignedEyeRColor;
		params.AssignedEyeLColor = AssignedEyeLColor;
		params.AssignedCheekRColor = AssignedCheekRColor;
		params.AssignedCheekLColor = AssignedCheekLColor;
		params.AssignedLipsColor = AssignedLipsColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ResetMonitor
	 * 		Flags  -> ()
	 */
	void UBI_BS_SM_MonitorUI_C::ResetMonitor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ResetMonitor");
		
		UBI_BS_SM_MonitorUI_C_ResetMonitor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.PassAccessoryToUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedHat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AssignedEars                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AssignedEyes                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AssignedNeck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AssignedMouth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_MonitorUI_C::PassAccessoryToUI(class UClass* AssignedHat, class UClass* AssignedEars, class UClass* AssignedEyes, class UClass* AssignedNeck, class UClass* AssignedMouth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.PassAccessoryToUI");
		
		UBI_BS_SM_MonitorUI_C_PassAccessoryToUI_Params params {};
		params.AssignedHat = AssignedHat;
		params.AssignedEars = AssignedEars;
		params.AssignedEyes = AssignedEyes;
		params.AssignedNeck = AssignedNeck;
		params.AssignedMouth = AssignedMouth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRoundResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasCorrect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_SM_MonitorUI_C::SetRoundResult(bool WasCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetRoundResult");
		
		UBI_BS_SM_MonitorUI_C_SetRoundResult_Params params {};
		params.WasCorrect = WasCorrect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ResetTimer
	 * 		Flags  -> ()
	 */
	void UBI_BS_SM_MonitorUI_C::ResetTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.ResetTimer");
		
		UBI_BS_SM_MonitorUI_C_ResetTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.UpdateTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRemaining                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_MonitorUI_C::UpdateTimer(float TimeRemaining, float TotalTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.UpdateTimer");
		
		UBI_BS_SM_MonitorUI_C_UpdateTimer_Params params {};
		params.TimeRemaining = TimeRemaining;
		params.TotalTime = TotalTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetMonitorAnswerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		E_AccessoryCategory                                AccessoryCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_MonitorUI_C::SetMonitorAnswerText(const class FString& DisplayName, E_AccessoryCategory AccessoryCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C.SetMonitorAnswerText");
		
		UBI_BS_SM_MonitorUI_C_SetMonitorAnswerText_Params params {};
		params.DisplayName = DisplayName;
		params.AccessoryCategory = AccessoryCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_BS_SM_MonitorUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_BS_SM_MonitorUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_BS_SM_MonitorUI.BI_BS_SM_MonitorUI_C");
		return ptr;
	}

}


