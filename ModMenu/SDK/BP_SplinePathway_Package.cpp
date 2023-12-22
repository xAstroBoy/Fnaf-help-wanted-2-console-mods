/**
 * Name: HW2
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.GetTrackLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASpotLight*>                          TrackLights                                                (Parm, OutParm)
	 */
	void ABP_SplinePathway_C::GetTrackLights(TArray<class ASpotLight*>* TrackLights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.GetTrackLights");
		
		ABP_SplinePathway_C_GetTrackLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrackLights != nullptr)
			*TrackLights = params.TrackLights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.CopySplinePathFromReference
	 * 		Flags  -> ()
	 */
	void ABP_SplinePathway_C::CopySplinePathFromReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.CopySplinePathFromReference");
		
		ABP_SplinePathway_C_CopySplinePathFromReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.FindDistanceClosestToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathway_C::FindDistanceClosestToLocation(const struct FVector& WorldLocation, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.FindDistanceClosestToLocation");
		
		ABP_SplinePathway_C_FindDistanceClosestToLocation_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.GetClosestEndPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsStartPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SplinePathway_C::GetClosestEndPoint(const struct FVector& Location, const struct FVector& Forward, bool* IsStartPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.GetClosestEndPoint");
		
		ABP_SplinePathway_C_GetClosestEndPoint_Params params {};
		params.Location = Location;
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStartPoint != nullptr)
			*IsStartPoint = params.IsStartPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.GetEndPointTangents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartTangent                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndTangent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathway_C::GetEndPointTangents(struct FVector* StartTangent, struct FVector* EndTangent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.GetEndPointTangents");
		
		ABP_SplinePathway_C_GetEndPointTangents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTangent != nullptr)
			*StartTangent = params.StartTangent;
		if (EndTangent != nullptr)
			*EndTangent = params.EndTangent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.GetEndPointLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EndPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathway_C::GetEndPointLocations(struct FVector* StartPoint, struct FVector* EndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.GetEndPointLocations");
		
		ABP_SplinePathway_C_GetEndPointLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartPoint != nullptr)
			*StartPoint = params.StartPoint;
		if (EndPoint != nullptr)
			*EndPoint = params.EndPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.GetLocationAndTangent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldForward                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathway_C::GetLocationAndTangent(float Distance, struct FVector* WorldLocation, struct FVector* WorldForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.GetLocationAndTangent");
		
		ABP_SplinePathway_C_GetLocationAndTangent_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
		if (WorldForward != nullptr)
			*WorldForward = params.WorldForward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.GetLength
	 * 		Flags  -> ()
	 */
	float ABP_SplinePathway_C::GetLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.GetLength");
		
		ABP_SplinePathway_C_GetLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SplinePathway_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.UserConstructionScript");
		
		ABP_SplinePathway_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.CopySpline
	 * 		Flags  -> ()
	 */
	void ABP_SplinePathway_C::CopySpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.CopySpline");
		
		ABP_SplinePathway_C_CopySpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathway.BP_SplinePathway_C.ExecuteUbergraph_BP_SplinePathway
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathway_C::ExecuteUbergraph_BP_SplinePathway(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathway.BP_SplinePathway_C.ExecuteUbergraph_BP_SplinePathway");
		
		ABP_SplinePathway_C_ExecuteUbergraph_BP_SplinePathway_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SplinePathway_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SplinePathway_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplinePathway.BP_SplinePathway_C");
		return ptr;
	}

}


