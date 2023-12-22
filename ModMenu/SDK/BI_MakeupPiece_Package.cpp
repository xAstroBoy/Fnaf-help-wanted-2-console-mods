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
	 * 		Name   -> Function BI_MakeupPiece.BI_MakeupPiece_C.GetAssignedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            AssignedColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_MakeupPiece_C::GetAssignedColor(class UMakeupColorData** AssignedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_MakeupPiece.BI_MakeupPiece_C.GetAssignedColor");
		
		UBI_MakeupPiece_C_GetAssignedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssignedColor != nullptr)
			*AssignedColor = params.AssignedColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_MakeupPiece.BI_MakeupPiece_C.SetAssignedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            AssignedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_MakeupPiece_C::SetAssignedColor(class UMakeupColorData* AssignedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_MakeupPiece.BI_MakeupPiece_C.SetAssignedColor");
		
		UBI_MakeupPiece_C_SetAssignedColor_Params params {};
		params.AssignedColor = AssignedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_MakeupPiece_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_MakeupPiece_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_MakeupPiece.BI_MakeupPiece_C");
		return ptr;
	}

}


