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
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.GetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_NeckAccessory_C::GetIsUsed(bool* IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.GetIsUsed");
		
		ABP_BS_SM_NeckAccessory_C_GetIsUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsed != nullptr)
			*IsUsed = params.IsUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.ResocketToBust
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_NeckAccessory_C::ResocketToBust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.ResocketToBust");
		
		ABP_BS_SM_NeckAccessory_C_ResocketToBust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.SetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_NeckAccessory_C::SetIsUsed(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.SetIsUsed");
		
		ABP_BS_SM_NeckAccessory_C_SetIsUsed_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnEndHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_C::OnEndHoverSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnEndHoverSocket");
		
		ABP_BS_SM_NeckAccessory_C_OnEndHoverSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnBeginHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanSocket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_NeckAccessory_C::OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnBeginHoverSocket");
		
		ABP_BS_SM_NeckAccessory_C_OnBeginHoverSocket_Params params {};
		params.Socket = Socket;
		params.bCanSocket = bCanSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_NeckAccessory_C::BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature");
		
		ABP_BS_SM_NeckAccessory_C_BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.SetBust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BS_SM_Bust_C*                            Bust                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_C::SetBust(class ABP_BS_SM_Bust_C* Bust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.SetBust");
		
		ABP_BS_SM_NeckAccessory_C_SetBust_Params params {};
		params.Bust = Bust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.ForceBoundaryAction
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_NeckAccessory_C::ForceBoundaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.ForceBoundaryAction");
		
		ABP_BS_SM_NeckAccessory_C_ForceBoundaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnInsertedInSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_C::OnInsertedInSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnInsertedInSocket");
		
		ABP_BS_SM_NeckAccessory_C_OnInsertedInSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnRemovedFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_C::OnRemovedFromSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.OnRemovedFromSocket");
		
		ABP_BS_SM_NeckAccessory_C_OnRemovedFromSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BS_SM_NeckAccessory_C::BndEvt__BP_BS_SM_NeckAccessory_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_BS_SM_NeckAccessory_C_BndEvt__BP_BS_SM_NeckAccessory_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.ExecuteUbergraph_BP_BS_SM_NeckAccessory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_NeckAccessory_C::ExecuteUbergraph_BP_BS_SM_NeckAccessory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C.ExecuteUbergraph_BP_BS_SM_NeckAccessory");
		
		ABP_BS_SM_NeckAccessory_C_ExecuteUbergraph_BP_BS_SM_NeckAccessory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_SM_NeckAccessory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_SM_NeckAccessory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_SM_NeckAccessory.BP_BS_SM_NeckAccessory_C");
		return ptr;
	}

}


