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
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.Add Delta Distance No Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::AddDeltaDistanceNoMovement(const struct FSplineFollowerContext& SplineFollowerContext, float DeltaDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.Add Delta Distance No Movement");
		
		ABP_SplinePathwayManager_C_AddDeltaDistanceNoMovement_Params params {};
		params.SplineFollowerContext = SplineFollowerContext;
		params.DeltaDistance = DeltaDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.GetChildForkPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SplinePathway_C*                         SplineIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathFork_C*>                ForksUsed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABP_SplinePathFork_C*                        OriginalFork                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathway_C*>                 OnesToCheck                                                (Parm, OutParm)
	 * 		TArray<class ABP_SplinePathFork_C*>                OutForks                                                   (Parm, OutParm)
	 */
	void ABP_SplinePathwayManager_C::GetChildForkPaths(class ABP_SplinePathway_C** SplineIn, TArray<class ABP_SplinePathFork_C*>* ForksUsed, class ABP_SplinePathFork_C* OriginalFork, TArray<class ABP_SplinePathway_C*>* OnesToCheck, TArray<class ABP_SplinePathFork_C*>* OutForks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.GetChildForkPaths");
		
		ABP_SplinePathwayManager_C_GetChildForkPaths_Params params {};
		params.OriginalFork = OriginalFork;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineIn != nullptr)
			*SplineIn = params.SplineIn;
		if (ForksUsed != nullptr)
			*ForksUsed = params.ForksUsed;
		if (OnesToCheck != nullptr)
			*OnesToCheck = params.OnesToCheck;
		if (OutForks != nullptr)
			*OutForks = params.OutForks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineAndPointSoftRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathway_C*>                 Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABP_SplinePathway_C*                         Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SplineLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::FindClosestSplineAndPointSoftRef(const struct FVector& WorldLocation, TArray<class ABP_SplinePathway_C*>* Splines, class ABP_SplinePathway_C** Spline, struct FVector* SplineLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineAndPointSoftRef");
		
		ABP_SplinePathwayManager_C_FindClosestSplineAndPointSoftRef_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Splines != nullptr)
			*Splines = params.Splines;
		if (Spline != nullptr)
			*Spline = params.Spline;
		if (SplineLocation != nullptr)
			*SplineLocation = params.SplineLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineUsingForks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathway_C*>                 Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABP_SplinePathway_C*                         SplineOut                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_SplinePathFork_C*                        ForkOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::FindClosestSplineUsingForks(struct FVector* WorldLocation, TArray<class ABP_SplinePathway_C*>* Splines, class ABP_SplinePathway_C** SplineOut, class ABP_SplinePathFork_C** ForkOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineUsingForks");
		
		ABP_SplinePathwayManager_C_FindClosestSplineUsingForks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
		if (Splines != nullptr)
			*Splines = params.Splines;
		if (SplineOut != nullptr)
			*SplineOut = params.SplineOut;
		if (ForkOut != nullptr)
			*ForkOut = params.ForkOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SetupForks
	 * 		Flags  -> ()
	 */
	void ABP_SplinePathwayManager_C::SetupForks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SetupForks");
		
		ABP_SplinePathwayManager_C_SetupForks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SelectStartSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SplinePathway_C*                         StartSpline                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::SelectStartSpline(class ABP_SplinePathway_C** StartSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SelectStartSpline");
		
		ABP_SplinePathwayManager_C_SelectStartSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartSpline != nullptr)
			*StartSpline = params.StartSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.RecurseSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SplinePathway_C*                         Spline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::RecurseSpline(class ABP_SplinePathway_C* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.RecurseSpline");
		
		ABP_SplinePathwayManager_C_RecurseSpline_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestDistAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SplinePathway_C*                         Spline                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistAlongSpline                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::FindClosestDistAlongSpline(class ABP_SplinePathway_C* Spline, const struct FVector& WorldLocation, float* DistAlongSpline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestDistAlongSpline");
		
		ABP_SplinePathwayManager_C_FindClosestDistAlongSpline_Params params {};
		params.Spline = Spline;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistAlongSpline != nullptr)
			*DistAlongSpline = params.DistAlongSpline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineAndPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ABP_SplinePathway_C*>                 Splines                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABP_SplinePathway_C*                         Spline                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SplineLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::FindClosestSplineAndPoint(const struct FVector& WorldLocation, TArray<class ABP_SplinePathway_C*>* Splines, class ABP_SplinePathway_C** Spline, struct FVector* SplineLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.FindClosestSplineAndPoint");
		
		ABP_SplinePathwayManager_C_FindClosestSplineAndPoint_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Splines != nullptr)
			*Splines = params.Splines;
		if (Spline != nullptr)
			*Spline = params.Spline;
		if (SplineLocation != nullptr)
			*SplineLocation = params.SplineLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SetupNewSplinePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SplinePathway_C*                         NextSpline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplineFollowerContext                      StructRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		bool                                               UseDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESplineFollowDirection                             Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::SetupNewSplinePath(class ABP_SplinePathway_C* NextSpline, struct FSplineFollowerContext* StructRef, bool UseDistance, float Distance, ESplineFollowDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.SetupNewSplinePath");
		
		ABP_SplinePathwayManager_C_SetupNewSplinePath_Params params {};
		params.NextSpline = NextSpline;
		params.UseDistance = UseDistance;
		params.Distance = Distance;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StructRef != nullptr)
			*StructRef = params.StructRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.GetPositionAtDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSplineFollowerContext                      Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::GetPositionAtDistance(float DeltaDistance, struct FSplineFollowerContext* Context, struct FVector* WorldLocation, struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.GetPositionAtDistance");
		
		ABP_SplinePathwayManager_C_GetPositionAtDistance_Params params {};
		params.DeltaDistance = DeltaDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SplinePathwayManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.UserConstructionScript");
		
		ABP_SplinePathwayManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SplinePathwayManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.ReceiveBeginPlay");
		
		ABP_SplinePathwayManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.ExecuteUbergraph_BP_SplinePathwayManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SplinePathwayManager_C::ExecuteUbergraph_BP_SplinePathwayManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SplinePathwayManager.BP_SplinePathwayManager_C.ExecuteUbergraph_BP_SplinePathwayManager");
		
		ABP_SplinePathwayManager_C_ExecuteUbergraph_BP_SplinePathwayManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SplinePathwayManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SplinePathwayManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SplinePathwayManager.BP_SplinePathwayManager_C");
		return ptr;
	}

}


