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
	 * 		Name   -> Function BP_StaticBlinder.BP_StaticBlinder_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_StaticBlinder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticBlinder.BP_StaticBlinder_C.ReceiveBeginPlay");
		
		UBP_StaticBlinder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticBlinder.BP_StaticBlinder_C.On Show Blinder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_StaticBlinder_C::OnShowBlinder(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticBlinder.BP_StaticBlinder_C.On Show Blinder");
		
		UBP_StaticBlinder_C_OnShowBlinder_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticBlinder.BP_StaticBlinder_C.Setup Widget
	 * 		Flags  -> ()
	 */
	void UBP_StaticBlinder_C::SetupWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticBlinder.BP_StaticBlinder_C.Setup Widget");
		
		UBP_StaticBlinder_C_SetupWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StaticBlinder.BP_StaticBlinder_C.ExecuteUbergraph_BP_StaticBlinder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_StaticBlinder_C::ExecuteUbergraph_BP_StaticBlinder(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StaticBlinder.BP_StaticBlinder_C.ExecuteUbergraph_BP_StaticBlinder");
		
		UBP_StaticBlinder_C_ExecuteUbergraph_BP_StaticBlinder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_StaticBlinder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_StaticBlinder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StaticBlinder.BP_StaticBlinder_C");
		return ptr;
	}

}


