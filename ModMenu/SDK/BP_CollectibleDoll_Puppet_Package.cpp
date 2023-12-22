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
	 * 		Name   -> Function BP_CollectibleDoll_Puppet.BP_CollectibleDoll_Puppet_C.CollectDoll
	 * 		Flags  -> ()
	 */
	void ABP_CollectibleDoll_Puppet_C::CollectDoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleDoll_Puppet.BP_CollectibleDoll_Puppet_C.CollectDoll");
		
		ABP_CollectibleDoll_Puppet_C_CollectDoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CollectibleDoll_Puppet.BP_CollectibleDoll_Puppet_C.ExecuteUbergraph_BP_CollectibleDoll_Puppet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CollectibleDoll_Puppet_C::ExecuteUbergraph_BP_CollectibleDoll_Puppet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CollectibleDoll_Puppet.BP_CollectibleDoll_Puppet_C.ExecuteUbergraph_BP_CollectibleDoll_Puppet");
		
		ABP_CollectibleDoll_Puppet_C_ExecuteUbergraph_BP_CollectibleDoll_Puppet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CollectibleDoll_Puppet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CollectibleDoll_Puppet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CollectibleDoll_Puppet.BP_CollectibleDoll_Puppet_C");
		return ptr;
	}

}


