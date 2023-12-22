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
	 * BlueprintGeneratedClass BP_ST_LastSocketBoundaryAction.BP_ST_LastSocketBoundaryAction_C
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBP_ST_LastSocketBoundaryAction_C : public UBoundaryHandlerAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USocketComponent*                                    InitialSocket;                                           // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBoundryHit();
		void MarkBeingDestoryedAfterRound();
		void OnBoundaryHit(class AActor* ActorHittingBoundary);
		void Setup(class AActor* Actor);
		void ExecuteUbergraph_BP_ST_LastSocketBoundaryAction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
