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
	 * AnimBlueprintGeneratedClass ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C
	 * Size -> 0x0511 (FullSize[0x07C9] - InheritedSize[0x02B8])
	 */
	class UABP_FTChica_Cupcake_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8MZF[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		unsigned char                                              UnknownData_F98C[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0300(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x04B0(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0660(0x0020)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0680(0x0118)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0798(0x0020)
		bool                                                       bIsGrabbed;                                              // 0x07B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FV97[0x3];                                   // 0x07B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x07BC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bValidPawn;                                              // 0x07C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool CanBeGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		EHandReleaseEnable CanBeReleased(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand);
		class UVRGrabberComponent* GetGrabber();
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void OnGrabberReleasedPostVelocity(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* HeldComponent);
		void OnEndGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void OnBeginGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab);
		void ExecuteUbergraph_ABP_FTChica_Cupcake(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
