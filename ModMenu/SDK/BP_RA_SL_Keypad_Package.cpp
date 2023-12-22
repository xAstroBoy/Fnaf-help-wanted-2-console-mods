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
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.SetButtonActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonsEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Keypad_C::SetButtonActivation(bool ButtonsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.SetButtonActivation");
		
		ABP_RA_SL_Keypad_C_SetButtonActivation_Params params {};
		params.ButtonsEnabled = ButtonsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ChangeButtonColors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterial*                                   Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::ChangeButtonColors(class UMaterial* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ChangeButtonColors");
		
		ABP_RA_SL_Keypad_C_ChangeButtonColors_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.FlickerButtonsOnSubmission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValidSubmission                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Keypad_C::FlickerButtonsOnSubmission(bool IsValidSubmission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.FlickerButtonsOnSubmission");
		
		ABP_RA_SL_Keypad_C_FlickerButtonsOnSubmission_Params params {};
		params.IsValidSubmission = IsValidSubmission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnNumberEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnNumberEntered(int32_t NumberValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnNumberEntered");
		
		ABP_RA_SL_Keypad_C_OnNumberEntered_Params params {};
		params.NumberValue = NumberValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.CheckSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValidSequence                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_Keypad_C::CheckSequence(bool* IsValidSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.CheckSequence");
		
		ABP_RA_SL_Keypad_C_CheckSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValidSequence != nullptr)
			*IsValidSequence = params.IsValidSequence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Keypad_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ReceiveBeginPlay");
		
		ABP_RA_SL_Keypad_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number01(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number01");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number01_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number02(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number02");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number02_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number03
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number03(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number03");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number03_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number04(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number04");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number04_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number05(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number05");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number05_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number06(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number06");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number06_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number07
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number07(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number07");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number07_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number08
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number08(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number08");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number08_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number09
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number09(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number09");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number09_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_Number00(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number00");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_Number00_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_StarSymbol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_StarSymbol(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_StarSymbol");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_StarSymbol_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_PoundSymbol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::OnButtonpress_PoundSymbol(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_PoundSymbol");
		
		ABP_RA_SL_Keypad_C_OnButtonpress_PoundSymbol_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ResetColorMaterial
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Keypad_C::ResetColorMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ResetColorMaterial");
		
		ABP_RA_SL_Keypad_C_ResetColorMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.DEBUG_TestKeyPadCorrect
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Keypad_C::DEBUG_TestKeyPadCorrect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.DEBUG_TestKeyPadCorrect");
		
		ABP_RA_SL_Keypad_C_DEBUG_TestKeyPadCorrect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.DEBUG_TestButton
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Keypad_C::DEBUG_TestButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.DEBUG_TestButton");
		
		ABP_RA_SL_Keypad_C_DEBUG_TestButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.CoolDownTime
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_Keypad_C::CoolDownTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.CoolDownTime");
		
		ABP_RA_SL_Keypad_C_CoolDownTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ExecuteUbergraph_BP_RA_SL_Keypad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_Keypad_C::ExecuteUbergraph_BP_RA_SL_Keypad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ExecuteUbergraph_BP_RA_SL_Keypad");
		
		ABP_RA_SL_Keypad_C_ExecuteUbergraph_BP_RA_SL_Keypad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_Keypad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_Keypad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_Keypad.BP_RA_SL_Keypad_C");
		return ptr;
	}

}


