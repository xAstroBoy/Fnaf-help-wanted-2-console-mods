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
	 * 		Name   -> Function BI_MakeupBrush.BI_MakeupBrush_C.HapticsEffect
	 * 		Flags  -> ()
	 */
	void UBI_MakeupBrush_C::HapticsEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_MakeupBrush.BI_MakeupBrush_C.HapticsEffect");
		
		UBI_MakeupBrush_C_HapticsEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_MakeupBrush.BI_MakeupBrush_C.PowderPoof
	 * 		Flags  -> ()
	 */
	void UBI_MakeupBrush_C::PowderPoof()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_MakeupBrush.BI_MakeupBrush_C.PowderPoof");
		
		UBI_MakeupBrush_C_PowderPoof_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_MakeupBrush.BI_MakeupBrush_C.GetBrushColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            CurrentBrushColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_MakeupBrush_C::GetBrushColor(class UMakeupColorData** CurrentBrushColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_MakeupBrush.BI_MakeupBrush_C.GetBrushColor");
		
		UBI_MakeupBrush_C_GetBrushColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentBrushColor != nullptr)
			*CurrentBrushColor = params.CurrentBrushColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_MakeupBrush.BI_MakeupBrush_C.SetBrushColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_MakeupBrush_C::SetBrushColor(class UMakeupColorData* NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_MakeupBrush.BI_MakeupBrush_C.SetBrushColor");
		
		UBI_MakeupBrush_C_SetBrushColor_Params params {};
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_MakeupBrush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_MakeupBrush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_MakeupBrush.BI_MakeupBrush_C");
		return ptr;
	}

}


