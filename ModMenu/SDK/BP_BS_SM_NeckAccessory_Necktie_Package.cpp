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
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.GetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::GetIsUsed(bool* IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.GetIsUsed");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_GetIsUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsed != nullptr)
			*IsUsed = params.IsUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.ReceiveBeginPlay");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.SetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::SetIsUsed(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.SetIsUsed");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_SetIsUsed_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.BndEvt__BP_BS_SM_NeckAccessory_BowTie_StaticMesh_0_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::BndEvt__BP_BS_SM_NeckAccessory_BowTie_StaticMesh_0_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.BndEvt__BP_BS_SM_NeckAccessory_BowTie_StaticMesh_0_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_BndEvt__BP_BS_SM_NeckAccessory_BowTie_StaticMesh_0_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.ExecuteUbergraph_BP_BS_SM_NeckAccessory_Necktie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_Necktie_C::ExecuteUbergraph_BP_BS_SM_NeckAccessory_Necktie(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C.ExecuteUbergraph_BP_BS_SM_NeckAccessory_Necktie");
		
		ABP_BS_SM_NeckAccessory_Necktie_C_ExecuteUbergraph_BP_BS_SM_NeckAccessory_Necktie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_SM_NeckAccessory_Necktie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_SM_NeckAccessory_Necktie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_SM_NeckAccessory_Necktie.BP_BS_SM_NeckAccessory_Necktie_C");
		return ptr;
	}

}


