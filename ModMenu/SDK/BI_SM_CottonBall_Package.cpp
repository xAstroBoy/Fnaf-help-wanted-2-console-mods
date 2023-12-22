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
	 * 		Name   -> Function BI_SM_CottonBall.BI_SM_CottonBall_C.GetCottonBallColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            CurrentCottonBallColor                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SM_CottonBall_C::GetCottonBallColor(class UMakeupColorData** CurrentCottonBallColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SM_CottonBall.BI_SM_CottonBall_C.GetCottonBallColor");
		
		UBI_SM_CottonBall_C_GetCottonBallColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCottonBallColor != nullptr)
			*CurrentCottonBallColor = params.CurrentCottonBallColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SM_CottonBall.BI_SM_CottonBall_C.SetCottonBallColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMakeupColorData*                            NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SM_CottonBall_C::SetCottonBallColor(class UMakeupColorData* NewColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SM_CottonBall.BI_SM_CottonBall_C.SetCottonBallColor");
		
		UBI_SM_CottonBall_C_SetCottonBallColor_Params params {};
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SM_CottonBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SM_CottonBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SM_CottonBall.BI_SM_CottonBall_C");
		return ptr;
	}

}


