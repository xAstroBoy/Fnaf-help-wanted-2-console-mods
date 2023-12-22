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
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.DecayRotation
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_LazySusan_C::DecayRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.DecayRotation");
		
		ABP_BS_SM_LazySusan_C_DecayRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.CalculateRotationSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LastPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentSpeed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_LazySusan_C::CalculateRotationSpeed(float LastPosition, float DeltaTime, float* CurrentSpeed, float* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.CalculateRotationSpeed");
		
		ABP_BS_SM_LazySusan_C_CalculateRotationSpeed_Params params {};
		params.LastPosition = LastPosition;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentSpeed != nullptr)
			*CurrentSpeed = params.CurrentSpeed;
		if (CurrentPosition != nullptr)
			*CurrentPosition = params.CurrentPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.HandleRotationSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_LazySusan_C::HandleRotationSound(float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.HandleRotationSound");
		
		ABP_BS_SM_LazySusan_C_HandleRotationSound_Params params {};
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_LazySusan_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.ReceiveTick");
		
		ABP_BS_SM_LazySusan_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_LazySusan_C::BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_BS_SM_LazySusan_C_BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_LazySusan_C::BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_BS_SM_LazySusan_C_BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.ExecuteUbergraph_BP_BS_SM_LazySusan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_LazySusan_C::ExecuteUbergraph_BP_BS_SM_LazySusan(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C.ExecuteUbergraph_BP_BS_SM_LazySusan");
		
		ABP_BS_SM_LazySusan_C_ExecuteUbergraph_BP_BS_SM_LazySusan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_SM_LazySusan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_SM_LazySusan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C");
		return ptr;
	}

}


