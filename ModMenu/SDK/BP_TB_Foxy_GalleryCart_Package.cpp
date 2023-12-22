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
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.GetPossibleSplinePaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_SplinePathway_C*>                 PossiblePaths                                              (Parm, OutParm)
	 */
	void ABP_TB_Foxy_GalleryCart_C::GetPossibleSplinePaths(TArray<class ABP_SplinePathway_C*>* PossiblePaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.GetPossibleSplinePaths");
		
		ABP_TB_Foxy_GalleryCart_C_GetPossibleSplinePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossiblePaths != nullptr)
			*PossiblePaths = params.PossiblePaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.GetSplineFollowerContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.GetSplineFollowerContext");
		
		ABP_TB_Foxy_GalleryCart_C_GetSplineFollowerContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineFollowerContext != nullptr)
			*SplineFollowerContext = params.SplineFollowerContext;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CheckPlayGalleryVO
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::CheckPlayGalleryVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CheckPlayGalleryVO");
		
		ABP_TB_Foxy_GalleryCart_C_CheckPlayGalleryVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OrientToTargetAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  TargetTransform                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  OriginalTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              Lerp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::OrientToTargetAlongSpline(const struct FTransform& TargetTransform, const struct FTransform& OriginalTransform, float Lerp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OrientToTargetAlongSpline");
		
		ABP_TB_Foxy_GalleryCart_C_OrientToTargetAlongSpline_Params params {};
		params.TargetTransform = TargetTransform;
		params.OriginalTransform = OriginalTransform;
		params.Lerp = Lerp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CheckForClimbing
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::CheckForClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CheckForClimbing");
		
		ABP_TB_Foxy_GalleryCart_C_CheckForClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.PlayMovementSounds
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::PlayMovementSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.PlayMovementSounds");
		
		ABP_TB_Foxy_GalleryCart_C_PlayMovementSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OrientToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  TargetTransform                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  OriginalTransform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::OrientToTarget(const struct FTransform& TargetTransform, const struct FTransform& OriginalTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OrientToTarget");
		
		ABP_TB_Foxy_GalleryCart_C_OrientToTarget_Params params {};
		params.TargetTransform = TargetTransform;
		params.OriginalTransform = OriginalTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.FollowSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::FollowSpline(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.FollowSpline");
		
		ABP_TB_Foxy_GalleryCart_C_FollowSpline_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.UpdateTotalScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::UpdateTotalScore(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.UpdateTotalScore");
		
		ABP_TB_Foxy_GalleryCart_C_UpdateTotalScore_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LerpRateTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::LerpRateTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LerpRateTimeline__FinishedFunc");
		
		ABP_TB_Foxy_GalleryCart_C_LerpRateTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LerpRateTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::LerpRateTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LerpRateTimeline__UpdateFunc");
		
		ABP_TB_Foxy_GalleryCart_C_LerpRateTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TurningTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::TurningTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TurningTimeline__FinishedFunc");
		
		ABP_TB_Foxy_GalleryCart_C_TurningTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TurningTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::TurningTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TurningTimeline__UpdateFunc");
		
		ABP_TB_Foxy_GalleryCart_C_TurningTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeavingGalleryTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::LeavingGalleryTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeavingGalleryTimeline__FinishedFunc");
		
		ABP_TB_Foxy_GalleryCart_C_LeavingGalleryTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeavingGalleryTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::LeavingGalleryTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeavingGalleryTimeline__UpdateFunc");
		
		ABP_TB_Foxy_GalleryCart_C_LeavingGalleryTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Timeline_FadeZoneTransition__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::Timeline_FadeZoneTransition__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Timeline_FadeZoneTransition__FinishedFunc");
		
		ABP_TB_Foxy_GalleryCart_C_Timeline_FadeZoneTransition__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Timeline_FadeZoneTransition__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::Timeline_FadeZoneTransition__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Timeline_FadeZoneTransition__UpdateFunc");
		
		ABP_TB_Foxy_GalleryCart_C_Timeline_FadeZoneTransition__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Event Returned To Spline
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::EventReturnedToSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Event Returned To Spline");
		
		ABP_TB_Foxy_GalleryCart_C_EventReturnedToSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ArriveAtGallery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  FollowerTransformTarget                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class ABP_TB_Foxy_TargetGroupManager_C*            SplineBreak                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::ArriveAtGallery(const struct FTransform& FollowerTransformTarget, class ABP_TB_Foxy_TargetGroupManager_C* SplineBreak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ArriveAtGallery");
		
		ABP_TB_Foxy_GalleryCart_C_ArriveAtGallery_Params params {};
		params.FollowerTransformTarget = FollowerTransformTarget;
		params.SplineBreak = SplineBreak;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeaveGallery
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::LeaveGallery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.LeaveGallery");
		
		ABP_TB_Foxy_GalleryCart_C_LeaveGallery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.StartMovementAlongSpline
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::StartMovementAlongSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.StartMovementAlongSpline");
		
		ABP_TB_Foxy_GalleryCart_C_StartMovementAlongSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ArriveAtPersistentGallery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TB_Foxy_TargetGroupManager_C*            TargetManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::ArriveAtPersistentGallery(class ABP_TB_Foxy_TargetGroupManager_C* TargetManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ArriveAtPersistentGallery");
		
		ABP_TB_Foxy_GalleryCart_C_ArriveAtPersistentGallery_Params params {};
		params.TargetManager = TargetManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OnClimbCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsClimbing                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::OnClimbCall(bool IsClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.OnClimbCall");
		
		ABP_TB_Foxy_GalleryCart_C_OnClimbCall_Params params {};
		params.IsClimbing = IsClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.DEBUG_IncreaseScore
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::DEBUG_IncreaseScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.DEBUG_IncreaseScore");
		
		ABP_TB_Foxy_GalleryCart_C_DEBUG_IncreaseScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.StartTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGallery                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldModifySpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldModifyDepthFade                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::StartTurn(bool IsGallery, bool ShouldModifySpeed, bool ShouldModifyDepthFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.StartTurn");
		
		ABP_TB_Foxy_GalleryCart_C_StartTurn_Params params {};
		params.IsGallery = IsGallery;
		params.ShouldModifySpeed = ShouldModifySpeed;
		params.ShouldModifyDepthFade = ShouldModifyDepthFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.EndTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldModifySpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldModifyDepthFade                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::EndTurn(bool ShouldModifySpeed, bool ShouldModifyDepthFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.EndTurn");
		
		ABP_TB_Foxy_GalleryCart_C_EndTurn_Params params {};
		params.ShouldModifySpeed = ShouldModifySpeed;
		params.ShouldModifyDepthFade = ShouldModifyDepthFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerDepthFade
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::TriggerDepthFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerDepthFade");
		
		ABP_TB_Foxy_GalleryCart_C_TriggerDepthFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerDepthFadeOnGalleryFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldTrigger                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::TriggerDepthFadeOnGalleryFinished(bool bShouldTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerDepthFadeOnGalleryFinished");
		
		ABP_TB_Foxy_GalleryCart_C_TriggerDepthFadeOnGalleryFinished_Params params {};
		params.bShouldTrigger = bShouldTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReceiveTick");
		
		ABP_TB_Foxy_GalleryCart_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReceiveBeginPlay");
		
		ABP_TB_Foxy_GalleryCart_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.PlayVO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VoSelection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::PlayVO(int32_t VoSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.PlayVO");
		
		ABP_TB_Foxy_GalleryCart_C_PlayVO_Params params {};
		params.VoSelection = VoSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Sequencer_DepthFadeTrigger
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::Sequencer_DepthFadeTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.Sequencer_DepthFadeTrigger");
		
		ABP_TB_Foxy_GalleryCart_C_Sequencer_DepthFadeTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.SetSplineFollowerContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.SetSplineFollowerContext");
		
		ABP_TB_Foxy_GalleryCart_C_SetSplineFollowerContext_Params params {};
		params.SplineFollowerContext = SplineFollowerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerFadeZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToFade                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAR_Transition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::TriggerFadeZone(bool ToFade, float Duration, bool IsAR_Transition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.TriggerFadeZone");
		
		ABP_TB_Foxy_GalleryCart_C_TriggerFadeZone_Params params {};
		params.ToFade = ToFade;
		params.Duration = Duration;
		params.IsAR_Transition = IsAR_Transition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.RandomSplashes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::RandomSplashes(bool CanPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.RandomSplashes");
		
		ABP_TB_Foxy_GalleryCart_C_RandomSplashes_Params params {};
		params.CanPlay = CanPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ExecuteUbergraph_BP_TB_Foxy_GalleryCart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_GalleryCart_C::ExecuteUbergraph_BP_TB_Foxy_GalleryCart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ExecuteUbergraph_BP_TB_Foxy_GalleryCart");
		
		ABP_TB_Foxy_GalleryCart_C_ExecuteUbergraph_BP_TB_Foxy_GalleryCart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReachedEndOfSpline__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_GalleryCart_C::ReachedEndOfSpline__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.ReachedEndOfSpline__DelegateSignature");
		
		ABP_TB_Foxy_GalleryCart_C_ReachedEndOfSpline__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CartAtGallery__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TB_Foxy_TargetGroupManager_C*            ManagerOfGallery                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               StationaryGallery                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_GalleryCart_C::CartAtGallery__DelegateSignature(class ABP_TB_Foxy_TargetGroupManager_C* ManagerOfGallery, bool StationaryGallery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C.CartAtGallery__DelegateSignature");
		
		ABP_TB_Foxy_GalleryCart_C_CartAtGallery__DelegateSignature_Params params {};
		params.ManagerOfGallery = ManagerOfGallery;
		params.StationaryGallery = StationaryGallery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TB_Foxy_GalleryCart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TB_Foxy_GalleryCart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TB_Foxy_GalleryCart.BP_TB_Foxy_GalleryCart_C");
		return ptr;
	}

}


