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
	 * BlueprintGeneratedClass BI_Interface_SplineFollower.BI_Interface_SplineFollower_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_Interface_SplineFollower_C : public UInterface
	{
	public:
		void StartMovementAlongSpline();
		void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
		void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
		void GetPossibleSplinePaths(TArray<class ABP_SplinePathway_C*>* PossiblePaths);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
