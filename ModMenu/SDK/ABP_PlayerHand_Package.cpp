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
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetConstraintBase
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UABP_PlayerHand_C::GetConstraintBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetConstraintBase");
		
		UABP_PlayerHand_C_GetConstraintBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetComponentsInGrabRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 ActorsInGrabRange                                          (Parm, OutParm, ContainsInstancedReference)
	 */
	void UABP_PlayerHand_C::GetComponentsInGrabRange(TArray<class UPrimitiveComponent*>* ActorsInGrabRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetComponentsInGrabRange");
		
		UABP_PlayerHand_C_GetComponentsInGrabRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsInGrabRange != nullptr)
			*ActorsInGrabRange = params.ActorsInGrabRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetGrabConstraintComponent
	 * 		Flags  -> ()
	 */
	class UPhysicsConstraintComponent* UABP_PlayerHand_C::GetGrabConstraintComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetGrabConstraintComponent");
		
		UABP_PlayerHand_C_GetGrabConstraintComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetGrabDetector
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UABP_PlayerHand_C::GetGrabDetector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetGrabDetector");
		
		UABP_PlayerHand_C_GetGrabDetector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandPrimitive
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UABP_PlayerHand_C::GetHandPrimitive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandPrimitive");
		
		UABP_PlayerHand_C_GetHandPrimitive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandState
	 * 		Flags  -> ()
	 */
	EHandModelState UABP_PlayerHand_C::GetHandState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandState");
		
		UABP_PlayerHand_C_GetHandState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandType
	 * 		Flags  -> ()
	 */
	ESWGVRBaseHand UABP_PlayerHand_C::GetHandType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.GetHandType");
		
		UABP_PlayerHand_C_GetHandType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_PlayerHand_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.AnimGraph");
		
		UABP_PlayerHand_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.HandCreationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRHandComponent*                            HandComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::HandCreationFinished(class UVRHandComponent* HandComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.HandCreationFinished");
		
		UABP_PlayerHand_C_HandCreationFinished_Params params {};
		params.HandComponent = HandComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.SetGrabHoverStateEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_PlayerHand_C::SetGrabHoverStateEnable(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.SetGrabHoverStateEnable");
		
		UABP_PlayerHand_C_SetGrabHoverStateEnable_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::SetHandType(ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandType");
		
		UABP_PlayerHand_C_SetHandType_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_PlayerHand_C::SetHandVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandVisibility");
		
		UABP_PlayerHand_C_SetHandVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.UnconstrainComponent
	 * 		Flags  -> ()
	 */
	void UABP_PlayerHand_C::UnconstrainComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.UnconstrainComponent");
		
		UABP_PlayerHand_C_UnconstrainComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.ConstrainComponentToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponentToConstrain                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::ConstrainComponentToHand(class UPrimitiveComponent* PrimitiveComponentToConstrain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.ConstrainComponentToHand");
		
		UABP_PlayerHand_C_ConstrainComponentToHand_Params params {};
		params.PrimitiveComponentToConstrain = PrimitiveComponentToConstrain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandProximity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Proximity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::SetHandProximity(float Proximity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandProximity");
		
		UABP_PlayerHand_C_SetHandProximity_Params params {};
		params.Proximity = Proximity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GripValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::SetHandGrip(float GripValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandGrip");
		
		UABP_PlayerHand_C_SetHandGrip_Params params {};
		params.GripValue = GripValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHandModelState                                    State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::SetHandState(EHandModelState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.SetHandState");
		
		UABP_PlayerHand_C_SetHandState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_PlayerHand.ABP_PlayerHand_C.ExecuteUbergraph_ABP_PlayerHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PlayerHand_C::ExecuteUbergraph_ABP_PlayerHand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_PlayerHand.ABP_PlayerHand_C.ExecuteUbergraph_ABP_PlayerHand");
		
		UABP_PlayerHand_C_ExecuteUbergraph_ABP_PlayerHand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_PlayerHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_PlayerHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PlayerHand.ABP_PlayerHand_C");
		return ptr;
	}

}


