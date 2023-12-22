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
	 * 		Name   -> Function BP_PauseMenuActor.BP_PauseMenuActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PauseMenuActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseMenuActor.BP_PauseMenuActor_C.ReceiveBeginPlay");
		
		ABP_PauseMenuActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PauseMenuActor.BP_PauseMenuActor_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_PauseMenuActor_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseMenuActor.BP_PauseMenuActor_C.ReceiveDestroyed");
		
		ABP_PauseMenuActor_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PauseMenuActor.BP_PauseMenuActor_C.ExecuteUbergraph_BP_PauseMenuActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PauseMenuActor_C::ExecuteUbergraph_BP_PauseMenuActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PauseMenuActor.BP_PauseMenuActor_C.ExecuteUbergraph_BP_PauseMenuActor");
		
		ABP_PauseMenuActor_C_ExecuteUbergraph_BP_PauseMenuActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PauseMenuActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PauseMenuActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PauseMenuActor.BP_PauseMenuActor_C");
		return ptr;
	}

}


