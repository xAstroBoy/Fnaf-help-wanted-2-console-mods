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
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_GetCurrentZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               CurrentZone                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChicaCupcake_C::Cupcake_GetCurrentZone(Enum_RA_SL_AreaZones* CurrentZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_GetCurrentZone");
		
		ABP_ChicaCupcake_C_Cupcake_GetCurrentZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentZone != nullptr)
			*CurrentZone = params.CurrentZone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_UpdateZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               NewZone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChicaCupcake_C::Cupcake_UpdateZone(Enum_RA_SL_AreaZones NewZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_UpdateZone");
		
		ABP_ChicaCupcake_C_Cupcake_UpdateZone_Params params {};
		params.NewZone = NewZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_ChicaHasClaimedIt
	 * 		Flags  -> ()
	 */
	void ABP_ChicaCupcake_C::Cupcake_ChicaHasClaimedIt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.Cupcake_ChicaHasClaimedIt");
		
		ABP_ChicaCupcake_C_Cupcake_ChicaHasClaimedIt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.OnGrabberGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       GrabberPawn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChicaCupcake_C::OnGrabberGrabbed(class UVRGrabberComponent* GrabberComponent, class APawn* GrabberPawn, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.OnGrabberGrabbed");
		
		ABP_ChicaCupcake_C_OnGrabberGrabbed_Params params {};
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
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.OnGrabberReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRGrabberComponent*                         GrabberComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Grabber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESWGVRBaseHand                                     hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         ComponentToGrab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChicaCupcake_C::OnGrabberReleased(class UVRGrabberComponent* GrabberComponent, class APawn* Grabber, ESWGVRBaseHand hand, class UPrimitiveComponent* ComponentToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.OnGrabberReleased");
		
		ABP_ChicaCupcake_C_OnGrabberReleased_Params params {};
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
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.BndEvt__BP_ChicaCupcake_Cupcake_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ChicaCupcake_C::BndEvt__BP_ChicaCupcake_Cupcake_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.BndEvt__BP_ChicaCupcake_Cupcake_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_ChicaCupcake_C_BndEvt__BP_ChicaCupcake_Cupcake_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChicaCupcake.BP_ChicaCupcake_C.ExecuteUbergraph_BP_ChicaCupcake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ChicaCupcake_C::ExecuteUbergraph_BP_ChicaCupcake(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChicaCupcake.BP_ChicaCupcake_C.ExecuteUbergraph_BP_ChicaCupcake");
		
		ABP_ChicaCupcake_C_ExecuteUbergraph_BP_ChicaCupcake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ChicaCupcake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ChicaCupcake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChicaCupcake.BP_ChicaCupcake_C");
		return ptr;
	}

}


