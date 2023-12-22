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
	 * AnimBlueprintGeneratedClass ABP_BS_RM_Roxy.ABP_BS_RM_Roxy_C
	 * Size -> 0x2757 (FullSize[0x2A0F] - InheritedSize[0x02B8])
	 */
	class UABP_BS_RM_Roxy_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_DZ8T[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x02C8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F8(0x0118)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_4;                                  // 0x0410(0x01B0)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_3;                                  // 0x05C0(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x0770(0x0020)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x0790(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0858(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x08D8(0x0020)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone_2;                                // 0x08F8(0x00F0)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x09E8(0x00F0)
		struct FAnimNode_ApplyLimits                               AnimGraphNode_ApplyLimits;                               // 0x0AD8(0x00E8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x0BC0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x0CC8(0x0108)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0DD0(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0E00(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x0E48(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x0F08(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x1060(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1088(0x0028)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x10B0(0x00B0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x1160(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x1228(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x12A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x12D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x12F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x1320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x1348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x1370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x1398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x13C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x13E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1410(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1438(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1460(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1488(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1508(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1538(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x15B8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x15E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1668(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1698(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x1718(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1748(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x17C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x17F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1878(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x18A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1928(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1958(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x19D8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1A08(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1A88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1AB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1B38(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1B68(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1C18(0x00C0)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x1CD8(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1DA0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1EF8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1F20(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1F48(0x0080)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1FC8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1FF0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2018(0x0158)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x2170(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x2320(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x2340(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x2360(0x01B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x2510(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x25D0(0x0080)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x2650(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2718(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x2760(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2868(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2888(0x0020)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x28A8(0x00C8)
		struct FVector                                             PlayerLocation_Eyes;                                     // 0x2970(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtAlpha;                                             // 0x297C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EyeOffset;                                               // 0x2980(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EyeDart;                                                 // 0x2984(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0HB8[0x3];                                   // 0x2985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     EyeDartLocations;                                        // 0x2988(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             CurrentEyeDartLocation;                                  // 0x2998(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EyeOffsetTime;                                           // 0x29A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            EyeLidRotation;                                          // 0x29A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UpperLidAlpha;                                           // 0x29B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlinkAlpha;                                              // 0x29B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EyeDartPrevious;                                         // 0x29BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V8CD[0x3];                                   // 0x29BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      R_LidAlpha;                                              // 0x29C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      L_LidAlpha;                                              // 0x29C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadTiltAlpha;                                           // 0x29C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EyeLayerAlpha;                                           // 0x29CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableBlinking;                                          // 0x29D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableEyeDart;                                           // 0x29D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2N3S[0x2];                                   // 0x29D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RageValue;                                               // 0x29D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RageLevel;                                               // 0x29D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerIsNotLooking;                                      // 0x29DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1IDC[0x3];                                   // 0x29DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PlayerLocation_Head;                                     // 0x29E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeadAim_Alpha;                                           // 0x29EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NeckAim_Alpha;                                           // 0x29F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableNotLookingADD;                                     // 0x29F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableHeadAim;                                           // 0x29F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PTIE[0x2];                                   // 0x29F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreviousNeckAlpha;                                       // 0x29F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousHeadAlpha;                                       // 0x29FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JawAlpha;                                                // 0x2A00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Amplitude;                                               // 0x2A04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetAmplitude;                                         // 0x2A08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Blink_Once;                                              // 0x2A0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableHeadTilt;                                          // 0x2A0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BreathingAlpha;                                          // 0x2A0E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EyeLayer(const struct FPoseLink& InPose, struct FPoseLink* EyeLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetHeadAimLocation();
		void CompareLidToEyeRot(float* Param, const class FName& EyeSocket, const class FName& LidSocket, float* NewAlpha);
		void SetEyeOffsetValue();
		void SetEyeAimLocation();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_23F67B6743DFBF5F9C3B6C87C16A1856();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_20F237F04A2743C67EBD6D914E541A21();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_LayeredBoneBlend_D7371F28438C810934DB9FB83BF6AC5F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_9DD40F144FCD0D2B46EF138649735149();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_4FD73D794464B7FF363CCA8A5A52E87B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_346FEA134AAFA0892FC3A792E2352F95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BS_RM_Roxy_AnimGraphNode_TransitionResult_720BDC27413551816226B498A5DFFDB9();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void SetEyeAim_Timer();
		void BlueprintBeginPlay();
		void ClearRoxyFaceBetweenRounds();
		void UpdateEyeOffset();
		void SetEyeDartValue();
		void BlinkTimer();
		void Blink();
		void AddEyeDart(const struct FVector& EyeDartLocation);
		void TiltHead(bool TiltHead);
		void AllEyeAim(bool Aim);
		void LidAim(bool Aim);
		void Blinking(bool Blink);
		void EyeDarts(bool EyeDart);
		void UpdateRageValue(float Rage, int32_t RageLevel);
		void PlayerNotLooking(bool PlayerNotLooking);
		void AnimNotify_Rage02();
		void AnimNotify_Rage03();
		void AnimNotify_Rage01();
		void AnimNotify_Idle();
		//void EnableNotLookingADD(bool Aim);
		void HeadAim(bool Aim);
		void SetLipSyncAmp(float Amplitude);
		void BlinkOnce(bool Blink);
		void EyeAim(bool Aim);
		void StopTantrum();
		void StartTantrum();
		void ExecuteUbergraph_ABP_BS_RM_Roxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
