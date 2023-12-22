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
	 * 		Name   -> Function BP_Test_Target.BP_Test_Target_C.OnTargetHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTargetHitParams                            TargetHitParams                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Test_Target_C::OnTargetHit(const struct FTargetHitParams& TargetHitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Test_Target.BP_Test_Target_C.OnTargetHit");
		
		ABP_Test_Target_C_OnTargetHit_Params params {};
		params.TargetHitParams = TargetHitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Test_Target.BP_Test_Target_C.ExecuteUbergraph_BP_Test_Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Test_Target_C::ExecuteUbergraph_BP_Test_Target(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Test_Target.BP_Test_Target_C.ExecuteUbergraph_BP_Test_Target");
		
		ABP_Test_Target_C_ExecuteUbergraph_BP_Test_Target_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Test_Target_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Test_Target_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Test_Target.BP_Test_Target_C");
		return ptr;
	}

}


