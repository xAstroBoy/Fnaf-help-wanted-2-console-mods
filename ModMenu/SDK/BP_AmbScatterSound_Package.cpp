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
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.UserConstructionScript");
		
		ABP_AmbScatterSound_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.GetRandomPosition
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_C::GetRandomPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.GetRandomPosition");
		
		ABP_AmbScatterSound_C_GetRandomPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.StopScatteredSounds
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_C::StopScatteredSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.StopScatteredSounds");
		
		ABP_AmbScatterSound_C_StopScatteredSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.PlayScatteredSounds
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_C::PlayScatteredSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.PlayScatteredSounds");
		
		ABP_AmbScatterSound_C_PlayScatteredSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.ReceiveBeginPlay");
		
		ABP_AmbScatterSound_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.ActivateScatteredSounds
	 * 		Flags  -> ()
	 */
	void ABP_AmbScatterSound_C::ActivateScatteredSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.ActivateScatteredSounds");
		
		ABP_AmbScatterSound_C_ActivateScatteredSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AmbScatterSound.BP_AmbScatterSound_C.ExecuteUbergraph_BP_AmbScatterSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AmbScatterSound_C::ExecuteUbergraph_BP_AmbScatterSound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AmbScatterSound.BP_AmbScatterSound_C.ExecuteUbergraph_BP_AmbScatterSound");
		
		ABP_AmbScatterSound_C_ExecuteUbergraph_BP_AmbScatterSound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AmbScatterSound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AmbScatterSound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbScatterSound.BP_AmbScatterSound_C");
		return ptr;
	}

}


