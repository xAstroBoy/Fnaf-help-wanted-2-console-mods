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
	 * 		Name   -> Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.DisableAllVO
	 * 		Flags  -> ()
	 */
	void UBI_SL_AnimatronicType_C::DisableAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.DisableAllVO");
		
		UBI_SL_AnimatronicType_C_DisableAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.SetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         AnimatronicToSet                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_AnimatronicType_C::SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.SetAnimatronicType");
		
		UBI_SL_AnimatronicType_C_SetAnimatronicType_Params params {};
		params.AnimatronicToSet = AnimatronicToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.IsDrainingPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDrainingPower                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_AnimatronicType_C::IsDrainingPower(bool* IsDrainingPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.IsDrainingPower");
		
		UBI_SL_AnimatronicType_C_IsDrainingPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDrainingPower != nullptr)
			*IsDrainingPower = params.IsDrainingPower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.GetAnimatronicType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AnimatronicType                         Animatronic                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_AnimatronicType_C::GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_AnimatronicType.BI_SL_AnimatronicType_C.GetAnimatronicType");
		
		UBI_SL_AnimatronicType_C_GetAnimatronicType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Animatronic != nullptr)
			*Animatronic = params.Animatronic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_AnimatronicType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_AnimatronicType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_AnimatronicType.BI_SL_AnimatronicType_C");
		return ptr;
	}

}


