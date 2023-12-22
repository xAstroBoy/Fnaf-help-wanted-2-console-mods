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
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.GetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_MouthAccessory_C::GetIsUsed(bool* IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.GetIsUsed");
		
		ABP_BS_SM_MouthAccessory_C_GetIsUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUsed != nullptr)
			*IsUsed = params.IsUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.ResocketToBust
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_MouthAccessory_C::ResocketToBust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.ResocketToBust");
		
		ABP_BS_SM_MouthAccessory_C_ResocketToBust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.SetIsUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_MouthAccessory_C::SetIsUsed(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.SetIsUsed");
		
		ABP_BS_SM_MouthAccessory_C_SetIsUsed_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnEndHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_MouthAccessory_C::OnEndHoverSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnEndHoverSocket");
		
		ABP_BS_SM_MouthAccessory_C_OnEndHoverSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnBeginHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanSocket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BS_SM_MouthAccessory_C::OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnBeginHoverSocket");
		
		ABP_BS_SM_MouthAccessory_C_OnBeginHoverSocket_Params params {};
		params.Socket = Socket;
		params.bCanSocket = bCanSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.SetBust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BS_SM_Bust_C*                            Bust                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_MouthAccessory_C::SetBust(class ABP_BS_SM_Bust_C* Bust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.SetBust");
		
		ABP_BS_SM_MouthAccessory_C_SetBust_Params params {};
		params.Bust = Bust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_MouthAccessory_C::BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature");
		
		ABP_BS_SM_MouthAccessory_C_BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.ForceBoundaryAction
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_MouthAccessory_C::ForceBoundaryAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.ForceBoundaryAction");
		
		ABP_BS_SM_MouthAccessory_C_ForceBoundaryAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnInsertedInSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_MouthAccessory_C::OnInsertedInSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnInsertedInSocket");
		
		ABP_BS_SM_MouthAccessory_C_OnInsertedInSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnRemovedFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_MouthAccessory_C::OnRemovedFromSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.OnRemovedFromSocket");
		
		ABP_BS_SM_MouthAccessory_C_OnRemovedFromSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.ExecuteUbergraph_BP_BS_SM_MouthAccessory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_MouthAccessory_C::ExecuteUbergraph_BP_BS_SM_MouthAccessory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C.ExecuteUbergraph_BP_BS_SM_MouthAccessory");
		
		ABP_BS_SM_MouthAccessory_C_ExecuteUbergraph_BP_BS_SM_MouthAccessory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_SM_MouthAccessory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_SM_MouthAccessory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_SM_MouthAccessory.BP_BS_SM_MouthAccessory_C");
		return ptr;
	}

}


