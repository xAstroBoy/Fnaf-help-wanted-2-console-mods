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
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.CanBeGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       GrabberPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UABP_FTChica_Cupcake_C::CanBeGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.CanBeGrabbed");
		
		UABP_FTChica_Cupcake_C_CanBeGrabbed_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.CanBeReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       GrabberPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EHandReleaseEnable UABP_FTChica_Cupcake_C::CanBeReleased(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.CanBeReleased");
		
		UABP_FTChica_Cupcake_C_CanBeReleased_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.GetGrabber
	 * 		Flags  -> ()
	 */
	class UVRGrabberComponent* UABP_FTChica_Cupcake_C::GetGrabber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.GetGrabber");
		
		UABP_FTChica_Cupcake_C_GetGrabber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_FTChica_Cupcake_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.AnimGraph");
		
		UABP_FTChica_Cupcake_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberReleasedPostVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       GrabberPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HeldComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::OnGrabberReleasedPostVelocity(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* HeldComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberReleasedPostVelocity");
		
		UABP_FTChica_Cupcake_C_OnGrabberReleasedPostVelocity_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.HeldComponent = HeldComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnEndGrabberHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::OnEndGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnEndGrabberHover");
		
		UABP_FTChica_Cupcake_C_OnEndGrabberHover_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnBeginGrabberHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::OnBeginGrabberHover(class UVRGrabberComponent* GrabberComponent, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnBeginGrabberHover");
		
		UABP_FTChica_Cupcake_C_OnBeginGrabberHover_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.BlueprintUpdateAnimation");
		
		UABP_FTChica_Cupcake_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       GrabberPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberGrabbed");
		
		UABP_FTChica_Cupcake_C_OnGrabberGrabbed_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.GrabberPawn = GrabberPawn;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberReleased");
		
		UABP_FTChica_Cupcake_C_OnGrabberReleased_Params params {};
		params.GrabberComponent = GrabberComponent;
		params.Grabber = Grabber;
		params.hand = hand;
		params.ComponentToGrab = ComponentToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.ExecuteUbergraph_ABP_FTChica_Cupcake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_FTChica_Cupcake_C::ExecuteUbergraph_ABP_FTChica_Cupcake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.ExecuteUbergraph_ABP_FTChica_Cupcake");
		
		UABP_FTChica_Cupcake_C_ExecuteUbergraph_ABP_FTChica_Cupcake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_FTChica_Cupcake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_FTChica_Cupcake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C");
		return ptr;
	}

}


