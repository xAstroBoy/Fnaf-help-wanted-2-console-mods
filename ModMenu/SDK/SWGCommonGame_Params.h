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
	 * Function SWGCommonGame.SightFilter.CanBeSeen
	 */
	struct USightFilter_CanBeSeen_Params
	{
	public:
		class USightComponent*                                     SightComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVisualSourceComponent*                              VisualSourceComponent;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.HitAudioComponentBasic.SetSoundEnable
	 */
	struct UHitAudioComponentBasic_SetSoundEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.HitAudioComponentBasic.SetHitSoundSoft
	 */
	struct UHitAudioComponentBasic_SetHitSoundSoft_Params
	{
	public:
		class USoundBase*                                          InSoundOnHitSoft;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.HitAudioComponentBasic.SetHitSoundHard
	 */
	struct UHitAudioComponentBasic_SetHitSoundHard_Params
	{
	public:
		class USoundBase*                                          InSoundOnHit;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.HitAudioComponentBasic.OnActorHit
	 */
	struct UHitAudioComponentBasic_OnActorHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.HitAudioComponentBasic.GetHitSoundSoft
	 */
	struct UHitAudioComponentBasic_GetHitSoundSoft_Params
	{
	public:
		class USoundBase*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.HitAudioComponentBasic.GetHitSoundHard
	 */
	struct UHitAudioComponentBasic_GetHitSoundHard_Params
	{
	public:
		class USoundBase*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.BoundaryHandlerAction.Setup
	 */
	struct UBoundaryHandlerAction_Setup_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.BoundaryHandlerAction.OnBoundaryHit
	 */
	struct UBoundaryHandlerAction_OnBoundaryHit_Params
	{
	public:
		class AActor*                                              ActorHittingBoundary;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.BoundaryHandlerAction.OnBoundaryExit
	 */
	struct UBoundaryHandlerAction_OnBoundaryExit_Params
	{
	public:
		class AActor*                                              ActorExitingBoundary;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.BoundaryComponent.OnActorEndOverlap
	 */
	struct UBoundaryComponent_OnActorEndOverlap_Params
	{
	public:
		class AActor*                                              OverlapActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.BoundaryComponent.OnActorBeginOverlap
	 */
	struct UBoundaryComponent_OnActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OverlapActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.FPSWatchdogInterface.OnShowFPSWatermark
	 */
	struct UFPSWatchdogInterface_OnShowFPSWatermark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.LightFlickerComponent.SetLightFlickerProperties
	 */
	struct ULightFlickerComponent_SetLightFlickerProperties_Params
	{
	public:
		struct FLightFlickerProperties                             InLightFlickerProperties;                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.LightFlickerComponent.SetFlickerActive
	 */
	struct ULightFlickerComponent_SetFlickerActive_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.MemoryWatchdogInterface.OnShowMemoryWatermark
	 */
	struct UMemoryWatchdogInterface_OnShowMemoryWatermark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.PlatformFeatureSubsystem.UnregisterCallback
	 */
	struct UPlatformFeatureSubsystem_UnregisterCallback_Params
	{	};

	/**
	 * Function SWGCommonGame.PlatformFeatureSubsystem.RegisterCallback
	 */
	struct UPlatformFeatureSubsystem_RegisterCallback_Params
	{	};

	/**
	 * Function SWGCommonGame.PlatformFeatureSubsystem.ProgressAchievement
	 */
	struct UPlatformFeatureSubsystem_ProgressAchievement_Params
	{
	public:
		class FString                                              AchievementID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Progress;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MEVK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StatName;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.PlatformFeatureSubsystem.GetAchievementsFromBackend
	 */
	struct UPlatformFeatureSubsystem_GetAchievementsFromBackend_Params
	{	};

	/**
	 * Function SWGCommonGame.PlatformFeatureSubsystem.ClearActivityToLoad
	 */
	struct UPlatformFeatureSubsystem_ClearActivityToLoad_Params
	{	};

	/**
	 * Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetStartAndEndPercentageForRange
	 */
	struct URangeArrayBlueprintFunctionLibrary_GetStartAndEndPercentageForRange_Params
	{
	public:
		struct FRangeArray                                         RangeArray;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                RangeName;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutStartPercentage;                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutEndPercentage;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetRangeNames
	 */
	struct URangeArrayBlueprintFunctionLibrary_GetRangeNames_Params
	{
	public:
		struct FRangeArray                                         RangeArray;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        OutRangeNames;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.RangeArrayBlueprintFunctionLibrary.GetRangeAndIndex
	 */
	struct URangeArrayBlueprintFunctionLibrary_GetRangeAndIndex_Params
	{
	public:
		struct FRangeArray                                         RangeArray;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTaggedRange                                        OutRange;                                                // 0x0014(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutIndex;                                                // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.RangeAsset.GetRangeArray
	 */
	struct URangeAsset_GetRangeArray_Params
	{
	public:
		struct FRangeArray                                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.RangeAsset.GetRangeAndIndex
	 */
	struct URangeAsset_GetRangeAndIndex_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTaggedRange                                        OutRange;                                                // 0x0004(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutIndex;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.RangeProvider.GetRangeArray
	 */
	struct URangeProvider_GetRangeArray_Params
	{
	public:
		struct FRangeArray                                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.RangeProvider.GetCurrentRangeName
	 */
	struct URangeProvider_GetCurrentRangeName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetSightType
	 */
	struct USightComponent_SetSightType_Params
	{
	public:
		ESightType                                                 InSightType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetSightParams
	 */
	struct USightComponent_SetSightParams_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistance;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDistance;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetSightEnabled
	 */
	struct USightComponent_SetSightEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetSightAngle
	 */
	struct USightComponent_SetSightAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetFrustumTypeParams
	 */
	struct USightComponent_SetFrustumTypeParams_Params
	{
	public:
		float                                                      InMinYaw;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxYaw;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMinPitch;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InMaxPitch;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetEndDistance
	 */
	struct USightComponent_SetEndDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.SetAspectRatio
	 */
	struct USightComponent_SetAspectRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.OnVisibleActorDestroyed
	 */
	struct USightComponent_OnVisibleActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.IsSightEnabled
	 */
	struct USightComponent_IsSightEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.IsActorVisible
	 */
	struct USightComponent_IsActorVisible_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetVisibleActors
	 */
	struct USightComponent_GetVisibleActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetStartDistance
	 */
	struct USightComponent_GetStartDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetSightType
	 */
	struct USightComponent_GetSightType_Params
	{
	public:
		ESightType                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetSightHalfAngle
	 */
	struct USightComponent_GetSightHalfAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetMinYaw
	 */
	struct USightComponent_GetMinYaw_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetMinPitch
	 */
	struct USightComponent_GetMinPitch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetMaxYaw
	 */
	struct USightComponent_GetMaxYaw_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetMaxPitch
	 */
	struct USightComponent_GetMaxPitch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetFrustumTypeParams
	 */
	struct USightComponent_GetFrustumTypeParams_Params
	{
	public:
		float                                                      OutMinYaw;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMaxYaw;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMinPitch;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMaxPitch;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetEndDistance
	 */
	struct USightComponent_GetEndDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightComponent.GetAspectRatio
	 */
	struct USightComponent_GetAspectRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SightSystem.SetSightSystemDisplay
	 */
	struct USightSystem_SetSightSystemDisplay_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGCommonGameplayTagsLibrary.GetTagChildren
	 */
	struct USWGCommonGameplayTagsLibrary_GetTagChildren_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGCommonGameplayTagsLibrary.GetAllGameplayTags
	 */
	struct USWGCommonGameplayTagsLibrary_GetAllGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitilesFunctionLibrary.PlayVOWithSubtitlesAndWait
	 */
	struct USWGSubtitilesFunctionLibrary_PlayVOWithSubtitlesAndWait_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent*                                     AudioComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESWGPlayVOExec                                             Exec;                                                    // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KW4H[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitilesFunctionLibrary.PlayVOWithSubtitles
	 */
	struct USWGSubtitilesFunctionLibrary_PlayVOWithSubtitles_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent*                                     AudioComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitlesInterface.UpdateSubtitles
	 */
	struct USWGSubtitlesInterface_UpdateSubtitles_Params
	{
	public:
		class FText                                                Speaker;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                InText;                                                  // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitlesInterface.SetupSubtitleStyle
	 */
	struct USWGSubtitlesInterface_SetupSubtitleStyle_Params
	{
	public:
		ESubtitlesSize                                             Style;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitlesInterface.OnShowSubtitles
	 */
	struct USWGSubtitlesInterface_OnShowSubtitles_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitlesSubsystem.QueueSubtitle
	 */
	struct USWGSubtitlesSubsystem_QueueSubtitle_Params
	{
	public:
		TArray<struct FSubtitleRecord>                             InRecords;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.SWGSubtitlesSubsystem.ClearQueueSubtitle
	 */
	struct USWGSubtitlesSubsystem_ClearQueueSubtitle_Params
	{	};

	/**
	 * Function SWGCommonGame.VisualQualityFunctionLibrary.ApplyVisualQualitySettings
	 */
	struct UVisualQualityFunctionLibrary_ApplyVisualQualitySettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVisualQualityPlatformData*                          QualitySettings;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVisualQualityLevel                                        Level;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.SetVisualOffsetLocations
	 */
	struct UVisualSourceComponent_SetVisualOffsetLocations_Params
	{
	public:
		TArray<struct FVector>                                     InVisualOffsets;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.SetVisualOffset
	 */
	struct UVisualSourceComponent_SetVisualOffset_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             VisualOffset;                                            // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.SetSourceVisibility
	 */
	struct UVisualSourceComponent_SetSourceVisibility_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.SetSightFilter
	 */
	struct UVisualSourceComponent_SetSightFilter_Params
	{
	public:
		class USightFilter*                                        InSightFilter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.SetAutoRegistering
	 */
	struct UVisualSourceComponent_SetAutoRegistering_Params
	{
	public:
		bool                                                       bAutoReg;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.RemoveVisualOffset
	 */
	struct UVisualSourceComponent_RemoveVisualOffset_Params
	{
	public:
		int32_t                                                    PointIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.GetVisualOffsets
	 */
	struct UVisualSourceComponent_GetVisualOffsets_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.GetVisualLocations
	 */
	struct UVisualSourceComponent_GetVisualLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.GetSourceVisibility
	 */
	struct UVisualSourceComponent_GetSourceVisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.GetSightSourcesWatchingMe
	 */
	struct UVisualSourceComponent_GetSightSourcesWatchingMe_Params
	{
	public:
		TArray<class USightComponent*>                             ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.GetSightFilter
	 */
	struct UVisualSourceComponent_GetSightFilter_Params
	{
	public:
		class USightFilter*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceComponent.GetAutoRegistering
	 */
	struct UVisualSourceComponent_GetAutoRegistering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceSceneComponent.SetVisualSourceEnabled
	 */
	struct UVisualSourceSceneComponent_SetVisualSourceEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SWGCommonGame.VisualSourceSceneComponent.IsVisualSourceEnabled
	 */
	struct UVisualSourceSceneComponent_IsVisualSourceEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
