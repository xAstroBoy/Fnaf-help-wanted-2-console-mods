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
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.UnpressCameraButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 CurrentButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::UnpressCameraButtons(class AButtonBase* CurrentButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.UnpressCameraButtons");
		
		ABP_RA_SL_ButtonConsole_C_UnpressCameraButtons_Params params {};
		params.CurrentButton = CurrentButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.BindButtonEvents
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_ButtonConsole_C::BindButtonEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.BindButtonEvents");
		
		ABP_RA_SL_ButtonConsole_C_BindButtonEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_LeftMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_LeftMain(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_LeftMain");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_LeftMain_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_Vent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_Vent(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_Vent");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_Vent_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_RightMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_RightMain(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_RightMain");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_RightMain_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_LeftHalway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_LeftHalway(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_LeftHalway");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_LeftHalway_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_RightHallway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_RightHallway(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_RightHallway");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_RightHallway_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_LeftCloset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_LeftCloset(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_LeftCloset");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_LeftCloset_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_RightCloset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ButtonPress_RightCloset(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ButtonPress_RightCloset");
		
		ABP_RA_SL_ButtonConsole_C_ButtonPress_RightCloset_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_ButtonConsole_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ReceiveBeginPlay");
		
		ABP_RA_SL_ButtonConsole_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ExecuteUbergraph_BP_RA_SL_ButtonConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_ButtonConsole_C::ExecuteUbergraph_BP_RA_SL_ButtonConsole(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C.ExecuteUbergraph_BP_RA_SL_ButtonConsole");
		
		ABP_RA_SL_ButtonConsole_C_ExecuteUbergraph_BP_RA_SL_ButtonConsole_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_ButtonConsole_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_ButtonConsole_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C");
		return ptr;
	}

}


