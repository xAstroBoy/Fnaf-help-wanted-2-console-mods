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
	 * AnimBlueprintGeneratedClass ABP_PlayerHand.ABP_PlayerHand_C
	 * Size -> 0x0130 (FullSize[0x03E8] - InheritedSize[0x02B8])
	 */
	class UABP_PlayerHand_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_7BA7[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x02F8(0x00E8)
		float                                                      Grip;                                                    // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Proximity;                                               // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UPrimitiveComponent* GetConstraintBase();
		void GetComponentsInGrabRange(TArray<class UPrimitiveComponent*>* ActorsInGrabRange);
		class UPhysicsConstraintComponent* GetGrabConstraintComponent();
		class UPrimitiveComponent* GetGrabDetector();
		class UPrimitiveComponent* GetHandPrimitive();
		EHandModelState GetHandState();
		ESWGVRBaseHand GetHandType();
		void AnimGraph(struct FPoseLink* AnimGraph);
		void HandCreationFinished(class UVRHandComponent* HandComponent);
		void SetGrabHoverStateEnable(bool bEnabled);
		void SetHandType(ESWGVRBaseHand hand);
		void SetHandVisibility(bool Visibility);
		void UnconstrainComponent();
		void ConstrainComponentToHand(class UPrimitiveComponent* PrimitiveComponentToConstrain);
		void SetHandProximity(float Proximity);
		void SetHandGrip(float GripValue);
		void SetHandState(EHandModelState State);
		void ExecuteUbergraph_ABP_PlayerHand(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
