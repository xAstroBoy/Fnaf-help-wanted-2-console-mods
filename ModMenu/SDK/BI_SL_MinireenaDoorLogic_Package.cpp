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
	 * 		Name   -> Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.ResetMinireena
	 * 		Flags  -> ()
	 */
	void UBI_SL_MinireenaDoorLogic_C::ResetMinireena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.ResetMinireena");
		
		UBI_SL_MinireenaDoorLogic_C_ResetMinireena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.SetDoorPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                WhatSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WhatOrderOnDoor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SL_MinireenaDoorLogic_C::SetDoorPose(Enum_RA_SL_RoomType WhatSide, int32_t WhatOrderOnDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.SetDoorPose");
		
		UBI_SL_MinireenaDoorLogic_C_SetDoorPose_Params params {};
		params.WhatSide = WhatSide;
		params.WhatOrderOnDoor = WhatOrderOnDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.MoveToDoor
	 * 		Flags  -> ()
	 */
	void UBI_SL_MinireenaDoorLogic_C::MoveToDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.MoveToDoor");
		
		UBI_SL_MinireenaDoorLogic_C_MoveToDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.GetIsDeployed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDeployed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_MinireenaDoorLogic_C::GetIsDeployed(bool* IsDeployed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.GetIsDeployed");
		
		UBI_SL_MinireenaDoorLogic_C_GetIsDeployed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDeployed != nullptr)
			*IsDeployed = params.IsDeployed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.SetIsDeployed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetIsDeployed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_SL_MinireenaDoorLogic_C::SetIsDeployed(bool SetIsDeployed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C.SetIsDeployed");
		
		UBI_SL_MinireenaDoorLogic_C_SetIsDeployed_Params params {};
		params.SetIsDeployed = SetIsDeployed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_MinireenaDoorLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_MinireenaDoorLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_MinireenaDoorLogic.BI_SL_MinireenaDoorLogic_C");
		return ptr;
	}

}


