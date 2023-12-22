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
	 * 		Name   -> Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.SetupVannyArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      GameManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Puppet_VannyArm_C::SetupVannyArm(class AActor* GameManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.SetupVannyArm");
		
		ABP_TB_Puppet_VannyArm_C_SetupVannyArm_Params params {};
		params.GameManager = GameManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.StartVannyArm
	 * 		Flags  -> ()
	 */
	void ABP_TB_Puppet_VannyArm_C::StartVannyArm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.StartVannyArm");
		
		ABP_TB_Puppet_VannyArm_C_StartVannyArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.OnCollected
	 * 		Flags  -> ()
	 */
	void ABP_TB_Puppet_VannyArm_C::OnCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.OnCollected");
		
		ABP_TB_Puppet_VannyArm_C_OnCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.CollectDoll
	 * 		Flags  -> ()
	 */
	void ABP_TB_Puppet_VannyArm_C::CollectDoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.CollectDoll");
		
		ABP_TB_Puppet_VannyArm_C_CollectDoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.DebugVannyArm
	 * 		Flags  -> ()
	 */
	void ABP_TB_Puppet_VannyArm_C::DebugVannyArm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.DebugVannyArm");
		
		ABP_TB_Puppet_VannyArm_C_DebugVannyArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.ExecuteUbergraph_BP_TB_Puppet_VannyArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TB_Puppet_VannyArm_C::ExecuteUbergraph_BP_TB_Puppet_VannyArm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C.ExecuteUbergraph_BP_TB_Puppet_VannyArm");
		
		ABP_TB_Puppet_VannyArm_C_ExecuteUbergraph_BP_TB_Puppet_VannyArm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TB_Puppet_VannyArm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TB_Puppet_VannyArm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TB_Puppet_VannyArm.BP_TB_Puppet_VannyArm_C");
		return ptr;
	}

}


