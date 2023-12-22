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
	 * 		Name   -> Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.PowerOutage
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_ButtonLogic_C::PowerOutage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.PowerOutage");
		
		UBI_RA_SL_ButtonLogic_C_PowerOutage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.RemoveBlockingCharacter
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_ButtonLogic_C::RemoveBlockingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.RemoveBlockingCharacter");
		
		UBI_RA_SL_ButtonLogic_C_RemoveBlockingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.AssignBlockingCharacter
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_ButtonLogic_C::AssignBlockingCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.AssignBlockingCharacter");
		
		UBI_RA_SL_ButtonLogic_C_AssignBlockingCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.CheckIfButtonIsBlocked
	 * 		Flags  -> ()
	 */
	void UBI_RA_SL_ButtonLogic_C::CheckIfButtonIsBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.CheckIfButtonIsBlocked");
		
		UBI_RA_SL_ButtonLogic_C_CheckIfButtonIsBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.EnableDoorButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_RA_SL_ButtonLogic_C::EnableDoorButton(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.EnableDoorButton");
		
		UBI_RA_SL_ButtonLogic_C_EnableDoorButton_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.SetMaterialOnButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterial*                                   Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_RA_SL_ButtonLogic_C::SetMaterialOnButton(class UMaterial* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C.SetMaterialOnButton");
		
		UBI_RA_SL_ButtonLogic_C_SetMaterialOnButton_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_RA_SL_ButtonLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_RA_SL_ButtonLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_RA_SL_ButtonLogic.BI_RA_SL_ButtonLogic_C");
		return ptr;
	}

}


