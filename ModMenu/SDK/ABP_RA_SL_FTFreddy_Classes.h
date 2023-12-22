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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C
	 * Size -> 0x03A1 (FullSize[0x0659] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_FTFreddy_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GJ96[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0370(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0398(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0418(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0448(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x04C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x04F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0578(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x05A8(0x00B0)
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void GetAssignedButton();
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB();
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void AnimNotify_inviz();
		void AnimNotify_viz();
		void ExecuteUbergraph_ABP_RA_SL_FTFreddy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
