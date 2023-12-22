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
	 * 		Name   -> Function SWGVRBase.Activatable.IncrementalActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentageActivated                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivatable::IncrementalActivation(float PercentageActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Activatable.IncrementalActivation");
		
		UActivatable_IncrementalActivation_Params params {};
		params.PercentageActivated = PercentageActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Activatable.GetActivation
	 * 		Flags  -> ()
	 */
	float UActivatable::GetActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Activatable.GetActivation");
		
		UActivatable_GetActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Activatable.Deactivated
	 * 		Flags  -> ()
	 */
	void UActivatable::Deactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Activatable.Deactivated");
		
		UActivatable_Deactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Activatable.Activated
	 * 		Flags  -> ()
	 */
	void UActivatable::Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Activatable.Activated");
		
		UActivatable_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivatable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Activatable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Activator.GetInteractPrimitiveComponents
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> UActivator::GetInteractPrimitiveComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Activator.GetInteractPrimitiveComponents");
		
		UActivator_GetInteractPrimitiveComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Activator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BaseShootableCharacter.OnTargetHit_Implementation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTargetHitParams                            TargetHitParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ABaseShootableCharacter::OnTargetHit_Implementation(const struct FTargetHitParams& TargetHitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BaseShootableCharacter.OnTargetHit_Implementation");
		
		ABaseShootableCharacter_OnTargetHit_Implementation_Params params {};
		params.TargetHitParams = TargetHitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BaseShootableCharacter.OnHitTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTargetHitParams                            TargetHitParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ABaseShootableCharacter::OnHitTaken(const struct FTargetHitParams& TargetHitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BaseShootableCharacter.OnHitTaken");
		
		ABaseShootableCharacter_OnHitTaken_Params params {};
		params.TargetHitParams = TargetHitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseShootableCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseShootableCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.BaseShootableCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeakPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeakPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.WeakPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BindInputOnGrabbed.OnPhysicsReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBindInputOnGrabbed::OnPhysicsReleased(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BindInputOnGrabbed.OnPhysicsReleased");
		
		UBindInputOnGrabbed_OnPhysicsReleased_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BindInputOnGrabbed.OnPhysicsGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBindInputOnGrabbed::OnPhysicsGrabbed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BindInputOnGrabbed.OnPhysicsGrabbed");
		
		UBindInputOnGrabbed_OnPhysicsGrabbed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BindInputOnGrabbed.KeyTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBindInputOnGrabbed::KeyTriggered(const struct FInputActionValue& ActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BindInputOnGrabbed.KeyTriggered");
		
		UBindInputOnGrabbed_KeyTriggered_Params params {};
		params.ActionValue = ActionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BindInputOnGrabbed.KeyReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBindInputOnGrabbed::KeyReleased(const struct FInputActionValue& ActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BindInputOnGrabbed.KeyReleased");
		
		UBindInputOnGrabbed_KeyReleased_Params params {};
		params.ActionValue = ActionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.BindInputOnGrabbed.KeyPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBindInputOnGrabbed::KeyPressed(const struct FInputActionValue& ActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.BindInputOnGrabbed.KeyPressed");
		
		UBindInputOnGrabbed_KeyPressed_Params params {};
		params.ActionValue = ActionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBindInputOnGrabbed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindInputOnGrabbed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.BindInputOnGrabbed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.SetInteractiblePercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPercentage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableBase::SetInteractiblePercentage(float InPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.SetInteractiblePercentage");
		
		AInteractableBase_SetInteractiblePercentage_Params params {};
		params.InPercentage = InPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.SetCanDeactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCanActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableBase::SetCanDeactivate(bool InCanActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.SetCanDeactivate");
		
		AInteractableBase_SetCanDeactivate_Params params {};
		params.InCanActivate = InCanActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.SetCanActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCanActivate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableBase::SetCanActivate(bool InCanActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.SetCanActivate");
		
		AInteractableBase_SetCanActivate_Params params {};
		params.InCanActivate = InCanActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.SetActivatableActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              InActivatableActors                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AInteractableBase::SetActivatableActors(TArray<class AActor*> InActivatableActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.SetActivatableActors");
		
		AInteractableBase_SetActivatableActors_Params params {};
		params.InActivatableActors = InActivatableActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.GetActivatableActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> AInteractableBase::GetActivatableActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.GetActivatableActors");
		
		AInteractableBase_GetActivatableActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.CanDeactivate
	 * 		Flags  -> ()
	 */
	bool AInteractableBase::CanDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.CanDeactivate");
		
		AInteractableBase_CanDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.CanActivate
	 * 		Flags  -> ()
	 */
	bool AInteractableBase::CanActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.CanActivate");
		
		AInteractableBase_CanActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InteractableBase.ActivationEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentageActivated                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AInteractableBase::ActivationEvent(float PercentageActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InteractableBase.ActivationEvent");
		
		AInteractableBase_ActivationEvent_Params params {};
		params.PercentageActivated = PercentageActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInteractableBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractableBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.InteractableBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.SetButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSendEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::SetButtonUp(bool bSendEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.SetButtonUp");
		
		AButtonBase_SetButtonUp_Params params {};
		params.bSendEvent = bSendEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.SetButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSendEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::SetButtonDown(bool bSendEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.SetButtonDown");
		
		AButtonBase_SetButtonDown_Params params {};
		params.bSendEvent = bSendEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.SetButtonActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::SetButtonActive(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.SetButtonActive");
		
		AButtonBase_SetButtonActive_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.OnTriggerBoxEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::OnTriggerBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.OnTriggerBoxEndOverlap");
		
		AButtonBase_OnTriggerBoxEndOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.OnTriggerBoxBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::OnTriggerBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.OnTriggerBoxBeginOverlap");
		
		AButtonBase_OnTriggerBoxBeginOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.OnInteractorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::OnInteractorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.OnInteractorDestroyed");
		
		AButtonBase_OnInteractorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.IsButtonDown
	 * 		Flags  -> ()
	 */
	bool AButtonBase::IsButtonDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.IsButtonDown");
		
		AButtonBase_IsButtonDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.ButtonTimelineProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::ButtonTimelineProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.ButtonTimelineProgress");
		
		AButtonBase_ButtonTimelineProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.ButtonReleased
	 * 		Flags  -> ()
	 */
	void AButtonBase::ButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.ButtonReleased");
		
		AButtonBase_ButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.ButtonPressed
	 * 		Flags  -> ()
	 */
	void AButtonBase::ButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.ButtonPressed");
		
		AButtonBase_ButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.ButtonBase.ButtonAnimate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reverse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AButtonBase::ButtonAnimate(bool Reverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.ButtonBase.ButtonAnimate");
		
		AButtonBase_ButtonAnimate_Params params {};
		params.Reverse = Reverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AButtonBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AButtonBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.ButtonBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.CompositeSightFilter.SetOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESightFilterOp                                     SightFilterOp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositeSightFilter::SetOperation(ESightFilterOp SightFilterOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.CompositeSightFilter.SetOperation");
		
		UCompositeSightFilter_SetOperation_Params params {};
		params.SightFilterOp = SightFilterOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.CompositeSightFilter.GetOperation
	 * 		Flags  -> ()
	 */
	ESightFilterOp UCompositeSightFilter::GetOperation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.CompositeSightFilter.GetOperation");
		
		UCompositeSightFilter_GetOperation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeSightFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeSightFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.CompositeSightFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.CrankBase.OnIncrementalActivationShouldStopTimerElapsed
	 * 		Flags  -> ()
	 */
	void ACrankBase::OnIncrementalActivationShouldStopTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.CrankBase.OnIncrementalActivationShouldStopTimerElapsed");
		
		ACrankBase_OnIncrementalActivationShouldStopTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.CrankBase.OnHandleSocketed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorBeingSocketed                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACrankBase::OnHandleSocketed(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.CrankBase.OnHandleSocketed");
		
		ACrankBase_OnHandleSocketed_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrankBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrankBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.CrankBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.CrankHandleBase.OnBeginHoverSocket_Implementation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanSocket                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACrankHandleBase::OnBeginHoverSocket_Implementation(class USocketComponent* Socket, bool bCanSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.CrankHandleBase.OnBeginHoverSocket_Implementation");
		
		ACrankHandleBase_OnBeginHoverSocket_Implementation_Params params {};
		params.Socket = Socket;
		params.bCanSocket = bCanSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrankHandleBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrankHandleBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.CrankHandleBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.SetToRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RangeName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NormalizedPositionWithinRange                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADial::SetToRange(const class FName& RangeName, float NormalizedPositionWithinRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.SetToRange");
		
		ADial_SetToRange_Params params {};
		params.RangeName = RangeName;
		params.NormalizedPositionWithinRange = NormalizedPositionWithinRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.SetDistanceToLetGo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADial::SetDistanceToLetGo(float NewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.SetDistanceToLetGo");
		
		ADial_SetDistanceToLetGo_Params params {};
		params.NewDistance = NewDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.SetDialMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewDialMinMax                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADial::SetDialMinMax(float NewDialMinMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.SetDialMinMax");
		
		ADial_SetDialMinMax_Params params {};
		params.NewDialMinMax = NewDialMinMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.SetDialEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADial::SetDialEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.SetDialEnable");
		
		ADial_SetDialEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.SetAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADial::SetAngle(float InAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.SetAngle");
		
		ADial_SetAngle_Params params {};
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.OnRangeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OldRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADial::OnRangeChanged(const class FName& OldRange, const class FName& NewRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.OnRangeChanged");
		
		ADial_OnRangeChanged_Params params {};
		params.OldRange = OldRange;
		params.NewRange = NewRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.GetDialEnable
	 * 		Flags  -> ()
	 */
	bool ADial::GetDialEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.GetDialEnable");
		
		ADial_GetDialEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.GetCurrentAngle
	 * 		Flags  -> ()
	 */
	float ADial::GetCurrentAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.GetCurrentAngle");
		
		ADial_GetCurrentAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Dial.GetActivationForAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ADial::GetActivationForAngle(float InAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Dial.GetActivationForAngle");
		
		ADial_GetActivationForAngle_Params params {};
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Dial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.DoorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.EaterComponent.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEaterComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.EaterComponent.OnEndOverlap");
		
		UEaterComponent_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.EaterComponent.OnEat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      EdibleBeingEaten                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEaterComponent::OnEat(class AActor* EdibleBeingEaten)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.EaterComponent.OnEat");
		
		UEaterComponent_OnEat_Params params {};
		params.EdibleBeingEaten = EdibleBeingEaten;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.EaterComponent.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UEaterComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.EaterComponent.OnBeginOverlap");
		
		UEaterComponent_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.EaterComponent.CanEat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      EdibleToCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEaterComponent::CanEat(class AActor* EdibleToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.EaterComponent.CanEat");
		
		UEaterComponent_CanEat_Params params {};
		params.EdibleToCheck = EdibleToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.EaterComponent.AttemptEat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToTryAndEat                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEaterComponent::AttemptEat(class AActor* ActorToTryAndEat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.EaterComponent.AttemptEat");
		
		UEaterComponent_AttemptEat_Params params {};
		params.ActorToTryAndEat = ActorToTryAndEat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEaterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEaterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.EaterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Edible.GetRespawnTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UEdible::GetRespawnTransform(class UEaterComponent* EaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Edible.GetRespawnTransform");
		
		UEdible_GetRespawnTransform_Params params {};
		params.EaterComponent = EaterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Edible.CanBeEaten
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEdible::CanBeEaten(class UEaterComponent* EaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Edible.CanBeEaten");
		
		UEdible_CanBeEaten_Params params {};
		params.EaterComponent = EaterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Edible.BeingEaten
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEdible::BeingEaten(class UEaterComponent* EaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Edible.BeingEaten");
		
		UEdible_BeingEaten_Params params {};
		params.EaterComponent = EaterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEdible.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdible::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Edible");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Flashlight.SetFlashlightEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlight::SetFlashlightEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Flashlight.SetFlashlightEnabled");
		
		UFlashlight_SetFlashlightEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Flashlight.IsFlashlightEnabled
	 * 		Flags  -> ()
	 */
	bool UFlashlight::IsFlashlightEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Flashlight.IsFlashlightEnabled");
		
		UFlashlight_IsFlashlightEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Flashlight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlashLightBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashLightBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.FlashLightBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.ResetFlashlightTimer
	 * 		Flags  -> ()
	 */
	void UFlashlightReactionComponent::ResetFlashlightTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.ResetFlashlightTimer");
		
		UFlashlightReactionComponent_ResetFlashlightTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.OnVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVisualSourceComponent*                      VisualSourceComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USightComponent*                             SightComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightReactionComponent::OnVisibilityChanged(class UVisualSourceComponent* VisualSourceComponent, class USightComponent* SightComponent, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.OnVisibilityChanged");
		
		UFlashlightReactionComponent_OnVisibilityChanged_Params params {};
		params.VisualSourceComponent = VisualSourceComponent;
		params.SightComponent = SightComponent;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.IsVisible
	 * 		Flags  -> ()
	 */
	bool UFlashlightReactionComponent::IsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.IsVisible");
		
		UFlashlightReactionComponent_IsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.IsSeenByPlayer
	 * 		Flags  -> ()
	 */
	bool UFlashlightReactionComponent::IsSeenByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.IsSeenByPlayer");
		
		UFlashlightReactionComponent_IsSeenByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.IsSeenByFlashlight
	 * 		Flags  -> ()
	 */
	bool UFlashlightReactionComponent::IsSeenByFlashlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.IsSeenByFlashlight");
		
		UFlashlightReactionComponent_IsSeenByFlashlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.GetFlashlightVisibleSeconds
	 * 		Flags  -> ()
	 */
	float UFlashlightReactionComponent::GetFlashlightVisibleSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.GetFlashlightVisibleSeconds");
		
		UFlashlightReactionComponent_GetFlashlightVisibleSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.FlashlightReactionComponent.GetFlashlightSecondsToReact
	 * 		Flags  -> ()
	 */
	float UFlashlightReactionComponent::GetFlashlightSecondsToReact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.FlashlightReactionComponent.GetFlashlightSecondsToReact");
		
		UFlashlightReactionComponent_GetFlashlightSecondsToReact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightReactionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightReactionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.FlashlightReactionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlashlightSightFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightSightFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.FlashlightSightFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GazeHandler.OnGazeExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGazeComponent*                            GazeComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGazeHandler::OnGazeExit(class UVRGazeComponent* GazeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GazeHandler.OnGazeExit");
		
		UGazeHandler_OnGazeExit_Params params {};
		params.GazeComponent = GazeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GazeHandler.OnGazeEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGazeComponent*                            GazeComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGazeHandler::OnGazeEnter(class UVRGazeComponent* GazeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GazeHandler.OnGazeEnter");
		
		UGazeHandler_OnGazeEnter_Params params {};
		params.GazeComponent = GazeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGazeHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGazeHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GazeHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.OnGrabberReleasedPostVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       GrabberPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         HeldComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabbable::OnGrabberReleasedPostVelocity(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* HeldComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.OnGrabberReleasedPostVelocity");
		
		UGrabbable_OnGrabberReleasedPostVelocity_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.HeldComponent = HeldComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.OnGrabberReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       Grabber                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabbable::OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.OnGrabberReleased");
		
		UGrabbable_OnGrabberReleased_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.Grabber = Grabber;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.OnGrabberGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       GrabberPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabbable::OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.OnGrabberGrabbed");
		
		UGrabbable_OnGrabberGrabbed_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.OnEndGrabberHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabbable::OnEndGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.OnEndGrabberHover");
		
		UGrabbable_OnEndGrabberHover_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.OnBeginGrabberHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabbable::OnBeginGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.OnBeginGrabberHover");
		
		UGrabbable_OnBeginGrabberHover_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.GetGrabber
	 * 		Flags  -> ()
	 */
	class UVRGrabberComponent* UGrabbable::GetGrabber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.GetGrabber");
		
		UGrabbable_GetGrabber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.CanBeReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       GrabberPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHandReleaseEnable UGrabbable::CanBeReleased(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.CanBeReleased");
		
		UGrabbable_CanBeReleased_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Grabbable.CanBeGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       GrabberPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGrabbable::CanBeGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Grabbable.CanBeGrabbed");
		
		UGrabbable_CanBeGrabbed_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabbable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabbable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Grabbable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrabbableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrabbableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabbableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabbablePhysicsActor.GetGrabbableComponent
	 * 		Flags  -> ()
	 */
	class USimplePhysicsGrabbableComponent* AGrabbablePhysicsActor::GetGrabbableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabbablePhysicsActor.GetGrabbableComponent");
		
		AGrabbablePhysicsActor_GetGrabbableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrabbablePhysicsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrabbablePhysicsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabbablePhysicsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabbableSnapActor.GetGrabbableComponent
	 * 		Flags  -> ()
	 */
	class UGrabbableSnapComponent* AGrabbableSnapActor::GetGrabbableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabbableSnapActor.GetGrabbableComponent");
		
		AGrabbableSnapActor_GetGrabbableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrabbableSnapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrabbableSnapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabbableSnapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimplePhysicsGrabbableComponent.SetReleaseEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHandReleaseEnable                                 Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimplePhysicsGrabbableComponent::SetReleaseEnable(EHandReleaseEnable Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimplePhysicsGrabbableComponent.SetReleaseEnable");
		
		USimplePhysicsGrabbableComponent_SetReleaseEnable_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimplePhysicsGrabbableComponent.SetCanBeGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewCanBeGrabbed                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimplePhysicsGrabbableComponent::SetCanBeGrabbed(bool bNewCanBeGrabbed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimplePhysicsGrabbableComponent.SetCanBeGrabbed");
		
		USimplePhysicsGrabbableComponent_SetCanBeGrabbed_Params params {};
		params.bNewCanBeGrabbed = bNewCanBeGrabbed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimplePhysicsGrabbableComponent.OnOwningActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USimplePhysicsGrabbableComponent::OnOwningActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimplePhysicsGrabbableComponent.OnOwningActorEndOverlap");
		
		USimplePhysicsGrabbableComponent_OnOwningActorEndOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimplePhysicsGrabbableComponent.GetHandHoldingMe
	 * 		Flags  -> ()
	 */
	ESWGVRBaseHand USimplePhysicsGrabbableComponent::GetHandHoldingMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimplePhysicsGrabbableComponent.GetHandHoldingMe");
		
		USimplePhysicsGrabbableComponent_GetHandHoldingMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplePhysicsGrabbableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplePhysicsGrabbableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SimplePhysicsGrabbableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabbableSnapComponent.SetGrabTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGrabbableSnapComponent::SetGrabTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabbableSnapComponent.SetGrabTransform");
		
		UGrabbableSnapComponent_SetGrabTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabbableSnapComponent.GetGrabTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UGrabbableSnapComponent::GetGrabTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabbableSnapComponent.GetGrabTransform");
		
		UGrabbableSnapComponent_GetGrabTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabbableSnapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabbableSnapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabbableSnapComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabbedEaterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabbedEaterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabbedEaterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabHighlightComponent.SetHighlightEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableHighlight                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabHighlightComponent::SetHighlightEnabled(bool bEnableHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabHighlightComponent.SetHighlightEnabled");
		
		UGrabHighlightComponent_SetHighlightEnabled_Params params {};
		params.bEnableHighlight = bEnableHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabHighlightComponent.SetAllowHighlightsOnHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInAllowHighlights                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabHighlightComponent::SetAllowHighlightsOnHover(bool bInAllowHighlights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabHighlightComponent.SetAllowHighlightsOnHover");
		
		UGrabHighlightComponent_SetAllowHighlightsOnHover_Params params {};
		params.bInAllowHighlights = bInAllowHighlights;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabHighlightComponent.IsHighlighted
	 * 		Flags  -> ()
	 */
	bool UGrabHighlightComponent::IsHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabHighlightComponent.IsHighlighted");
		
		UGrabHighlightComponent_IsHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabHighlightComponent.GetAllowHighlightsOnHover
	 * 		Flags  -> ()
	 */
	bool UGrabHighlightComponent::GetAllowHighlightsOnHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabHighlightComponent.GetAllowHighlightsOnHover");
		
		UGrabHighlightComponent_GetAllowHighlightsOnHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabHighlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabHighlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabHighlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrabSlideActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrabSlideActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabSlideActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabSlideComponent.SetSliderPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabSlideComponent::SetSliderPercentage(float Percentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabSlideComponent.SetSliderPercentage");
		
		UGrabSlideComponent_SetSliderPercentage_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabSlideComponent.SetSliderComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SliderComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabSlideComponent::SetSliderComponent(class USceneComponent* SliderComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabSlideComponent.SetSliderComponent");
		
		UGrabSlideComponent_SetSliderComponent_Params params {};
		params.SliderComponent = SliderComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabSlideComponent.SetCanBeGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableGrab                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrabSlideComponent::SetCanBeGrabbed(bool bEnableGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabSlideComponent.SetCanBeGrabbed");
		
		UGrabSlideComponent_SetCanBeGrabbed_Params params {};
		params.bEnableGrab = bEnableGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabSlideComponent.IsHeld
	 * 		Flags  -> ()
	 */
	bool UGrabSlideComponent::IsHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabSlideComponent.IsHeld");
		
		UGrabSlideComponent_IsHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabSlideComponent.GetPercentAlongPath
	 * 		Flags  -> ()
	 */
	float UGrabSlideComponent::GetPercentAlongPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabSlideComponent.GetPercentAlongPath");
		
		UGrabSlideComponent_GetPercentAlongPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GrabSlideComponent.GetHandHoldingMe
	 * 		Flags  -> ()
	 */
	ESWGVRBaseHand UGrabSlideComponent::GetHandHoldingMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GrabSlideComponent.GetHandHoldingMe");
		
		UGrabSlideComponent_GetHandHoldingMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrabSlideComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrabSlideComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GrabSlideComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.OnFireReleased
	 * 		Flags  -> ()
	 */
	void AGunActor::OnFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.OnFireReleased");
		
		AGunActor_OnFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.OnFirePressed
	 * 		Flags  -> ()
	 */
	void AGunActor::OnFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.OnFirePressed");
		
		AGunActor_OnFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.IsFiring
	 * 		Flags  -> ()
	 */
	bool AGunActor::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.IsFiring");
		
		AGunActor_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.GetGunMesh
	 * 		Flags  -> ()
	 */
	class UStaticMeshComponent* AGunActor::GetGunMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.GetGunMesh");
		
		AGunActor_GetGunMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.GetGrabComponent
	 * 		Flags  -> ()
	 */
	class UGrabbableSnapComponent* AGunActor::GetGrabComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.GetGrabComponent");
		
		AGunActor_GetGrabComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.GetFireTransform
	 * 		Flags  -> ()
	 */
	struct FTransform AGunActor::GetFireTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.GetFireTransform");
		
		AGunActor_GetFireTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunActor.GetFireLocationComponent
	 * 		Flags  -> ()
	 */
	class UArrowComponent* AGunActor::GetFireLocationComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunActor.GetFireLocationComponent");
		
		AGunActor_GetFireLocationComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGunActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGunActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GunActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunProjectile.SetupProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectileGunActor*                         Gun                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGunProjectile::SetupProjectile(class AProjectileGunActor* Gun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunProjectile.SetupProjectile");
		
		UGunProjectile_SetupProjectile_Params params {};
		params.Gun = Gun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunProjectile.GetGun
	 * 		Flags  -> ()
	 */
	class AProjectileGunActor* UGunProjectile::GetGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunProjectile.GetGun");
		
		UGunProjectile_GetGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GunProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunProjectileActor.OnProjectileHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AGunProjectileActor::OnProjectileHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunProjectileActor.OnProjectileHit");
		
		AGunProjectileActor_OnProjectileHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGunProjectileActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGunProjectileActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GunProjectileActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.GunTarget.OnTargetHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTargetHitParams                            TargetHitParams                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGunTarget::OnTargetHit(const struct FTargetHitParams& TargetHitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.GunTarget.OnTargetHit");
		
		UGunTarget_OnTargetHit_Params params {};
		params.TargetHitParams = TargetHitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.GunTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandPointerHandler.OnBlockerComponentHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHandPointerHandler::OnBlockerComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandPointerHandler.OnBlockerComponentHit");
		
		UHandPointerHandler_OnBlockerComponentHit_Params params {};
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
	 * 		Name   -> PredefinedFunction UHandPointerHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandPointerHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HandPointerHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandProximityState.OnComponentEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHandProximityState::OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandProximityState.OnComponentEndOverlap");
		
		UHandProximityState_OnComponentEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandProximityState.OnComponentBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHandProximityState::OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandProximityState.OnComponentBeginOverlap");
		
		UHandProximityState_OnComponentBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandProximityState.OnActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHandProximityState::OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandProximityState.OnActorEndOverlap");
		
		UHandProximityState_OnActorEndOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandProximityState.OnActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHandProximityState::OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandProximityState.OnActorBeginOverlap");
		
		UHandProximityState_OnActorBeginOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandProximityState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandProximityState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HandProximityState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHandProximityStateActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHandProximityStateActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HandProximityStateActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandUtilityFunctions.ToControllerHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EControllerHand UHandUtilityFunctions::ToControllerHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandUtilityFunctions.ToControllerHand");
		
		UHandUtilityFunctions_ToControllerHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandUtilityFunctions.HandToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHandUtilityFunctions::HandToString(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandUtilityFunctions.HandToString");
		
		UHandUtilityFunctions_HandToString_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HandUtilityFunctions.GetOppositeHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESWGVRBaseHand UHandUtilityFunctions::GetOppositeHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HandUtilityFunctions.GetOppositeHand");
		
		UHandUtilityFunctions_GetOppositeHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandUtilityFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandUtilityFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HandUtilityFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HeadBlinderDetector.SetBlinderShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadBlinderDetector::SetBlinderShown(bool bShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HeadBlinderDetector.SetBlinderShown");
		
		UHeadBlinderDetector_SetBlinderShown_Params params {};
		params.bShown = bShown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HeadBlinderDetector.SetBlidnerEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadBlinderDetector::SetBlidnerEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HeadBlinderDetector.SetBlidnerEnabled");
		
		UHeadBlinderDetector_SetBlidnerEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HeadBlinderDetector.OnHeadOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHeadBlinderDetector::OnHeadOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HeadBlinderDetector.OnHeadOverlap");
		
		UHeadBlinderDetector_OnHeadOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HeadBlinderDetector.OnHeadEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadBlinderDetector::OnHeadEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HeadBlinderDetector.OnHeadEndOverlap");
		
		UHeadBlinderDetector_OnHeadEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HeadBlinderDetector.IsBlinderShown
	 * 		Flags  -> ()
	 */
	bool UHeadBlinderDetector::IsBlinderShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HeadBlinderDetector.IsBlinderShown");
		
		UHeadBlinderDetector_IsBlinderShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HeadBlinderDetector.GetBlinderEnabled
	 * 		Flags  -> ()
	 */
	bool UHeadBlinderDetector::GetBlinderEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HeadBlinderDetector.GetBlinderEnabled");
		
		UHeadBlinderDetector_GetBlinderEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeadBlinderDetector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadBlinderDetector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HeadBlinderDetector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HighlightsSystem.SetOutlineMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           MaterialInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighlightsSystem::SetOutlineMaterial(class UMaterialInstance* MaterialInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HighlightsSystem.SetOutlineMaterial");
		
		UHighlightsSystem_SetOutlineMaterial_Params params {};
		params.MaterialInstance = MaterialInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HighlightsSystem.SetHighlightsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighlightsSystem::SetHighlightsEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HighlightsSystem.SetHighlightsEnabled");
		
		UHighlightsSystem_SetHighlightsEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HighlightsSystem.GetHighlightsEnabled
	 * 		Flags  -> ()
	 */
	bool UHighlightsSystem::GetHighlightsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HighlightsSystem.GetHighlightsEnabled");
		
		UHighlightsSystem_GetHighlightsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighlightsSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighlightsSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HighlightsSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HitAudioComponentVR.OnReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHitAudioComponentVR::OnReleased(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HitAudioComponentVR.OnReleased");
		
		UHitAudioComponentVR_OnReleased_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HitAudioComponentVR.OnGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHitAudioComponentVR::OnGrabbed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HitAudioComponentVR.OnGrabbed");
		
		UHitAudioComponentVR_OnGrabbed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitAudioComponentVR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitAudioComponentVR::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HitAudioComponentVR");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.HitDetectionComponent.OnComponentHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHitDetectionComponent::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HitDetectionComponent.OnComponentHit");
		
		UHitDetectionComponent_OnComponentHit_Params params {};
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
	 * 		Name   -> Function SWGVRBase.HitDetectionComponent.OnActorHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHitDetectionComponent::OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.HitDetectionComponent.OnActorHit");
		
		UHitDetectionComponent_OnActorHit_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitDetectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitDetectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HitDetectionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Hitter.GetHitVelocity
	 * 		Flags  -> ()
	 */
	struct FVector UHitter::GetHitVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Hitter.GetHitVelocity");
		
		UHitter_GetHitVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Hitter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.HitterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InputHandlerComponent.ShouldEnableInputs
	 * 		Flags  -> ()
	 */
	bool UInputHandlerComponent::ShouldEnableInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InputHandlerComponent.ShouldEnableInputs");
		
		UInputHandlerComponent_ShouldEnableInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InputHandlerComponent.SetupInputs
	 * 		Flags  -> ()
	 */
	void UInputHandlerComponent::SetupInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InputHandlerComponent.SetupInputs");
		
		UInputHandlerComponent_SetupInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.InputHandlerComponent.RemoveInputs
	 * 		Flags  -> ()
	 */
	void UInputHandlerComponent::RemoveInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.InputHandlerComponent.RemoveInputs");
		
		UInputHandlerComponent_RemoveInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.InputHandlerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerAdditionalKeys.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerAdditionalKeys::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.InputTriggerAdditionalKeys");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Interactable.Release
	 * 		Flags  -> ()
	 */
	void UInteractable::Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Interactable.Release");
		
		UInteractable_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Interactable.Grab
	 * 		Flags  -> ()
	 */
	void UInteractable::Grab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Interactable.Grab");
		
		UInteractable_Grab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Interactable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALaserGunActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALaserGunActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.LaserGunActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.LeverBase.ShowLeverDebug
	 * 		Flags  -> ()
	 */
	void ALeverBase::ShowLeverDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.LeverBase.ShowLeverDebug");
		
		ALeverBase_ShowLeverDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.LeverBase.OnIncrementalActivationShouldStopTimerElapsed
	 * 		Flags  -> ()
	 */
	void ALeverBase::OnIncrementalActivationShouldStopTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.LeverBase.OnIncrementalActivationShouldStopTimerElapsed");
		
		ALeverBase_OnIncrementalActivationShouldStopTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALeverBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeverBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.LeverBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.MovementInputComponent.SetAutoBindInputs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableAutoBind                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovementInputComponent::SetAutoBindInputs(bool bEnableAutoBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.MovementInputComponent.SetAutoBindInputs");
		
		UMovementInputComponent_SetAutoBindInputs_Params params {};
		params.bEnableAutoBind = bEnableAutoBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.MovementInputComponent.Run
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovementInputComponent::Run(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.MovementInputComponent.Run");
		
		UMovementInputComponent_Run_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.MovementInputComponent.RotateSnap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovementInputComponent::RotateSnap(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.MovementInputComponent.RotateSnap");
		
		UMovementInputComponent_RotateSnap_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.MovementInputComponent.RotateSmooth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovementInputComponent::RotateSmooth(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.MovementInputComponent.RotateSmooth");
		
		UMovementInputComponent_RotateSmooth_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.MovementInputComponent.Move
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovementInputComponent::Move(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.MovementInputComponent.Move");
		
		UMovementInputComponent_Move_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.MovementInputComponent.Crouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMovementInputComponent::Crouch(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.MovementInputComponent.Crouch");
		
		UMovementInputComponent_Crouch_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovementInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovementInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.MovementInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.PlayerHeightAdjustComponent.SetHeightAdjustEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerHeightAdjustComponent::SetHeightAdjustEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.PlayerHeightAdjustComponent.SetHeightAdjustEnable");
		
		UPlayerHeightAdjustComponent_SetHeightAdjustEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.PlayerHeightAdjustComponent.GetHeightAdjustEnable
	 * 		Flags  -> ()
	 */
	bool UPlayerHeightAdjustComponent::GetHeightAdjustEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.PlayerHeightAdjustComponent.GetHeightAdjustEnable");
		
		UPlayerHeightAdjustComponent_GetHeightAdjustEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHeightAdjustComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHeightAdjustComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.PlayerHeightAdjustComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHeightOffsetProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHeightOffsetProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.PlayerHeightOffsetProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.PlayerTeleportListener.OnPrePlayerTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOnPlayerTeleportedInfo                     Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerTeleportListener::OnPrePlayerTeleport(const struct FOnPlayerTeleportedInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.PlayerTeleportListener.OnPrePlayerTeleport");
		
		UPlayerTeleportListener_OnPrePlayerTeleport_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.PlayerTeleportListener.OnPostPlayerTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOnPlayerTeleportedInfo                     Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerTeleportListener::OnPostPlayerTeleport(const struct FOnPlayerTeleportedInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.PlayerTeleportListener.OnPostPlayerTeleport");
		
		UPlayerTeleportListener_OnPostPlayerTeleport_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerTeleportListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerTeleportListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.PlayerTeleportListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectileGunActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectileGunActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.ProjectileGunActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.RequireReleaseBoundaryAction.OnGrabberReleasedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URequireReleaseBoundaryAction::OnGrabberReleasedActor(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.RequireReleaseBoundaryAction.OnGrabberReleasedActor");
		
		URequireReleaseBoundaryAction_OnGrabberReleasedActor_Params params {};
		params.Actor = Actor;
		params.PrimitiveComponent = PrimitiveComponent;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URequireReleaseBoundaryAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URequireReleaseBoundaryAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.RequireReleaseBoundaryAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimpleHingeDoor.UnlockDoorAngle
	 * 		Flags  -> ()
	 */
	void ASimpleHingeDoor::UnlockDoorAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimpleHingeDoor.UnlockDoorAngle");
		
		ASimpleHingeDoor_UnlockDoorAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimpleHingeDoor.LockDoorAngleInDegrees
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleInDegrees                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASimpleHingeDoor::LockDoorAngleInDegrees(float AngleInDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimpleHingeDoor.LockDoorAngleInDegrees");
		
		ASimpleHingeDoor_LockDoorAngleInDegrees_Params params {};
		params.AngleInDegrees = AngleInDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SimpleHingeDoor.GetDoorAngleInDegrees
	 * 		Flags  -> ()
	 */
	float ASimpleHingeDoor::GetDoorAngleInDegrees()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SimpleHingeDoor.GetDoorAngleInDegrees");
		
		ASimpleHingeDoor_GetDoorAngleInDegrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleHingeDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleHingeDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SimpleHingeDoor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASkeletalDoorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkeletalDoorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SkeletalDoorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Socketable.OnRemovedFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketable::OnRemovedFromSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Socketable.OnRemovedFromSocket");
		
		USocketable_OnRemovedFromSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Socketable.OnInsertedInSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketable::OnInsertedInSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Socketable.OnInsertedInSocket");
		
		USocketable_OnInsertedInSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Socketable.OnEndHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketable::OnEndHoverSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Socketable.OnEndHoverSocket");
		
		USocketable_OnEndHoverSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.Socketable.OnBeginHoverSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanSocket                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketable::OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.Socketable.OnBeginHoverSocket");
		
		USocketable_OnBeginHoverSocket_Params params {};
		params.Socket = Socket;
		params.bCanSocket = bCanSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.Socketable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.SetSocketCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketCondition*                            InSocketCondition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::SetSocketCondition(class USocketCondition* InSocketCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.SetSocketCondition");
		
		USocketComponent_SetSocketCondition_Params params {};
		params.InSocketCondition = InSocketCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.SetSocketableGrabbedAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESocketableGrabbedAction                           InGrabbedAction                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::SetSocketableGrabbedAction(ESocketableGrabbedAction InGrabbedAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.SetSocketableGrabbedAction");
		
		USocketComponent_SetSocketableGrabbedAction_Params params {};
		params.InGrabbedAction = InGrabbedAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.SetHoverAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESocketHoverAction                                 NewAction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::SetHoverAction(ESocketHoverAction NewAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.SetHoverAction");
		
		USocketComponent_SetHoverAction_Params params {};
		params.NewAction = NewAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.RemoveActor
	 * 		Flags  -> ()
	 */
	void USocketComponent::RemoveActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.RemoveActor");
		
		USocketComponent_RemoveActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.OnSocketedActorGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::OnSocketedActorGrabbed(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.OnSocketedActorGrabbed");
		
		USocketComponent_OnSocketedActorGrabbed_Params params {};
		params.Actor = Actor;
		params.PrimitiveComponent = PrimitiveComponent;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.OnSocketedActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorBeingDestroyed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::OnSocketedActorDestroyed(class AActor* ActorBeingDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.OnSocketedActorDestroyed");
		
		USocketComponent_OnSocketedActorDestroyed_Params params {};
		params.ActorBeingDestroyed = ActorBeingDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.OnEndOverlap");
		
		USocketComponent_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.OnBeginOverlap");
		
		USocketComponent_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.InsertToSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToPutInSocket                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USocketComponent::InsertToSocket(class AActor* ActorToPutInSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.InsertToSocket");
		
		USocketComponent_InsertToSocket_Params params {};
		params.ActorToPutInSocket = ActorToPutInSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.GetSocketName
	 * 		Flags  -> ()
	 */
	class FString USocketComponent::GetSocketName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.GetSocketName");
		
		USocketComponent_GetSocketName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.GetSocketCondition
	 * 		Flags  -> ()
	 */
	class USocketCondition* USocketComponent::GetSocketCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.GetSocketCondition");
		
		USocketComponent_GetSocketCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.GetSocketableGrabbedAction
	 * 		Flags  -> ()
	 */
	ESocketableGrabbedAction USocketComponent::GetSocketableGrabbedAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.GetSocketableGrabbedAction");
		
		USocketComponent_GetSocketableGrabbedAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.GetHoverAction
	 * 		Flags  -> ()
	 */
	ESocketHoverAction USocketComponent::GetHoverAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.GetHoverAction");
		
		USocketComponent_GetHoverAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.GetActorInSocket
	 * 		Flags  -> ()
	 */
	class AActor* USocketComponent::GetActorInSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.GetActorInSocket");
		
		USocketComponent_GetActorInSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketComponent.CanBeSocketed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USocketComponent::CanBeSocketed(class AActor* Actor, class UPrimitiveComponent* OverlappedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketComponent.CanBeSocketed");
		
		USocketComponent_CanBeSocketed_Params params {};
		params.Actor = Actor;
		params.OverlappedComponent = OverlappedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SocketComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketCondition.CanSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USocketCondition::CanSocket(class USocketComponent* SocketComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketCondition.CanSocket");
		
		USocketCondition_CanSocket_Params params {};
		params.SocketComponent = SocketComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SocketCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketConditionActorType.SetActorClasses
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              InActorClasses                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	void USocketConditionActorType::SetActorClasses(TArray<class UClass*> InActorClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketConditionActorType.SetActorClasses");
		
		USocketConditionActorType_SetActorClasses_Params params {};
		params.InActorClasses = InActorClasses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketConditionActorType.GetMutableActorClasses
	 * 		Flags  -> ()
	 */
	TArray<class UClass*> USocketConditionActorType::GetMutableActorClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketConditionActorType.GetMutableActorClasses");
		
		USocketConditionActorType_GetMutableActorClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SocketConditionActorType.GetActorClasses
	 * 		Flags  -> ()
	 */
	TArray<class UClass*> USocketConditionActorType::GetActorClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SocketConditionActorType.GetActorClasses");
		
		USocketConditionActorType_GetActorClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocketConditionActorType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocketConditionActorType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SocketConditionActorType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineDoorBase.OnIncrementalActivationShouldStopTimerElapsed
	 * 		Flags  -> ()
	 */
	void ASplineDoorBase::OnIncrementalActivationShouldStopTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineDoorBase.OnIncrementalActivationShouldStopTimerElapsed");
		
		ASplineDoorBase_OnIncrementalActivationShouldStopTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineDoorBase.OnIncrementalActivationCanPlayTimerElapsed
	 * 		Flags  -> ()
	 */
	void ASplineDoorBase::OnIncrementalActivationCanPlayTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineDoorBase.OnIncrementalActivationCanPlayTimerElapsed");
		
		ASplineDoorBase_OnIncrementalActivationCanPlayTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineDoorBase.MoveDoorAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentageActivated                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASplineDoorBase::MoveDoorAlongSpline(float DeltaTime, float PercentageActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineDoorBase.MoveDoorAlongSpline");
		
		ASplineDoorBase_MoveDoorAlongSpline_Params params {};
		params.DeltaTime = DeltaTime;
		params.PercentageActivated = PercentageActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASplineDoorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASplineDoorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SplineDoorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.TickBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentageToTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::TickBP(float DeltaSeconds, float PercentageToTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.TickBP");
		
		USplineFollowMovementComponent_TickBP_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.PercentageToTarget = PercentageToTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.StopFollowingSpline
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::StopFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.StopFollowingSpline");
		
		USplineFollowMovementComponent_StopFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.StartFollowingSpline
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::StartFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.StartFollowingSpline");
		
		USplineFollowMovementComponent_StartFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetTargetSplinePointIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewTargetSplinePointIndex                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetTargetSplinePointIndex(int32_t NewTargetSplinePointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetTargetSplinePointIndex");
		
		USplineFollowMovementComponent_SetTargetSplinePointIndex_Params params {};
		params.NewTargetSplinePointIndex = NewTargetSplinePointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetStartingSplinePointIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewStartingSplinePointIndex                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetStartingSplinePointIndex(int32_t NewStartingSplinePointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetStartingSplinePointIndex");
		
		USplineFollowMovementComponent_SetStartingSplinePointIndex_Params params {};
		params.NewStartingSplinePointIndex = NewStartingSplinePointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetSplineToFollowAndDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementDirection                                 NewMovementDirection                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetSplineToFollowAndDirection(class USplineComponent* Spline, EMovementDirection NewMovementDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetSplineToFollowAndDirection");
		
		USplineFollowMovementComponent_SetSplineToFollowAndDirection_Params params {};
		params.Spline = Spline;
		params.NewMovementDirection = NewMovementDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetSplineToFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetSplineToFollow(class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetSplineToFollow");
		
		USplineFollowMovementComponent_SetSplineToFollow_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetSplineMovementDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementDirection                                 NewMovementDirection                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetSplineMovementDirection(EMovementDirection NewMovementDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetSplineMovementDirection");
		
		USplineFollowMovementComponent_SetSplineMovementDirection_Params params {};
		params.NewMovementDirection = NewMovementDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetMinSplineLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetMinSplineLength(float Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetMinSplineLength");
		
		USplineFollowMovementComponent_SetMinSplineLength_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetMaxSplineLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetMaxSplineLength(float Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetMaxSplineLength");
		
		USplineFollowMovementComponent_SetMaxSplineLength_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.SetDistanceAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetDistanceAlongSpline(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.SetDistanceAlongSpline");
		
		USplineFollowMovementComponent_SetDistanceAlongSpline_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.ResetIndexes
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::ResetIndexes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.ResetIndexes");
		
		USplineFollowMovementComponent_ResetIndexes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.MoveOwnerToStartingSplinePoint
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::MoveOwnerToStartingSplinePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.MoveOwnerToStartingSplinePoint");
		
		USplineFollowMovementComponent_MoveOwnerToStartingSplinePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.IsForwardDirection
	 * 		Flags  -> ()
	 */
	bool USplineFollowMovementComponent::IsForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.IsForwardDirection");
		
		USplineFollowMovementComponent_IsForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.IncrementTargetSplinePointIndex
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::IncrementTargetSplinePointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.IncrementTargetSplinePointIndex");
		
		USplineFollowMovementComponent_IncrementTargetSplinePointIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.GetCurrentDistanceAlongSpline
	 * 		Flags  -> ()
	 */
	float USplineFollowMovementComponent::GetCurrentDistanceAlongSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.GetCurrentDistanceAlongSpline");
		
		USplineFollowMovementComponent_GetCurrentDistanceAlongSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.DecrementTargetSplinePointIndex
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::DecrementTargetSplinePointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.DecrementTargetSplinePointIndex");
		
		USplineFollowMovementComponent_DecrementTargetSplinePointIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SplineFollowMovementComponent.CalculateSplineMinMaxSplineLengthFromIndexes
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::CalculateSplineMinMaxSplineLengthFromIndexes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SplineFollowMovementComponent.CalculateSplineMinMaxSplineLengthFromIndexes");
		
		USplineFollowMovementComponent_CalculateSplineMinMaxSplineLengthFromIndexes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineFollowMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineFollowMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SplineFollowMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaticMeshGrabbableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaticMeshGrabbableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.StaticMeshGrabbableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStaticMeshGrabbableSnapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaticMeshGrabbableSnapActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.StaticMeshGrabbableSnapActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseInputLibrary.GetSWGVRKeyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRInputKeys                                    InputKey                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USWGVRBaseInputLibrary::GetSWGVRKeyName(ESWGVRBaseHand hand, ESWGVRInputKeys InputKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseInputLibrary.GetSWGVRKeyName");
		
		USWGVRBaseInputLibrary_GetSWGVRKeyName_Params params {};
		params.hand = hand;
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseInputLibrary.GetKeysFromSWGVRInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRInputKeys                                    InputKey                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKey>                                OutKeys                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USWGVRBaseInputLibrary::GetKeysFromSWGVRInput(ESWGVRBaseHand hand, ESWGVRInputKeys InputKey, TArray<struct FKey>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseInputLibrary.GetKeysFromSWGVRInput");
		
		USWGVRBaseInputLibrary_GetKeysFromSWGVRInput_Params params {};
		params.hand = hand;
		params.InputKey = InputKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGVRBaseInputLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGVRBaseInputLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SWGVRBaseInputLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASWGVRBasePlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASWGVRBasePlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SWGVRBasePlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGVRBaseSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGVRBaseSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SWGVRBaseSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.SwitchVRMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRMode                                         Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGVRBaseSystem::SwitchVRMode(ESWGVRMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.SwitchVRMode");
		
		USWGVRBaseSystem_SwitchVRMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.SwitchToVR
	 * 		Flags  -> ()
	 */
	bool USWGVRBaseSystem::SwitchToVR()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.SwitchToVR");
		
		USWGVRBaseSystem_SwitchToVR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.SwitchToFlat
	 * 		Flags  -> ()
	 */
	bool USWGVRBaseSystem::SwitchToFlat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.SwitchToFlat");
		
		USWGVRBaseSystem_SwitchToFlat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.IsHMDConnected
	 * 		Flags  -> ()
	 */
	bool USWGVRBaseSystem::IsHMDConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.IsHMDConnected");
		
		USWGVRBaseSystem_IsHMDConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.GetVRMode
	 * 		Flags  -> ()
	 */
	ESWGVRMode USWGVRBaseSystem::GetVRMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.GetVRMode");
		
		USWGVRBaseSystem_GetVRMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.GetHmdType
	 * 		Flags  -> ()
	 */
	ESWGVRHmdType USWGVRBaseSystem::GetHmdType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.GetHmdType");
		
		USWGVRBaseSystem_GetHmdType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.SWGVRBaseSystem.ExecuteOnVRMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRMode                                         Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGVRBaseSystem::ExecuteOnVRMode(ESWGVRMode* Branches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.SWGVRBaseSystem.ExecuteOnVRMode");
		
		USWGVRBaseSystem_ExecuteOnVRMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Branches != nullptr)
			*Branches = params.Branches;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGVRBaseSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGVRBaseSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.SWGVRBaseSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTrackPawnToHMD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrackPawnToHMD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.TrackPawnToHMD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.TriggerBoxBase.OnTriggerBoxEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATriggerBoxBase::OnTriggerBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.TriggerBoxBase.OnTriggerBoxEndOverlap");
		
		ATriggerBoxBase_OnTriggerBoxEndOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.TriggerBoxBase.OnTriggerBoxBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ATriggerBoxBase::OnTriggerBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.TriggerBoxBase.OnTriggerBoxBeginOverlap");
		
		ATriggerBoxBase_OnTriggerBoxBeginOverlap_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATriggerBoxBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriggerBoxBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.TriggerBoxBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRDebugPrint.VRPrintToScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MessageText                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRDebugPrint::VRPrintToScreen(class UObject* WorldContextObject, const class FString& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRDebugPrint.VRPrintToScreen");
		
		UVRDebugPrint_VRPrintToScreen_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRDebugPrint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRDebugPrint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRDebugPrint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRDebugPrintTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRDebugPrintTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRDebugPrintTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGazeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGazeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRGazeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.SetupHandsFromHandComponent
	 * 		Flags  -> ()
	 */
	void UVRGrabberComponent::SetupHandsFromHandComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.SetupHandsFromHandComponent");
		
		UVRGrabberComponent_SetupHandsFromHandComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.SetupGrabTriggers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         LeftPrimitive                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         RightPrimitive                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::SetupGrabTriggers(class UPrimitiveComponent* LeftPrimitive, class UPrimitiveComponent* RightPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.SetupGrabTriggers");
		
		UVRGrabberComponent_SetupGrabTriggers_Params params {};
		params.LeftPrimitive = LeftPrimitive;
		params.RightPrimitive = RightPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.SetupGrabAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             LeftAttachment                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             RightAttachment                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::SetupGrabAttachments(class USceneComponent* LeftAttachment, class USceneComponent* RightAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.SetupGrabAttachments");
		
		UVRGrabberComponent_SetupGrabAttachments_Params params {};
		params.LeftAttachment = LeftAttachment;
		params.RightAttachment = RightAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.ReleaseHeldActorFromHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::ReleaseHeldActorFromHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.ReleaseHeldActorFromHand");
		
		UVRGrabberComponent_ReleaseHeldActorFromHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.ReleaseActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToRelease                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::ReleaseActor(class AActor* ActorToRelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.ReleaseActor");
		
		UVRGrabberComponent_ReleaseActor_Params params {};
		params.ActorToRelease = ActorToRelease;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.OnHoveredActorDestroyedHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorBeingDestroyed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::OnHoveredActorDestroyedHandler(class AActor* ActorBeingDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.OnHoveredActorDestroyedHandler");
		
		UVRGrabberComponent_OnHoveredActorDestroyedHandler_Params params {};
		params.ActorBeingDestroyed = ActorBeingDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.OnHeldActorDestroyedHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorBeingDestroyed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::OnHeldActorDestroyedHandler(class AActor* ActorBeingDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.OnHeldActorDestroyedHandler");
		
		UVRGrabberComponent_OnHeldActorDestroyedHandler_Params params {};
		params.ActorBeingDestroyed = ActorBeingDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.OnGrabRightAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::OnGrabRightAxis(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.OnGrabRightAxis");
		
		UVRGrabberComponent_OnGrabRightAxis_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.OnGrabLeftAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::OnGrabLeftAxis(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.OnGrabLeftAxis");
		
		UVRGrabberComponent_OnGrabLeftAxis_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.GrabActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToGrab                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::GrabActor(class AActor* ActorToGrab, class UPrimitiveComponent* ComponentToGrab, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.GrabActor");
		
		UVRGrabberComponent_GrabActor_Params params {};
		params.ActorToGrab = ActorToGrab;
		params.ComponentToGrab = ComponentToGrab;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.GetMotionControllerForHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMotionControllerComponent* UVRGrabberComponent::GetMotionControllerForHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.GetMotionControllerForHand");
		
		UVRGrabberComponent_GetMotionControllerForHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.GetHoveredGrabbableFromHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVRGrabberComponent::GetHoveredGrabbableFromHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.GetHoveredGrabbableFromHand");
		
		UVRGrabberComponent_GetHoveredGrabbableFromHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.GetHeldActorFromHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVRGrabberComponent::GetHeldActorFromHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.GetHeldActorFromHand");
		
		UVRGrabberComponent_GetHeldActorFromHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.GetAttachmentPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USceneComponent* UVRGrabberComponent::GetAttachmentPoint(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.GetAttachmentPoint");
		
		UVRGrabberComponent_GetAttachmentPoint_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.GetAttachmentPhysicsConstraint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhysicsConstraintComponent* UVRGrabberComponent::GetAttachmentPhysicsConstraint(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.GetAttachmentPhysicsConstraint");
		
		UVRGrabberComponent_GetAttachmentPhysicsConstraint_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.AttemptRightRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::AttemptRightRelease(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.AttemptRightRelease");
		
		UVRGrabberComponent_AttemptRightRelease_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.AttemptRightGrab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::AttemptRightGrab(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.AttemptRightGrab");
		
		UVRGrabberComponent_AttemptRightGrab_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.AttemptLeftRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::AttemptLeftRelease(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.AttemptLeftRelease");
		
		UVRGrabberComponent_AttemptLeftRelease_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRGrabberComponent.AttemptLeftGrab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGrabberComponent::AttemptLeftGrab(const struct FInputActionValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRGrabberComponent.AttemptLeftGrab");
		
		UVRGrabberComponent_AttemptLeftGrab_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGrabberComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGrabberComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRGrabberComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.UnconstrainComponent
	 * 		Flags  -> ()
	 */
	void UVRHand::UnconstrainComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.UnconstrainComponent");
		
		UVRHand_UnconstrainComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.SetHandVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::SetHandVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.SetHandVisibility");
		
		UVRHand_SetHandVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.SetHandType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::SetHandType(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.SetHandType");
		
		UVRHand_SetHandType_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.SetHandState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHandModelState                                    State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::SetHandState(EHandModelState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.SetHandState");
		
		UVRHand_SetHandState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.SetHandProximity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Proximity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::SetHandProximity(float Proximity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.SetHandProximity");
		
		UVRHand_SetHandProximity_Params params {};
		params.Proximity = Proximity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.SetHandGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GripValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::SetHandGrip(float GripValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.SetHandGrip");
		
		UVRHand_SetHandGrip_Params params {};
		params.GripValue = GripValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.SetGrabHoverStateEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::SetGrabHoverStateEnable(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.SetGrabHoverStateEnable");
		
		UVRHand_SetGrabHoverStateEnable_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.HandCreationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRHandComponent*                            HandComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::HandCreationFinished(class UVRHandComponent* HandComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.HandCreationFinished");
		
		UVRHand_HandCreationFinished_Params params {};
		params.HandComponent = HandComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetHandType
	 * 		Flags  -> ()
	 */
	ESWGVRBaseHand UVRHand::GetHandType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetHandType");
		
		UVRHand_GetHandType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetHandState
	 * 		Flags  -> ()
	 */
	EHandModelState UVRHand::GetHandState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetHandState");
		
		UVRHand_GetHandState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetHandPrimitive
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UVRHand::GetHandPrimitive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetHandPrimitive");
		
		UVRHand_GetHandPrimitive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetGrabDetector
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UVRHand::GetGrabDetector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetGrabDetector");
		
		UVRHand_GetGrabDetector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetGrabConstraintComponent
	 * 		Flags  -> ()
	 */
	class UPhysicsConstraintComponent* UVRHand::GetGrabConstraintComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetGrabConstraintComponent");
		
		UVRHand_GetGrabConstraintComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetConstraintBase
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UVRHand::GetConstraintBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetConstraintBase");
		
		UVRHand_GetConstraintBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.GetComponentsInGrabRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 ActorsInGrabRange                                          (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRHand::GetComponentsInGrabRange(TArray<class UPrimitiveComponent*>* ActorsInGrabRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.GetComponentsInGrabRange");
		
		UVRHand_GetComponentsInGrabRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsInGrabRange != nullptr)
			*ActorsInGrabRange = params.ActorsInGrabRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHand.ConstrainComponentToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponentToConstrain                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHand::ConstrainComponentToHand(class UPrimitiveComponent* PrimitiveComponentToConstrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHand.ConstrainComponentToHand");
		
		UVRHand_ConstrainComponentToHand_Params params {};
		params.PrimitiveComponentToConstrain = PrimitiveComponentToConstrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRHand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRHand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRHand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandActor.OnReleasedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRHandActor::OnReleasedActor(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandActor.OnReleasedActor");
		
		AVRHandActor_OnReleasedActor_Params params {};
		params.Actor = Actor;
		params.PrimitiveComponent = PrimitiveComponent;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandActor.OnHeldActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HeldActorBeingDestroyed                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRHandActor::OnHeldActorDestroyed(class AActor* HeldActorBeingDestroyed, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandActor.OnHeldActorDestroyed");
		
		AVRHandActor_OnHeldActorDestroyed_Params params {};
		params.HeldActorBeingDestroyed = HeldActorBeingDestroyed;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandActor.OnGrabbedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRHandActor::OnGrabbedActor(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandActor.OnGrabbedActor");
		
		AVRHandActor_OnGrabbedActor_Params params {};
		params.Actor = Actor;
		params.PrimitiveComponent = PrimitiveComponent;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandActor.OnEndGrabHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRHandActor::OnEndGrabHover(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandActor.OnEndGrabHover");
		
		AVRHandActor_OnEndGrabHover_Params params {};
		params.Actor = Actor;
		params.PrimitiveComponent = PrimitiveComponent;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandActor.OnBeginGrabHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRHandActor::OnBeginGrabHover(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandActor.OnBeginGrabHover");
		
		AVRHandActor_OnBeginGrabHover_Params params {};
		params.Actor = Actor;
		params.PrimitiveComponent = PrimitiveComponent;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRHandActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRHandActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRHandActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.UnconstrainComponentFromHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHandComponent::UnconstrainComponentFromHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.UnconstrainComponentFromHand");
		
		UVRHandComponent_UnconstrainComponentFromHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.SpawnHands
	 * 		Flags  -> ()
	 */
	void UVRHandComponent::SpawnHands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.SpawnHands");
		
		UVRHandComponent_SpawnHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.SetVisibilityOfHandActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHandComponent::SetVisibilityOfHandActor(ESWGVRBaseHand hand, bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.SetVisibilityOfHandActor");
		
		UVRHandComponent_SetVisibilityOfHandActor_Params params {};
		params.hand = hand;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.SetVisibilityBothHandActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHandComponent::SetVisibilityBothHandActors(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.SetVisibilityBothHandActors");
		
		UVRHandComponent_SetVisibilityBothHandActors_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.HandsAreCreated
	 * 		Flags  -> ()
	 */
	bool UVRHandComponent::HandsAreCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.HandsAreCreated");
		
		UVRHandComponent_HandsAreCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.GetMotionControllerForHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMotionControllerComponent* UVRHandComponent::GetMotionControllerForHand(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.GetMotionControllerForHand");
		
		UVRHandComponent_GetMotionControllerForHand_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.GetHandActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVRHandComponent::GetHandActor(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.GetHandActor");
		
		UVRHandComponent_GetHandActor_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRHandComponent.ConstrainComponentToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PrimitiveComponentToConstrain                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRHandComponent::ConstrainComponentToHand(ESWGVRBaseHand hand, class UPrimitiveComponent* PrimitiveComponentToConstrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRHandComponent.ConstrainComponentToHand");
		
		UVRHandComponent_ConstrainComponentToHand_Params params {};
		params.hand = hand;
		params.PrimitiveComponentToConstrain = PrimitiveComponentToConstrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRHandComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRHandComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRHandComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.TeleportVRPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    WorldRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRPlayer::TeleportVRPlayer(const struct FVector& WorldLocation, const struct FRotator& WorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.TeleportVRPlayer");
		
		UVRPlayer_TeleportVRPlayer_Params params {};
		params.WorldLocation = WorldLocation;
		params.WorldRotation = WorldRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.ResetVRView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRPlayer::ResetVRView(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.ResetVRView");
		
		UVRPlayer_ResetVRView_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.ResetViewAfterFrame
	 * 		Flags  -> ()
	 */
	void UVRPlayer::ResetViewAfterFrame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.ResetViewAfterFrame");
		
		UVRPlayer_ResetViewAfterFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.RemoveMappingContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMappingContext*                        InInputMappingContext                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRPlayer::RemoveMappingContext(class UInputMappingContext* InInputMappingContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.RemoveMappingContext");
		
		UVRPlayer_RemoveMappingContext_Params params {};
		params.InInputMappingContext = InInputMappingContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.PreTeleportVRPlayer
	 * 		Flags  -> ()
	 */
	void UVRPlayer::PreTeleportVRPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.PreTeleportVRPlayer");
		
		UVRPlayer_PreTeleportVRPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.PostTeleportVRPlayer
	 * 		Flags  -> ()
	 */
	void UVRPlayer::PostTeleportVRPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.PostTeleportVRPlayer");
		
		UVRPlayer_PostTeleportVRPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetVROrigin
	 * 		Flags  -> ()
	 */
	class USceneComponent* UVRPlayer::GetVROrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetVROrigin");
		
		UVRPlayer_GetVROrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetPlayerInputRotationType
	 * 		Flags  -> ()
	 */
	EPlayerRotationInputType UVRPlayer::GetPlayerInputRotationType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetPlayerInputRotationType");
		
		UVRPlayer_GetPlayerInputRotationType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetPlayerInputRotationScale
	 * 		Flags  -> ()
	 */
	float UVRPlayer::GetPlayerInputRotationScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetPlayerInputRotationScale");
		
		UVRPlayer_GetPlayerInputRotationScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetPlayerCamera
	 * 		Flags  -> ()
	 */
	class UCameraComponent* UVRPlayer::GetPlayerCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetPlayerCamera");
		
		UVRPlayer_GetPlayerCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetMotionController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMotionControllerComponent* UVRPlayer::GetMotionController(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetMotionController");
		
		UVRPlayer_GetMotionController_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetInvertHandControls
	 * 		Flags  -> ()
	 */
	bool UVRPlayer::GetInvertHandControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetInvertHandControls");
		
		UVRPlayer_GetInvertHandControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.GetCameraBrightnessSetting
	 * 		Flags  -> ()
	 */
	float UVRPlayer::GetCameraBrightnessSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.GetCameraBrightnessSetting");
		
		UVRPlayer_GetCameraBrightnessSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayer.AddMappingContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInputMappingContext*                        InInputMappingContext                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRPlayer::AddMappingContext(class UInputMappingContext* InInputMappingContext, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayer.AddMappingContext");
		
		UVRPlayer_AddMappingContext_Params params {};
		params.InInputMappingContext = InInputMappingContext;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayerWidgetInteractor.SetWidgetPointerIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointerIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRPlayerWidgetInteractor::SetWidgetPointerIndex(int32_t PointerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayerWidgetInteractor.SetWidgetPointerIndex");
		
		UVRPlayerWidgetInteractor_SetWidgetPointerIndex_Params params {};
		params.PointerIndex = PointerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayerWidgetInteractor.SetWidgetInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRPlayerWidgetInteractor::SetWidgetInteractionEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayerWidgetInteractor.SetWidgetInteractionEnabled");
		
		UVRPlayerWidgetInteractor_SetWidgetInteractionEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayerWidgetInteractor.SetInteractionDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRPlayerWidgetInteractor::SetInteractionDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayerWidgetInteractor.SetInteractionDistance");
		
		UVRPlayerWidgetInteractor_SetInteractionDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRPlayerWidgetInteractor.IsWidgetInteractionEnabled
	 * 		Flags  -> ()
	 */
	bool UVRPlayerWidgetInteractor::IsWidgetInteractionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRPlayerWidgetInteractor.IsWidgetInteractionEnabled");
		
		UVRPlayerWidgetInteractor_IsWidgetInteractionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRPlayerWidgetInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRPlayerWidgetInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRPlayerWidgetInteractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportComponent.SetupHandBeams
	 * 		Flags  -> ()
	 */
	void UVRTeleportComponent::SetupHandBeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportComponent.SetupHandBeams");
		
		UVRTeleportComponent_SetupHandBeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportComponent.SetAutoBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableAutoBind                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRTeleportComponent::SetAutoBind(bool bEnableAutoBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportComponent.SetAutoBind");
		
		UVRTeleportComponent_SetAutoBind_Params params {};
		params.bEnableAutoBind = bEnableAutoBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportComponent.RemoveIgnoreActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToRemove                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRTeleportComponent::RemoveIgnoreActor(class AActor* ActorToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportComponent.RemoveIgnoreActor");
		
		UVRTeleportComponent_RemoveIgnoreActor_Params params {};
		params.ActorToRemove = ActorToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportComponent.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRHandComponent*                            HandComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRTeleportComponent::Init(class UVRHandComponent* HandComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportComponent.Init");
		
		UVRTeleportComponent_Init_Params params {};
		params.HandComp = HandComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportComponent.GetTeleportLocationActor
	 * 		Flags  -> ()
	 */
	class AStaticMeshActor* UVRTeleportComponent::GetTeleportLocationActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportComponent.GetTeleportLocationActor");
		
		UVRTeleportComponent_GetTeleportLocationActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportComponent.AddIgnoreActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToIgnore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRTeleportComponent::AddIgnoreActor(class AActor* ActorToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportComponent.AddIgnoreActor");
		
		UVRTeleportComponent_AddIgnoreActor_Params params {};
		params.ActorToIgnore = ActorToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRTeleportComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRTeleportComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRTeleportComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGVRBase.VRTeleportRule.IsGroundValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      GroundActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         GroundComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRTeleportRule::IsGroundValid(class AActor* GroundActor, class UPrimitiveComponent* GroundComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGVRBase.VRTeleportRule.IsGroundValid");
		
		UVRTeleportRule_IsGroundValid_Params params {};
		params.GroundActor = GroundActor;
		params.GroundComponent = GroundComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRTeleportRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRTeleportRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRTeleportRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRTeleportRule_Tags.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRTeleportRule_Tags::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGVRBase.VRTeleportRule_Tags");
		return ptr;
	}

}


