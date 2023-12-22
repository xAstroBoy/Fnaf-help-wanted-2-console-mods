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
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.MoveCharacterByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SendToHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OverrideSpot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSpotOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_FuntimeFreddy_C::MoveCharacterByID(bool SendToHidden, int32_t OverrideSpot, bool* IsSpotOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.MoveCharacterByID");
		
		ABP_RA_SL_FuntimeFreddy_C_MoveCharacterByID_Params params {};
		params.SendToHidden = SendToHidden;
		params.OverrideSpot = OverrideSpot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSpotOccupied != nullptr)
			*IsSpotOccupied = params.IsSpotOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SetCurrentPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   CurrentPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFreddy_C::SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SetCurrentPosition");
		
		ABP_RA_SL_FuntimeFreddy_C_SetCurrentPosition_Params params {};
		params.CurrentPosition = CurrentPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SelectRoomForBonbon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFreddyOnRightSide                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RA_SL_FuntimeFreddy_C::SelectRoomForBonbon(bool IsFreddyOnRightSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SelectRoomForBonbon");
		
		ABP_RA_SL_FuntimeFreddy_C_SelectRoomForBonbon_Params params {};
		params.IsFreddyOnRightSide = IsFreddyOnRightSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.AudioToAlertPlayer
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFreddy_C::AudioToAlertPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.AudioToAlertPlayer");
		
		ABP_RA_SL_FuntimeFreddy_C_AudioToAlertPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.CheckWhenToJumpscare
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFreddy_C::CheckWhenToJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.CheckWhenToJumpscare");
		
		ABP_RA_SL_FuntimeFreddy_C_CheckWhenToJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.CheckForPassageBlocked
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFreddy_C::CheckForPassageBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.CheckForPassageBlocked");
		
		ABP_RA_SL_FuntimeFreddy_C_CheckForPassageBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFreddy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.ReceiveBeginPlay");
		
		ABP_RA_SL_FuntimeFreddy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SummonBonBon
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFreddy_C::SummonBonBon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SummonBonBon");
		
		ABP_RA_SL_FuntimeFreddy_C_SummonBonBon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.DisableAllVO
	 * 		Flags  -> ()
	 */
	void ABP_RA_SL_FuntimeFreddy_C::DisableAllVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.DisableAllVO");
		
		ABP_RA_SL_FuntimeFreddy_C_DisableAllVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.ExecuteUbergraph_BP_RA_SL_FuntimeFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RA_SL_FuntimeFreddy_C::ExecuteUbergraph_BP_RA_SL_FuntimeFreddy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.ExecuteUbergraph_BP_RA_SL_FuntimeFreddy");
		
		ABP_RA_SL_FuntimeFreddy_C_ExecuteUbergraph_BP_RA_SL_FuntimeFreddy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RA_SL_FuntimeFreddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RA_SL_FuntimeFreddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C");
		return ptr;
	}

}


