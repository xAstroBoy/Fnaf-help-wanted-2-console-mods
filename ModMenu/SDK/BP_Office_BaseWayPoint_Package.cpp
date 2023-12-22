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
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.GetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SpotID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_BaseWayPoint_C::GetID(int32_t* SpotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.GetID");
		
		ABP_Office_BaseWayPoint_C_GetID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpotID != nullptr)
			*SpotID = params.SpotID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.AvailableToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_AnimatronicBase_C*                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAllowed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_BaseWayPoint_C::AvailableToCharacter(class ABP_Office_AnimatronicBase_C* Character, bool* IsAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.AvailableToCharacter");
		
		ABP_Office_BaseWayPoint_C_AvailableToCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowed != nullptr)
			*IsAllowed = params.IsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.GetIsOccupied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOccupied                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_BaseWayPoint_C::GetIsOccupied(bool* IsOccupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.GetIsOccupied");
		
		ABP_Office_BaseWayPoint_C_GetIsOccupied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOccupied != nullptr)
			*IsOccupied = params.IsOccupied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.SetIsOccupied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Occupied                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_BaseWayPoint_C::SetIsOccupied(bool Occupied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.SetIsOccupied");
		
		ABP_Office_BaseWayPoint_C_SetIsOccupied_Params params {};
		params.Occupied = Occupied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.CheckConnectingPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Office_BaseWayPoint_C*                   Waypoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CheckFullChain                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Office_BaseWayPoint_C::CheckConnectingPaths(class ABP_Office_BaseWayPoint_C* Waypoint, bool CheckFullChain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.CheckConnectingPaths");
		
		ABP_Office_BaseWayPoint_C_CheckConnectingPaths_Params params {};
		params.Waypoint = Waypoint;
		params.CheckFullChain = CheckFullChain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_GetImmediateConnectingPaths
	 * 		Flags  -> ()
	 */
	void ABP_Office_BaseWayPoint_C::DEBUG_GetImmediateConnectingPaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_GetImmediateConnectingPaths");
		
		ABP_Office_BaseWayPoint_C_DEBUG_GetImmediateConnectingPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_DisplayPathChain
	 * 		Flags  -> ()
	 */
	void ABP_Office_BaseWayPoint_C::DEBUG_DisplayPathChain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_DisplayPathChain");
		
		ABP_Office_BaseWayPoint_C_DEBUG_DisplayPathChain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_ContinueChain
	 * 		Flags  -> ()
	 */
	void ABP_Office_BaseWayPoint_C::DEBUG_ContinueChain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_ContinueChain");
		
		ABP_Office_BaseWayPoint_C_DEBUG_ContinueChain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.ExecuteUbergraph_BP_Office_BaseWayPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Office_BaseWayPoint_C::ExecuteUbergraph_BP_Office_BaseWayPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.ExecuteUbergraph_BP_Office_BaseWayPoint");
		
		ABP_Office_BaseWayPoint_C_ExecuteUbergraph_BP_Office_BaseWayPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Office_BaseWayPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Office_BaseWayPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C");
		return ptr;
	}

}


