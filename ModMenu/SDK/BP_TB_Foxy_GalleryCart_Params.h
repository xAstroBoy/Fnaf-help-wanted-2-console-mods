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
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.GetPossibleSplinePaths
	 */
	struct ABP_TB_Foxy_GalleryCart_C_GetPossibleSplinePaths_Params
	{
	public:
		TArray<class ABP_SplinePathway_C*>                         PossiblePaths;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.GetSplineFollowerContext
	 */
	struct ABP_TB_Foxy_GalleryCart_C_GetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CheckPlayGalleryVO
	 */
	struct ABP_TB_Foxy_GalleryCart_C_CheckPlayGalleryVO_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OrientToTargetAlongSpline
	 */
	struct ABP_TB_Foxy_GalleryCart_C_OrientToTargetAlongSpline_Params
	{
	public:
		struct FTransform                                          TargetTransform;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          OriginalTransform;                                       // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      Lerp;                                                    // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J2JI[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CheckForClimbing
	 */
	struct ABP_TB_Foxy_GalleryCart_C_CheckForClimbing_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.PlayMovementSounds
	 */
	struct ABP_TB_Foxy_GalleryCart_C_PlayMovementSounds_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OrientToTarget
	 */
	struct ABP_TB_Foxy_GalleryCart_C_OrientToTarget_Params
	{
	public:
		struct FTransform                                          TargetTransform;                                         // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          OriginalTransform;                                       // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.FollowSpline
	 */
	struct ABP_TB_Foxy_GalleryCart_C_FollowSpline_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.UpdateTotalScore
	 */
	struct ABP_TB_Foxy_GalleryCart_C_UpdateTotalScore_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EJOU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LerpRateTimeline__FinishedFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_LerpRateTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LerpRateTimeline__UpdateFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_LerpRateTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TurningTimeline__FinishedFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_TurningTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TurningTimeline__UpdateFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_TurningTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeavingGalleryTimeline__FinishedFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_LeavingGalleryTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeavingGalleryTimeline__UpdateFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_LeavingGalleryTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Timeline_FadeZoneTransition__FinishedFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_Timeline_FadeZoneTransition__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Timeline_FadeZoneTransition__UpdateFunc
	 */
	struct ABP_TB_Foxy_GalleryCart_C_Timeline_FadeZoneTransition__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Event Returned To Spline
	 */
	struct ABP_TB_Foxy_GalleryCart_C_EventReturnedToSpline_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ArriveAtGallery
	 */
	struct ABP_TB_Foxy_GalleryCart_C_ArriveAtGallery_Params
	{
	public:
		struct FTransform                                          FollowerTransformTarget;                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class ABP_TB_Foxy_TargetGroupManager_C*                    SplineBreak;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeaveGallery
	 */
	struct ABP_TB_Foxy_GalleryCart_C_LeaveGallery_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.StartMovementAlongSpline
	 */
	struct ABP_TB_Foxy_GalleryCart_C_StartMovementAlongSpline_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ArriveAtPersistentGallery
	 */
	struct ABP_TB_Foxy_GalleryCart_C_ArriveAtPersistentGallery_Params
	{
	public:
		class ABP_TB_Foxy_TargetGroupManager_C*                    TargetManager;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OnClimbCall
	 */
	struct ABP_TB_Foxy_GalleryCart_C_OnClimbCall_Params
	{
	public:
		bool                                                       IsClimbing;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.DEBUG_IncreaseScore
	 */
	struct ABP_TB_Foxy_GalleryCart_C_DEBUG_IncreaseScore_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.StartTurn
	 */
	struct ABP_TB_Foxy_GalleryCart_C_StartTurn_Params
	{
	public:
		bool                                                       IsGallery;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldModifySpeed;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldModifyDepthFade;                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.EndTurn
	 */
	struct ABP_TB_Foxy_GalleryCart_C_EndTurn_Params
	{
	public:
		bool                                                       ShouldModifySpeed;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldModifyDepthFade;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerDepthFade
	 */
	struct ABP_TB_Foxy_GalleryCart_C_TriggerDepthFade_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerDepthFadeOnGalleryFinished
	 */
	struct ABP_TB_Foxy_GalleryCart_C_TriggerDepthFadeOnGalleryFinished_Params
	{
	public:
		bool                                                       bShouldTrigger;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReceiveTick
	 */
	struct ABP_TB_Foxy_GalleryCart_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReceiveBeginPlay
	 */
	struct ABP_TB_Foxy_GalleryCart_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.PlayVO
	 */
	struct ABP_TB_Foxy_GalleryCart_C_PlayVO_Params
	{
	public:
		int32_t                                                    VoSelection;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Sequencer_DepthFadeTrigger
	 */
	struct ABP_TB_Foxy_GalleryCart_C_Sequencer_DepthFadeTrigger_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.SetSplineFollowerContext
	 */
	struct ABP_TB_Foxy_GalleryCart_C_SetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerFadeZone
	 */
	struct ABP_TB_Foxy_GalleryCart_C_TriggerFadeZone_Params
	{
	public:
		bool                                                       ToFade;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IS6I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAR_Transition;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.RandomSplashes
	 */
	struct ABP_TB_Foxy_GalleryCart_C_RandomSplashes_Params
	{
	public:
		bool                                                       CanPlay;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ExecuteUbergraph_BP_TB_Foxy_GalleryCart
	 */
	struct ABP_TB_Foxy_GalleryCart_C_ExecuteUbergraph_BP_TB_Foxy_GalleryCart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OAAO[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReachedEndOfSpline__DelegateSignature
	 */
	struct ABP_TB_Foxy_GalleryCart_C_ReachedEndOfSpline__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CartAtGallery__DelegateSignature
	 */
	struct ABP_TB_Foxy_GalleryCart_C_CartAtGallery__DelegateSignature_Params
	{
	public:
		class ABP_TB_Foxy_TargetGroupManager_C*                    ManagerOfGallery;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StationaryGallery;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
