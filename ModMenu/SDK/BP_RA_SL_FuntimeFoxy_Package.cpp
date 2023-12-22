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
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckIfPathIsBlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFullyBlocked                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::CheckIfPathIsBlocked(bool* IsFullyBlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckIfPathIsBlocked");
		
		ABP_RA_SL_FuntimeFoxy_C_CheckIfPathIsBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFullyBlocked != nullptr)
			*IsFullyBlocked = params.IsFullyBlocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.UpdateCharacterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToAdjacentPosition                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::UpdateCharacterPosition(bool SendToAdjacentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.UpdateCharacterPosition");
		
		ABP_RA_SL_FuntimeFoxy_C_UpdateCharacterPosition_Params params {};
		params.SendToAdjacentPosition = SendToAdjacentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetCurrentPosition");
		
		ABP_RA_SL_FuntimeFoxy_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.PutFoxyInUniqueStart
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::PutFoxyInUniqueStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.PutFoxyInUniqueStart");
		
		ABP_RA_SL_FuntimeFoxy_C_PutFoxyInUniqueStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::SetRunning(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetRunning");
		
		ABP_RA_SL_FuntimeFoxy_C_SetRunning_Params params {};
		params.IsRunning = IsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetFoxyOwnerReference
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::SetFoxyOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetFoxyOwnerReference");
		
		ABP_RA_SL_FuntimeFoxy_C_SetFoxyOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ReceiveTick");
		
		ABP_RA_SL_FuntimeFoxy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ActivateAnimatronicMovement
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::ActivateAnimatronicMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ActivateAnimatronicMovement");
		
		ABP_RA_SL_FuntimeFoxy_C_ActivateAnimatronicMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_FuntimeFoxy_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.AdvanceFoxy
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::AdvanceFoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.AdvanceFoxy");
		
		ABP_RA_SL_FuntimeFoxy_C_AdvanceFoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.FoxyWantsToMoveForward
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::FoxyWantsToMoveForward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.FoxyWantsToMoveForward");
		
		ABP_RA_SL_FuntimeFoxy_C_FoxyWantsToMoveForward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.PauseFoxyWhileWatched
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::PauseFoxyWhileWatched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.PauseFoxyWhileWatched");
		
		ABP_RA_SL_FuntimeFoxy_C_PauseFoxyWhileWatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ResumeFoxyTimer
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::ResumeFoxyTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ResumeFoxyTimer");
		
		ABP_RA_SL_FuntimeFoxy_C_ResumeFoxyTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.FoxyWatchedToClosely
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::FoxyWatchedToClosely()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.FoxyWatchedToClosely");
		
		ABP_RA_SL_FuntimeFoxy_C_FoxyWatchedToClosely_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.Reset_PauseFoxyWhileWatched
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::Reset_PauseFoxyWhileWatched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.Reset_PauseFoxyWhileWatched");
		
		ABP_RA_SL_FuntimeFoxy_C_Reset_PauseFoxyWhileWatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckForPassageBlocked
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::CheckForPassageBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.CheckForPassageBlocked");
		
		ABP_RA_SL_FuntimeFoxy_C_CheckForPassageBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ReceiveBeginPlay");
		
		ABP_RA_SL_FuntimeFoxy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.TriggerOnFoxyRunning
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::TriggerOnFoxyRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.TriggerOnFoxyRunning");
		
		ABP_RA_SL_FuntimeFoxy_C_TriggerOnFoxyRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_SetupFoxyToRun
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::DEBUG_SetupFoxyToRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_SetupFoxyToRun");
		
		ABP_RA_SL_FuntimeFoxy_C_DEBUG_SetupFoxyToRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetSpotId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SetCurrentID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::SetSpotId(int32_t SetCurrentID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SetSpotId");
		
		ABP_RA_SL_FuntimeFoxy_C_SetSpotId_Params params {};
		params.SetCurrentID = SetCurrentID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_AdvanceFoxy
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::DEBUG_AdvanceFoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_AdvanceFoxy");
		
		ABP_RA_SL_FuntimeFoxy_C_DEBUG_AdvanceFoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.AdvanceFoxyPosition
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::AdvanceFoxyPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.AdvanceFoxyPosition");
		
		ABP_RA_SL_FuntimeFoxy_C_AdvanceFoxyPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_StartFoxy
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFoxy_C::DEBUG_StartFoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.DEBUG_StartFoxy");
		
		ABP_RA_SL_FuntimeFoxy_C_DEBUG_StartFoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SL_TriggerLightFlicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_AreaZones                               ZoneTrigger                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurationOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.SL_TriggerLightFlicker");
		
		ABP_RA_SL_FuntimeFoxy_C_SL_TriggerLightFlicker_Params params {};
		params.ZoneTrigger = ZoneTrigger;
		params.DurationOverride = DurationOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ExecuteUbergraph_BP_RA_SL_FuntimeFoxy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFoxy_C::ExecuteUbergraph_BP_RA_SL_FuntimeFoxy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C.ExecuteUbergraph_BP_RA_SL_FuntimeFoxy");
		
		ABP_RA_SL_FuntimeFoxy_C_ExecuteUbergraph_BP_RA_SL_FuntimeFoxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_FuntimeFoxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_FuntimeFoxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C");
		return ptr;
	}

}


