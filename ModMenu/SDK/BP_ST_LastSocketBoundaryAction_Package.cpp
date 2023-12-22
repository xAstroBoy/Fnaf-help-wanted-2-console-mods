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
	 * 		Name   -> Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.OnBoundryHit
	 * 		Flags  -> ()
	 */
	void UBP_ST_LastSocketBoundaryAction_C::OnBoundryHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.OnBoundryHit");
		
		UBP_ST_LastSocketBoundaryAction_C_OnBoundryHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.MarkBeingDestoryedAfterRound
	 * 		Flags  -> ()
	 */
	void UBP_ST_LastSocketBoundaryAction_C::MarkBeingDestoryedAfterRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.MarkBeingDestoryedAfterRound");
		
		UBP_ST_LastSocketBoundaryAction_C_MarkBeingDestoryedAfterRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.OnBoundaryHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorHittingBoundary                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ST_LastSocketBoundaryAction_C::OnBoundaryHit(class AActor* ActorHittingBoundary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.OnBoundaryHit");
		
		UBP_ST_LastSocketBoundaryAction_C_OnBoundaryHit_Params params {};
		params.ActorHittingBoundary = ActorHittingBoundary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ST_LastSocketBoundaryAction_C::Setup(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.Setup");
		
		UBP_ST_LastSocketBoundaryAction_C_Setup_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.ExecuteUbergraph_BP_ST_LastSocketBoundaryAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ST_LastSocketBoundaryAction_C::ExecuteUbergraph_BP_ST_LastSocketBoundaryAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C.ExecuteUbergraph_BP_ST_LastSocketBoundaryAction");
		
		UBP_ST_LastSocketBoundaryAction_C_ExecuteUbergraph_BP_ST_LastSocketBoundaryAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ST_LastSocketBoundaryAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ST_LastSocketBoundaryAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C");
		return ptr;
	}

}


