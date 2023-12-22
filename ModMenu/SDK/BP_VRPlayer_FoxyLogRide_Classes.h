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
	 * BlueprintGeneratedClass BP_VRPlayer_FoxyLogRide.BP_VRPlayer_FoxyLogRide_C
	 * Size -> 0x0040 (FullSize[0x05A8] - InheritedSize[0x0568])
	 */
	class ABP_VRPlayer_FoxyLogRide_C : public ABP_VRPlayer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0568(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                CameraFade;                                              // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_VRTransition_Overlay_49519487490C91BBC1E7D69FB631BF70; // 0x0578(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_VRTransition_Static_49519487490C91BBC1E7D69FB631BF70; // 0x057C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_VRTransition_Multiply_49519487490C91BBC1E7D69FB631BF70; // 0x0580(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_VRTransition__Direction_49519487490C91BBC1E7D69FB631BF70; // 0x0584(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8PMM[0x3];                                   // 0x0585(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_VRTransition;                                   // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_FadeCameraOverride_EnteringGalleryScaleLerp_327013414EA29A4378049CA8FDE638FA; // 0x0590(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_FadeCameraOverride__Direction_327013414EA29A4378049CA8FDE638FA; // 0x0594(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U9S0[0x3];                                   // 0x0595(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_FadeCameraOverride;                             // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            FadeMaterial;                                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_FadeCameraOverride__FinishedFunc();
		void Timeline_FadeCameraOverride__UpdateFunc();
		void Timeline_FadeCameraOverride__TriggerDepthFade__EventFunc();
		void Timeline_VRTransition__FinishedFunc();
		void Timeline_VRTransition__UpdateFunc();
		void ReceiveBeginPlay();
		void TriggerCameraFade(bool ToFade, float Duration);
		void EnterVFX();
		void ExitVFX();
		void BndEvt__BP_VRPlayer_FoxyLogRide_Menu_K2Node_ComponentBoundEvent_0_OnPauseMenuShowHideDelegate__DelegateSignature(bool bShow);
		void ExecuteUbergraph_BP_VRPlayer_FoxyLogRide(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
