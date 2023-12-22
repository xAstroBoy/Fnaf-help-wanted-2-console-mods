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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_Bonbon.ABP_RA_SL_Bonbon_C
	 * Size -> 0x09C9 (FullSize[0x0C81] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_Bonbon_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_B9E9[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x04B0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x04D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0558(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0588(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0608(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0638(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x06B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x06E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0768(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0798(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0818(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0848(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x08C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x08F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0978(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x09A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0A28(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A58(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0AD8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0B08(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0B88(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0BB8(0x00B0)
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x0C68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7AFQ[0x3];                                   // 0x0C69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AllowedIdleLoops;                                        // 0x0C6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLoopsTaken;                                      // 0x0C70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6FEZ[0x4];                                   // 0x0C74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_Owner;                                               // 0x0C78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TriggerAttack;                                           // 0x0C80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void GetAssignedButton();
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void BonbonAtDoor();
		void BonbonForcingJumpscare();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_ED46097F43A63E72C85DD4A82F7E850D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_C4BA9DBA4583650EF3265C99F59E5900();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_D8857B9D45E16B25AAF4DF9514CAF1B9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_EB1704704FC97A067ECD8088142CB658();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_2F3B7FC542DF93877BD829AF70390F61();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bonbon_AnimGraphNode_TransitionResult_8E9BEF584974FB19A3FA76A8D39E7573();
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void AnimNotify_TriggerForcedJumpscare();
		void AnimNotify_CheckHowManyIdles();
		void SetBonbonOwnerReference();
		void AnimNotify_inviz();
		void AnimNotify_viz();
		void ExecuteUbergraph_ABP_RA_SL_Bonbon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
