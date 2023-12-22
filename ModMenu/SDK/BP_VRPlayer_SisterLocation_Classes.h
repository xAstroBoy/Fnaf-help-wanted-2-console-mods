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
	 * BlueprintGeneratedClass BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C
	 * Size -> 0x0038 (FullSize[0x05A0] - InheritedSize[0x0568])
	 */
	class ABP_VRPlayer_SisterLocation_C : public ABP_VRPlayer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0568(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget_EndRollOver;                                      // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                CameraFade;                                              // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_VictoryFade_EnteringGalleryScaleLerp_76D805B344403DDC8470D1A772A7CF27; // 0x0580(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_VictoryFade__Direction_76D805B344403DDC8470D1A772A7CF27; // 0x0584(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XIYF[0x3];                                   // 0x0585(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_VictoryFade;                                    // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            FadeMaterial;                                            // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequencePlayer*                                FadeLevelSequence;                                       // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_VictoryFade__FinishedFunc();
		void Timeline_VictoryFade__UpdateFunc();
		void Timeline_VictoryFade__TriggerDepthFade__EventFunc();
		void ReceiveBeginPlay();
		void Trigger_CameraFade(float Duration);
		void SL_TriggerVictoryScreen();
		void SL_NormalScreenFade();
		void ExecuteUbergraph_BP_VRPlayer_SisterLocation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
