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
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.UpdateHeadShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ShakeAlpha                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_PlushBabyLogic_C::UpdateHeadShake(float ShakeAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.UpdateHeadShake");
		
		UBI_SL_PlushBabyLogic_C_UpdateHeadShake_Params params {};
		params.ShakeAlpha = ShakeAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.AssignPoseForFlashlightTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           AnimationPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_PlushBabyLogic_C::AssignPoseForFlashlightTag(Enum_RA_SL_PlushBabyPose AnimationPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.AssignPoseForFlashlightTag");
		
		UBI_SL_PlushBabyLogic_C_AssignPoseForFlashlightTag_Params params {};
		params.AnimationPose = AnimationPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetToRun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AllowRun                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_PlushBabyLogic_C::SetToRun(bool AllowRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetToRun");
		
		UBI_SL_PlushBabyLogic_C_SetToRun_Params params {};
		params.AllowRun = AllowRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetAssignedRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_PlushBabyLogic_C::SetAssignedRole(Enum_RA_SL_CircusGameMode Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetAssignedRole");
		
		UBI_SL_PlushBabyLogic_C_SetAssignedRole_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.AssignCircusBabyReference
	 * 		Flags  -> ()
	 */
	void UBI_SL_PlushBabyLogic_C::AssignCircusBabyReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.AssignCircusBabyReference");
		
		UBI_SL_PlushBabyLogic_C_AssignCircusBabyReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.DisallowSpecificMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               DisallowedSide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_PlushBabyLogic_C::DisallowSpecificMovement(Enum_RA_SL_AreaZones DisallowedSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.DisallowSpecificMovement");
		
		UBI_SL_PlushBabyLogic_C_DisallowSpecificMovement_Params params {};
		params.DisallowedSide = DisallowedSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.GetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_PlushBabyLogic_C::GetActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.GetActive");
		
		UBI_SL_PlushBabyLogic_C_GetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_PlushBabyLogic_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.SetActive");
		
		UBI_SL_PlushBabyLogic_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.DisableRole
	 * 		Flags  -> ()
	 */
	void UBI_SL_PlushBabyLogic_C::DisableRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.DisableRole");
		
		UBI_SL_PlushBabyLogic_C_DisableRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.ActivateRole
	 * 		Flags  -> ()
	 */
	void UBI_SL_PlushBabyLogic_C::ActivateRole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.ActivateRole");
		
		UBI_SL_PlushBabyLogic_C_ActivateRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.GetAssignedRole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_CircusGameMode                          AssignedRole                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_PlushBabyLogic_C::GetAssignedRole(Enum_RA_SL_CircusGameMode* AssignedRole)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C.GetAssignedRole");
		
		UBI_SL_PlushBabyLogic_C_GetAssignedRole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssignedRole != nullptr)
			*AssignedRole = params.AssignedRole;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_PlushBabyLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_PlushBabyLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_PlushBabyLogic.BI_SL_PlushBabyLogic_C");
		return ptr;
	}

}


