#pragma once

/**
 * Name: HW2
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SWGVRBase.Activatable.IncrementalActivation
	 */
	struct UActivatable_IncrementalActivation_Params
	{
	public:
		float                                                      PercentageActivated;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Activatable.GetActivation
	 */
	struct UActivatable_GetActivation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Activatable.Deactivated
	 */
	struct UActivatable_Deactivated_Params
	{	};

	/**
	 * Function SWGVRBase.Activatable.Activated
	 */
	struct UActivatable_Activated_Params
	{	};

	/**
	 * Function SWGVRBase.Activator.GetInteractPrimitiveComponents
	 */
	struct UActivator_GetInteractPrimitiveComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BaseShootableCharacter.OnTargetHit_Implementation
	 */
	struct ABaseShootableCharacter_OnTargetHit_Implementation_Params
	{
	public:
		struct FTargetHitParams                                    TargetHitParams;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BaseShootableCharacter.OnHitTaken
	 */
	struct ABaseShootableCharacter_OnHitTaken_Params
	{
	public:
		struct FTargetHitParams                                    TargetHitParams;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BindInputOnGrabbed.OnPhysicsReleased
	 */
	struct UBindInputOnGrabbed_OnPhysicsReleased_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BindInputOnGrabbed.OnPhysicsGrabbed
	 */
	struct UBindInputOnGrabbed_OnPhysicsGrabbed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BindInputOnGrabbed.KeyTriggered
	 */
	struct UBindInputOnGrabbed_KeyTriggered_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BindInputOnGrabbed.KeyReleased
	 */
	struct UBindInputOnGrabbed_KeyReleased_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.BindInputOnGrabbed.KeyPressed
	 */
	struct UBindInputOnGrabbed_KeyPressed_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.SetInteractiblePercentage
	 */
	struct AInteractableBase_SetInteractiblePercentage_Params
	{
	public:
		float                                                      InPercentage;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.SetCanDeactivate
	 */
	struct AInteractableBase_SetCanDeactivate_Params
	{
	public:
		bool                                                       InCanActivate;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.SetCanActivate
	 */
	struct AInteractableBase_SetCanActivate_Params
	{
	public:
		bool                                                       InCanActivate;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.SetActivatableActors
	 */
	struct AInteractableBase_SetActivatableActors_Params
	{
	public:
		TArray<class AActor*>                                      InActivatableActors;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.GetActivatableActors
	 */
	struct AInteractableBase_GetActivatableActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.CanDeactivate
	 */
	struct AInteractableBase_CanDeactivate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.CanActivate
	 */
	struct AInteractableBase_CanActivate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InteractableBase.ActivationEvent
	 */
	struct AInteractableBase_ActivationEvent_Params
	{
	public:
		float                                                      PercentageActivated;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.SetButtonUp
	 */
	struct AButtonBase_SetButtonUp_Params
	{
	public:
		bool                                                       bSendEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.SetButtonDown
	 */
	struct AButtonBase_SetButtonDown_Params
	{
	public:
		bool                                                       bSendEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.SetButtonActive
	 */
	struct AButtonBase_SetButtonActive_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.OnTriggerBoxEndOverlap
	 */
	struct AButtonBase_OnTriggerBoxEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.OnTriggerBoxBeginOverlap
	 */
	struct AButtonBase_OnTriggerBoxBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EHRU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.OnInteractorDestroyed
	 */
	struct AButtonBase_OnInteractorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.IsButtonDown
	 */
	struct AButtonBase_IsButtonDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.ButtonTimelineProgress
	 */
	struct AButtonBase_ButtonTimelineProgress_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.ButtonBase.ButtonReleased
	 */
	struct AButtonBase_ButtonReleased_Params
	{	};

	/**
	 * Function SWGVRBase.ButtonBase.ButtonPressed
	 */
	struct AButtonBase_ButtonPressed_Params
	{	};

	/**
	 * Function SWGVRBase.ButtonBase.ButtonAnimate
	 */
	struct AButtonBase_ButtonAnimate_Params
	{
	public:
		bool                                                       Reverse;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.CompositeSightFilter.SetOperation
	 */
	struct UCompositeSightFilter_SetOperation_Params
	{
	public:
		ESightFilterOp                                             SightFilterOp;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.CompositeSightFilter.GetOperation
	 */
	struct UCompositeSightFilter_GetOperation_Params
	{
	public:
		ESightFilterOp                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.CrankBase.OnIncrementalActivationShouldStopTimerElapsed
	 */
	struct ACrankBase_OnIncrementalActivationShouldStopTimerElapsed_Params
	{	};

	/**
	 * Function SWGVRBase.CrankBase.OnHandleSocketed
	 */
	struct ACrankBase_OnHandleSocketed_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.CrankHandleBase.OnBeginHoverSocket_Implementation
	 */
	struct ACrankHandleBase_OnBeginHoverSocket_Implementation_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanSocket;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.SetToRange
	 */
	struct ADial_SetToRange_Params
	{
	public:
		class FName                                                RangeName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NormalizedPositionWithinRange;                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.SetDistanceToLetGo
	 */
	struct ADial_SetDistanceToLetGo_Params
	{
	public:
		float                                                      NewDistance;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.SetDialMinMax
	 */
	struct ADial_SetDialMinMax_Params
	{
	public:
		float                                                      NewDialMinMax;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.SetDialEnable
	 */
	struct ADial_SetDialEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.SetAngle
	 */
	struct ADial_SetAngle_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.OnRangeChanged
	 */
	struct ADial_OnRangeChanged_Params
	{
	public:
		class FName                                                OldRange;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewRange;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.GetDialEnable
	 */
	struct ADial_GetDialEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.GetCurrentAngle
	 */
	struct ADial_GetCurrentAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Dial.GetActivationForAngle
	 */
	struct ADial_GetActivationForAngle_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.EaterComponent.OnEndOverlap
	 */
	struct UEaterComponent_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.EaterComponent.OnEat
	 */
	struct UEaterComponent_OnEat_Params
	{
	public:
		class AActor*                                              EdibleBeingEaten;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.EaterComponent.OnBeginOverlap
	 */
	struct UEaterComponent_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3ZKJ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.EaterComponent.CanEat
	 */
	struct UEaterComponent_CanEat_Params
	{
	public:
		class AActor*                                              EdibleToCheck;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.EaterComponent.AttemptEat
	 */
	struct UEaterComponent_AttemptEat_Params
	{
	public:
		class AActor*                                              ActorToTryAndEat;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Edible.GetRespawnTransform
	 */
	struct UEdible_GetRespawnTransform_Params
	{
	public:
		class UEaterComponent*                                     EaterComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VG0S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Edible.CanBeEaten
	 */
	struct UEdible_CanBeEaten_Params
	{
	public:
		class UEaterComponent*                                     EaterComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Edible.BeingEaten
	 */
	struct UEdible_BeingEaten_Params
	{
	public:
		class UEaterComponent*                                     EaterComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Flashlight.SetFlashlightEnabled
	 */
	struct UFlashlight_SetFlashlightEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Flashlight.IsFlashlightEnabled
	 */
	struct UFlashlight_IsFlashlightEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.ResetFlashlightTimer
	 */
	struct UFlashlightReactionComponent_ResetFlashlightTimer_Params
	{	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.OnVisibilityChanged
	 */
	struct UFlashlightReactionComponent_OnVisibilityChanged_Params
	{
	public:
		class UVisualSourceComponent*                              VisualSourceComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USightComponent*                                     SightComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.IsVisible
	 */
	struct UFlashlightReactionComponent_IsVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.IsSeenByPlayer
	 */
	struct UFlashlightReactionComponent_IsSeenByPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.IsSeenByFlashlight
	 */
	struct UFlashlightReactionComponent_IsSeenByFlashlight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.GetFlashlightVisibleSeconds
	 */
	struct UFlashlightReactionComponent_GetFlashlightVisibleSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.FlashlightReactionComponent.GetFlashlightSecondsToReact
	 */
	struct UFlashlightReactionComponent_GetFlashlightSecondsToReact_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GazeHandler.OnGazeExit
	 */
	struct UGazeHandler_OnGazeExit_Params
	{
	public:
		class UVRGazeComponent*                                    GazeComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GazeHandler.OnGazeEnter
	 */
	struct UGazeHandler_OnGazeEnter_Params
	{
	public:
		class UVRGazeComponent*                                    GazeComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.OnGrabberReleasedPostVelocity
	 */
	struct UGrabbable_OnGrabberReleasedPostVelocity_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2FXN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HeldComponent;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.OnGrabberReleased
	 */
	struct UGrabbable_OnGrabberReleased_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Grabber;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QXPL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.OnGrabberGrabbed
	 */
	struct UGrabbable_OnGrabberGrabbed_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8SS6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.OnEndGrabberHover
	 */
	struct UGrabbable_OnEndGrabberHover_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VYWD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.OnBeginGrabberHover
	 */
	struct UGrabbable_OnBeginGrabberHover_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L2GO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.GetGrabber
	 */
	struct UGrabbable_GetGrabber_Params
	{
	public:
		class UVRGrabberComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.CanBeReleased
	 */
	struct UGrabbable_CanBeReleased_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EHandReleaseEnable                                         ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Grabbable.CanBeGrabbed
	 */
	struct UGrabbable_CanBeGrabbed_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1QRR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabbablePhysicsActor.GetGrabbableComponent
	 */
	struct AGrabbablePhysicsActor_GetGrabbableComponent_Params
	{
	public:
		class USimplePhysicsGrabbableComponent*                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabbableSnapActor.GetGrabbableComponent
	 */
	struct AGrabbableSnapActor_GetGrabbableComponent_Params
	{
	public:
		class UGrabbableSnapComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SimplePhysicsGrabbableComponent.SetReleaseEnable
	 */
	struct USimplePhysicsGrabbableComponent_SetReleaseEnable_Params
	{
	public:
		EHandReleaseEnable                                         Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SimplePhysicsGrabbableComponent.SetCanBeGrabbed
	 */
	struct USimplePhysicsGrabbableComponent_SetCanBeGrabbed_Params
	{
	public:
		bool                                                       bNewCanBeGrabbed;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SimplePhysicsGrabbableComponent.OnOwningActorEndOverlap
	 */
	struct USimplePhysicsGrabbableComponent_OnOwningActorEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SimplePhysicsGrabbableComponent.GetHandHoldingMe
	 */
	struct USimplePhysicsGrabbableComponent_GetHandHoldingMe_Params
	{
	public:
		ESWGVRBaseHand                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabbableSnapComponent.SetGrabTransform
	 */
	struct UGrabbableSnapComponent_SetGrabTransform_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabbableSnapComponent.GetGrabTransform
	 */
	struct UGrabbableSnapComponent_GetGrabTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabHighlightComponent.SetHighlightEnabled
	 */
	struct UGrabHighlightComponent_SetHighlightEnabled_Params
	{
	public:
		bool                                                       bEnableHighlight;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabHighlightComponent.SetAllowHighlightsOnHover
	 */
	struct UGrabHighlightComponent_SetAllowHighlightsOnHover_Params
	{
	public:
		bool                                                       bInAllowHighlights;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabHighlightComponent.IsHighlighted
	 */
	struct UGrabHighlightComponent_IsHighlighted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabHighlightComponent.GetAllowHighlightsOnHover
	 */
	struct UGrabHighlightComponent_GetAllowHighlightsOnHover_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabSlideComponent.SetSliderPercentage
	 */
	struct UGrabSlideComponent_SetSliderPercentage_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabSlideComponent.SetSliderComponent
	 */
	struct UGrabSlideComponent_SetSliderComponent_Params
	{
	public:
		class USceneComponent*                                     SliderComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabSlideComponent.SetCanBeGrabbed
	 */
	struct UGrabSlideComponent_SetCanBeGrabbed_Params
	{
	public:
		bool                                                       bEnableGrab;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabSlideComponent.IsHeld
	 */
	struct UGrabSlideComponent_IsHeld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabSlideComponent.GetPercentAlongPath
	 */
	struct UGrabSlideComponent_GetPercentAlongPath_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GrabSlideComponent.GetHandHoldingMe
	 */
	struct UGrabSlideComponent_GetHandHoldingMe_Params
	{
	public:
		ESWGVRBaseHand                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunActor.OnFireReleased
	 */
	struct AGunActor_OnFireReleased_Params
	{	};

	/**
	 * Function SWGVRBase.GunActor.OnFirePressed
	 */
	struct AGunActor_OnFirePressed_Params
	{	};

	/**
	 * Function SWGVRBase.GunActor.IsFiring
	 */
	struct AGunActor_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunActor.GetGunMesh
	 */
	struct AGunActor_GetGunMesh_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunActor.GetGrabComponent
	 */
	struct AGunActor_GetGrabComponent_Params
	{
	public:
		class UGrabbableSnapComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunActor.GetFireTransform
	 */
	struct AGunActor_GetFireTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunActor.GetFireLocationComponent
	 */
	struct AGunActor_GetFireLocationComponent_Params
	{
	public:
		class UArrowComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunProjectile.SetupProjectile
	 */
	struct UGunProjectile_SetupProjectile_Params
	{
	public:
		class AProjectileGunActor*                                 Gun;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunProjectile.GetGun
	 */
	struct UGunProjectile_GetGun_Params
	{
	public:
		class AProjectileGunActor*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunProjectileActor.OnProjectileHit
	 */
	struct AGunProjectileActor_OnProjectileHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.GunTarget.OnTargetHit
	 */
	struct UGunTarget_OnTargetHit_Params
	{
	public:
		struct FTargetHitParams                                    TargetHitParams;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandPointerHandler.OnBlockerComponentHit
	 */
	struct UHandPointerHandler_OnBlockerComponentHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandProximityState.OnComponentEndOverlap
	 */
	struct UHandProximityState_OnComponentEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandProximityState.OnComponentBeginOverlap
	 */
	struct UHandProximityState_OnComponentBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y2FF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandProximityState.OnActorEndOverlap
	 */
	struct UHandProximityState_OnActorEndOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandProximityState.OnActorBeginOverlap
	 */
	struct UHandProximityState_OnActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandUtilityFunctions.ToControllerHand
	 */
	struct UHandUtilityFunctions_ToControllerHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerHand                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandUtilityFunctions.HandToString
	 */
	struct UHandUtilityFunctions_HandToString_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EH7O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HandUtilityFunctions.GetOppositeHand
	 */
	struct UHandUtilityFunctions_GetOppositeHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HeadBlinderDetector.SetBlinderShown
	 */
	struct UHeadBlinderDetector_SetBlinderShown_Params
	{
	public:
		bool                                                       bShown;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HeadBlinderDetector.SetBlidnerEnabled
	 */
	struct UHeadBlinderDetector_SetBlidnerEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HeadBlinderDetector.OnHeadOverlap
	 */
	struct UHeadBlinderDetector_OnHeadOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4XLR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HeadBlinderDetector.OnHeadEndOverlap
	 */
	struct UHeadBlinderDetector_OnHeadEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HeadBlinderDetector.IsBlinderShown
	 */
	struct UHeadBlinderDetector_IsBlinderShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HeadBlinderDetector.GetBlinderEnabled
	 */
	struct UHeadBlinderDetector_GetBlinderEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HighlightsSystem.SetOutlineMaterial
	 */
	struct UHighlightsSystem_SetOutlineMaterial_Params
	{
	public:
		class UMaterialInstance*                                   MaterialInstance;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HighlightsSystem.SetHighlightsEnabled
	 */
	struct UHighlightsSystem_SetHighlightsEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HighlightsSystem.GetHighlightsEnabled
	 */
	struct UHighlightsSystem_GetHighlightsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HitAudioComponentVR.OnReleased
	 */
	struct UHitAudioComponentVR_OnReleased_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HitAudioComponentVR.OnGrabbed
	 */
	struct UHitAudioComponentVR_OnGrabbed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HitDetectionComponent.OnComponentHit
	 */
	struct UHitDetectionComponent_OnComponentHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.HitDetectionComponent.OnActorHit
	 */
	struct UHitDetectionComponent_OnActorHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Hitter.GetHitVelocity
	 */
	struct UHitter_GetHitVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InputHandlerComponent.ShouldEnableInputs
	 */
	struct UInputHandlerComponent_ShouldEnableInputs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.InputHandlerComponent.SetupInputs
	 */
	struct UInputHandlerComponent_SetupInputs_Params
	{	};

	/**
	 * Function SWGVRBase.InputHandlerComponent.RemoveInputs
	 */
	struct UInputHandlerComponent_RemoveInputs_Params
	{	};

	/**
	 * Function SWGVRBase.Interactable.Release
	 */
	struct UInteractable_Release_Params
	{	};

	/**
	 * Function SWGVRBase.Interactable.Grab
	 */
	struct UInteractable_Grab_Params
	{	};

	/**
	 * Function SWGVRBase.LeverBase.ShowLeverDebug
	 */
	struct ALeverBase_ShowLeverDebug_Params
	{	};

	/**
	 * Function SWGVRBase.LeverBase.OnIncrementalActivationShouldStopTimerElapsed
	 */
	struct ALeverBase_OnIncrementalActivationShouldStopTimerElapsed_Params
	{	};

	/**
	 * Function SWGVRBase.MovementInputComponent.SetAutoBindInputs
	 */
	struct UMovementInputComponent_SetAutoBindInputs_Params
	{
	public:
		bool                                                       bEnableAutoBind;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.MovementInputComponent.Run
	 */
	struct UMovementInputComponent_Run_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.MovementInputComponent.RotateSnap
	 */
	struct UMovementInputComponent_RotateSnap_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.MovementInputComponent.RotateSmooth
	 */
	struct UMovementInputComponent_RotateSmooth_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.MovementInputComponent.Move
	 */
	struct UMovementInputComponent_Move_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.MovementInputComponent.Crouch
	 */
	struct UMovementInputComponent_Crouch_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.PlayerHeightAdjustComponent.SetHeightAdjustEnable
	 */
	struct UPlayerHeightAdjustComponent_SetHeightAdjustEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.PlayerHeightAdjustComponent.GetHeightAdjustEnable
	 */
	struct UPlayerHeightAdjustComponent_GetHeightAdjustEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.PlayerTeleportListener.OnPrePlayerTeleport
	 */
	struct UPlayerTeleportListener_OnPrePlayerTeleport_Params
	{
	public:
		struct FOnPlayerTeleportedInfo                             Info;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.PlayerTeleportListener.OnPostPlayerTeleport
	 */
	struct UPlayerTeleportListener_OnPostPlayerTeleport_Params
	{
	public:
		struct FOnPlayerTeleportedInfo                             Info;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.RequireReleaseBoundaryAction.OnGrabberReleasedActor
	 */
	struct URequireReleaseBoundaryAction_OnGrabberReleasedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SimpleHingeDoor.UnlockDoorAngle
	 */
	struct ASimpleHingeDoor_UnlockDoorAngle_Params
	{	};

	/**
	 * Function SWGVRBase.SimpleHingeDoor.LockDoorAngleInDegrees
	 */
	struct ASimpleHingeDoor_LockDoorAngleInDegrees_Params
	{
	public:
		float                                                      AngleInDegrees;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SimpleHingeDoor.GetDoorAngleInDegrees
	 */
	struct ASimpleHingeDoor_GetDoorAngleInDegrees_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Socketable.OnRemovedFromSocket
	 */
	struct USocketable_OnRemovedFromSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Socketable.OnInsertedInSocket
	 */
	struct USocketable_OnInsertedInSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Socketable.OnEndHoverSocket
	 */
	struct USocketable_OnEndHoverSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.Socketable.OnBeginHoverSocket
	 */
	struct USocketable_OnBeginHoverSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanSocket;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.SetSocketCondition
	 */
	struct USocketComponent_SetSocketCondition_Params
	{
	public:
		class USocketCondition*                                    InSocketCondition;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.SetSocketableGrabbedAction
	 */
	struct USocketComponent_SetSocketableGrabbedAction_Params
	{
	public:
		ESocketableGrabbedAction                                   InGrabbedAction;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.SetHoverAction
	 */
	struct USocketComponent_SetHoverAction_Params
	{
	public:
		ESocketHoverAction                                         NewAction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.RemoveActor
	 */
	struct USocketComponent_RemoveActor_Params
	{	};

	/**
	 * Function SWGVRBase.SocketComponent.OnSocketedActorGrabbed
	 */
	struct USocketComponent_OnSocketedActorGrabbed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.OnSocketedActorDestroyed
	 */
	struct USocketComponent_OnSocketedActorDestroyed_Params
	{
	public:
		class AActor*                                              ActorBeingDestroyed;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.OnEndOverlap
	 */
	struct USocketComponent_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.OnBeginOverlap
	 */
	struct USocketComponent_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F3X0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.InsertToSocket
	 */
	struct USocketComponent_InsertToSocket_Params
	{
	public:
		class AActor*                                              ActorToPutInSocket;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.GetSocketName
	 */
	struct USocketComponent_GetSocketName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.GetSocketCondition
	 */
	struct USocketComponent_GetSocketCondition_Params
	{
	public:
		class USocketCondition*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.GetSocketableGrabbedAction
	 */
	struct USocketComponent_GetSocketableGrabbedAction_Params
	{
	public:
		ESocketableGrabbedAction                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.GetHoverAction
	 */
	struct USocketComponent_GetHoverAction_Params
	{
	public:
		ESocketHoverAction                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.GetActorInSocket
	 */
	struct USocketComponent_GetActorInSocket_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketComponent.CanBeSocketed
	 */
	struct USocketComponent_CanBeSocketed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketCondition.CanSocket
	 */
	struct USocketCondition_CanSocket_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketConditionActorType.SetActorClasses
	 */
	struct USocketConditionActorType_SetActorClasses_Params
	{
	public:
		TArray<class UClass*>                                      InActorClasses;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketConditionActorType.GetMutableActorClasses
	 */
	struct USocketConditionActorType_GetMutableActorClasses_Params
	{
	public:
		TArray<class UClass*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SocketConditionActorType.GetActorClasses
	 */
	struct USocketConditionActorType_GetActorClasses_Params
	{
	public:
		TArray<class UClass*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineDoorBase.OnIncrementalActivationShouldStopTimerElapsed
	 */
	struct ASplineDoorBase_OnIncrementalActivationShouldStopTimerElapsed_Params
	{	};

	/**
	 * Function SWGVRBase.SplineDoorBase.OnIncrementalActivationCanPlayTimerElapsed
	 */
	struct ASplineDoorBase_OnIncrementalActivationCanPlayTimerElapsed_Params
	{	};

	/**
	 * Function SWGVRBase.SplineDoorBase.MoveDoorAlongSpline
	 */
	struct ASplineDoorBase_MoveDoorAlongSpline_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentageActivated;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.TickBP
	 */
	struct USplineFollowMovementComponent_TickBP_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentageToTarget;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.StopFollowingSpline
	 */
	struct USplineFollowMovementComponent_StopFollowingSpline_Params
	{	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.StartFollowingSpline
	 */
	struct USplineFollowMovementComponent_StartFollowingSpline_Params
	{	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetTargetSplinePointIndex
	 */
	struct USplineFollowMovementComponent_SetTargetSplinePointIndex_Params
	{
	public:
		int32_t                                                    NewTargetSplinePointIndex;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetStartingSplinePointIndex
	 */
	struct USplineFollowMovementComponent_SetStartingSplinePointIndex_Params
	{
	public:
		int32_t                                                    NewStartingSplinePointIndex;                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetSplineToFollowAndDirection
	 */
	struct USplineFollowMovementComponent_SetSplineToFollowAndDirection_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementDirection                                         NewMovementDirection;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetSplineToFollow
	 */
	struct USplineFollowMovementComponent_SetSplineToFollow_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetSplineMovementDirection
	 */
	struct USplineFollowMovementComponent_SetSplineMovementDirection_Params
	{
	public:
		EMovementDirection                                         NewMovementDirection;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetMinSplineLength
	 */
	struct USplineFollowMovementComponent_SetMinSplineLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetMaxSplineLength
	 */
	struct USplineFollowMovementComponent_SetMaxSplineLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.SetDistanceAlongSpline
	 */
	struct USplineFollowMovementComponent_SetDistanceAlongSpline_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.ResetIndexes
	 */
	struct USplineFollowMovementComponent_ResetIndexes_Params
	{	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.MoveOwnerToStartingSplinePoint
	 */
	struct USplineFollowMovementComponent_MoveOwnerToStartingSplinePoint_Params
	{	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.IsForwardDirection
	 */
	struct USplineFollowMovementComponent_IsForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.IncrementTargetSplinePointIndex
	 */
	struct USplineFollowMovementComponent_IncrementTargetSplinePointIndex_Params
	{	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.GetCurrentDistanceAlongSpline
	 */
	struct USplineFollowMovementComponent_GetCurrentDistanceAlongSpline_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.DecrementTargetSplinePointIndex
	 */
	struct USplineFollowMovementComponent_DecrementTargetSplinePointIndex_Params
	{	};

	/**
	 * Function SWGVRBase.SplineFollowMovementComponent.CalculateSplineMinMaxSplineLengthFromIndexes
	 */
	struct USplineFollowMovementComponent_CalculateSplineMinMaxSplineLengthFromIndexes_Params
	{	};

	/**
	 * Function SWGVRBase.SWGVRBaseInputLibrary.GetSWGVRKeyName
	 */
	struct USWGVRBaseInputLibrary_GetSWGVRKeyName_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRInputKeys                                            InputKey;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X2DZ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseInputLibrary.GetKeysFromSWGVRInput
	 */
	struct USWGVRBaseInputLibrary_GetKeysFromSWGVRInput_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRInputKeys                                            InputKey;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EZT2[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FKey>                                        OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.SwitchVRMode
	 */
	struct USWGVRBaseSystem_SwitchVRMode_Params
	{
	public:
		ESWGVRMode                                                 Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.SwitchToVR
	 */
	struct USWGVRBaseSystem_SwitchToVR_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.SwitchToFlat
	 */
	struct USWGVRBaseSystem_SwitchToFlat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.IsHMDConnected
	 */
	struct USWGVRBaseSystem_IsHMDConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.GetVRMode
	 */
	struct USWGVRBaseSystem_GetVRMode_Params
	{
	public:
		ESWGVRMode                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.GetHmdType
	 */
	struct USWGVRBaseSystem_GetHmdType_Params
	{
	public:
		ESWGVRHmdType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.SWGVRBaseSystem.ExecuteOnVRMode
	 */
	struct USWGVRBaseSystem_ExecuteOnVRMode_Params
	{
	public:
		ESWGVRMode                                                 Branches;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.TriggerBoxBase.OnTriggerBoxEndOverlap
	 */
	struct ATriggerBoxBase_OnTriggerBoxEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.TriggerBoxBase.OnTriggerBoxBeginOverlap
	 */
	struct ATriggerBoxBase_OnTriggerBoxBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IAAT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRDebugPrint.VRPrintToScreen
	 */
	struct UVRDebugPrint_VRPrintToScreen_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MessageText;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.SetupHandsFromHandComponent
	 */
	struct UVRGrabberComponent_SetupHandsFromHandComponent_Params
	{	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.SetupGrabTriggers
	 */
	struct UVRGrabberComponent_SetupGrabTriggers_Params
	{
	public:
		class UPrimitiveComponent*                                 LeftPrimitive;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 RightPrimitive;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.SetupGrabAttachments
	 */
	struct UVRGrabberComponent_SetupGrabAttachments_Params
	{
	public:
		class USceneComponent*                                     LeftAttachment;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     RightAttachment;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.ReleaseHeldActorFromHand
	 */
	struct UVRGrabberComponent_ReleaseHeldActorFromHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.ReleaseActor
	 */
	struct UVRGrabberComponent_ReleaseActor_Params
	{
	public:
		class AActor*                                              ActorToRelease;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.OnHoveredActorDestroyedHandler
	 */
	struct UVRGrabberComponent_OnHoveredActorDestroyedHandler_Params
	{
	public:
		class AActor*                                              ActorBeingDestroyed;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.OnHeldActorDestroyedHandler
	 */
	struct UVRGrabberComponent_OnHeldActorDestroyedHandler_Params
	{
	public:
		class AActor*                                              ActorBeingDestroyed;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.OnGrabRightAxis
	 */
	struct UVRGrabberComponent_OnGrabRightAxis_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.OnGrabLeftAxis
	 */
	struct UVRGrabberComponent_OnGrabLeftAxis_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.GrabActor
	 */
	struct UVRGrabberComponent_GrabActor_Params
	{
	public:
		class AActor*                                              ActorToGrab;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.GetMotionControllerForHand
	 */
	struct UVRGrabberComponent_GetMotionControllerForHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5YQC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMotionControllerComponent*                          ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.GetHoveredGrabbableFromHand
	 */
	struct UVRGrabberComponent_GetHoveredGrabbableFromHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LYOC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.GetHeldActorFromHand
	 */
	struct UVRGrabberComponent_GetHeldActorFromHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZLRY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.GetAttachmentPoint
	 */
	struct UVRGrabberComponent_GetAttachmentPoint_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DB5F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.GetAttachmentPhysicsConstraint
	 */
	struct UVRGrabberComponent_GetAttachmentPhysicsConstraint_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3Y6F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPhysicsConstraintComponent*                         ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.AttemptRightRelease
	 */
	struct UVRGrabberComponent_AttemptRightRelease_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.AttemptRightGrab
	 */
	struct UVRGrabberComponent_AttemptRightGrab_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.AttemptLeftRelease
	 */
	struct UVRGrabberComponent_AttemptLeftRelease_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRGrabberComponent.AttemptLeftGrab
	 */
	struct UVRGrabberComponent_AttemptLeftGrab_Params
	{
	public:
		struct FInputActionValue                                   Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.UnconstrainComponent
	 */
	struct UVRHand_UnconstrainComponent_Params
	{	};

	/**
	 * Function SWGVRBase.VRHand.SetHandVisibility
	 */
	struct UVRHand_SetHandVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.SetHandType
	 */
	struct UVRHand_SetHandType_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.SetHandState
	 */
	struct UVRHand_SetHandState_Params
	{
	public:
		EHandModelState                                            State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.SetHandProximity
	 */
	struct UVRHand_SetHandProximity_Params
	{
	public:
		float                                                      Proximity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.SetHandGrip
	 */
	struct UVRHand_SetHandGrip_Params
	{
	public:
		float                                                      GripValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.SetGrabHoverStateEnable
	 */
	struct UVRHand_SetGrabHoverStateEnable_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.HandCreationFinished
	 */
	struct UVRHand_HandCreationFinished_Params
	{
	public:
		class UVRHandComponent*                                    HandComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetHandType
	 */
	struct UVRHand_GetHandType_Params
	{
	public:
		ESWGVRBaseHand                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetHandState
	 */
	struct UVRHand_GetHandState_Params
	{
	public:
		EHandModelState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetHandPrimitive
	 */
	struct UVRHand_GetHandPrimitive_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetGrabDetector
	 */
	struct UVRHand_GetGrabDetector_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetGrabConstraintComponent
	 */
	struct UVRHand_GetGrabConstraintComponent_Params
	{
	public:
		class UPhysicsConstraintComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetConstraintBase
	 */
	struct UVRHand_GetConstraintBase_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.GetComponentsInGrabRange
	 */
	struct UVRHand_GetComponentsInGrabRange_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ActorsInGrabRange;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHand.ConstrainComponentToHand
	 */
	struct UVRHand_ConstrainComponentToHand_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponentToConstrain;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandActor.OnReleasedActor
	 */
	struct AVRHandActor_OnReleasedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandActor.OnHeldActorDestroyed
	 */
	struct AVRHandActor_OnHeldActorDestroyed_Params
	{
	public:
		class AActor*                                              HeldActorBeingDestroyed;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandActor.OnGrabbedActor
	 */
	struct AVRHandActor_OnGrabbedActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandActor.OnEndGrabHover
	 */
	struct AVRHandActor_OnEndGrabHover_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandActor.OnBeginGrabHover
	 */
	struct AVRHandActor_OnBeginGrabHover_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.UnconstrainComponentFromHand
	 */
	struct UVRHandComponent_UnconstrainComponentFromHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.SpawnHands
	 */
	struct UVRHandComponent_SpawnHands_Params
	{	};

	/**
	 * Function SWGVRBase.VRHandComponent.SetVisibilityOfHandActor
	 */
	struct UVRHandComponent_SetVisibilityOfHandActor_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visibility;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.SetVisibilityBothHandActors
	 */
	struct UVRHandComponent_SetVisibilityBothHandActors_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.HandsAreCreated
	 */
	struct UVRHandComponent_HandsAreCreated_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.GetMotionControllerForHand
	 */
	struct UVRHandComponent_GetMotionControllerForHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IYNY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMotionControllerComponent*                          ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.GetHandActor
	 */
	struct UVRHandComponent_GetHandActor_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H8QN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRHandComponent.ConstrainComponentToHand
	 */
	struct UVRHandComponent_ConstrainComponentToHand_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RIJE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 PrimitiveComponentToConstrain;                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.TeleportVRPlayer
	 */
	struct UVRPlayer_TeleportVRPlayer_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            WorldRotation;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.ResetVRView
	 */
	struct UVRPlayer_ResetVRView_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.ResetViewAfterFrame
	 */
	struct UVRPlayer_ResetViewAfterFrame_Params
	{	};

	/**
	 * Function SWGVRBase.VRPlayer.RemoveMappingContext
	 */
	struct UVRPlayer_RemoveMappingContext_Params
	{
	public:
		class UInputMappingContext*                                InInputMappingContext;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.PreTeleportVRPlayer
	 */
	struct UVRPlayer_PreTeleportVRPlayer_Params
	{	};

	/**
	 * Function SWGVRBase.VRPlayer.PostTeleportVRPlayer
	 */
	struct UVRPlayer_PostTeleportVRPlayer_Params
	{	};

	/**
	 * Function SWGVRBase.VRPlayer.GetVROrigin
	 */
	struct UVRPlayer_GetVROrigin_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.GetPlayerInputRotationType
	 */
	struct UVRPlayer_GetPlayerInputRotationType_Params
	{
	public:
		EPlayerRotationInputType                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.GetPlayerInputRotationScale
	 */
	struct UVRPlayer_GetPlayerInputRotationScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.GetPlayerCamera
	 */
	struct UVRPlayer_GetPlayerCamera_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.GetMotionController
	 */
	struct UVRPlayer_GetMotionController_Params
	{
	public:
		ESWGVRBaseHand                                             hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QY8S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMotionControllerComponent*                          ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.GetInvertHandControls
	 */
	struct UVRPlayer_GetInvertHandControls_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.GetCameraBrightnessSetting
	 */
	struct UVRPlayer_GetCameraBrightnessSetting_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayer.AddMappingContext
	 */
	struct UVRPlayer_AddMappingContext_Params
	{
	public:
		class UInputMappingContext*                                InInputMappingContext;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Priority;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayerWidgetInteractor.SetWidgetPointerIndex
	 */
	struct UVRPlayerWidgetInteractor_SetWidgetPointerIndex_Params
	{
	public:
		int32_t                                                    PointerIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayerWidgetInteractor.SetWidgetInteractionEnabled
	 */
	struct UVRPlayerWidgetInteractor_SetWidgetInteractionEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayerWidgetInteractor.SetInteractionDistance
	 */
	struct UVRPlayerWidgetInteractor_SetInteractionDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRPlayerWidgetInteractor.IsWidgetInteractionEnabled
	 */
	struct UVRPlayerWidgetInteractor_IsWidgetInteractionEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRTeleportComponent.SetupHandBeams
	 */
	struct UVRTeleportComponent_SetupHandBeams_Params
	{	};

	/**
	 * Function SWGVRBase.VRTeleportComponent.SetAutoBind
	 */
	struct UVRTeleportComponent_SetAutoBind_Params
	{
	public:
		bool                                                       bEnableAutoBind;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRTeleportComponent.RemoveIgnoreActor
	 */
	struct UVRTeleportComponent_RemoveIgnoreActor_Params
	{
	public:
		class AActor*                                              ActorToRemove;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRTeleportComponent.Init
	 */
	struct UVRTeleportComponent_Init_Params
	{
	public:
		class UVRHandComponent*                                    HandComp;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRTeleportComponent.GetTeleportLocationActor
	 */
	struct UVRTeleportComponent_GetTeleportLocationActor_Params
	{
	public:
		class AStaticMeshActor*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRTeleportComponent.AddIgnoreActor
	 */
	struct UVRTeleportComponent_AddIgnoreActor_Params
	{
	public:
		class AActor*                                              ActorToIgnore;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGVRBase.VRTeleportRule.IsGroundValid
	 */
	struct UVRTeleportRule_IsGroundValid_Params
	{
	public:
		class AActor*                                              GroundActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 GroundComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
