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
	 * 		Name   -> Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.SetBust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BS_SM_Bust_C*                            Bust                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_SM_AccessoryPiece_C::SetBust(class ABP_BS_SM_Bust_C* Bust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.SetBust");
		
		UBI_BS_SM_AccessoryPiece_C_SetBust_Params params {};
		params.Bust = Bust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.SetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_SM_AccessoryPiece_C::SetIsUsed(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.SetIsUsed");
		
		UBI_BS_SM_AccessoryPiece_C_SetIsUsed_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.GetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_SM_AccessoryPiece_C::GetIsUsed(bool* IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C.GetIsUsed");
		
		UBI_BS_SM_AccessoryPiece_C_GetIsUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsed != nullptr)
			*IsUsed = params.IsUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_BS_SM_AccessoryPiece_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_BS_SM_AccessoryPiece_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_BS_SM_AccessoryPiece.BI_BS_SM_AccessoryPiece_C");
		return ptr;
	}

}


