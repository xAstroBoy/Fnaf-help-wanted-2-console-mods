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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.StartMovementAlongSpline
	 */
	struct UBI_Interface_SplineFollower_C_StartMovementAlongSpline_Params
	{	};

	/**
	 * Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.SetSplineFollowerContext
	 */
	struct UBI_Interface_SplineFollower_C_SetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.GetSplineFollowerContext
	 */
	struct UBI_Interface_SplineFollower_C_GetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BI_Interface_SplineFollower.BI_Interface_SplineFollower_C.GetPossibleSplinePaths
	 */
	struct UBI_Interface_SplineFollower_C_GetPossibleSplinePaths_Params
	{
	public:
		TArray<class ABP_SplinePathway_C*>                         PossiblePaths;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
