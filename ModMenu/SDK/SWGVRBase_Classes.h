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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SWGVRBase.Activatable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActivatable : public UInterface
	{
	public:
		void IncrementalActivation(float PercentageActivated);
		float GetActivation();
		void Deactivated();
		void Activated();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Activator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActivator : public UInterface
	{
	public:
		TArray<class UPrimitiveComponent*> GetInteractPrimitiveComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.BaseShootableCharacter
	 * Size -> 0x0068 (FullSize[0x0520] - InheritedSize[0x04B8])
	 */
	class ABaseShootableCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_LKWW[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		bool                                                       bHasWeakPoints;                                          // 0x04C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD4J[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GunTypesToIgnore[0x50];                                  // 0x04C8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_AORM[0x8];                                   // 0x0518(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnTargetHit_Implementation(const struct FTargetHitParams& TargetHitParams);
		void OnHitTaken(const struct FTargetHitParams& TargetHitParams);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.WeakPoint
	 * Size -> 0x0010 (FullSize[0x0480] - InheritedSize[0x0470])
	 */
	class UWeakPoint : public UCapsuleComponent
	{
	public:
		class FScriptMulticastDelegate                             WeakPointHitDelegate;                                    // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.BindInputOnGrabbed
	 * Size -> 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
	 */
	class UBindInputOnGrabbed : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7Y1G[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnKeyPressed;                                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeyReleased;                                           // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeyTriggered;                                          // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UInputMappingContext*                                BindInputOnLeftGrabbedContext;                           // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                BindInputOnRightGrabbedContext;                          // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        LeftControllerAction;                                    // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RightControllerAction;                                   // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHandReleaseEnable                                         ReleaseBehavior;                                         // 0x0108(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NVHD[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputPriority;                                           // 0x010C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CRAQ[0x40];                                  // 0x0110(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnPhysicsReleased(class AActor* Actor);
		void OnPhysicsGrabbed(class AActor* Actor);
		void KeyTriggered(const struct FInputActionValue& ActionValue);
		void KeyReleased(const struct FInputActionValue& ActionValue);
		void KeyPressed(const struct FInputActionValue& ActionValue);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.InteractableBase
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class AInteractableBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_4KYJ[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      ActivatableActors;                                       // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAlwaysActivate;                                         // 0x0240(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartActivated;                                         // 0x0241(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAlwaysDeactivate;                                       // 0x0242(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bStartDeactivated;                                       // 0x0243(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanBeInterrupted;                                       // 0x0244(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanHighlight;                                           // 0x0245(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UZA5[0x2];                                   // 0x0246(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetInteractiblePercentage(float InPercentage);
		void SetCanDeactivate(bool InCanActivate);
		void SetCanActivate(bool InCanActivate);
		void SetActivatableActors(TArray<class AActor*> InActivatableActors);
		TArray<class AActor*> GetActivatableActors();
		bool CanDeactivate();
		bool CanActivate();
		void ActivationEvent(float PercentageActivated);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.ButtonBase
	 * Size -> 0x0140 (FullSize[0x0388] - InheritedSize[0x0248])
	 */
	class AButtonBase : public AInteractableBase
	{
	public:
		class FScriptMulticastDelegate                             OnButtonPressed;                                         // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnButtonReleased;                                        // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     SceneRoot;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     ButtonRoot;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MeshBase;                                                // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MeshButton;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxComponent*                                       TriggerBox;                                              // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     ButtonAudioPlayer;                                       // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SecondsToCountPercentage;                                // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ButtonThreshold;                                         // 0x029C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EButtonActions                                             ButtonActions;                                           // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSuspendAfterReachingMaxPercent;                         // 0x02A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bKeepToggleDown;                                         // 0x02A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3ZWR[0x1];                                   // 0x02A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ButtonPressDistance;                                     // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       PressableWithoutActivation;                              // 0x02A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1K11[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CoolDownTime;                                            // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MLMR[0xC8];                                  // 0x02B0(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ButtonPressSuccess;                                      // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          ButtonPressFail;                                         // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetButtonUp(bool bSendEvent);
		void SetButtonDown(bool bSendEvent);
		void SetButtonActive(bool bIsActive);
		void OnTriggerBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnTriggerBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnInteractorDestroyed(class AActor* DestroyedActor);
		bool IsButtonDown();
		void ButtonTimelineProgress(float Value);
		void ButtonReleased();
		void ButtonPressed();
		void ButtonAnimate(bool Reverse);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.CompositeSightFilter
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UCompositeSightFilter : public USightFilter
	{
	public:
		ESightFilterOp                                             Operation;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JDXR[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USightFilter*>                                Filters;                                                 // 0x0030(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetOperation(ESightFilterOp SightFilterOp);
		ESightFilterOp GetOperation();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.CrankBase
	 * Size -> 0x00E0 (FullSize[0x0328] - InheritedSize[0x0248])
	 */
	class ACrankBase : public AInteractableBase
	{
	public:
		class USceneComponent*                                     SceneRoot;                                               // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MeshBase;                                                // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     Rotator;                                                 // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USocketComponent*                                    HandleSocket;                                            // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     CrankAudioPlayer;                                        // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class ACrankHandleBase>                     CrankHandle;                                             // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H6VI[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 AttachingMesh;                                           // 0x0280(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     AttachingParent;                                         // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              AttachedActor;                                           // 0x0290(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStartHandleAttached;                                    // 0x0298(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BELH[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceToLetGo;                                         // 0x029C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DegreesPerPercentage;                                    // 0x02A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RevertingDegreesPerSecond;                               // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InterruptingDegreesPerSecond;                            // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ThresholdForReachingMaxPercent;                          // 0x02AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QQX4[0x20];                                  // 0x02B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShouldRevertIfNotFinished;                              // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NHSP[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          CrankRotatingToControlledActivation;                     // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankRotatingToControlledRevertion;                      // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankRotatingToRevertion;                                // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankRotatingToInterruption;                             // 0x02F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankReachedActivation;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankReachedRevertion;                                   // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankReachedInterruption;                                // 0x0308(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          CrankHandleSocketed;                                     // 0x0310(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5PKA[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IncrementalActivationShouldStopAudioWaitTime;            // 0x0320(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AccruedCanPlayAngleThreshold;                            // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnIncrementalActivationShouldStopTimerElapsed();
		void OnHandleSocketed(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.CrankHandleBase
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ACrankHandleBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_CTKR[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    SceneRoot;                                               // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                HandleMesh;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    TriggerSphere;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbable;                                  // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class ACrankBase>                           CrankBaseParent;                                         // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanBeCranked;                                           // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V2J8[0xF];                                   // 0x0261(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnBeginHoverSocket_Implementation(class USocketComponent* Socket, bool bCanSocket);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Dial
	 * Size -> 0x0138 (FullSize[0x0380] - InheritedSize[0x0248])
	 */
	class ADial : public AInteractableBase
	{
	public:
		unsigned char                                              UnknownData_JJXS[0x18];                                  // 0x0248(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDialRangeChanged;                                      // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDialUpdated;                                           // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USphereComponent*                                    DialRoot;                                                // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    DialRotationRoot;                                        // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArrowComponent*                                     DialOutDir;                                              // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArrowComponent*                                     DialPointingDir;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                DialMesh;                                                // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbableComponent;                         // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URangeDelegatesComponent*                            RangeDelegatesComponent;                                 // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHapticFeedbackEffect_Base*                          HapticFeedbackEffect;                                    // 0x02B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DialMinMax;                                              // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DistanceToLetGo;                                         // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDialHandTooFarAction                                      HandTooFarAction;                                        // 0x02C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EDialGrabMode                                              GrabMode;                                                // 0x02C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_20G5[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRangeArray                                         Ranges;                                                  // 0x02D0(0x0010) Edit, NativeAccessSpecifierPrivate
		bool                                                       bSnapToRange;                                            // 0x02E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDialEnable;                                             // 0x02E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OFLO[0x9E];                                  // 0x02E2(0x009E) MISSED OFFSET (PADDING)

	public:
		void SetToRange(const class FName& RangeName, float NormalizedPositionWithinRange);
		void SetDistanceToLetGo(float NewDistance);
		void SetDialMinMax(float NewDialMinMax);
		void SetDialEnable(bool bEnable);
		void SetAngle(float InAngle);
		void OnRangeChanged(const class FName& OldRange, const class FName& NewRange);
		bool GetDialEnable();
		float GetCurrentAngle();
		float GetActivationForAngle(float InAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.DoorBase
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ADoorBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_B7RU[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneRoot;                                               // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOpenByIncrements;                                       // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_15QH[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.EaterComponent
	 * Size -> 0x0020 (FullSize[0x0490] - InheritedSize[0x0470])
	 */
	class UEaterComponent : public USphereComponent
	{
	public:
		class FScriptMulticastDelegate                             OnEdibleEaten;                                           // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G37K[0x10];                                  // 0x0480(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnEat(class AActor* EdibleBeingEaten);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		bool CanEat(class AActor* EdibleToCheck);
		bool AttemptEat(class AActor* ActorToTryAndEat);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Edible
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEdible : public UInterface
	{
	public:
		struct FTransform GetRespawnTransform(class UEaterComponent* EaterComponent);
		bool CanBeEaten(class UEaterComponent* EaterComponent);
		void BeingEaten(class UEaterComponent* EaterComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Flashlight
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlashlight : public UInterface
	{
	public:
		void SetFlashlightEnabled(bool bEnabled);
		bool IsFlashlightEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.FlashLightBase
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AFlashLightBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_5L44[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    RootPrimitive;                                           // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpotLightComponent*                                 Light;                                                   // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USightComponent*                                     SightComponent;                                          // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGrabbableSnapComponent*                             GrabbableSnapComponent;                                  // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStartOn;                                                // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetSightParametersByLight;                              // 0x0249(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H873[0x6];                                   // 0x024A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.FlashlightReactionComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UFlashlightReactionComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlashlightBeginVisible;                                // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightEndVisible;                                  // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightTimeReached;                                 // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightTimerUpdate;                                 // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UVisualSourceComponent*                              OwnersVisualSourceComponent;                             // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequirePlayerVisibility;                                // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DF2I[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlashlightSecondsToReact;                                // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8K41[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void ResetFlashlightTimer();
		void OnVisibilityChanged(class UVisualSourceComponent* VisualSourceComponent, class USightComponent* SightComponent, bool bVisible);
		bool IsVisible();
		bool IsSeenByPlayer();
		bool IsSeenByFlashlight();
		float GetFlashlightVisibleSeconds();
		float GetFlashlightSecondsToReact();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.FlashlightSightFilter
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UFlashlightSightFilter : public USightFilter
	{
	public:
		bool                                                       bWantsFlashlight;                                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZ5B[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GazeHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGazeHandler : public UInterface
	{
	public:
		void OnGazeExit(class UVRGazeComponent* GazeComponent);
		void OnGazeEnter(class UVRGazeComponent* GazeComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Grabbable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGrabbable : public UInterface
	{
	public:
		void OnGrabberReleasedPostVelocity(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* HeldComponent);
		void OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void OnEndGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void OnBeginGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		class UVRGrabberComponent* GetGrabber();
		EHandReleaseEnable CanBeReleased(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand);
		bool CanBeGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabbableActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AGrabbableActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_O8JG[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I9L[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabbablePhysicsActor
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class AGrabbablePhysicsActor : public AGrabbableActor
	{
	public:
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbableComponent;                         // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class USimplePhysicsGrabbableComponent* GetGrabbableComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabbableSnapActor
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class AGrabbableSnapActor : public AGrabbableActor
	{
	public:
		class UGrabbableSnapComponent*                             GrabbableSnapComponent;                                  // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGrabbableSnapComponent* GetGrabbableComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SimplePhysicsGrabbableComponent
	 * Size -> 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
	 */
	class USimplePhysicsGrabbableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SOB7[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGrabbed;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleasedPostVelocity;                                  // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUBW[0x30];                                  // 0x00F0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bCanBeGrabbed;                                           // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHandReleaseEnable                                         HandRelease;                                             // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FVAF[0x6];                                   // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          OnGrabbedSound;                                          // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoAddHighlights;                                      // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IE1R[0x3F];                                  // 0x0131(0x003F) MISSED OFFSET (PADDING)

	public:
		void SetReleaseEnable(EHandReleaseEnable Enable);
		void SetCanBeGrabbed(bool bNewCanBeGrabbed);
		void OnOwningActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		ESWGVRBaseHand GetHandHoldingMe();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabbableSnapComponent
	 * Size -> 0x0080 (FullSize[0x01F0] - InheritedSize[0x0170])
	 */
	class UGrabbableSnapComponent : public USimplePhysicsGrabbableComponent
	{
	public:
		struct FTransform                                          GrabTransform;                                           // 0x0170(0x0030) Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      SecondsToLerp;                                           // 0x01A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7NIX[0x4C];                                  // 0x01A4(0x004C) MISSED OFFSET (PADDING)

	public:
		void SetGrabTransform(const struct FTransform& NewTransform);
		struct FTransform GetGrabTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabbedEaterComponent
	 * Size -> 0x0000 (FullSize[0x0490] - InheritedSize[0x0490])
	 */
	class UGrabbedEaterComponent : public UEaterComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabHighlightComponent
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UGrabHighlightComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_SX7K[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FComponentReference>                         MeshComponentReferencesToHighlight;                      // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UPrimitiveComponent*>                         MeshComponentsToHighlight;                               // 0x00C8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bAllowHighlightsOnHover;                                 // 0x00D8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ONWS[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetHighlightEnabled(bool bEnableHighlight);
		void SetAllowHighlightsOnHover(bool bInAllowHighlights);
		bool IsHighlighted();
		bool GetAllowHighlightsOnHover();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabSlideActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AGrabSlideActor : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArrowComponent*                                     SlidingRoot;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGrabSlideComponent*                                 GrabSlideComponent;                                      // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GrabSlideComponent
	 * Size -> 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
	 */
	class UGrabSlideComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Y9O2[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMinReached;                                            // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMinExited;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxReached;                                            // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMaxExited;                                             // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSliding;                                               // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSliderReleased;                                        // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRangeChanged;                                          // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UHapticFeedbackEffect_Base*                          HapticFeedbackEffect;                                    // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanBeGrabbed;                                           // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AVWW[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRangeArray                                         RangeArray;                                              // 0x0140(0x0010) Edit, NativeAccessSpecifierPrivate
		bool                                                       bSnapToRange;                                            // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6UA4[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SliderComponentName;                                     // 0x0154(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                GrabbableComponentName;                                  // 0x015C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowForward;                                           // 0x0164(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowBackward;                                          // 0x0165(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseMin;                                                 // 0x0166(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PC3D[0x1];                                   // 0x0167(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSlide;                                                // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseMax;                                                 // 0x016C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D9BE[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSlide;                                                // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EventResendThreshold;                                    // 0x0174(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      ActorsToActivate;                                        // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6TZL[0x78];                                  // 0x0188(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetSliderPercentage(float Percentage);
		void SetSliderComponent(class USceneComponent* SliderComponent);
		void SetCanBeGrabbed(bool bEnableGrab);
		bool IsHeld();
		float GetPercentAlongPath();
		ESWGVRBaseHand GetHandHoldingMe();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GunActor
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class AGunActor : public AActor
	{
	public:
		class UStaticMeshComponent*                                GunMesh;                                                 // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UArrowComponent*                                     FireLocation;                                            // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGrabbableSnapComponent*                             GrabbableSnapComponent;                                  // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBindInputOnGrabbed*                                 BindInputOnGrabbed;                                      // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UDOC[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnFireReleased();
		void OnFirePressed();
		bool IsFiring();
		class UStaticMeshComponent* GetGunMesh();
		class UGrabbableSnapComponent* GetGrabComponent();
		struct FTransform GetFireTransform();
		class UArrowComponent* GetFireLocationComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GunProjectile
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGunProjectile : public UInterface
	{
	public:
		void SetupProjectile(class AProjectileGunActor* Gun);
		class AProjectileGunActor* GetGun();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GunProjectileActor
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AGunProjectileActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_THVC[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                ProjectileMesh;                                          // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovementComponent;                             // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDestroyOnHit;                                           // 0x0238(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseLiveTimer;                                           // 0x0239(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WQ7K[0x2];                                   // 0x023A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondsToLive;                                           // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_080R[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnProjectileHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.GunTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGunTarget : public UInterface
	{
	public:
		void OnTargetHit(const struct FTargetHitParams& TargetHitParams);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HandPointerHandler
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UHandPointerHandler : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5ARF[0xC];                                   // 0x00B0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockerProcessTimeInSeconds;                             // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InteractionDistance;                                     // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                BlockerComponentName;                                    // 0x00C4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F2NF[0xC];                                   // 0x00CC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComponentReference                                 InteractionRootComponent;                                // 0x00D8(0x0028) Edit, NativeAccessSpecifierPrivate
		bool                                                       bShowDebug;                                              // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FU4D[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetInteractionComponent*                         WidgetInteractionComponent;                              // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_41N0[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnBlockerComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HandProximityState
	 * Size -> 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
	 */
	class UHandProximityState : public UActorComponent
	{
	public:
		bool                                                       bUseWholeActor;                                          // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QOIU[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FComponentReference>                         OverlapComponentReferences;                              // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bDisableAutoGrabHover;                                   // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHandModelState                                            HandModelState;                                          // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5OO8[0x56];                                  // 0x00CA(0x0056) MISSED OFFSET (PADDING)

	public:
		void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HandProximityStateActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AHandProximityStateActor : public AActor
	{
	public:
		class UBoxComponent*                                       BoxComponent;                                            // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHandProximityState*                                 HandProximityState;                                      // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HandUtilityFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHandUtilityFunctions : public UBlueprintFunctionLibrary
	{
	public:
		EControllerHand ToControllerHand(ESWGVRBaseHand hand);
		class FString HandToString(ESWGVRBaseHand hand);
		ESWGVRBaseHand GetOppositeHand(ESWGVRBaseHand hand);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HeadBlinderDetector
	 * Size -> 0x0040 (FullSize[0x04B0] - InheritedSize[0x0470])
	 */
	class UHeadBlinderDetector : public USphereComponent
	{
	public:
		class FScriptMulticastDelegate                             OnShowBlinder;                                           // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUNT[0x10];                                  // 0x0480(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBlinderEnabled;                                         // 0x0490(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YXHQ[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TagsToCheck;                                             // 0x0498(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bUseCameraFade;                                          // 0x04A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5FY4[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetBlinderShown(bool bShown);
		void SetBlidnerEnabled(bool bEnabled);
		void OnHeadOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnHeadEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		bool IsBlinderShown();
		bool GetBlinderEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HighlightsSystem
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UHighlightsSystem : public UWorldSubsystem
	{
	public:
		class APostProcessVolume*                                  PostProcessVolume;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetOutlineMaterial(class UMaterialInstance* MaterialInstance);
		void SetHighlightsEnabled(bool bEnable);
		bool GetHighlightsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HitAudioComponentVR
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UHitAudioComponentVR : public UHitAudioComponentBasic
	{
	public:
		class USoundBase*                                          SoundOnHitHeld;                                          // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0MRA[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnReleased(class AActor* Actor);
		void OnGrabbed(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HitDetectionComponent
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UHitDetectionComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHitDetected;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      RequiredHitSpeed;                                        // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseHitDirection;                                        // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RHWY[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RequiredHitDirection;                                    // 0x00C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CoolDownInSeconds;                                       // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8OAV[0x38];                                  // 0x00D8(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Hitter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHitter : public UInterface
	{
	public:
		struct FVector GetHitVelocity();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.HitterComponent
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UHitterComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_D5X2[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SS5Q[0x10];                                  // 0x0200(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.InputHandlerComponent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputHandlerComponent : public UInterface
	{
	public:
		bool ShouldEnableInputs();
		void SetupInputs();
		void RemoveInputs();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.InputTriggerAdditionalKeys
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UInputTriggerAdditionalKeys : public UInputTrigger
	{
	public:
		TArray<struct FKey>                                        Keys;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OOAW[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Interactable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInteractable : public UInterface
	{
	public:
		void Release();
		void Grab();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.LaserGunActor
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class ALaserGunActor : public AGunActor
	{
	public:
		float                                                      ShootDistanceCentimeters;                                // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          LaserTraceChannel;                                       // 0x024C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUFP[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraComponent*                                   Beam;                                                    // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZAR[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.LeverBase
	 * Size -> 0x0148 (FullSize[0x0390] - InheritedSize[0x0248])
	 */
	class ALeverBase : public AInteractableBase
	{
	public:
		unsigned char                                              UnknownData_40PO[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneRoot;                                               // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MeshBase;                                                // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     Rotator;                                                 // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MeshLeverHandle;                                         // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    TriggerSphere;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     LeverAudioPlayer;                                        // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 AttachingMesh;                                           // 0x0280(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     AttachingParent;                                         // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              AttachedActor;                                           // 0x0290(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KI3K[0x20];                                  // 0x0298(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceToLetGo;                                         // 0x02B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AngleLimit;                                              // 0x02BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OriginAngle;                                             // 0x02C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SnappingSpeed;                                           // 0x02C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F2E1[0x1C];                                  // 0x02C8(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsSnappingToOriginAngle;                                // 0x02E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldForceReleaseAfterReachingMax;                     // 0x02E5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldSnapToOriginAfterReachingMax;                     // 0x02E6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanGrabAfterReachingMax;                                // 0x02E7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShouldReportPercentageAfterReachingMax;                 // 0x02E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9SWJ[0x1];                                   // 0x02E9(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELeverType                                                 LeverType;                                               // 0x02EA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EOneWayLeverActivationState                                ActivationDirection;                                     // 0x02EB(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QGY5[0x2];                                   // 0x02EC(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShowDebugAtRuntime;                                     // 0x02EE(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HNGC[0x1];                                   // 0x02EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugLifeTime;                                           // 0x02F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        DebugArcColor;                                           // 0x02F4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugArcLength;                                          // 0x0304(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugArcThickness;                                       // 0x0308(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        DebugOriginAngleColor;                                   // 0x030C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugOriginAngleLength;                                  // 0x031C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugOriginAngleSize;                                    // 0x0320(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugOriginAngleThickness;                               // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        DebugActivationColor;                                    // 0x0328(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        DebugDeactivationColor;                                  // 0x0338(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugActivationLength;                                   // 0x0348(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DebugActivationThickness;                                // 0x034C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          LeverRotatingToControlledPositive;                       // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          LeverRotatingToControlledNegative;                       // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          LeverRotatingToOriginAngle;                              // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          LeverReachedPositiveActivation;                          // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          LeverReachedNegativeActivation;                          // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          LeverReachedOriginAngle;                                 // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AL0S[0x8];                                   // 0x0380(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IncrementalActivationShouldStopAudioWaitTime;            // 0x0388(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AccruedCanPlayAngleThreshold;                            // 0x038C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void ShowLeverDebug();
		void OnIncrementalActivationShouldStopTimerElapsed();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.MovementInputComponent
	 * Size -> 0x00C0 (FullSize[0x0170] - InheritedSize[0x00B0])
	 */
	class UMovementInputComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_5567[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterMovementComponent*                         OwnerCharacterMovementComponent;                         // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   OwnerCapsuleRootComponent;                               // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    OwnerCameraComponent;                                    // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     OwnerVROrigin;                                           // 0x00D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                DefaultMovementContext;                                  // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                InvertedMovementContext;                                 // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        CrouchAction;                                            // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RunAction;                                               // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RotateAction;                                            // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RotateActionSmooth;                                      // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        MoveAction;                                              // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         StandardCurve;                                           // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         DynamicSCurve;                                           // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MovementAccelerationFactor;                              // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WalkSpeed;                                               // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RunSpeed;                                                // 0x0128(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CrouchSpeed;                                             // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0WEL[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPlayerRotationInputType                                   PlayerRotationInputType;                                 // 0x0138(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NWNG[0x3];                                   // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerRotationInputScale;                                // 0x013C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CameraRotateSnapAngle;                                   // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CameraRotateAngleSnapMaxDelta;                           // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CameraRotateSmoothAngle;                                 // 0x0148(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CameraRotateAngleSmoothMaxDelta;                         // 0x014C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A7RQ[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoBindInputs;                                         // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bInvertHandControls;                                     // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EResponseCurveType                                         CurrentResponseCurveType;                                // 0x015A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X4LZ[0x15];                                  // 0x015B(0x0015) MISSED OFFSET (PADDING)

	public:
		void SetAutoBindInputs(bool bEnableAutoBind);
		void Run(const struct FInputActionValue& Value);
		void RotateSnap(const struct FInputActionValue& Value);
		void RotateSmooth(const struct FInputActionValue& Value);
		void Move(const struct FInputActionValue& Value);
		void Crouch(const struct FInputActionValue& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.PlayerHeightAdjustComponent
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UPlayerHeightAdjustComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KTGA[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerHeightAdjusted;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UInputMappingContext*                                InputMappingContext;                                     // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        HeightAdjustAction;                                      // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHeightAdjustEnabled;                                    // 0x00D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L4ZG[0xF];                                   // 0x00D9(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetHeightAdjustEnable(bool bEnable);
		bool GetHeightAdjustEnable();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.PlayerHeightOffsetProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerHeightOffsetProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.PlayerTeleportListener
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerTeleportListener : public UInterface
	{
	public:
		void OnPrePlayerTeleport(const struct FOnPlayerTeleportedInfo& Info);
		void OnPostPlayerTeleport(const struct FOnPlayerTeleportedInfo& Info);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.ProjectileGunActor
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class AProjectileGunActor : public AGunActor
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.RequireReleaseBoundaryAction
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class URequireReleaseBoundaryAction : public UBoundaryHandlerAction
	{
	public:
		class UBoundaryHandlerAction*                              ActionIfNotHeld;                                         // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M50[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnGrabberReleasedActor(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SimpleHingeDoor
	 * Size -> 0x0058 (FullSize[0x0290] - InheritedSize[0x0238])
	 */
	class ASimpleHingeDoor : public ADoorBase
	{
	public:
		unsigned char                                              UnknownData_5P5M[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDoorLimitReached;                                      // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UPhysicsConstraintComponent*                         PhysicsConstraintComponent;                              // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       GrabTrigger;                                             // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AngularLimit;                                            // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableAutoLock;                                         // 0x026C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHingedDoorLimit                                           AutoLockAt;                                              // 0x026D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5AFD[0x22];                                  // 0x026E(0x0022) MISSED OFFSET (PADDING)

	public:
		void UnlockDoorAngle();
		void LockDoorAngleInDegrees(float AngleInDegrees);
		float GetDoorAngleInDegrees();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SkeletalDoorBase
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class ASkeletalDoorBase : public ADoorBase
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshDoor;                                        // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.Socketable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USocketable : public UInterface
	{
	public:
		void OnRemovedFromSocket(class USocketComponent* Socket);
		void OnInsertedInSocket(class USocketComponent* Socket);
		void OnEndHoverSocket(class USocketComponent* Socket);
		void OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SocketComponent
	 * Size -> 0x0070 (FullSize[0x04E0] - InheritedSize[0x0470])
	 */
	class USocketComponent : public USphereComponent
	{
	public:
		class FScriptMulticastDelegate                             OnActorSocketed;                                         // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorRemoved;                                          // 0x0480(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		ESocketableGrabbedAction                                   GrabbedAction;                                           // 0x0490(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESocketHoverAction                                         HoverAction;                                             // 0x0491(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_33LO[0x6];                                   // 0x0492(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocketCondition*                                    SocketCondition;                                         // 0x0498(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              ActorToStartInSocket;                                    // 0x04A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FMDN[0x38];                                  // 0x04A8(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetSocketCondition(class USocketCondition* InSocketCondition);
		void SetSocketableGrabbedAction(ESocketableGrabbedAction InGrabbedAction);
		void SetHoverAction(ESocketHoverAction NewAction);
		void RemoveActor();
		void OnSocketedActorGrabbed(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand);
		void OnSocketedActorDestroyed(class AActor* ActorBeingDestroyed);
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void InsertToSocket(class AActor* ActorToPutInSocket);
		class FString GetSocketName();
		class USocketCondition* GetSocketCondition();
		ESocketableGrabbedAction GetSocketableGrabbedAction();
		ESocketHoverAction GetHoverAction();
		class AActor* GetActorInSocket();
		bool CanBeSocketed(class AActor* Actor, class UPrimitiveComponent* OverlappedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SocketCondition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USocketCondition : public UObject
	{
	public:
		bool CanSocket(class USocketComponent* SocketComponent, class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SocketConditionActorType
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USocketConditionActorType : public USocketCondition
	{
	public:
		TArray<class UClass*>                                      ActorClasses;                                            // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		void SetActorClasses(TArray<class UClass*> InActorClasses);
		TArray<class UClass*> GetMutableActorClasses();
		TArray<class UClass*> GetActorClasses();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SplineDoorBase
	 * Size -> 0x0068 (FullSize[0x02A0] - InheritedSize[0x0238])
	 */
	class ASplineDoorBase : public ADoorBase
	{
	public:
		class UStaticMeshComponent*                                MeshDoor;                                                // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USplineComponent*                                    DoorTrack;                                               // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     DoorAudioPlayer;                                         // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DoorOpeningSpeed;                                        // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UN8J[0xC];                                   // 0x0254(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          DoorMovingToTargetLocation;                              // 0x0260(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          DoorMovingToOriginLocation;                              // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          DoorReachedTargetLocation;                               // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          DoorReachedOriginLocation;                               // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SGSF[0x20];                                  // 0x0280(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnIncrementalActivationShouldStopTimerElapsed();
		void OnIncrementalActivationCanPlayTimerElapsed();
		void MoveDoorAlongSpline(float DeltaTime, float PercentageActivated);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SplineFollowMovementComponent
	 * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
	 */
	class USplineFollowMovementComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFinishedFollowingSpline;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTickSpline;                                            // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AActor*                                              ActorWithSplineComponent;                                // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineComponent*                                    SplineToFollow;                                          // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovementSpeed;                                           // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    StartingSplinePointIndex;                                // 0x00E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TargetSplinePointIndex;                                  // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOrientToTangent;                                        // 0x00EC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bFollowToEnd;                                            // 0x00ED(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMovementDirection                                         MovementDirection;                                       // 0x00EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4OJL[0x11];                                  // 0x00EF(0x0011) MISSED OFFSET (PADDING)

	public:
		void TickBP(float DeltaSeconds, float PercentageToTarget);
		void StopFollowingSpline();
		void StartFollowingSpline();
		void SetTargetSplinePointIndex(int32_t NewTargetSplinePointIndex);
		void SetStartingSplinePointIndex(int32_t NewStartingSplinePointIndex);
		void SetSplineToFollowAndDirection(class USplineComponent* Spline, EMovementDirection NewMovementDirection);
		void SetSplineToFollow(class USplineComponent* Spline);
		void SetSplineMovementDirection(EMovementDirection NewMovementDirection);
		void SetMinSplineLength(float Length);
		void SetMaxSplineLength(float Length);
		void SetDistanceAlongSpline(float Distance);
		void ResetIndexes();
		void MoveOwnerToStartingSplinePoint();
		bool IsForwardDirection();
		void IncrementTargetSplinePointIndex();
		float GetCurrentDistanceAlongSpline();
		void DecrementTargetSplinePointIndex();
		void CalculateSplineMinMaxSplineLengthFromIndexes();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.StaticMeshGrabbableActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class AStaticMeshGrabbableActor : public AGrabbablePhysicsActor
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.StaticMeshGrabbableSnapActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class AStaticMeshGrabbableSnapActor : public AGrabbableSnapActor
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SWGVRBaseInputLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGVRBaseInputLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class FString GetSWGVRKeyName(ESWGVRBaseHand hand, ESWGVRInputKeys InputKey);
		void GetKeysFromSWGVRInput(ESWGVRBaseHand hand, ESWGVRInputKeys InputKey, TArray<struct FKey>* OutKeys);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SWGVRBasePlayerCharacter
	 * Size -> 0x0048 (FullSize[0x0500] - InheritedSize[0x04B8])
	 */
	class ASWGVRBasePlayerCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_PB98[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_XWDK[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     VROriginComponent;                                       // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraComponent*                                    CameraComponent;                                         // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMotionControllerComponent*                          LeftMotionControllerComponent;                           // 0x04D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMotionControllerComponent*                          RightMotionControllerComponent;                          // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoHeightAdjust;                                       // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_717I[0x3];                                   // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OriginHeight;                                            // 0x04EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHMDTrackingOrigin                                         TrackingOrigin;                                          // 0x04F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P479[0xF];                                   // 0x04F1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SWGVRBaseSettings
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USWGVRBaseSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              DefaultHighlightMaterial[0x28];                          // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.SWGVRBaseSystem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USWGVRBaseSystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnVRModeChanged;                                         // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U8W[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void SwitchVRMode(ESWGVRMode Mode);
		bool SwitchToVR();
		bool SwitchToFlat();
		bool IsHMDConnected();
		ESWGVRMode GetVRMode();
		ESWGVRHmdType GetHmdType();
		void ExecuteOnVRMode(ESWGVRMode* Branches);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.TrackPawnToHMD
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UTrackPawnToHMD : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.TriggerBoxBase
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class ATriggerBoxBase : public AInteractableBase
	{
	public:
		class UBoxComponent*                                       TriggerBox;                                              // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnTriggerBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnTriggerBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRDebugPrint
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRDebugPrint : public UBlueprintFunctionLibrary
	{
	public:
		void VRPrintToScreen(class UObject* WorldContextObject, const class FString& MessageText);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRDebugPrintTarget
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AVRDebugPrintTarget : public AActor
	{
	public:
		class UTextRenderComponent*                                RenderComponent;                                         // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6Y7Y[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRGazeComponent
	 * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
	 */
	class UVRGazeComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnGazeEnterActor;                                        // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGazeExitActor;                                         // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEyesOpen;                                              // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEyesClose;                                             // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      GazeDistance;                                            // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N7MY[0xC];                                   // 0x00F4(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRGrabberComponent
	 * Size -> 0x0280 (FullSize[0x0330] - InheritedSize[0x00B0])
	 */
	class UVRGrabberComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_JQL4[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHeldActorDestroyed;                                    // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorGrabbed;                                          // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorReleased;                                         // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginGrabHover;                                        // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndGrabHover;                                          // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bAutoBindInputs;                                         // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z5EW[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                GrabContext;                                             // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        LeftGrabAction;                                          // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RightGrabAction;                                         // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GG9G[0x200];                                 // 0x0130(0x0200) MISSED OFFSET (PADDING)

	public:
		void SetupHandsFromHandComponent();
		void SetupGrabTriggers(class UPrimitiveComponent* LeftPrimitive, class UPrimitiveComponent* RightPrimitive);
		void SetupGrabAttachments(class USceneComponent* LeftAttachment, class USceneComponent* RightAttachment);
		void ReleaseHeldActorFromHand(ESWGVRBaseHand hand);
		void ReleaseActor(class AActor* ActorToRelease);
		void OnHoveredActorDestroyedHandler(class AActor* ActorBeingDestroyed);
		void OnHeldActorDestroyedHandler(class AActor* ActorBeingDestroyed);
		void OnGrabRightAxis(const struct FInputActionValue& Value);
		void OnGrabLeftAxis(const struct FInputActionValue& Value);
		void GrabActor(class AActor* ActorToGrab, class UPrimitiveComponent* ComponentToGrab, ESWGVRBaseHand hand);
		class UMotionControllerComponent* GetMotionControllerForHand(ESWGVRBaseHand hand);
		class AActor* GetHoveredGrabbableFromHand(ESWGVRBaseHand hand);
		class AActor* GetHeldActorFromHand(ESWGVRBaseHand hand);
		class USceneComponent* GetAttachmentPoint(ESWGVRBaseHand hand);
		class UPhysicsConstraintComponent* GetAttachmentPhysicsConstraint(ESWGVRBaseHand hand);
		void AttemptRightRelease(const struct FInputActionValue& Value);
		void AttemptRightGrab(const struct FInputActionValue& Value);
		void AttemptLeftRelease(const struct FInputActionValue& Value);
		void AttemptLeftGrab(const struct FInputActionValue& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRHand
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRHand : public UInterface
	{
	public:
		void UnconstrainComponent();
		void SetHandVisibility(bool Visibility);
		void SetHandType(ESWGVRBaseHand hand);
		void SetHandState(EHandModelState State);
		void SetHandProximity(float Proximity);
		void SetHandGrip(float GripValue);
		void SetGrabHoverStateEnable(bool bEnabled);
		void HandCreationFinished(class UVRHandComponent* HandComponent);
		ESWGVRBaseHand GetHandType();
		EHandModelState GetHandState();
		class UPrimitiveComponent* GetHandPrimitive();
		class UPrimitiveComponent* GetGrabDetector();
		class UPhysicsConstraintComponent* GetGrabConstraintComponent();
		class UPrimitiveComponent* GetConstraintBase();
		void GetComponentsInGrabRange(TArray<class UPrimitiveComponent*>* ActorsInGrabRange);
		void ConstrainComponentToHand(class UPrimitiveComponent* PrimitiveComponentToConstrain);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRHandActor
	 * Size -> 0x00A8 (FullSize[0x02C8] - InheritedSize[0x0220])
	 */
	class AVRHandActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_Q1PJ[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESWGVRBaseHand                                             HandType;                                                // 0x0238(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GI1M[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHapticFeedbackEffect_Base*                          HapticFeedbackEffect;                                    // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    HandSocket;                                              // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       HandBaseCollision;                                       // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                HandCollision;                                           // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   IndexFingerCollision;                                    // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                MiddleFingerCollision;                                   // 0x0268(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     IndexStart;                                              // 0x0270(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     IndexEnd;                                                // 0x0278(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     MiddleStart;                                             // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     MiddleEnd;                                               // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              HandModel;                                               // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 GrabDetector;                                            // 0x0298(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsConstraintComponent*                         HandBaseConstraint;                                      // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPhysicsConstraintComponent*                         GrabConstraint;                                          // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JB2S[0x18];                                  // 0x02B0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnReleasedActor(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand);
		void OnHeldActorDestroyed(class AActor* HeldActorBeingDestroyed, ESWGVRBaseHand hand);
		void OnGrabbedActor(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand);
		void OnEndGrabHover(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand);
		void OnBeginGrabHover(class AActor* Actor, class UPrimitiveComponent* PrimitiveComponent, ESWGVRBaseHand hand);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRHandComponent
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UVRHandComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_05WQ[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHandsCreated;                                          // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              HandClass;                                               // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnHandsOnBegin;                                      // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWJ9[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LeftHand;                                                // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              RightHand;                                               // 0x00E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RBAB[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnconstrainComponentFromHand(ESWGVRBaseHand hand);
		void SpawnHands();
		void SetVisibilityOfHandActor(ESWGVRBaseHand hand, bool Visibility);
		void SetVisibilityBothHandActors(bool Visibility);
		bool HandsAreCreated();
		class UMotionControllerComponent* GetMotionControllerForHand(ESWGVRBaseHand hand);
		class AActor* GetHandActor(ESWGVRBaseHand hand);
		void ConstrainComponentToHand(ESWGVRBaseHand hand, class UPrimitiveComponent* PrimitiveComponentToConstrain);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRPlayer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRPlayer : public UInterface
	{
	public:
		void TeleportVRPlayer(const struct FVector& WorldLocation, const struct FRotator& WorldRotation);
		void ResetVRView(const struct FVector& WorldLocation);
		void ResetViewAfterFrame();
		void RemoveMappingContext(class UInputMappingContext* InInputMappingContext);
		void PreTeleportVRPlayer();
		void PostTeleportVRPlayer();
		class USceneComponent* GetVROrigin();
		EPlayerRotationInputType GetPlayerInputRotationType();
		float GetPlayerInputRotationScale();
		class UCameraComponent* GetPlayerCamera();
		class UMotionControllerComponent* GetMotionController(ESWGVRBaseHand hand);
		bool GetInvertHandControls();
		float GetCameraBrightnessSetting();
		void AddMappingContext(class UInputMappingContext* InInputMappingContext, int32_t Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRPlayerWidgetInteractor
	 * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
	 */
	class UVRPlayerWidgetInteractor : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_B2VY[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraSystem*                                      BeamNiagaraSystem;                                       // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      InteractionDistance;                                     // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWidgetInteractionEnabled;                               // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CRVG[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TranslucencySortPriority;                                // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   WidgetPointerIndex;                                      // 0x00CC(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KZOO[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetInteractionComponent*                         LeftWidgetInteraction;                                   // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraComponent*                                   LeftBeam;                                                // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetInteractionComponent*                         RightWidgetInteraction;                                  // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraComponent*                                   RightBeam;                                               // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                WidgetInteractionMappingContext;                         // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        LeftInteractionAction;                                   // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RightInteractionAction;                                  // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_34I0[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetWidgetPointerIndex(int32_t PointerIndex);
		void SetWidgetInteractionEnabled(bool bEnable);
		void SetInteractionDistance(float Distance);
		bool IsWidgetInteractionEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRTeleportComponent
	 * Size -> 0x0118 (FullSize[0x01C8] - InheritedSize[0x00B0])
	 */
	class UVRTeleportComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BT6C[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTeleportBegin;                                         // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeleportEndSuccess;                                    // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeleportEndFail;                                       // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    InputPriority;                                           // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BYWD[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                TeleportMappingContext;                                  // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        LeftTeleportAction;                                      // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RightTeleportAction;                                     // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoBindInputs;                                         // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2JZB[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         LocationMesh;                                            // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  ValidLocationMaterial;                                   // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  InvalidLocationMaterial;                                 // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraSystem*                                      NiagaraSystemForTeleportLine;                            // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TeleportDistance;                                        // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TeleportDurationSeconds;                                 // 0x0134(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxStepHeight;                                           // 0x0138(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TeleportCheckStartOffset;                                // 0x013C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CapsuleRadius;                                           // 0x0140(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CapsuleHalfHeight;                                       // 0x0144(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUsePlayerCapsuleCollider;                               // 0x0148(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTeleportOverTime;                                       // 0x0149(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECollisionChannel                                          TeleportCollisionChannel;                                // 0x014A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZGJD[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0150(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bTraceComplex;                                           // 0x0160(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VUBH[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVRTeleportRule*                                     TeleportRule;                                            // 0x0168(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowDebug;                                              // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I8Y8[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UVRHandComponent>                     VRHandComp;                                              // 0x0174(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VDZR[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AStaticMeshActor*                                    LocationActor;                                           // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraComponent*                                   NiagaraComponentLeft;                                    // 0x0188(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNiagaraComponent*                                   NiagaraComponentRight;                                   // 0x0190(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YIAJ[0x30];                                  // 0x0198(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetupHandBeams();
		void SetAutoBind(bool bEnableAutoBind);
		void RemoveIgnoreActor(class AActor* ActorToRemove);
		void Init(class UVRHandComponent* HandComp);
		class AStaticMeshActor* GetTeleportLocationActor();
		void AddIgnoreActor(class AActor* ActorToIgnore);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRTeleportRule
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRTeleportRule : public UObject
	{
	public:
		bool IsGroundValid(class AActor* GroundActor, class UPrimitiveComponent* GroundComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGVRBase.VRTeleportRule_Tags
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UVRTeleportRule_Tags : public UVRTeleportRule
	{
	public:
		bool                                                       bShouldHaveTag;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7X8[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TagsToCheck;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
