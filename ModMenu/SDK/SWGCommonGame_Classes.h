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
	 * Class SWGCommonGame.SightFilter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USightFilter : public UObject
	{
	public:
		bool CanBeSeen(class USightComponent* SightComponent, class UVisualSourceComponent* VisualSourceComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.HitAudioComponentBasic
	 * Size -> 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
	 */
	class UHitAudioComponentBasic : public UActorComponent
	{
	public:
		float                                                      SoftSoundHitSpeed;                                       // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinHitSoundSpeed;                                        // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxHitSoundSpeed;                                        // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2SIL[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SoundOnHitSoft;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          SoundOnHitHard;                                          // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HitCoolDownMin;                                          // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HitCoolDownMax;                                          // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSoundEnabled;                                           // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MSPV[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetSoundEnable(bool bEnable);
		void SetHitSoundSoft(class USoundBase* InSoundOnHitSoft);
		void SetHitSoundHard(class USoundBase* InSoundOnHit);
		void OnActorHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		class USoundBase* GetHitSoundSoft();
		class USoundBase* GetHitSoundHard();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.BoundaryHandlerAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBoundaryHandlerAction : public UObject
	{
	public:
		void Setup(class AActor* Actor);
		void OnBoundaryHit(class AActor* ActorHittingBoundary);
		void OnBoundaryExit(class AActor* ActorExitingBoundary);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.BoundaryBoxVolume
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ABoundaryBoxVolume : public AActor
	{
	public:
		class UBoundaryComponent*                                  BoundaryComponent;                                       // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       BoxComponent;                                            // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.BoundaryComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UBoundaryComponent : public UActorComponent
	{
	public:
		void OnActorEndOverlap(class AActor* OverlapActor, class AActor* OtherActor);
		void OnActorBeginOverlap(class AActor* OverlapActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.BoundaryHandlerComponent
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UBoundaryHandlerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnBoundaryHit;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBoundaryExit;                                          // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UBoundaryHandlerAction*                              Action;                                                  // 0x00D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.FootstepCameraShakeData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UFootstepCameraShakeData : public UPrimaryDataAsset
	{
	public:
		class UCameraShakeBase*                                    ShakeClass;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDist;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDist;                                                 // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XV2P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.FootstepSoundData
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UFootstepSoundData : public UPrimaryDataAsset
	{
	public:
		TMap<EPhysicalSurface, class USoundCue*>                   MaterialToSoundMap;                                      // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundCue*                                           FootstepSound;                                           // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeMultiplier;                                        // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchMultiplier;                                         // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.FPSWatchdogInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFPSWatchdogInterface : public UInterface
	{
	public:
		void OnShowFPSWatermark(bool Visible);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.PerformanceWatchdogBaseSubsystem
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UPerformanceWatchdogBaseSubsystem : public UTickableWorldSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.FPSWatchdogSubsystem
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UFPSWatchdogSubsystem : public UPerformanceWatchdogBaseSubsystem
	{
	public:
		unsigned char                                              UnknownData_A3L5[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.InitialPositionBoundaryAction
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UInitialPositionBoundaryAction : public UBoundaryHandlerAction
	{
	public:
		unsigned char                                              UnknownData_8Y3C[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.LightFlickerComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class ULightFlickerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlickerStep;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ULightComponent*                                     OwnerLightComp;                                          // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FFlickerStepData>                            Steps;                                                   // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       PreviewInEditor;                                         // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StartActive;                                             // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NS4R[0x2];                                   // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultIntensity;                                        // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxIntensity;                                            // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRangedValueI                                       FlickerCount;                                            // 0x00E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FRangedValueF                                       Delay;                                                   // 0x00EC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FRangedValueF                                       StepIntensityPercentage;                                 // 0x00F4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FRangedValueF                                       TimeBetweenSteps;                                        // 0x00FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y7XR[0x14];                                  // 0x0104(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetLightFlickerProperties(const struct FLightFlickerProperties& InLightFlickerProperties);
		void SetFlickerActive(bool Value);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.MemoryWatchdogInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMemoryWatchdogInterface : public UInterface
	{
	public:
		void OnShowMemoryWatermark(bool Visible);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.MemoryWatchdogSubsystem
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMemoryWatchdogSubsystem : public UPerformanceWatchdogBaseSubsystem
	{
	public:
		unsigned char                                              UnknownData_QCQM[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.PlatformFeatureSubsystem
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UPlatformFeatureSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_K0EI[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActivityLoadRequest;                                   // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              ActivityIDToLoad;                                        // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16UR[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		void UnregisterCallback();
		void RegisterCallback();
		bool ProgressAchievement(const class FString& AchievementID, int32_t Progress, const class FString& StatName);
		void GetAchievementsFromBackend();
		void ClearActivityToLoad();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.PlayerSightFilter
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPlayerSightFilter : public USightFilter
	{
	public:
		bool                                                       bPlayerCanSee;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JLM[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.RangeArrayBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URangeArrayBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void GetStartAndEndPercentageForRange(const struct FRangeArray& RangeArray, const class FName& RangeName, float* OutStartPercentage, float* OutEndPercentage);
		void GetRangeNames(const struct FRangeArray& RangeArray, TArray<class FName>* OutRangeNames);
		void GetRangeAndIndex(const struct FRangeArray& RangeArray, float InValue, struct FTaggedRange* OutRange, int32_t* OutIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.RangeAsset
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URangeAsset : public UPrimaryDataAsset
	{
	public:
		struct FRangeArray                                         RangeArray;                                              // 0x0030(0x0010) Edit, NativeAccessSpecifierPrivate

	public:
		struct FRangeArray GetRangeArray();
		void GetRangeAndIndex(float InValue, struct FTaggedRange* OutRange, int32_t* OutIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.RangeDelegatesComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class URangeDelegatesComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnRangeChanged;                                          // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.RangeProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URangeProvider : public UInterface
	{
	public:
		struct FRangeArray GetRangeArray();
		class FName GetCurrentRangeName();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SightComponent
	 * Size -> 0x0058 (FullSize[0x0250] - InheritedSize[0x01F8])
	 */
	class USightComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSightChanged;                                          // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      SightHalfAngle;                                          // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartDistance;                                           // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EndDistance;                                             // 0x0210(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESightType                                                 SightType;                                               // 0x0214(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T9A3[0x3];                                   // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AspectRatio;                                             // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinYaw;                                                  // 0x021C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxYaw;                                                  // 0x0220(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinPitch;                                                // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPitch;                                                // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    ThetaSteps;                                              // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PhiSteps;                                                // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BZQY[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      VisibleActors;                                           // 0x0238(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate
		bool                                                       bSightDetectionEnabled;                                  // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bShowVisionDebug;                                        // 0x0249(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z8TZ[0x6];                                   // 0x024A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetSightType(ESightType InSightType);
		void SetSightParams(float Angle, float MinDistance, float MaxDistance);
		void SetSightEnabled(bool bEnable);
		void SetSightAngle(float Angle);
		void SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch);
		void SetEndDistance(float Distance);
		void SetAspectRatio(float Ratio);
		void OnVisibleActorDestroyed(class AActor* DestroyedActor);
		bool IsSightEnabled();
		bool IsActorVisible(class AActor* Actor);
		TArray<class AActor*> GetVisibleActors();
		float GetStartDistance();
		ESightType GetSightType();
		float GetSightHalfAngle();
		float GetMinYaw();
		float GetMinPitch();
		float GetMaxYaw();
		float GetMaxPitch();
		void GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch);
		float GetEndDistance();
		float GetAspectRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SightFilterActorType
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USightFilterActorType : public USightFilter
	{
	public:
		TArray<class UClass*>                                      ActorTypesAllowed;                                       // 0x0028(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SightSystem
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class USightSystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_N0CO[0x78];                                  // 0x0040(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetSightSystemDisplay(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SWGCommonGameplayTagsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGCommonGameplayTagsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FGameplayTagContainer GetTagChildren(const struct FGameplayTag& GameplayTag);
		void GetAllGameplayTags(struct FGameplayTagContainer* GameplayTags);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SWGSubtitilesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGSubtitilesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void PlayVOWithSubtitlesAndWait(class UObject* WorldContextObject, class UAudioComponent* AudioComponent, float StartTime, ESWGPlayVOExec* Exec, const struct FLatentActionInfo& LatentInfo);
		void PlayVOWithSubtitles(class UObject* WorldContextObject, class UAudioComponent* AudioComponent, float StartTime);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SWGSubtitlesInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGSubtitlesInterface : public UInterface
	{
	public:
		void UpdateSubtitles(const class FText& Speaker, const class FText& InText);
		void SetupSubtitleStyle(ESubtitlesSize Style);
		void OnShowSubtitles(bool Visible);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.SWGSubtitlesSubsystem
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class USWGSubtitlesSubsystem : public UTickableWorldSubsystem
	{
	public:
		class UAudioComponent*                                     ActiveAudioAudioComponent;                               // 0x0040(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FSubtitleRecord>                             QueuedSubtitles;                                         // 0x0048(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PA8N[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)

	public:
		void QueueSubtitle(TArray<struct FSubtitleRecord> InRecords);
		void ClearQueueSubtitle();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualQualityFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisualQualityFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ApplyVisualQualitySettings(class UObject* WorldContextObject, class UVisualQualityPlatformData* QualitySettings, EVisualQualityLevel Level);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualQualityLevelData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UVisualQualityLevelData : public UPrimaryDataAsset
	{
	public:
		class UVisualQualitySettingSpec*                           Low;                                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualitySettingSpec*                           Medium;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualitySettingSpec*                           High;                                                    // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualQualityPlatformData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UVisualQualityPlatformData : public UPrimaryDataAsset
	{
	public:
		class UVisualQualityLevelData*                             BaseSettingsQuality;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             AntiAliasQuality;                                        // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             ShadowQuality;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             TextureQuality;                                          // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             EffectsQuality;                                          // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             EnviromentQuality;                                       // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             CharacterQuality;                                        // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             ResolutionQuality;                                       // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityLevelData*                             ReflectionQuality;                                       // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualQualityOptionsData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UVisualQualityOptionsData : public UPrimaryDataAsset
	{
	public:
		class UVisualQualityPlatformData*                          PS5;                                                     // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualQualityPlatformData*                          PC;                                                      // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualQualitySettingSpec
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UVisualQualitySettingSpec : public UPrimaryDataAsset
	{
	public:
		TArray<struct FVisualQualitySettingsCommand>               Commands;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualQualitySubsystem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UVisualQualitySubsystem : public UGameInstanceSubsystem
	{
	public:
		class UVisualQualityOptionsData*                           VisualQualityData;                                       // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESWGPlatform                                               QualitySettingsPlatform;                                 // 0x0038(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FR27[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQualitySettingsComplete;                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualSourceComponent
	 * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
	 */
	class UVisualSourceComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnVisibilityChanged;                                     // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USightFilter*                                        SightFilter;                                             // 0x00C0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     VisualOffsets;                                           // 0x00C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bIsVisibilityEnabled;                                    // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoRegistering;                                        // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VQ6H[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USightComponent*>                             SightSourcesWatchingMe;                                  // 0x00E0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YQIZ[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets);
		void SetVisualOffset(int32_t PointIndex, const struct FVector& VisualOffset);
		void SetSourceVisibility(bool bEnable);
		void SetSightFilter(class USightFilter* InSightFilter);
		void SetAutoRegistering(bool bAutoReg);
		void RemoveVisualOffset(int32_t PointIndex);
		TArray<struct FVector> GetVisualOffsets();
		TArray<struct FVector> GetVisualLocations();
		bool GetSourceVisibility();
		TArray<class USightComponent*> GetSightSourcesWatchingMe();
		class USightFilter* GetSightFilter();
		bool GetAutoRegistering();
		static UClass* StaticClass();
	};

	/**
	 * Class SWGCommonGame.VisualSourceSceneComponent
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UVisualSourceSceneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_CCA7[0x8];                                   // 0x01F8(0x0008) Fix Super Size

	public:
		void SetVisualSourceEnabled(bool bEnable);
		bool IsVisualSourceEnabled();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
