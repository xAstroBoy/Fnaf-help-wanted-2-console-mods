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
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Timeline_VictoryFade__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_SisterLocation_C::Timeline_VictoryFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Timeline_VictoryFade__FinishedFunc");
		
		ABP_VRPlayer_SisterLocation_C_Timeline_VictoryFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Timeline_VictoryFade__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_SisterLocation_C::Timeline_VictoryFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Timeline_VictoryFade__UpdateFunc");
		
		ABP_VRPlayer_SisterLocation_C_Timeline_VictoryFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Timeline_VictoryFade__TriggerDepthFade__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_SisterLocation_C::Timeline_VictoryFade__TriggerDepthFade__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Timeline_VictoryFade__TriggerDepthFade__EventFunc");
		
		ABP_VRPlayer_SisterLocation_C_Timeline_VictoryFade__TriggerDepthFade__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_SisterLocation_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.ReceiveBeginPlay");
		
		ABP_VRPlayer_SisterLocation_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Trigger_CameraFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_SisterLocation_C::Trigger_CameraFade(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.Trigger_CameraFade");
		
		ABP_VRPlayer_SisterLocation_C_Trigger_CameraFade_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.SL_TriggerVictoryScreen
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_SisterLocation_C::SL_TriggerVictoryScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.SL_TriggerVictoryScreen");
		
		ABP_VRPlayer_SisterLocation_C_SL_TriggerVictoryScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.SL_NormalScreenFade
	 * 		Flags  -> ()
	 */
	void ABP_VRPlayer_SisterLocation_C::SL_NormalScreenFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.SL_NormalScreenFade");
		
		ABP_VRPlayer_SisterLocation_C_SL_NormalScreenFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.ExecuteUbergraph_BP_VRPlayer_SisterLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VRPlayer_SisterLocation_C::ExecuteUbergraph_BP_VRPlayer_SisterLocation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C.ExecuteUbergraph_BP_VRPlayer_SisterLocation");
		
		ABP_VRPlayer_SisterLocation_C_ExecuteUbergraph_BP_VRPlayer_SisterLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VRPlayer_SisterLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VRPlayer_SisterLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VRPlayer_SisterLocation.BP_VRPlayer_SisterLocation_C");
		return ptr;
	}

}


