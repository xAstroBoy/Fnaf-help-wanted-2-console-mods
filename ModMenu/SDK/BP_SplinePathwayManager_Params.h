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
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.Add Delta Distance No Movement
	 */
	struct ABP_SplinePathwayManager_C_AddDeltaDistanceNoMovement_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		float                                                      DeltaDistance;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.GetChildForkPaths
	 */
	struct ABP_SplinePathwayManager_C_GetChildForkPaths_Params
	{
	public:
		class ABP_SplinePathway_C*                                 SplineIn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_SplinePathFork_C*>                        ForksUsed;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ABP_SplinePathFork_C*                                OriginalFork;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_SplinePathway_C*>                         OnesToCheck;                                             // 0x0020(0x0010)  (Parm, OutParm)
		TArray<class ABP_SplinePathFork_C*>                        OutForks;                                                // 0x0030(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineAndPointSoftRef
	 */
	struct ABP_SplinePathwayManager_C_FindClosestSplineAndPointSoftRef_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B8GV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_SplinePathway_C*>                         Splines;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ABP_SplinePathway_C*                                 Spline;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SplineLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineUsingForks
	 */
	struct ABP_SplinePathwayManager_C_FindClosestSplineUsingForks_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOD6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_SplinePathway_C*>                         Splines;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ABP_SplinePathway_C*                                 SplineOut;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_SplinePathFork_C*                                ForkOut;                                                 // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SetupForks
	 */
	struct ABP_SplinePathwayManager_C_SetupForks_Params
	{	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SelectStartSpline
	 */
	struct ABP_SplinePathwayManager_C_SelectStartSpline_Params
	{
	public:
		class ABP_SplinePathway_C*                                 StartSpline;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.RecurseSpline
	 */
	struct ABP_SplinePathwayManager_C_RecurseSpline_Params
	{
	public:
		class ABP_SplinePathway_C*                                 Spline;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestDistAlongSpline
	 */
	struct ABP_SplinePathwayManager_C_FindClosestDistAlongSpline_Params
	{
	public:
		class ABP_SplinePathway_C*                                 Spline;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistAlongSpline;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineAndPoint
	 */
	struct ABP_SplinePathwayManager_C_FindClosestSplineAndPoint_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T89G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_SplinePathway_C*>                         Splines;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ABP_SplinePathway_C*                                 Spline;                                                  // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SplineLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SetupNewSplinePath
	 */
	struct ABP_SplinePathwayManager_C_SetupNewSplinePath_Params
	{
	public:
		class ABP_SplinePathway_C*                                 NextSpline;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSplineFollowerContext                              StructRef;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       UseDistance;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XL98[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESplineFollowDirection                                     Direction;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EYRB[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.GetPositionAtDistance
	 */
	struct ABP_SplinePathwayManager_C_GetPositionAtDistance_Params
	{
	public:
		float                                                      DeltaDistance;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BIRN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSplineFollowerContext                              Context;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Forward;                                                 // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.UserConstructionScript
	 */
	struct ABP_SplinePathwayManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.ReceiveBeginPlay
	 */
	struct ABP_SplinePathwayManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.ExecuteUbergraph_BP_SplinePathwayManager
	 */
	struct ABP_SplinePathwayManager_C_ExecuteUbergraph_BP_SplinePathwayManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
