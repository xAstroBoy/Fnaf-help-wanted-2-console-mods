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
	 * Function BP_SplinePathway.BP_SplinePathway_C.GetTrackLights
	 */
	struct ABP_SplinePathway_C_GetTrackLights_Params
	{
	public:
		TArray<class ASpotLight*>                                  TrackLights;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.CopySplinePathFromReference
	 */
	struct ABP_SplinePathway_C_CopySplinePathFromReference_Params
	{	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.FindDistanceClosestToLocation
	 */
	struct ABP_SplinePathway_C_FindDistanceClosestToLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.GetClosestEndPoint
	 */
	struct ABP_SplinePathway_C_GetClosestEndPoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Forward;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsStartPoint;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OKUM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.GetEndPointTangents
	 */
	struct ABP_SplinePathway_C_GetEndPointTangents_Params
	{
	public:
		struct FVector                                             StartTangent;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndTangent;                                              // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.GetEndPointLocations
	 */
	struct ABP_SplinePathway_C_GetEndPointLocations_Params
	{
	public:
		struct FVector                                             StartPoint;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndPoint;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.GetLocationAndTangent
	 */
	struct ABP_SplinePathway_C_GetLocationAndTangent_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldForward;                                            // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.GetLength
	 */
	struct ABP_SplinePathway_C_GetLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.UserConstructionScript
	 */
	struct ABP_SplinePathway_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.CopySpline
	 */
	struct ABP_SplinePathway_C_CopySpline_Params
	{	};

	/**
	 * Function BP_SplinePathway.BP_SplinePathway_C.ExecuteUbergraph_BP_SplinePathway
	 */
	struct ABP_SplinePathway_C_ExecuteUbergraph_BP_SplinePathway_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
