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
	 * BlueprintGeneratedClass BP_VRPlayer.BP_VRPlayer_C
	 * Size -> 0x0068 (FullSize[0x0568] - InheritedSize[0x0500])
	 */
	class ABP_VRPlayer_C : public ASWGVRBasePlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0500(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    ForceScreenSpaceRenderWidget;                            // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStereoLayerComponent*                               SubtitlesStereoLayer;                                    // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_StaticBlinder_C*                                 BP_StaticBlinder;                                        // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGrabbedEaterComponent*                              GrabbedEater;                                            // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHeadBlinderDetector*                                HeadBlinderDetector;                                     // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_HeightAdjustComponent_C*                         BP_HeightAdjustComponent;                                // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SubtitleWidget;                                          // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMenuComponent*                                      Menu;                                                    // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRHandComponent*                                    VRHand;                                                  // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRGrabberComponent*                                 VRGrabber;                                               // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      VRSubtitlesHeightInitialValue;                           // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VRSubtitlesDepthInitialValue;                            // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VRSubtitlesDepthMaxDelta;                                // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VRSubtitlesHeightMaxDelta;                               // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ResetHandState(ESWGVRBaseHand hand);
		float GetCameraBrightnessSetting();
		bool GetInvertHandControls();
		float GetPlayerInputRotationScale();
		EPlayerRotationInputType GetPlayerInputRotationType();
		void SetVRSubtitlesSize(ESubtitlesSize Size);
		void SetupSubtitles();
		void SetVRSubtitlesDepth(float Scale);
		void SetVRSubtitlesHeight(float Scale);
		void SetupSubtitlesStereoLayer(bool* SetupComplete);
		void GetHandActor(ESWGVRBaseHand Index, class AActor** ChildActor);
		void OnShowSubtitles(bool Visible);
		void UpdateSubtitles(const class FText& Speaker, const class FText& InText);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void OnShowFPSWatermark(bool Visible);
		void OnPlayerSettingsLoaded();
		void OnShowMemoryWatermark(bool Visible);
		void BndEvt__BP_VRPlayer_GrabbedEater_K2Node_ComponentBoundEvent_0_OnEdibleEaten__DelegateSignature(class UEaterComponent* EaterComponent, class AActor* Edible);
		void OnPlayerSettingsSaved();
		void ReceivePossessed(class AController* NewController);
		void SetupSubtitleStyle(ESubtitlesSize Style);
		void BndEvt__BP_VRPlayer_Menu_K2Node_ComponentBoundEvent_1_OnPauseMenuShowHideDelegate__DelegateSignature(bool bShow);
		void ReceiveUnpossessed(class AController* OldController);
		void ExecuteUbergraph_BP_VRPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
