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
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.GetToolEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_SO_FA_ToolSelection                           ToolSelection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::GetToolEnum(Enum_SO_FA_ToolSelection* ToolSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.GetToolEnum");
		
		ABP_RA_SL_DeskObjectGrabbable_C_GetToolEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolSelection != nullptr)
			*ToolSelection = params.ToolSelection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.Activate
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.Activate");
		
		ABP_RA_SL_DeskObjectGrabbable_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.Deactivate
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.Deactivate");
		
		ABP_RA_SL_DeskObjectGrabbable_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnInstantiate
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::OnInstantiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnInstantiate");
		
		ABP_RA_SL_DeskObjectGrabbable_C_OnInstantiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ReturnToSocket
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::ReturnToSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ReturnToSocket");
		
		ABP_RA_SL_DeskObjectGrabbable_C_ReturnToSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.SetReturnSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::SetReturnSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.SetReturnSocket");
		
		ABP_RA_SL_DeskObjectGrabbable_C_SetReturnSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ItemAction
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::ItemAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ItemAction");
		
		ABP_RA_SL_DeskObjectGrabbable_C_ItemAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.PlayToolHaptics
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::PlayToolHaptics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.PlayToolHaptics");
		
		ABP_RA_SL_DeskObjectGrabbable_C_PlayToolHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnBeginHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanSocket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnBeginHoverSocket");
		
		ABP_RA_SL_DeskObjectGrabbable_C_OnBeginHoverSocket_Params params {};
		params.Socket = Socket;
		params.bCanSocket = bCanSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnEndHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::OnEndHoverSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnEndHoverSocket");
		
		ABP_RA_SL_DeskObjectGrabbable_C_OnEndHoverSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnInsertedInSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::OnInsertedInSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnInsertedInSocket");
		
		ABP_RA_SL_DeskObjectGrabbable_C_OnInsertedInSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnRemovedFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::OnRemovedFromSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.OnRemovedFromSocket");
		
		ABP_RA_SL_DeskObjectGrabbable_C_OnRemovedFromSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ReceiveBeginPlay");
		
		ABP_RA_SL_DeskObjectGrabbable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RA_SL_DeskObjectGrabbable_C_BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RA_SL_DeskObjectGrabbable_C_BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");
		
		ABP_RA_SL_DeskObjectGrabbable_C_BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_DeskObjectGrabbable_C::ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C.ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable");
		
		ABP_RA_SL_DeskObjectGrabbable_C_ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_DeskObjectGrabbable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_DeskObjectGrabbable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C");
		return ptr;
	}

}


