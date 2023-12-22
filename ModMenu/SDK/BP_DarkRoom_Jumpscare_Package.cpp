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
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.IsJumpscareFinished
	 * 		Flags  -> ()
	 */
	bool ABP_DarkRoom_Jumpscare_C::IsJumpscareFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.IsJumpscareFinished");
		
		ABP_DarkRoom_Jumpscare_C_IsJumpscareFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.jumpscare
	 * 		Flags  -> ()
	 */
	void ABP_DarkRoom_Jumpscare_C::jumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.jumpscare");
		
		ABP_DarkRoom_Jumpscare_C_jumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.SetJumpscareFinished
	 * 		Flags  -> ()
	 */
	void ABP_DarkRoom_Jumpscare_C::SetJumpscareFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.SetJumpscareFinished");
		
		ABP_DarkRoom_Jumpscare_C_SetJumpscareFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DarkRoom_Jumpscare_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.ReceiveBeginPlay");
		
		ABP_DarkRoom_Jumpscare_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.PlayJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_DarkRoom_Jumpscare_C::PlayJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.PlayJumpscare");
		
		ABP_DarkRoom_Jumpscare_C_PlayJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.InitiateJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_DarkRoom_Jumpscare_C::InitiateJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.InitiateJumpscare");
		
		ABP_DarkRoom_Jumpscare_C_InitiateJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.ExecuteUbergraph_BP_DarkRoom_Jumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DarkRoom_Jumpscare_C::ExecuteUbergraph_BP_DarkRoom_Jumpscare(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C.ExecuteUbergraph_BP_DarkRoom_Jumpscare");
		
		ABP_DarkRoom_Jumpscare_C_ExecuteUbergraph_BP_DarkRoom_Jumpscare_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DarkRoom_Jumpscare_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DarkRoom_Jumpscare_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DarkRoom_Jumpscare.BP_DarkRoom_Jumpscare_C");
		return ptr;
	}

}


