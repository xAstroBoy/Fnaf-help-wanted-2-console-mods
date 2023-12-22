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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_PlushBaby.ABP_RA_SL_PlushBaby_C
	 * Size -> 0x07E4 (FullSize[0x0A9C] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_PlushBaby_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CRA2[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_X5HH[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x02D0(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0480(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x04A0(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x04C0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0508(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0530(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0558(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x05D8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0608(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0688(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0708(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x0788(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0828(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0858(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0908(0x0030)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0938(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0A00(0x0080)
		Enum_RA_SL_CircusGameMode                                  Assigned_Role;                                           // 0x0A80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GoRun;                                                   // 0x0A81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RAW8[0x2];                                   // 0x0A82(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeadAimAlpha;                                            // 0x0A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PlayerLocation;                                          // 0x0A88(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_RA_SL_PlushBabyPose                                   FlashlightTag_AssignedPose;                              // 0x0A94(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IEZZ[0x3];                                   // 0x0A95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShakeAlpha;                                              // 0x0A98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAssignedRole(Enum_RA_SL_CircusGameMode* AssignedRole);
		void GetActive(bool* IsActive);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetHeadAim();
		void ActivateRole();
		void AssignCircusBabyReference();
		void DisallowSpecificMovement(Enum_RA_SL_AreaZones DisallowedSide);
		void SetActive(bool IsActive);
		void DisableRole();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_BlendListByInt_800494E148636C62C410D98BCC01AF7B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_PlushBaby_AnimGraphNode_TransitionResult_DC91430E45375507AA88FB87B4B9EAC6();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void SetAssignedRole(Enum_RA_SL_CircusGameMode Role);
		void SetToRun(bool AllowRun);
		void AssignPoseForFlashlightTag(Enum_RA_SL_PlushBabyPose AnimationPose);
		void UpdateHeadShake(float ShakeAlpha);
		void ExecuteUbergraph_ABP_RA_SL_PlushBaby(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
