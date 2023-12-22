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
	 * BlueprintGeneratedClass BP_GM_RuinRoxyMakeover.BP_GM_RuinRoxyMakeover_C
	 * Size -> 0x0010 (FullSize[0x0401] - InheritedSize[0x03F1])
	 */
	class ABP_GM_RuinRoxyMakeover_C : public ABP_GM_RoxyMakeover_C
	{
	public:
		unsigned char                                              UnknownData_H7NJ[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       RuinedRoxy;                                              // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void WinRoundVO();
		void WinGameVO();
		void DoesntLookAtRoxyVO();
		void ReceiveBeginPlay();
		void SpawnMask();
		void Debug_SpawnMaskEvent();
		void ExecuteUbergraph_BP_GM_RuinRoxyMakeover(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
