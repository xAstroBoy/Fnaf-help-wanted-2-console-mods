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
	 * BlueprintGeneratedClass BP_SplinePathway.BP_SplinePathway_C
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ABP_SplinePathway_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USplineComponent*                                    Spline;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FSplineConnection>                           ForwardSplines;                                          // 0x0230(0x0010) Edit, BlueprintVisible
		TArray<struct FSplineConnection>                           BackwardSplines;                                         // 0x0240(0x0010) Edit, BlueprintVisible
		TArray<class ABP_TB_Foxy_SplinePath_C*>                    SplinesToCopy;                                           // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ASpotLight*>                                  TrackLights;                                             // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate

	public:
		void GetTrackLights(TArray<class ASpotLight*>* TrackLights);
		void CopySplinePathFromReference();
		void FindDistanceClosestToLocation(const struct FVector& WorldLocation, float* Distance);
		void GetClosestEndPoint(const struct FVector& Location, const struct FVector& Forward, bool* IsStartPoint);
		void GetEndPointTangents(struct FVector* StartTangent, struct FVector* EndTangent);
		void GetEndPointLocations(struct FVector* StartPoint, struct FVector* EndPoint);
		void GetLocationAndTangent(float Distance, struct FVector* WorldLocation, struct FVector* WorldForward);
		float GetLength();
		void UserConstructionScript();
		void CopySpline();
		void ExecuteUbergraph_BP_SplinePathway(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
