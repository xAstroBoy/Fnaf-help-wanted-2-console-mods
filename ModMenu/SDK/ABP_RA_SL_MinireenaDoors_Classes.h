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
	 * AnimBlueprintGeneratedClass ABP_RA_SL_MinireenaDoors.ABP_RA_SL_MinireenaDoors_C
	 * Size -> 0x0961 (FullSize[0x0C19] - InheritedSize[0x02B8])
	 */
	class UABP_RA_SL_MinireenaDoors_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_B4K3[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x02F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0320(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0348(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0370(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0398(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x03E8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0410(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0440(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x04C0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0540(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_3;                          // 0x05C0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0660(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0690(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0710(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0790(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt_2;                          // 0x0810(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x08B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x08E0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0960(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x09E0(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x0A60(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0B00(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0B30(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0B60(0x00B0)
		Enum_RA_SL_RoomType                                        WhatSideIsMinireenaOn;                                   // 0x0C10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5T59[0x3];                                   // 0x0C11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WhatIsMinireenaDoorOrder;                                // 0x0C14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResetPosition;                                           // 0x0C18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetIsDeployed(bool* IsDeployed);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void MoveToDoor();
		void SetIsDeployed(bool SetIsDeployed);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F44C90B34E07E36665A9009FE54A23B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_22D1199C46EF4F79EFACB2962DAD369A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_BlendListByInt_F85873304C27B53B6E1015B3E91F534C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_BAFA4367441664A52CA3BF958E9CDD92();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_7E395F8042D8285A80D5CBB32D983948();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_465DDD4D421C073874C557A4889DFED7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_3071B4F44146045E08E4B59B9F936007();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_FD7FC03540C223896A487A8C5BCA6107();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_MinireenaDoors_AnimGraphNode_TransitionResult_189EE22B4BDE221549FEAD86EBC8A6CA();
		void SetDoorPose(Enum_RA_SL_RoomType WhatSide, int32_t WhatOrderOnDoor);
		void ResetMinireena();
		void ExecuteUbergraph_ABP_RA_SL_MinireenaDoors(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
