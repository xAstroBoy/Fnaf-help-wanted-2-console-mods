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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_Bidybap.ABP_RA_SL_Bidybap_C
	 * Size -> 0x0E6C (FullSize[0x1124] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_Bidybap_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_ROVW[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0528(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0550(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0578(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x05F8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0628(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x06A8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x06D8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0758(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0788(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x07B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x07E8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0868(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_4;                          // 0x08E8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0988(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x09B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x09E8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0A68(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0AE8(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_3;                          // 0x0B68(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0C08(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0C38(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0CB8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0D38(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_2;                          // 0x0DB8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0E58(0x0030)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x0E88(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0F28(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0FA8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1028(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1058(0x00B0)
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x1108(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZMUL[0x7];                                   // 0x1109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_Owner;                                               // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BidybapToChargePlayer;                                   // 0x1118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IA1Y[0x3];                                   // 0x1119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomPoseForVent;                                       // 0x111C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewRandomPose;                                           // 0x1120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void GetAssignedButton();
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void BidybapForcingJumpscare();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_E606B0EC41A19B4572DBFFA97F4AE867();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_D22CD170496912C66A53E08A5781C36C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_ED2673F14970055AAB531598EF60B29B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_45765CD74AC2A00705212393384884E7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_FB5455DE488E31138A21E3B8849F23BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_2AED7940460C32D27DB251B176412BCE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_1933D782436EF58ABBF14FA2E43BF3B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_3B55046148BC3F966D6F99912689D79F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_E285BCB84BE32008126502A35DCC0AD6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_B37B5BF54C39CD89F34002A4155CD62B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_AC30F70C4CEF96C9933201B5FEF18C8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_A9B4E4264232B251AA8596A61EA45DBC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_A1C9E8CB4742BDCF6C5DE08DC36AD940();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Bidybap_AnimGraphNode_TransitionResult_D27A6CB643BABBEECD5740A17BAC8AE1();
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void SetBidybapOwnerReference();
		void BidybapAtVentDoor();
		void AnimNotify_BidybapEnteredVent();
		void AnimNotify_CheckToTriggerJumpscare();
		void AnimNotify_inviz();
		void AnimNotify_viz();
		void AnimNotify_FlickerLight_vent();
		void ExecuteUbergraph_ABP_RA_SL_Bidybap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
