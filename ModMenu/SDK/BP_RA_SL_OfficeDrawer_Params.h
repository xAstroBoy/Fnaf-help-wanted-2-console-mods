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
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.SlideInnerPanel__FinishedFunc
	 */
	struct ABP_RA_SL_OfficeDrawer_C_SlideInnerPanel__FinishedFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.SlideInnerPanel__UpdateFunc
	 */
	struct ABP_RA_SL_OfficeDrawer_C_SlideInnerPanel__UpdateFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.SlideDrawerShut__FinishedFunc
	 */
	struct ABP_RA_SL_OfficeDrawer_C_SlideDrawerShut__FinishedFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.SlideDrawerShut__UpdateFunc
	 */
	struct ABP_RA_SL_OfficeDrawer_C_SlideDrawerShut__UpdateFunc_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_OfficeDrawer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.AllowInteractionWithDrawer
	 */
	struct ABP_RA_SL_OfficeDrawer_C_AllowInteractionWithDrawer_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.CodeEnteredSuccessfully
	 */
	struct ABP_RA_SL_OfficeDrawer_C_CodeEnteredSuccessfully_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.OnVannyDollRetrieved
	 */
	struct ABP_RA_SL_OfficeDrawer_C_OnVannyDollRetrieved_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.TriggerVannyArm
	 */
	struct ABP_RA_SL_OfficeDrawer_C_TriggerVannyArm_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.SetGrabAndHighlightEnabled
	 */
	struct ABP_RA_SL_OfficeDrawer_C_SetGrabAndHighlightEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.SetupVannyArm
	 */
	struct ABP_RA_SL_OfficeDrawer_C_SetupVannyArm_Params
	{	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.BndEvt__BP_RA_SL_OfficeDrawer_GrabSlideComponent_K2Node_ComponentBoundEvent_1_OnGrabSlideSliding__DelegateSignature
	 */
	struct ABP_RA_SL_OfficeDrawer_C_BndEvt__BP_RA_SL_OfficeDrawer_GrabSlideComponent_K2Node_ComponentBoundEvent_1_OnGrabSlideSliding__DelegateSignature_Params
	{
	public:
		class UGrabSlideComponent*                                 GrabSlideComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AmountMoved;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.BndEvt__BP_RA_SL_OfficeDrawer_GrabSlideComponent_K2Node_ComponentBoundEvent_2_OnSliderReleasedDelegate__DelegateSignature
	 */
	struct ABP_RA_SL_OfficeDrawer_C_BndEvt__BP_RA_SL_OfficeDrawer_GrabSlideComponent_K2Node_ComponentBoundEvent_2_OnSliderReleasedDelegate__DelegateSignature_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Grabber;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XIX5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C.ExecuteUbergraph_BP_RA_SL_OfficeDrawer
	 */
	struct ABP_RA_SL_OfficeDrawer_C_ExecuteUbergraph_BP_RA_SL_OfficeDrawer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
