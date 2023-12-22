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
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.TriggerFadeZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToFade                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAR_Transition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_TB_Foxy_GalleryCart_C::TriggerFadeZone(bool ToFade, float Duration, bool IsAR_Transition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.TriggerFadeZone");
		
		UBI_TB_Foxy_GalleryCart_C_TriggerFadeZone_Params params {};
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
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.TriggerDepthFadeOnGalleryFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldTrigger                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_TB_Foxy_GalleryCart_C::TriggerDepthFadeOnGalleryFinished(bool bShouldTrigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.TriggerDepthFadeOnGalleryFinished");
		
		UBI_TB_Foxy_GalleryCart_C_TriggerDepthFadeOnGalleryFinished_Params params {};
		params.bShouldTrigger = bShouldTrigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.EndTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldModifySpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldModifyDepthFade                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_TB_Foxy_GalleryCart_C::EndTurn(bool ShouldModifySpeed, bool ShouldModifyDepthFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.EndTurn");
		
		UBI_TB_Foxy_GalleryCart_C_EndTurn_Params params {};
		params.ShouldModifySpeed = ShouldModifySpeed;
		params.ShouldModifyDepthFade = ShouldModifyDepthFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.StartTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGallery                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldModifySpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldModifyDepthFade                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_TB_Foxy_GalleryCart_C::StartTurn(bool IsGallery, bool ShouldModifySpeed, bool ShouldModifyDepthFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.StartTurn");
		
		UBI_TB_Foxy_GalleryCart_C_StartTurn_Params params {};
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
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.ArriveAtPersistentGallery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TB_Foxy_TargetGroupManager_C*            TargetManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_TB_Foxy_GalleryCart_C::ArriveAtPersistentGallery(class ABP_TB_Foxy_TargetGroupManager_C* TargetManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.ArriveAtPersistentGallery");
		
		UBI_TB_Foxy_GalleryCart_C_ArriveAtPersistentGallery_Params params {};
		params.TargetManager = TargetManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.LeaveGallery
	 * 		Flags  -> ()
	 */
	void UBI_TB_Foxy_GalleryCart_C::LeaveGallery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.LeaveGallery");
		
		UBI_TB_Foxy_GalleryCart_C_LeaveGallery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.ArriveAtGallery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  FollowerTransformTarget                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class ABP_TB_Foxy_TargetGroupManager_C*            SplineBreak                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_TB_Foxy_GalleryCart_C::ArriveAtGallery(const struct FTransform& FollowerTransformTarget, class ABP_TB_Foxy_TargetGroupManager_C* SplineBreak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.ArriveAtGallery");
		
		UBI_TB_Foxy_GalleryCart_C_ArriveAtGallery_Params params {};
		params.FollowerTransformTarget = FollowerTransformTarget;
		params.SplineBreak = SplineBreak;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_TB_Foxy_GalleryCart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_TB_Foxy_GalleryCart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C");
		return ptr;
	}

}


