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
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetActivation
	 * 		Flags  -> ()
	 */
	float ABP_RA_CameraSystem_C::GetActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetActivation");
		
		ABP_RA_CameraSystem_C_GetActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.SetCurrentRoom
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::SetCurrentRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.SetCurrentRoom");
		
		ABP_RA_CameraSystem_C_SetCurrentRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetCurrentRoom
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::GetCurrentRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetCurrentRoom");
		
		ABP_RA_CameraSystem_C_GetCurrentRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.SetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_CameraSystem_C::SetIsActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.SetIsActive");
		
		ABP_RA_CameraSystem_C_SetIsActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_CameraSystem_C::GetIsActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.GetIsActive");
		
		ABP_RA_CameraSystem_C_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.UpdateVisibleCamera
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::UpdateVisibleCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.UpdateVisibleCamera");
		
		ABP_RA_CameraSystem_C_UpdateVisibleCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.IncrementalActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PercentageActivated                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_CameraSystem_C::IncrementalActivation(float PercentageActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.IncrementalActivation");
		
		ABP_RA_CameraSystem_C_IncrementalActivation_Params params {};
		params.PercentageActivated = PercentageActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.ReceiveBeginPlay");
		
		ABP_RA_CameraSystem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Next Camera
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::NextCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Next Camera");
		
		ABP_RA_CameraSystem_C_NextCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Activated
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::Activated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Activated");
		
		ABP_RA_CameraSystem_C_Activated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Deactivated
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::Deactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Deactivated");
		
		ABP_RA_CameraSystem_C_Deactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Event_OnPowerButtonPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_CameraSystem_C::Event_OnPowerButtonPress(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.Event_OnPowerButtonPress");
		
		ABP_RA_CameraSystem_C_Event_OnPowerButtonPress_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.CameraSystemPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_CameraSystem_C::CameraSystemPower(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.CameraSystemPower");
		
		ABP_RA_CameraSystem_C_CameraSystemPower_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.OnPowerShutOff
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::OnPowerShutOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.OnPowerShutOff");
		
		ABP_RA_CameraSystem_C_OnPowerShutOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.DEBUG_CycleMoniterScreens
	 * 		Flags  -> ()
	 */
	void ABP_RA_CameraSystem_C::DEBUG_CycleMoniterScreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.DEBUG_CycleMoniterScreens");
		
		ABP_RA_CameraSystem_C_DEBUG_CycleMoniterScreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.ExecuteUbergraph_BP_RA_CameraSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_CameraSystem_C::ExecuteUbergraph_BP_RA_CameraSystem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.ExecuteUbergraph_BP_RA_CameraSystem");
		
		ABP_RA_CameraSystem_C_ExecuteUbergraph_BP_RA_CameraSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.CameraSystemStatus__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_CameraSystem_C::CameraSystemStatus__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_CameraSystem.BP_RA_CameraSystem_C.CameraSystemStatus__DelegateSignature");
		
		ABP_RA_CameraSystem_C_CameraSystemStatus__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_CameraSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_CameraSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_CameraSystem.BP_RA_CameraSystem_C");
		return ptr;
	}

}


