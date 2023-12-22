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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_BidybapArm.ABP_RA_SL_BidybapArm_C
	 * Size -> 0x0633 (FullSize[0x08EB] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_BidybapArm_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NMKF[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x03C0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x03E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0468(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0498(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0518(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0548(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x05C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x05F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0678(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x06A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0728(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0758(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x07D8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0808(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0838(0x00B0)
		bool                                                       ActivateArm;                                             // 0x08E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftArm;                                                 // 0x08E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Enum_RA_SL_RoomType                                        CurrentRoom;                                             // 0x08EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void GetAssignedButton();
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void PlayerDiscardedIcecream();
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void VictoryTrigger_PostTookIcecream();
		void VictoryTrigger_AteIcecream();
		void VictoryTrigger_PreTookIcecream();
		void HideCircusBaby();
		void TriggerFlashlightFlicker();
		void ForceDisappearTransition();
		void UseWaypointTranform();
		void SetOwnerReference();
		void HideAndSeekTriggerCameraTransition(bool IsEnabled);
		void OnGameEnd(bool IsVictory);
		void StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning);
		void SetCircusBabyToMad(bool IsCircusBabyMad);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_CC1456E64394AE28F12BB59A51D64ADC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_BidybapArm_AnimGraphNode_TransitionResult_6B24EDCF44F1FD6515BAE887DB5F778F();
		void ActivateBidybapArm(bool Enable);
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void ExecuteUbergraph_ABP_RA_SL_BidybapArm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
