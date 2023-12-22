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
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerLevelFromPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::GetPowerLevelFromPercentage(float Value, int32_t* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerLevelFromPercentage");
		
		ABP_RRM_RoxyTalkie_C_GetPowerLevelFromPercentage_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.SetPowerIndicator
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::SetPowerIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.SetPowerIndicator");
		
		ABP_RRM_RoxyTalkie_C_SetPowerIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerIndicatorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_RRM_RoxyTalkie_C::GetPowerIndicatorArray(TArray<class UStaticMeshComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerIndicatorArray");
		
		ABP_RRM_RoxyTalkie_C_GetPowerIndicatorArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.UpdatePlayingTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::UpdatePlayingTime(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.UpdatePlayingTime");
		
		ABP_RRM_RoxyTalkie_C_UpdatePlayingTime_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.HasPlayedLongEnoughForMin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RemaingTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::HasPlayedLongEnoughForMin(bool* Return, float* RemaingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.HasPlayedLongEnoughForMin");
		
		ABP_RRM_RoxyTalkie_C_HasPlayedLongEnoughForMin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
		if (RemaingTime != nullptr)
			*RemaingTime = params.RemaingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.HasMinPowerNeededToStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RRM_RoxyTalkie_C::HasMinPowerNeededToStart(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.HasMinPowerNeededToStart");
		
		ABP_RRM_RoxyTalkie_C_HasMinPowerNeededToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetRechargeRate
	 * 		Flags  -> ()
	 */
	float ABP_RRM_RoxyTalkie_C::GetRechargeRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetRechargeRate");
		
		ABP_RRM_RoxyTalkie_C_GetRechargeRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.StopAudio
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::StopAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.StopAudio");
		
		ABP_RRM_RoxyTalkie_C_StopAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::GetPowerPercentage(float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.GetPowerPercentage");
		
		ABP_RRM_RoxyTalkie_C_GetPowerPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Recharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::Recharge(float NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Recharge");
		
		ABP_RRM_RoxyTalkie_C_Recharge_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.DrainPowerFromUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              deltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::DrainPowerFromUse(float deltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.DrainPowerFromUse");
		
		ABP_RRM_RoxyTalkie_C_DrainPowerFromUse_Params params {};
		params.deltaSeconds = deltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Timeline_0__FinishedFunc");
		
		ABP_RRM_RoxyTalkie_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.Timeline_0__UpdateFunc");
		
		ABP_RRM_RoxyTalkie_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature");
		
		ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_0_OnGrabKeyDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_3_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_GrabbableSnap_K2Node_ComponentBoundEvent_4_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature");
		
		ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_BindInputOnGrabbed_K2Node_ComponentBoundEvent_1_OnGrabKeyDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ReceiveTick");
		
		ABP_RRM_RoxyTalkie_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.FlashRoxyTalkie
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::FlashRoxyTalkie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.FlashRoxyTalkie");
		
		ABP_RRM_RoxyTalkie_C_FlashRoxyTalkie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.EndFlash
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::EndFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.EndFlash");
		
		ABP_RRM_RoxyTalkie_C_EndFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ObjectDropped
	 * 		Flags  -> ()
	 */
	void ABP_RRM_RoxyTalkie_C::ObjectDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ObjectDropped");
		
		ABP_RRM_RoxyTalkie_C_ObjectDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_RRM_RoxyTalkie_C::BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature");
		
		ABP_RRM_RoxyTalkie_C_BndEvt__BP_RRM_RoxyTalkie_RoxyTalkie_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ExecuteUbergraph_BP_RRM_RoxyTalkie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RRM_RoxyTalkie_C::ExecuteUbergraph_BP_RRM_RoxyTalkie(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C.ExecuteUbergraph_BP_RRM_RoxyTalkie");
		
		ABP_RRM_RoxyTalkie_C_ExecuteUbergraph_BP_RRM_RoxyTalkie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RRM_RoxyTalkie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RRM_RoxyTalkie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RRM_RoxyTalkie.BP_RRM_RoxyTalkie_C");
		return ptr;
	}

}


