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
	 * AnimBlueprintGeneratedClass ABP_Freddy_Jumpscare.ABP_Freddy_Jumpscare_C
	 * Size -> 0x01A0 (FullSize[0x0458] - InheritedSize[0x02B8])
	 */
	class UABP_Freddy_Jumpscare_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NTDX[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F8(0x0118)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0410(0x0048)

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_ABP_Freddy_Jumpscare(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
