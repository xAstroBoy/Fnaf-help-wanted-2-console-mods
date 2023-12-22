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
	 * 		Name   -> Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.GetAssignedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            AssignedColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MakeupRefPiece_C::GetAssignedColor(class UMakeupColorData** AssignedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.GetAssignedColor");
		
		ABP_MakeupRefPiece_C_GetAssignedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssignedColor != nullptr)
			*AssignedColor = params.AssignedColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_MakeupRefPiece_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.UserConstructionScript");
		
		ABP_MakeupRefPiece_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.SetAssignedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            AssignedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MakeupRefPiece_C::SetAssignedColor(class UMakeupColorData* AssignedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.SetAssignedColor");
		
		ABP_MakeupRefPiece_C_SetAssignedColor_Params params {};
		params.AssignedColor = AssignedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.ExecuteUbergraph_BP_MakeupRefPiece
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MakeupRefPiece_C::ExecuteUbergraph_BP_MakeupRefPiece(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MakeupRefPiece.BP_MakeupRefPiece_C.ExecuteUbergraph_BP_MakeupRefPiece");
		
		ABP_MakeupRefPiece_C_ExecuteUbergraph_BP_MakeupRefPiece_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MakeupRefPiece_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MakeupRefPiece_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MakeupRefPiece.BP_MakeupRefPiece_C");
		return ptr;
	}

}


