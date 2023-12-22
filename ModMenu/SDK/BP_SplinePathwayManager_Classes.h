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
	 * BlueprintGeneratedClass BP_SplinePathwayManager.BP_SplinePathwayManager_C
	 * Size -> 0x00A0 (FullSize[0x02C0] - InheritedSize[0x0220])
	 */
	class ABP_SplinePathwayManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_SplinePathway_C*>                         StartingSplines;                                         // 0x0230(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ABP_SplinePathway_C*>                         AllSplines;                                              // 0x0240(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TMap<class ABP_SplinePathway_C*, struct FPathwayForks>     SplineForks;                                             // 0x0250(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_SplinePathFork_C*>                        AllForks;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_SplinePathway_C*>                         BuildDefaultStartSpline;                                 // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate

	public:
		void AddDeltaDistanceNoMovement(const struct FSplineFollowerContext& SplineFollowerContext, float DeltaDistance);
		void GetChildForkPaths(class ABP_SplinePathway_C** SplineIn, TArray<class ABP_SplinePathFork_C*>* ForksUsed, class ABP_SplinePathFork_C* OriginalFork, TArray<class ABP_SplinePathway_C*>* OnesToCheck, TArray<class ABP_SplinePathFork_C*>* OutForks);
		void FindClosestSplineAndPointSoftRef(const struct FVector& WorldLocation, TArray<class ABP_SplinePathway_C*>* Splines, class ABP_SplinePathway_C** Spline, struct FVector* SplineLocation);
		void FindClosestSplineUsingForks(struct FVector* WorldLocation, TArray<class ABP_SplinePathway_C*>* Splines, class ABP_SplinePathway_C** SplineOut, class ABP_SplinePathFork_C** ForkOut);
		void SetupForks();
		void SelectStartSpline(class ABP_SplinePathway_C** StartSpline);
		void RecurseSpline(class ABP_SplinePathway_C* Spline);
		void FindClosestDistAlongSpline(class ABP_SplinePathway_C* Spline, const struct FVector& WorldLocation, float* DistAlongSpline);
		void FindClosestSplineAndPoint(const struct FVector& WorldLocation, TArray<class ABP_SplinePathway_C*>* Splines, class ABP_SplinePathway_C** Spline, struct FVector* SplineLocation);
		void SetupNewSplinePath(class ABP_SplinePathway_C* NextSpline, struct FSplineFollowerContext* StructRef, bool UseDistance, float Distance, ESplineFollowDirection Direction);
		void GetPositionAtDistance(float DeltaDistance, struct FSplineFollowerContext* Context, struct FVector* WorldLocation, struct FVector* Forward);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_SplinePathwayManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
