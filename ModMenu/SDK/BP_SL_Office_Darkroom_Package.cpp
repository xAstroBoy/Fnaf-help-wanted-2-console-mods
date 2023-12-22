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
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.GetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         Animatronic                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SL_Office_Darkroom_C::GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.GetAnimatronicType");
		
		ABP_SL_Office_Darkroom_C_GetAnimatronicType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Animatronic != nullptr)
			*Animatronic = params.Animatronic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.IsDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDrainingPower                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SL_Office_Darkroom_C::IsDrainingPower(bool* IsDrainingPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.IsDrainingPower");
		
		ABP_SL_Office_Darkroom_C_IsDrainingPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDrainingPower != nullptr)
			*IsDrainingPower = params.IsDrainingPower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.DetermineAnimatronicTriggeringJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_SL_Office_Darkroom_C::DetermineAnimatronicTriggeringJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.DetermineAnimatronicTriggeringJumpscare");
		
		ABP_SL_Office_Darkroom_C_DetermineAnimatronicTriggeringJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.TriggerJumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         TriggeringAnimatronic                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SL_Office_Darkroom_C::TriggerJumpscare(Enum_RA_SL_AnimatronicType TriggeringAnimatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.TriggerJumpscare");
		
		ABP_SL_Office_Darkroom_C_TriggerJumpscare_Params params {};
		params.TriggeringAnimatronic = TriggeringAnimatronic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.DisableAllVO
	 * 		Flags  -> ()
	 */
	void ABP_SL_Office_Darkroom_C::DisableAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.DisableAllVO");
		
		ABP_SL_Office_Darkroom_C_DisableAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SL_Office_Darkroom_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.ReceiveBeginPlay");
		
		ABP_SL_Office_Darkroom_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.SetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         AnimatronicToSet                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SL_Office_Darkroom_C::SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.SetAnimatronicType");
		
		ABP_SL_Office_Darkroom_C_SetAnimatronicType_Params params {};
		params.AnimatronicToSet = AnimatronicToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.InitiateJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_SL_Office_Darkroom_C::InitiateJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.InitiateJumpscare");
		
		ABP_SL_Office_Darkroom_C_InitiateJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.ExecuteUbergraph_BP_SL_Office_Darkroom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SL_Office_Darkroom_C::ExecuteUbergraph_BP_SL_Office_Darkroom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C.ExecuteUbergraph_BP_SL_Office_Darkroom");
		
		ABP_SL_Office_Darkroom_C_ExecuteUbergraph_BP_SL_Office_Darkroom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SL_Office_Darkroom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SL_Office_Darkroom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C");
		return ptr;
	}

}


