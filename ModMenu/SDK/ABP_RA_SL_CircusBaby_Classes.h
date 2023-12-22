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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_CircusBaby.ABP_RA_SL_CircusBaby_C
	 * Size -> 0x1284 (FullSize[0x153C] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_CircusBaby_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_CZW2[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x03E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0460(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0488(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0528(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0550(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0578(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x05A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x05F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0618(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x0640(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x06C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x06F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x0770(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x07A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0820(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0850(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x08D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0900(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0980(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x09B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0A30(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0A60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0AE0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0B10(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0B90(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0BC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0BF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0C70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0CA0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0D20(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0D50(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0DD0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0E00(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0E80(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0EB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F30(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0F60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0FE0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1010(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1090(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x10C0(0x00B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x1170(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x1320(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x14D0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x14F0(0x0020)
		Enum_RA_SL_RoomType                                        RoomType;                                                // 0x1510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E862[0x7];                                   // 0x1511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_Owner;                                               // 0x1518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceDisappear;                                          // 0x1520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RetreatBaby;                                             // 0x1521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerGotVictory;                                        // 0x1522(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YCE3[0x1];                                   // 0x1523(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChanceToFlicker;                                         // 0x1524(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerTookIceCream;                                      // 0x1528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L1N8[0x3];                                   // 0x1529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlayerLocation;                                          // 0x152C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadAimAlpha;                                            // 0x1538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void GetAssignedButton();
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetHeadAim();
		void PlayerDiscardedIcecream();
		void ActivateBidybapArm(bool Enable);
		void VictoryTrigger_AteIcecream();
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_E4D701D940F87057AC1C44825FBCD9DA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_93C2246448C7D357722E1A8888D41ADB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_BB4B5202473E1C6C92D107A2C56C6D92();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_2AF5C33842DE9D23F684FFB22E515EAC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_CircusBaby_AnimGraphNode_TransitionResult_FA2E57024D6A8B1A7CE747B3D6047E41();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void AnimNotify_UseWaypointTransform();
		void SetOwnerReference();
		void AnimNotify_inviz();
		void AnimNotify_viz();
		void AnimNotify_FlashlightFlicker();
		void ForceDisappearTransition();
		void AnimNotify_HideCircusBaby();
		void HideCircusBaby();
		void OnGameEnd(bool IsVictory);
		void TriggerFlashlightFlicker();
		void UseWaypointTranform();
		void HideAndSeekTriggerCameraTransition(bool IsEnabled);
		void StartNextGameMode(Enum_RA_SL_CircusGameMode CurrentGameRunning);
		void SetCircusBabyToMad(bool IsCircusBabyMad);
		void AnimNotify_IdlingWithIcecream();
		void VictoryTrigger_PreTookIcecream();
		void AnimNotify_AcitvateArm();
		void VictoryTrigger_PostTookIcecream();
		void ExecuteUbergraph_ABP_RA_SL_CircusBaby(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
