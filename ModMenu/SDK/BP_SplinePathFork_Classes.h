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
	 * BlueprintGeneratedClass BP_SplinePathFork.BP_SplinePathFork_C
	 * Size -> 0x0039 (FullSize[0x0259] - InheritedSize[0x0220])
	 */
	class ABP_SplinePathFork_C : public AActor
	{
	public:
		class UBoxComponent*                                       Trigger;                                                 // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     ForwardDirection;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_SplinePathway_C*>                         ForwardPaths;                                            // 0x0230(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ABP_SplinePathway_C*>                         BackwardPaths;                                           // 0x0240(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		float                                                      WaitTime;                                                // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitTimeDeviation;                                       // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPrizeCounterGame;                                      // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ABP_SplinePathway_C*>* PossibleSplines);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
