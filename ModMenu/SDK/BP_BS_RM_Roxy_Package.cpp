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
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Stop All VO
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::StopAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Stop All VO");
		
		ABP_BS_RM_Roxy_C_StopAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Can Play VO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::CanPlayVO(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Can Play VO");
		
		ABP_BS_RM_Roxy_C_CanPlayVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ItsNotEasyAchievement
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::ItsNotEasyAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ItsNotEasyAchievement");
		
		ABP_BS_RM_Roxy_C_ItsNotEasyAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GetAllAccessorieSockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::GetAllAccessorieSockets(TArray<class USocketComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GetAllAccessorieSockets");
		
		ABP_BS_RM_Roxy_C_GetAllAccessorieSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RemoveAndDestorySocketActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::RemoveAndDestorySocketActor(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RemoveAndDestorySocketActor");
		
		ABP_BS_RM_Roxy_C_RemoveAndDestorySocketActor_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ClearMakupForNewRound
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::ClearMakupForNewRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ClearMakupForNewRound");
		
		ABP_BS_RM_Roxy_C_ClearMakupForNewRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLeftCheekColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::SetLeftCheekColor(class UMakeupColorData* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLeftCheekColor");
		
		ABP_BS_RM_Roxy_C_SetLeftCheekColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetRightCheekColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::SetRightCheekColor(class UMakeupColorData* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetRightCheekColor");
		
		ABP_BS_RM_Roxy_C_SetRightCheekColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLipColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::SetLipColor(class UMakeupColorData* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLipColor");
		
		ABP_BS_RM_Roxy_C_SetLipColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetRightEyeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::SetRightEyeColor(class UMakeupColorData* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetRightEyeColor");
		
		ABP_BS_RM_Roxy_C_SetRightEyeColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLeftEyeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::SetLeftEyeColor(class UMakeupColorData* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLeftEyeColor");
		
		ABP_BS_RM_Roxy_C_SetLeftEyeColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EarSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::EarSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EarSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_EarSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftEyebrowSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::LeftEyebrowSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftEyebrowSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_LeftEyebrowSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightEyebrowSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::RightEyebrowSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightEyebrowSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_RightEyebrowSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.NoseSocketIsCorrect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::NoseSocketIsCorrect(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.NoseSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_NoseSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.NeckSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::NeckSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.NeckSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_NeckSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::EyeSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_EyeSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ForeheadSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::ForeheadSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ForeheadSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_ForeheadSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HairSocketIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::HairSocketIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HairSocketIsCorrect");
		
		ABP_BS_RM_Roxy_C_HairSocketIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftCheekIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::LeftCheekIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftCheekIsCorrect");
		
		ABP_BS_RM_Roxy_C_LeftCheekIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightCheekIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::RightCheekIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightCheekIsCorrect");
		
		ABP_BS_RM_Roxy_C_RightCheekIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LipIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::LipIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LipIsCorrect");
		
		ABP_BS_RM_Roxy_C_LipIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightEyeIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::RightEyeIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightEyeIsCorrect");
		
		ABP_BS_RM_Roxy_C_RightEyeIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftEyeIsCorrect
	 * 		Flags  -> ()
	 */
	bool ABP_BS_RM_Roxy_C::LeftEyeIsCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftEyeIsCorrect");
		
		ABP_BS_RM_Roxy_C_LeftEyeIsCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_RM_Round                                         Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::Initialize(E_RM_Round Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Initialize");
		
		ABP_BS_RM_Roxy_C_Initialize_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.IsBrushActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     TestObject                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_BS_RM_Roxy_C::IsBrushActor(class UObject* TestObject, class UMakeupColorData** Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.IsBrushActor");
		
		ABP_BS_RM_Roxy_C_IsBrushActor_Params params {};
		params.TestObject = TestObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HandleBushColoringEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        materialParamName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            BrushColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        MaterialColorParamName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMeshComponent*                              MeshTargetr                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMakeupColorData*                            CurrentBrushColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::HandleBushColoringEvent(const class FName& materialParamName, class UMakeupColorData* BrushColor, const class FName& MaterialColorParamName, class UMeshComponent* MeshTargetr, class UMakeupColorData** CurrentBrushColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HandleBushColoringEvent");
		
		ABP_BS_RM_Roxy_C_HandleBushColoringEvent_Params params {};
		params.materialParamName = materialParamName;
		params.BrushColor = BrushColor;
		params.MaterialColorParamName = MaterialColorParamName;
		params.MeshTargetr = MeshTargetr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentBrushColor != nullptr)
			*CurrentBrushColor = params.CurrentBrushColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.IsLookCorrect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LookIsCorrect                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::IsLookCorrect(bool* LookIsCorrect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.IsLookCorrect");
		
		ABP_BS_RM_Roxy_C_IsLookCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LookIsCorrect != nullptr)
			*LookIsCorrect = params.LookIsCorrect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200002
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200002()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200002");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200002_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200003
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200003()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200003");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200003_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200004
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200004()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200004");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200004_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200006
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200006()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200006");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200006_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200008
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200008()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200008");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200008_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200009
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200009()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200009");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200009_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200010
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200010()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200010");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200010_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012b
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200012b()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012b");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200012b_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012c
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200012c()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012c");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200012c_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200014
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200014()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200014");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200014_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200016
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200016()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200016");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200016_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200017
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200017()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200017");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200017_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200018
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200018()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200018");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200018_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200019
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200019()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200019");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200019_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200019a
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200019a()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200019a");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200019a_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.PlayerNotLooking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerNotLooking                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::PlayerNotLooking(bool PlayerNotLooking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.PlayerNotLooking");
		
		ABP_BS_RM_Roxy_C_PlayerNotLooking_Params params {};
		params.PlayerNotLooking = PlayerNotLooking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.AddEyeDart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     EyeDartLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::AddEyeDart(const struct FVector& EyeDartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.AddEyeDart");
		
		ABP_BS_RM_Roxy_C_AddEyeDart_Params params {};
		params.EyeDartLocation = EyeDartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.TiltHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TiltHead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::TiltHead(bool TiltHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.TiltHead");
		
		ABP_BS_RM_Roxy_C_TiltHead_Params params {};
		params.TiltHead = TiltHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.AllEyeAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::AllEyeAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.AllEyeAim");
		
		ABP_BS_RM_Roxy_C_AllEyeAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LidAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::LidAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LidAim");
		
		ABP_BS_RM_Roxy_C_LidAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Blinking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::Blinking(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Blinking");
		
		ABP_BS_RM_Roxy_C_Blinking_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeDarts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EyeDart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::EyeDarts(bool EyeDart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeDarts");
		
		ABP_BS_RM_Roxy_C_EyeDarts_Params params {};
		params.EyeDart = EyeDart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.UpdateRageValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RageLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::UpdateRageValue(float Rage, int32_t RageLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.UpdateRageValue");
		
		ABP_BS_RM_Roxy_C_UpdateRageValue_Params params {};
		params.Rage = Rage;
		params.RageLevel = RageLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.StartTantrum
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::StartTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.StartTantrum");
		
		ABP_BS_RM_Roxy_C_StartTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.StopTantrum
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::StopTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.StopTantrum");
		
		ABP_BS_RM_Roxy_C_StopTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EnableNotLookingADD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::EnableNotLookingADD(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EnableNotLookingADD");
		
		ABP_BS_RM_Roxy_C_EnableNotLookingADD_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HeadAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::HeadAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HeadAim");
		
		ABP_BS_RM_Roxy_C_HeadAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BlinkOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::BlinkOnce(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BlinkOnce");
		
		ABP_BS_RM_Roxy_C_BlinkOnce_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::EyeAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeAim");
		
		ABP_BS_RM_Roxy_C_EyeAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingSocketed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingSocketed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingSocketed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingSocketed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVisualSourceComponent*                      VisualSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USightComponent*                             SightSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature(class UVisualSourceComponent* VisualSource, class USightComponent* SightSource, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature_Params params {};
		params.VisualSource = VisualSource;
		params.SightSource = SightSource;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ClearRoxyFaceBetweenRounds
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::ClearRoxyFaceBetweenRounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ClearRoxyFaceBetweenRounds");
		
		ABP_BS_RM_Roxy_C_ClearRoxyFaceBetweenRounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ReceiveBeginPlay");
		
		ABP_BS_RM_Roxy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingRemoved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESocketActorRemoveReason                           RemoveReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingRemoved = ActorBeingRemoved;
		params.RemoveReason = RemoveReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingRemoved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESocketActorRemoveReason                           RemoveReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingRemoved = ActorBeingRemoved;
		params.RemoveReason = RemoveReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingRemoved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESocketActorRemoveReason                           RemoveReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingRemoved = ActorBeingRemoved;
		params.RemoveReason = RemoveReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingRemoved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESocketActorRemoveReason                           RemoveReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingRemoved = ActorBeingRemoved;
		params.RemoveReason = RemoveReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.CheckHandOverlapping
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::CheckHandOverlapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.CheckHandOverlapping");
		
		ABP_BS_RM_Roxy_C_CheckHandOverlapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingSocketed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ActorBeingRemoved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESocketActorRemoveReason                           RemoveReason                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingRemoved = ActorBeingRemoved;
		params.RemoveReason = RemoveReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopLidAim
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::DEBUG_StopLidAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopLidAim");
		
		ABP_BS_RM_Roxy_C_DEBUG_StopLidAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopAllEyeAim
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::DEBUG_StopAllEyeAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopAllEyeAim");
		
		ABP_BS_RM_Roxy_C_DEBUG_StopAllEyeAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopEyeDarts
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::DEBUG_StopEyeDarts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopEyeDarts");
		
		ABP_BS_RM_Roxy_C_DEBUG_StopEyeDarts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopBlinking
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::DEBUG_StopBlinking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopBlinking");
		
		ABP_BS_RM_Roxy_C_DEBUG_StopBlinking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Update Rage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::UpdateRage(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Update Rage");
		
		ABP_BS_RM_Roxy_C_UpdateRage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200001
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200001()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200001");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200001_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200005
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200005()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200005");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200005_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200007
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200007()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200007");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200007_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200011
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200011()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200011");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200011_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200012()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200012_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200013
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200013()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200013");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200013_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200015
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Roxy_C::GLRoxyHW200015()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200015");
		
		ABP_BS_RM_Roxy_C_GLRoxyHW200015_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EnvelopeValue                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature(class USoundWave* PlayingSoundWave, float EnvelopeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature");
		
		ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.EnvelopeValue = EnvelopeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ExecuteUbergraph_BP_BS_RM_Roxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Roxy_C::ExecuteUbergraph_BP_BS_RM_Roxy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ExecuteUbergraph_BP_BS_RM_Roxy");
		
		ABP_BS_RM_Roxy_C_ExecuteUbergraph_BP_BS_RM_Roxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_RM_Roxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_RM_Roxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_RM_Roxy.BP_BS_RM_Roxy_C");
		return ptr;
	}

}


