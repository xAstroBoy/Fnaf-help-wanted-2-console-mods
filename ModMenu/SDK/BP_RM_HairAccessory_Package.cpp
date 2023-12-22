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
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnBeginHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanSocket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RM_HairAccessory_C::OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnBeginHoverSocket");
		
		ABP_RM_HairAccessory_C_OnBeginHoverSocket_Params params {};
		params.Socket = Socket;
		params.bCanSocket = bCanSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnEndHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RM_HairAccessory_C::OnEndHoverSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnEndHoverSocket");
		
		ABP_RM_HairAccessory_C_OnEndHoverSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnBoundryHit
	 * 		Flags  -> ()
	 */
	void ABP_RM_HairAccessory_C::OnBoundryHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnBoundryHit");
		
		ABP_RM_HairAccessory_C_OnBoundryHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnInsertedInSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RM_HairAccessory_C::OnInsertedInSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnInsertedInSocket");
		
		ABP_RM_HairAccessory_C_OnInsertedInSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnRemovedFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RM_HairAccessory_C::OnRemovedFromSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.OnRemovedFromSocket");
		
		ABP_RM_HairAccessory_C_OnRemovedFromSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.MarkBeingDestoryedAfterRound
	 * 		Flags  -> ()
	 */
	void ABP_RM_HairAccessory_C::MarkBeingDestoryedAfterRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.MarkBeingDestoryedAfterRound");
		
		ABP_RM_HairAccessory_C_MarkBeingDestoryedAfterRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RM_HairAccessory_C::BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RM_HairAccessory_C_BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RM_HairAccessory_C::BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RM_HairAccessory_C_BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.BndEvt__BP_RM_EarAccessory_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_RM_HairAccessory_C::BndEvt__BP_RM_EarAccessory_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.BndEvt__BP_RM_EarAccessory_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_RM_HairAccessory_C_BndEvt__BP_RM_EarAccessory_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.ExecuteUbergraph_BP_RM_HairAccessory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RM_HairAccessory_C::ExecuteUbergraph_BP_RM_HairAccessory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RM_HairAccessory.BP_RM_HairAccessory_C.ExecuteUbergraph_BP_RM_HairAccessory");
		
		ABP_RM_HairAccessory_C_ExecuteUbergraph_BP_RM_HairAccessory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RM_HairAccessory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RM_HairAccessory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RM_HairAccessory.BP_RM_HairAccessory_C");
		return ptr;
	}

}


