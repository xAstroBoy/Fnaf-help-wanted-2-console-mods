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
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.CanBeEaten
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_RA_SL_IcecreamReward_C::CanBeEaten(class UEaterComponent* EaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.CanBeEaten");
		
		ABP_RA_SL_IcecreamReward_C_CanBeEaten_Params params {};
		params.EaterComponent = EaterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.GetRespawnTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_RA_SL_IcecreamReward_C::GetRespawnTransform(class UEaterComponent* EaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.GetRespawnTransform");
		
		ABP_RA_SL_IcecreamReward_C_GetRespawnTransform_Params params {};
		params.EaterComponent = EaterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.SetCircusBabyOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_IcecreamReward_C::SetCircusBabyOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.SetCircusBabyOwnerReference");
		
		ABP_RA_SL_IcecreamReward_C_SetCircusBabyOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.PlayerTookIceCream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_IcecreamReward_C::PlayerTookIceCream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.PlayerTookIceCream");
		
		ABP_RA_SL_IcecreamReward_C_PlayerTookIceCream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.AteIceCream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_IcecreamReward_C::AteIceCream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.AteIceCream");
		
		ABP_RA_SL_IcecreamReward_C_AteIceCream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BeingEaten
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEaterComponent*                             EaterComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_IcecreamReward_C::BeingEaten(class UEaterComponent* EaterComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BeingEaten");
		
		ABP_RA_SL_IcecreamReward_C_BeingEaten_Params params {};
		params.EaterComponent = EaterComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BndEvt__BP_RA_SL_IcecreamReward_BoundaryHandler_K2Node_ComponentBoundEvent_1_OnBoundaryHitDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_IcecreamReward_C::BndEvt__BP_RA_SL_IcecreamReward_BoundaryHandler_K2Node_ComponentBoundEvent_1_OnBoundaryHitDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BndEvt__BP_RA_SL_IcecreamReward_BoundaryHandler_K2Node_ComponentBoundEvent_1_OnBoundaryHitDelegate__DelegateSignature");
		
		ABP_RA_SL_IcecreamReward_C_BndEvt__BP_RA_SL_IcecreamReward_BoundaryHandler_K2Node_ComponentBoundEvent_1_OnBoundaryHitDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_IcecreamReward_C::BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RA_SL_IcecreamReward_C_BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_IcecreamReward_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.ReceiveBeginPlay");
		
		ABP_RA_SL_IcecreamReward_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.PlayerTrashedIcecream
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_IcecreamReward_C::PlayerTrashedIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.PlayerTrashedIcecream");
		
		ABP_RA_SL_IcecreamReward_C_PlayerTrashedIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_IcecreamReward_C::BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature");
		
		ABP_RA_SL_IcecreamReward_C_BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.ExecuteUbergraph_BP_RA_SL_IcecreamReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_IcecreamReward_C::ExecuteUbergraph_BP_RA_SL_IcecreamReward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C.ExecuteUbergraph_BP_RA_SL_IcecreamReward");
		
		ABP_RA_SL_IcecreamReward_C_ExecuteUbergraph_BP_RA_SL_IcecreamReward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_IcecreamReward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_IcecreamReward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C");
		return ptr;
	}

}


