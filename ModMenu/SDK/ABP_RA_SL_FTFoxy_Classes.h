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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_FTFoxy.ABP_RA_SL_FTFoxy_C
	 * Size -> 0x0BC9 (FullSize[0x0E81] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_FTFoxy_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_C3WK[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0528(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0550(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0578(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x05F0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0618(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0698(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x06C8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x0748(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0778(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x07F8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0828(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x08A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x08D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0958(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0988(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x09B8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x09E8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0A18(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0A98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0AC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0B48(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0B78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0BF8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0C28(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0CA8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0CD8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0D58(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0D88(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0DB8(0x00B0)
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x0E68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRunning;                                               // 0x0E69(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QZ53[0x2];                                   // 0x0E6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetCurrentPositionID;                                    // 0x0E6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunningToDoor;                                           // 0x0E70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JQYP[0x7];                                   // 0x0E71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_Owner;                                               // 0x0E78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SafetyCheck_WrongRoom;                                   // 0x0E80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void GetAssignedButton();
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void AdvanceFoxyPosition();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_953F50A84C98403B889401A02D50DFE7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F3FDEA5040FEAE4C240632AF70CCC739();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_DAB1C3DB4B9E4E8478E72F8366D10DA9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_E87AB15B4F2DBFB18AEC0389DD5B98D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_8BBB15B046D7B078E80204AB81F7F1ED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_0EE219B8425D2FFCB6BF2B8C7359CC07();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_7EB72C1F432B2249283CC7B8B22ED9D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_CE52445B4B8844E3609D33BDAF46234E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_94A22B774B77CAEAD759FBB95317EB2E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_F6E8B4E745C81D4E8F7204AE29D948A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_415C61D94EEE0B2F627E06B0CE7FC54C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFoxy_AnimGraphNode_TransitionResult_B4FD02FD425CCA292D46C89199093129();
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void SetRunning(bool IsRunning);
		void SetSpotId(int32_t SetCurrentID);
		void AnimNotify_FoxyReachedEndOfHallway();
		void AnimNotify_CheckForDoorStatus();
		void SetFoxyOwnerReference();
		void AnimNotify_FlickerLight_Left();
		void AnimNotify_FlickerLight_Right();
		void AnimNotify_DoubleCheckRoom_Left();
		void AnimNotify_DoubleCheckRoom_Right();
		void AnimNotify_inviz();
		void AnimNotify_viz();
		void ExecuteUbergraph_ABP_RA_SL_FTFoxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
