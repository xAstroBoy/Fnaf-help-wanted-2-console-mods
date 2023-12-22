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
	 * 		Name   -> Function BP_CollectibleDoll.BP_CollectibleDoll_C.BndEvt__BP_CollectibleDoll_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CollectibleDoll_C::BndEvt__BP_CollectibleDoll_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleDoll.BP_CollectibleDoll_C.BndEvt__BP_CollectibleDoll_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_CollectibleDoll_C_BndEvt__BP_CollectibleDoll_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleDoll.BP_CollectibleDoll_C.Collect
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleDoll_C::Collect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleDoll.BP_CollectibleDoll_C.Collect");
		
		ABP_CollectibleDoll_C_Collect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleDoll.BP_CollectibleDoll_C.ExecuteUbergraph_BP_CollectibleDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CollectibleDoll_C::ExecuteUbergraph_BP_CollectibleDoll(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleDoll.BP_CollectibleDoll_C.ExecuteUbergraph_BP_CollectibleDoll");
		
		ABP_CollectibleDoll_C_ExecuteUbergraph_BP_CollectibleDoll_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleDoll.BP_CollectibleDoll_C.OnCollected__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleDoll_C::OnCollected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleDoll.BP_CollectibleDoll_C.OnCollected__DelegateSignature");
		
		ABP_CollectibleDoll_C_OnCollected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CollectibleDoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CollectibleDoll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CollectibleDoll.BP_CollectibleDoll_C");
		return ptr;
	}

}


