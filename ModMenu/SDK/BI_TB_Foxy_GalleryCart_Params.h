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
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.TriggerFadeZone
	 */
	struct UBI_TB_Foxy_GalleryCart_C_TriggerFadeZone_Params
	{
	public:
		bool                                                       ToFade;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J0I6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Duration;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAR_Transition;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.TriggerDepthFadeOnGalleryFinished
	 */
	struct UBI_TB_Foxy_GalleryCart_C_TriggerDepthFadeOnGalleryFinished_Params
	{
	public:
		bool                                                       bShouldTrigger;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.EndTurn
	 */
	struct UBI_TB_Foxy_GalleryCart_C_EndTurn_Params
	{
	public:
		bool                                                       ShouldModifySpeed;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldModifyDepthFade;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.StartTurn
	 */
	struct UBI_TB_Foxy_GalleryCart_C_StartTurn_Params
	{
	public:
		bool                                                       IsGallery;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldModifySpeed;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldModifyDepthFade;                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.ArriveAtPersistentGallery
	 */
	struct UBI_TB_Foxy_GalleryCart_C_ArriveAtPersistentGallery_Params
	{
	public:
		class ABP_TB_Foxy_TargetGroupManager_C*                    TargetManager;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.LeaveGallery
	 */
	struct UBI_TB_Foxy_GalleryCart_C_LeaveGallery_Params
	{	};

	/**
	 * Function BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C.ArriveAtGallery
	 */
	struct UBI_TB_Foxy_GalleryCart_C_ArriveAtGallery_Params
	{
	public:
		struct FTransform                                          FollowerTransformTarget;                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class ABP_TB_Foxy_TargetGroupManager_C*                    SplineBreak;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
