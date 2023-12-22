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
	 * 		Name   -> Function SWGCommonGame.SightFilter.CanBeSeen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USightComponent*                             SightComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVisualSourceComponent*                      VisualSourceComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USightFilter::CanBeSeen(class USightComponent* SightComponent, class UVisualSourceComponent* VisualSourceComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightFilter.CanBeSeen");
		
		USightFilter_CanBeSeen_Params params {};
		params.SightComponent = SightComponent;
		params.VisualSourceComponent = VisualSourceComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USightFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SightFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.HitAudioComponentBasic.SetSoundEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHitAudioComponentBasic::SetSoundEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.HitAudioComponentBasic.SetSoundEnable");
		
		UHitAudioComponentBasic_SetSoundEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.HitAudioComponentBasic.SetHitSoundSoft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  InSoundOnHitSoft                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHitAudioComponentBasic::SetHitSoundSoft(class USoundBase* InSoundOnHitSoft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.HitAudioComponentBasic.SetHitSoundSoft");
		
		UHitAudioComponentBasic_SetHitSoundSoft_Params params {};
		params.InSoundOnHitSoft = InSoundOnHitSoft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.HitAudioComponentBasic.SetHitSoundHard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  InSoundOnHit                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHitAudioComponentBasic::SetHitSoundHard(class USoundBase* InSoundOnHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.HitAudioComponentBasic.SetHitSoundHard");
		
		UHitAudioComponentBasic_SetHitSoundHard_Params params {};
		params.InSoundOnHit = InSoundOnHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.HitAudioComponentBasic.OnActorHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHitAudioComponentBasic::OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.HitAudioComponentBasic.OnActorHit");
		
		UHitAudioComponentBasic_OnActorHit_Params params {};
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
	 * 		Name   -> Function SWGCommonGame.HitAudioComponentBasic.GetHitSoundSoft
	 * 		Flags  -> ()
	 */
	class USoundBase* UHitAudioComponentBasic::GetHitSoundSoft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.HitAudioComponentBasic.GetHitSoundSoft");
		
		UHitAudioComponentBasic_GetHitSoundSoft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.HitAudioComponentBasic.GetHitSoundHard
	 * 		Flags  -> ()
	 */
	class USoundBase* UHitAudioComponentBasic::GetHitSoundHard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.HitAudioComponentBasic.GetHitSoundHard");
		
		UHitAudioComponentBasic_GetHitSoundHard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitAudioComponentBasic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitAudioComponentBasic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.HitAudioComponentBasic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.BoundaryHandlerAction.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoundaryHandlerAction::Setup(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.BoundaryHandlerAction.Setup");
		
		UBoundaryHandlerAction_Setup_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.BoundaryHandlerAction.OnBoundaryHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorHittingBoundary                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoundaryHandlerAction::OnBoundaryHit(class AActor* ActorHittingBoundary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.BoundaryHandlerAction.OnBoundaryHit");
		
		UBoundaryHandlerAction_OnBoundaryHit_Params params {};
		params.ActorHittingBoundary = ActorHittingBoundary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.BoundaryHandlerAction.OnBoundaryExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorExitingBoundary                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoundaryHandlerAction::OnBoundaryExit(class AActor* ActorExitingBoundary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.BoundaryHandlerAction.OnBoundaryExit");
		
		UBoundaryHandlerAction_OnBoundaryExit_Params params {};
		params.ActorExitingBoundary = ActorExitingBoundary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoundaryHandlerAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoundaryHandlerAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.BoundaryHandlerAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABoundaryBoxVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABoundaryBoxVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.BoundaryBoxVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.BoundaryComponent.OnActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlapActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoundaryComponent::OnActorEndOverlap(class AActor* OverlapActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.BoundaryComponent.OnActorEndOverlap");
		
		UBoundaryComponent_OnActorEndOverlap_Params params {};
		params.OverlapActor = OverlapActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.BoundaryComponent.OnActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlapActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoundaryComponent::OnActorBeginOverlap(class AActor* OverlapActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.BoundaryComponent.OnActorBeginOverlap");
		
		UBoundaryComponent_OnActorBeginOverlap_Params params {};
		params.OverlapActor = OverlapActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoundaryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoundaryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.BoundaryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoundaryHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoundaryHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.BoundaryHandlerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootstepCameraShakeData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootstepCameraShakeData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.FootstepCameraShakeData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootstepSoundData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootstepSoundData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.FootstepSoundData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.FPSWatchdogInterface.OnShowFPSWatermark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFPSWatchdogInterface::OnShowFPSWatermark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.FPSWatchdogInterface.OnShowFPSWatermark");
		
		UFPSWatchdogInterface_OnShowFPSWatermark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPSWatchdogInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPSWatchdogInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.FPSWatchdogInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerformanceWatchdogBaseSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerformanceWatchdogBaseSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.PerformanceWatchdogBaseSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPSWatchdogSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPSWatchdogSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.FPSWatchdogSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInitialPositionBoundaryAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInitialPositionBoundaryAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.InitialPositionBoundaryAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.LightFlickerComponent.SetLightFlickerProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLightFlickerProperties                     InLightFlickerProperties                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightFlickerComponent::SetLightFlickerProperties(const struct FLightFlickerProperties& InLightFlickerProperties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.LightFlickerComponent.SetLightFlickerProperties");
		
		ULightFlickerComponent_SetLightFlickerProperties_Params params {};
		params.InLightFlickerProperties = InLightFlickerProperties;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.LightFlickerComponent.SetFlickerActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightFlickerComponent::SetFlickerActive(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.LightFlickerComponent.SetFlickerActive");
		
		ULightFlickerComponent_SetFlickerActive_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightFlickerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightFlickerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.LightFlickerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.MemoryWatchdogInterface.OnShowMemoryWatermark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMemoryWatchdogInterface::OnShowMemoryWatermark(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.MemoryWatchdogInterface.OnShowMemoryWatermark");
		
		UMemoryWatchdogInterface_OnShowMemoryWatermark_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMemoryWatchdogInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMemoryWatchdogInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.MemoryWatchdogInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMemoryWatchdogSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMemoryWatchdogSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.MemoryWatchdogSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.PlatformFeatureSubsystem.UnregisterCallback
	 * 		Flags  -> ()
	 */
	void UPlatformFeatureSubsystem::UnregisterCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.PlatformFeatureSubsystem.UnregisterCallback");
		
		UPlatformFeatureSubsystem_UnregisterCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.PlatformFeatureSubsystem.RegisterCallback
	 * 		Flags  -> ()
	 */
	void UPlatformFeatureSubsystem::RegisterCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.PlatformFeatureSubsystem.RegisterCallback");
		
		UPlatformFeatureSubsystem_RegisterCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.PlatformFeatureSubsystem.ProgressAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AchievementID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPlatformFeatureSubsystem::ProgressAchievement(const class FString& AchievementID, int32_t Progress, const class FString& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.PlatformFeatureSubsystem.ProgressAchievement");
		
		UPlatformFeatureSubsystem_ProgressAchievement_Params params {};
		params.AchievementID = AchievementID;
		params.Progress = Progress;
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.PlatformFeatureSubsystem.GetAchievementsFromBackend
	 * 		Flags  -> ()
	 */
	void UPlatformFeatureSubsystem::GetAchievementsFromBackend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.PlatformFeatureSubsystem.GetAchievementsFromBackend");
		
		UPlatformFeatureSubsystem_GetAchievementsFromBackend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.PlatformFeatureSubsystem.ClearActivityToLoad
	 * 		Flags  -> ()
	 */
	void UPlatformFeatureSubsystem::ClearActivityToLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.PlatformFeatureSubsystem.ClearActivityToLoad");
		
		UPlatformFeatureSubsystem_ClearActivityToLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformFeatureSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformFeatureSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.PlatformFeatureSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerSightFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerSightFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.PlayerSightFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetStartAndEndPercentageForRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRangeArray                                 RangeArray                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        RangeName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutStartPercentage                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutEndPercentage                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URangeArrayBlueprintFunctionLibrary::GetStartAndEndPercentageForRange(const struct FRangeArray& RangeArray, const class FName& RangeName, float* OutStartPercentage, float* OutEndPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetStartAndEndPercentageForRange");
		
		URangeArrayBlueprintFunctionLibrary_GetStartAndEndPercentageForRange_Params params {};
		params.RangeArray = RangeArray;
		params.RangeName = RangeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStartPercentage != nullptr)
			*OutStartPercentage = params.OutStartPercentage;
		if (OutEndPercentage != nullptr)
			*OutEndPercentage = params.OutEndPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetRangeNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRangeArray                                 RangeArray                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                OutRangeNames                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URangeArrayBlueprintFunctionLibrary::GetRangeNames(const struct FRangeArray& RangeArray, TArray<class FName>* OutRangeNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetRangeNames");
		
		URangeArrayBlueprintFunctionLibrary_GetRangeNames_Params params {};
		params.RangeArray = RangeArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRangeNames != nullptr)
			*OutRangeNames = params.OutRangeNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetRangeAndIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRangeArray                                 RangeArray                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTaggedRange                                OutRange                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URangeArrayBlueprintFunctionLibrary::GetRangeAndIndex(const struct FRangeArray& RangeArray, float InValue, struct FTaggedRange* OutRange, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetRangeAndIndex");
		
		URangeArrayBlueprintFunctionLibrary_GetRangeAndIndex_Params params {};
		params.RangeArray = RangeArray;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRange != nullptr)
			*OutRange = params.OutRange;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeArrayBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeArrayBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.RangeArrayBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeAsset.GetRangeArray
	 * 		Flags  -> ()
	 */
	struct FRangeArray URangeAsset::GetRangeArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeAsset.GetRangeArray");
		
		URangeAsset_GetRangeArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeAsset.GetRangeAndIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTaggedRange                                OutRange                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URangeAsset::GetRangeAndIndex(float InValue, struct FTaggedRange* OutRange, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeAsset.GetRangeAndIndex");
		
		URangeAsset_GetRangeAndIndex_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRange != nullptr)
			*OutRange = params.OutRange;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.RangeAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeDelegatesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeDelegatesComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.RangeDelegatesComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeProvider.GetRangeArray
	 * 		Flags  -> ()
	 */
	struct FRangeArray URangeProvider::GetRangeArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeProvider.GetRangeArray");
		
		URangeProvider_GetRangeArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.RangeProvider.GetCurrentRangeName
	 * 		Flags  -> ()
	 */
	class FName URangeProvider::GetCurrentRangeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.RangeProvider.GetCurrentRangeName");
		
		URangeProvider_GetCurrentRangeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URangeProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.RangeProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetSightType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESightType                                         InSightType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightType(ESightType InSightType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetSightType");
		
		USightComponent_SetSightType_Params params {};
		params.InSightType = InSightType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetSightParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightParams(float Angle, float MinDistance, float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetSightParams");
		
		USightComponent_SetSightParams_Params params {};
		params.Angle = Angle;
		params.MinDistance = MinDistance;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetSightEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetSightEnabled");
		
		USightComponent_SetSightEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetSightAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetSightAngle");
		
		USightComponent_SetSightAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetFrustumTypeParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMaxYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMinPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMaxPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetFrustumTypeParams");
		
		USightComponent_SetFrustumTypeParams_Params params {};
		params.InMinYaw = InMinYaw;
		params.InMaxYaw = InMaxYaw;
		params.InMinPitch = InMinPitch;
		params.InMaxPitch = InMaxPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetEndDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetEndDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetEndDistance");
		
		USightComponent_SetEndDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.SetAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetAspectRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.SetAspectRatio");
		
		USightComponent_SetAspectRatio_Params params {};
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.OnVisibleActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnVisibleActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.OnVisibleActorDestroyed");
		
		USightComponent_OnVisibleActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.IsSightEnabled
	 * 		Flags  -> ()
	 */
	bool USightComponent::IsSightEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.IsSightEnabled");
		
		USightComponent_IsSightEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.IsActorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USightComponent::IsActorVisible(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.IsActorVisible");
		
		USightComponent_IsActorVisible_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetVisibleActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> USightComponent::GetVisibleActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetVisibleActors");
		
		USightComponent_GetVisibleActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetStartDistance
	 * 		Flags  -> ()
	 */
	float USightComponent::GetStartDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetStartDistance");
		
		USightComponent_GetStartDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetSightType
	 * 		Flags  -> ()
	 */
	ESightType USightComponent::GetSightType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetSightType");
		
		USightComponent_GetSightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetSightHalfAngle
	 * 		Flags  -> ()
	 */
	float USightComponent::GetSightHalfAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetSightHalfAngle");
		
		USightComponent_GetSightHalfAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetMinYaw
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMinYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetMinYaw");
		
		USightComponent_GetMinYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetMinPitch
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMinPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetMinPitch");
		
		USightComponent_GetMinPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetMaxYaw
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMaxYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetMaxYaw");
		
		USightComponent_GetMaxYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetMaxPitch
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMaxPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetMaxPitch");
		
		USightComponent_GetMaxPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetFrustumTypeParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutMinYaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMaxYaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMinPitch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMaxPitch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetFrustumTypeParams");
		
		USightComponent_GetFrustumTypeParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMinYaw != nullptr)
			*OutMinYaw = params.OutMinYaw;
		if (OutMaxYaw != nullptr)
			*OutMaxYaw = params.OutMaxYaw;
		if (OutMinPitch != nullptr)
			*OutMinPitch = params.OutMinPitch;
		if (OutMaxPitch != nullptr)
			*OutMaxPitch = params.OutMaxPitch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetEndDistance
	 * 		Flags  -> ()
	 */
	float USightComponent::GetEndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetEndDistance");
		
		USightComponent_GetEndDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightComponent.GetAspectRatio
	 * 		Flags  -> ()
	 */
	float USightComponent::GetAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightComponent.GetAspectRatio");
		
		USightComponent_GetAspectRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USightFilterActorType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightFilterActorType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SightFilterActorType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SightSystem.SetSightSystemDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightSystem::SetSightSystemDisplay(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SightSystem.SetSightSystemDisplay");
		
		USightSystem_SetSightSystemDisplay_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USightSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SightSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGCommonGameplayTagsLibrary.GetTagChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FGameplayTagContainer USWGCommonGameplayTagsLibrary::GetTagChildren(const struct FGameplayTag& GameplayTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGCommonGameplayTagsLibrary.GetTagChildren");
		
		USWGCommonGameplayTagsLibrary_GetTagChildren_Params params {};
		params.GameplayTag = GameplayTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGCommonGameplayTagsLibrary.GetAllGameplayTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       GameplayTags                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void USWGCommonGameplayTagsLibrary::GetAllGameplayTags(struct FGameplayTagContainer* GameplayTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGCommonGameplayTagsLibrary.GetAllGameplayTags");
		
		USWGCommonGameplayTagsLibrary_GetAllGameplayTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameplayTags != nullptr)
			*GameplayTags = params.GameplayTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGCommonGameplayTagsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGCommonGameplayTagsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SWGCommonGameplayTagsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitilesFunctionLibrary.PlayVOWithSubtitlesAndWait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioComponent*                             AudioComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESWGPlayVOExec                                     Exec                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USWGSubtitilesFunctionLibrary::PlayVOWithSubtitlesAndWait(class UObject* WorldContextObject, class UAudioComponent* AudioComponent, float StartTime, ESWGPlayVOExec* Exec, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitilesFunctionLibrary.PlayVOWithSubtitlesAndWait");
		
		USWGSubtitilesFunctionLibrary_PlayVOWithSubtitlesAndWait_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioComponent = AudioComponent;
		params.StartTime = StartTime;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exec != nullptr)
			*Exec = params.Exec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitilesFunctionLibrary.PlayVOWithSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAudioComponent*                             AudioComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGSubtitilesFunctionLibrary::PlayVOWithSubtitles(class UObject* WorldContextObject, class UAudioComponent* AudioComponent, float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitilesFunctionLibrary.PlayVOWithSubtitles");
		
		USWGSubtitilesFunctionLibrary_PlayVOWithSubtitles_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AudioComponent = AudioComponent;
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGSubtitilesFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGSubtitilesFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SWGSubtitilesFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitlesInterface.UpdateSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Speaker                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USWGSubtitlesInterface::UpdateSubtitles(const class FText& Speaker, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitlesInterface.UpdateSubtitles");
		
		USWGSubtitlesInterface_UpdateSubtitles_Params params {};
		params.Speaker = Speaker;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitlesInterface.SetupSubtitleStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubtitlesSize                                     Style                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGSubtitlesInterface::SetupSubtitleStyle(ESubtitlesSize Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitlesInterface.SetupSubtitleStyle");
		
		USWGSubtitlesInterface_SetupSubtitleStyle_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitlesInterface.OnShowSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGSubtitlesInterface::OnShowSubtitles(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitlesInterface.OnShowSubtitles");
		
		USWGSubtitlesInterface_OnShowSubtitles_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGSubtitlesInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGSubtitlesInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SWGSubtitlesInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitlesSubsystem.QueueSubtitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSubtitleRecord>                     InRecords                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USWGSubtitlesSubsystem::QueueSubtitle(TArray<struct FSubtitleRecord> InRecords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitlesSubsystem.QueueSubtitle");
		
		USWGSubtitlesSubsystem_QueueSubtitle_Params params {};
		params.InRecords = InRecords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.SWGSubtitlesSubsystem.ClearQueueSubtitle
	 * 		Flags  -> ()
	 */
	void USWGSubtitlesSubsystem::ClearQueueSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.SWGSubtitlesSubsystem.ClearQueueSubtitle");
		
		USWGSubtitlesSubsystem_ClearQueueSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGSubtitlesSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGSubtitlesSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.SWGSubtitlesSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualQualityFunctionLibrary.ApplyVisualQualitySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVisualQualityPlatformData*                  QualitySettings                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVisualQualityLevel                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualQualityFunctionLibrary::ApplyVisualQualitySettings(class UObject* WorldContextObject, class UVisualQualityPlatformData* QualitySettings, EVisualQualityLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualQualityFunctionLibrary.ApplyVisualQualitySettings");
		
		UVisualQualityFunctionLibrary_ApplyVisualQualitySettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QualitySettings = QualitySettings;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualQualityFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualQualityFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualQualityFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualQualityLevelData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualQualityLevelData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualQualityLevelData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualQualityPlatformData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualQualityPlatformData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualQualityPlatformData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualQualityOptionsData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualQualityOptionsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualQualityOptionsData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualQualitySettingSpec.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualQualitySettingSpec::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualQualitySettingSpec");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualQualitySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualQualitySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualQualitySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.SetVisualOffsetLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             InVisualOffsets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.SetVisualOffsetLocations");
		
		UVisualSourceComponent_SetVisualOffsetLocations_Params params {};
		params.InVisualOffsets = InVisualOffsets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.SetVisualOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     VisualOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetVisualOffset(int32_t PointIndex, const struct FVector& VisualOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.SetVisualOffset");
		
		UVisualSourceComponent_SetVisualOffset_Params params {};
		params.PointIndex = PointIndex;
		params.VisualOffset = VisualOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.SetSourceVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetSourceVisibility(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.SetSourceVisibility");
		
		UVisualSourceComponent_SetSourceVisibility_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.SetSightFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USightFilter*                                InSightFilter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetSightFilter(class USightFilter* InSightFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.SetSightFilter");
		
		UVisualSourceComponent_SetSightFilter_Params params {};
		params.InSightFilter = InSightFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.SetAutoRegistering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoReg                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetAutoRegistering(bool bAutoReg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.SetAutoRegistering");
		
		UVisualSourceComponent_SetAutoRegistering_Params params {};
		params.bAutoReg = bAutoReg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.RemoveVisualOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::RemoveVisualOffset(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.RemoveVisualOffset");
		
		UVisualSourceComponent_RemoveVisualOffset_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.GetVisualOffsets
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UVisualSourceComponent::GetVisualOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.GetVisualOffsets");
		
		UVisualSourceComponent_GetVisualOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.GetVisualLocations
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UVisualSourceComponent::GetVisualLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.GetVisualLocations");
		
		UVisualSourceComponent_GetVisualLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.GetSourceVisibility
	 * 		Flags  -> ()
	 */
	bool UVisualSourceComponent::GetSourceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.GetSourceVisibility");
		
		UVisualSourceComponent_GetSourceVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.GetSightSourcesWatchingMe
	 * 		Flags  -> ()
	 */
	TArray<class USightComponent*> UVisualSourceComponent::GetSightSourcesWatchingMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.GetSightSourcesWatchingMe");
		
		UVisualSourceComponent_GetSightSourcesWatchingMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.GetSightFilter
	 * 		Flags  -> ()
	 */
	class USightFilter* UVisualSourceComponent::GetSightFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.GetSightFilter");
		
		UVisualSourceComponent_GetSightFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceComponent.GetAutoRegistering
	 * 		Flags  -> ()
	 */
	bool UVisualSourceComponent::GetAutoRegistering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceComponent.GetAutoRegistering");
		
		UVisualSourceComponent_GetAutoRegistering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceSceneComponent.SetVisualSourceEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceSceneComponent::SetVisualSourceEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceSceneComponent.SetVisualSourceEnabled");
		
		UVisualSourceSceneComponent_SetVisualSourceEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SWGCommonGame.VisualSourceSceneComponent.IsVisualSourceEnabled
	 * 		Flags  -> ()
	 */
	bool UVisualSourceSceneComponent::IsVisualSourceEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonGame.VisualSourceSceneComponent.IsVisualSourceEnabled");
		
		UVisualSourceSceneComponent_IsVisualSourceEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualSourceSceneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualSourceSceneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonGame.VisualSourceSceneComponent");
		return ptr;
	}

}


