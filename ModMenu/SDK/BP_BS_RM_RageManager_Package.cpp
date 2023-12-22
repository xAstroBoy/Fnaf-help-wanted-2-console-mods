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
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.ConcertPercentageToIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::ConcertPercentageToIndex(float Value, int32_t* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.ConcertPercentageToIndex");
		
		ABP_BS_RM_RageManager_C_ConcertPercentageToIndex_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.GetIsAtMaxRage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MaxRage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_RageManager_C::GetIsAtMaxRage(bool* MaxRage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.GetIsAtMaxRage");
		
		ABP_BS_RM_RageManager_C_GetIsAtMaxRage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxRage != nullptr)
			*MaxRage = params.MaxRage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageTantrum
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::IncreaseRageTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageTantrum");
		
		ABP_BS_RM_RageManager_C_IncreaseRageTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWrongLook
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::IncreaseRageWrongLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWrongLook");
		
		ABP_BS_RM_RageManager_C_IncreaseRageWrongLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.DecreaseRageWalkieTalkie
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::DecreaseRageWalkieTalkie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.DecreaseRageWalkieTalkie");
		
		ABP_BS_RM_RageManager_C_DecreaseRageWalkieTalkie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWalkieTalkie
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::IncreaseRageWalkieTalkie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWalkieTalkie");
		
		ABP_BS_RM_RageManager_C_IncreaseRageWalkieTalkie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.SetRageValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::SetRageValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.SetRageValue");
		
		ABP_BS_RM_RageManager_C_SetRageValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Round                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::Initialize(int32_t Round)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.Initialize");
		
		ABP_BS_RM_RageManager_C_Initialize_Params params {};
		params.Round = Round;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.UpdateRageValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::UpdateRageValue(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.UpdateRageValue");
		
		ABP_BS_RM_RageManager_C_UpdateRageValue_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.GetRagePercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::GetRagePercentage(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.GetRagePercentage");
		
		ABP_BS_RM_RageManager_C_GetRagePercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.DecreaseRageLookingAt
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::DecreaseRageLookingAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.DecreaseRageLookingAt");
		
		ABP_BS_RM_RageManager_C_DecreaseRageLookingAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWrongItem
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::IncreaseRageWrongItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageWrongItem");
		
		ABP_BS_RM_RageManager_C_IncreaseRageWrongItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageLookingAway
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_RageManager_C::IncreaseRageLookingAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.IncreaseRageLookingAway");
		
		ABP_BS_RM_RageManager_C_IncreaseRageLookingAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.RageSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Up                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_RM_RageManager_C::RageSound(bool Up)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.RageSound");
		
		ABP_BS_RM_RageManager_C_RageSound_Params params {};
		params.Up = Up;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.ExecuteUbergraph_BP_BS_RM_RageManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::ExecuteUbergraph_BP_BS_RM_RageManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.ExecuteUbergraph_BP_BS_RM_RageManager");
		
		ABP_BS_RM_RageManager_C_ExecuteUbergraph_BP_BS_RM_RageManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageLevelChanged __DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::OnRageLevelChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageLevelChanged __DelegateSignature");
		
		ABP_BS_RM_RageManager_C_OnRageLevelChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageValueSet__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::OnRageValueSet__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageValueSet__DelegateSignature");
		
		ABP_BS_RM_RageManager_C_OnRageValueSet__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_RageManager_C::OnRageValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_RageManager.BP_BS_RM_RageManager_C.OnRageValueChanged__DelegateSignature");
		
		ABP_BS_RM_RageManager_C_OnRageValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_RM_RageManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_RM_RageManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_RM_RageManager.BP_BS_RM_RageManager_C");
		return ptr;
	}

}


