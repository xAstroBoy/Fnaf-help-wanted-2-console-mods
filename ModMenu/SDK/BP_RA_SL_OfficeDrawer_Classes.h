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
	 * BlueprintGeneratedClass BP_RA_SL_OfficeDrawer.BP_RA_SL_OfficeDrawer_C
	 * Size -> 0x0080 (FullSize[0x02B8] - InheritedSize[0x0238])
	 */
	class ABP_RA_SL_OfficeDrawer_C : public AGrabSlideActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     DrawerLp;                                                // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Plane;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_LockClamp;                                          // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Handle;                                             // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_Lock;                                               // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mesh_InnerPanel;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_Keypad;                                       // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_OfficeSL_Drawer;                                      // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SlideDrawerShut_DrawerLerp_AF041DBF42B169A41E87E19FDFC535D1; // 0x0288(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SlideDrawerShut__Direction_AF041DBF42B169A41E87E19FDFC535D1; // 0x028C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SE3A[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SlideDrawerShut;                                         // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlideInnerPanel_InnerPanelLerp_57032638429960C2B266C9A574ADBF9C; // 0x0298(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SlideInnerPanel__Direction_57032638429960C2B266C9A574ADBF9C; // 0x029C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_10E2[0x3];                                   // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SlideInnerPanel;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Direction;                                               // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NN1F[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_TB_Puppet_VannyArm_C*                            VannyArm;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SlideInnerPanel__FinishedFunc();
		void SlideInnerPanel__UpdateFunc();
		void SlideDrawerShut__FinishedFunc();
		void SlideDrawerShut__UpdateFunc();
		void ReceiveBeginPlay();
		void AllowInteractionWithDrawer(bool IsEnabled);
		void CodeEnteredSuccessfully();
		void OnVannyDollRetrieved();
		void TriggerVannyArm();
		void SetGrabAndHighlightEnabled(bool IsEnabled);
		void SetupVannyArm();
		void BndEvt__BP_RA_SL_OfficeDrawer_GrabSlideComponent_K2Node_ComponentBoundEvent_1_OnGrabSlideSliding__DelegateSignature(class UGrabSlideComponent* GrabSlideComponent, float AmountMoved);
		void BndEvt__BP_RA_SL_OfficeDrawer_GrabSlideComponent_K2Node_ComponentBoundEvent_2_OnSliderReleasedDelegate__DelegateSignature(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void ExecuteUbergraph_BP_RA_SL_OfficeDrawer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
