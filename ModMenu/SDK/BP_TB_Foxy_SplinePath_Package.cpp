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
	 * 		Name   -> Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_SplinePath_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.ReceiveBeginPlay");
		
		ABP_TB_Foxy_SplinePath_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.DEBUG_GetWorldLocationOfEndPoint
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_SplinePath_C::DEBUG_GetWorldLocationOfEndPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.DEBUG_GetWorldLocationOfEndPoint");
		
		ABP_TB_Foxy_SplinePath_C_DEBUG_GetWorldLocationOfEndPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.TriggerGallery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_SplinePath_C::TriggerGallery(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.TriggerGallery");
		
		ABP_TB_Foxy_SplinePath_C_TriggerGallery_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.DEBUG_GetSplineLength
	 * 		Flags  -> ()
	 */
	void ABP_TB_Foxy_SplinePath_C::DEBUG_GetSplineLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.DEBUG_GetSplineLength");
		
		ABP_TB_Foxy_SplinePath_C_DEBUG_GetSplineLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.ExecuteUbergraph_BP_TB_Foxy_SplinePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Foxy_SplinePath_C::ExecuteUbergraph_BP_TB_Foxy_SplinePath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.ExecuteUbergraph_BP_TB_Foxy_SplinePath");
		
		ABP_TB_Foxy_SplinePath_C_ExecuteUbergraph_BP_TB_Foxy_SplinePath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.FreezeForGallery__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Orientation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TB_Foxy_SplinePath_C::FreezeForGallery__DelegateSignature(const struct FRotator& Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.FreezeForGallery__DelegateSignature");
		
		ABP_TB_Foxy_SplinePath_C_FreezeForGallery__DelegateSignature_Params params {};
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TB_Foxy_SplinePath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TB_Foxy_SplinePath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C");
		return ptr;
	}

}


