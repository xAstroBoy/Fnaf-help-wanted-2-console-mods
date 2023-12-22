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
	 * AnimBlueprintGeneratedClass ABP_SL_TiltArms.ABP_SL_TiltArms_C
	 * Size -> 0x05C8 (FullSize[0x0880] - InheritedSize[0x02B8])
	 */
	class UABP_SL_TiltArms_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_K853[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0370(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0398(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0418(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0448(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x04C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x04F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0578(0x0030)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x05A8(0x0050)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x05F8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0628(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x06D8(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0720(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0828(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0848(0x0020)
		Enum_FC_BonkABon_AnimMode                                  AnimPose;                                                // 0x0868(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLookAt;                                                 // 0x0869(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JDTX[0x2];                                   // 0x086A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtLocation;                                          // 0x086C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ArmsPhysicsBlendWeight;                                  // 0x0878(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTimeX;                                              // 0x087C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAnimPoseEnum(Enum_FC_BonkABon_AnimMode* AnimEnum);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetAnimPoseEnum(Enum_FC_BonkABon_AnimMode AnimPose);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void UpdateHelpyHits(int32_t Hits);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_0E392A9245B0BB6914D144B112CE7D65();
		void MoveFinished();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SL_TiltArms_AnimGraphNode_TransitionResult_BC9C2FE349CC10139CD95C9597021018();
		void ExecuteUbergraph_ABP_SL_TiltArms(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
