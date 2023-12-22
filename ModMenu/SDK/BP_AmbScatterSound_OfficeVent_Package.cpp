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
	 * 		Name   -> Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_OfficeVent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.ReceiveBeginPlay");
		
		ABP_AmbScatterSound_OfficeVent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.ToggleScatterSound
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_OfficeVent_C::ToggleScatterSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.ToggleScatterSound");
		
		ABP_AmbScatterSound_OfficeVent_C_ToggleScatterSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.BndEvt__BP_AmbScatterSound_OfficeVent_NewVar_0_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AmbScatterSound_OfficeVent_C::BndEvt__BP_AmbScatterSound_OfficeVent_NewVar_0_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.BndEvt__BP_AmbScatterSound_OfficeVent_NewVar_0_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature");
		
		ABP_AmbScatterSound_OfficeVent_C_BndEvt__BP_AmbScatterSound_OfficeVent_NewVar_0_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.ExecuteUbergraph_BP_AmbScatterSound_OfficeVent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AmbScatterSound_OfficeVent_C::ExecuteUbergraph_BP_AmbScatterSound_OfficeVent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C.ExecuteUbergraph_BP_AmbScatterSound_OfficeVent");
		
		ABP_AmbScatterSound_OfficeVent_C_ExecuteUbergraph_BP_AmbScatterSound_OfficeVent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AmbScatterSound_OfficeVent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AmbScatterSound_OfficeVent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C");
		return ptr;
	}

}


