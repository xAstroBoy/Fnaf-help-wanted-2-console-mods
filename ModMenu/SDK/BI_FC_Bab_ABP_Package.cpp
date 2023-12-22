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
	 * 		Name   -> Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.UpdateHelpyHits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_FC_Bab_ABP_C::UpdateHelpyHits(int32_t Hits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.UpdateHelpyHits");
		
		UBI_FC_Bab_ABP_C_UpdateHelpyHits_Params params {};
		params.Hits = Hits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.GetAnimPoseEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_FC_BonkABon_AnimMode                          AnimEnum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_FC_Bab_ABP_C::GetAnimPoseEnum(Enum_FC_BonkABon_AnimMode* AnimEnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.GetAnimPoseEnum");
		
		UBI_FC_Bab_ABP_C_GetAnimPoseEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimEnum != nullptr)
			*AnimEnum = params.AnimEnum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.MoveFinished
	 * 		Flags  -> ()
	 */
	void UBI_FC_Bab_ABP_C::MoveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.MoveFinished");
		
		UBI_FC_Bab_ABP_C_MoveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.SetAnimPoseEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_FC_BonkABon_AnimMode                          AnimPose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_FC_Bab_ABP_C::SetAnimPoseEnum(Enum_FC_BonkABon_AnimMode AnimPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FC_Bab_ABP.BI_FC_Bab_ABP_C.SetAnimPoseEnum");
		
		UBI_FC_Bab_ABP_C_SetAnimPoseEnum_Params params {};
		params.AnimPose = AnimPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_FC_Bab_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_FC_Bab_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_FC_Bab_ABP.BI_FC_Bab_ABP_C");
		return ptr;
	}

}


