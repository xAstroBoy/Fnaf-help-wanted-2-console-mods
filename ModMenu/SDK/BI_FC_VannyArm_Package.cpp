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
	 * 		Name   -> Function BI_FC_VannyArm.BI_FC_VannyArm_C.StartVannyArm
	 * 		Flags  -> ()
	 */
	void UBI_FC_VannyArm_C::StartVannyArm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FC_VannyArm.BI_FC_VannyArm_C.StartVannyArm");
		
		UBI_FC_VannyArm_C_StartVannyArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_FC_VannyArm.BI_FC_VannyArm_C.SetupVannyArm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      GameManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_FC_VannyArm_C::SetupVannyArm(class AActor* GameManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_FC_VannyArm.BI_FC_VannyArm_C.SetupVannyArm");
		
		UBI_FC_VannyArm_C_SetupVannyArm_Params params {};
		params.GameManager = GameManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_FC_VannyArm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_FC_VannyArm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_FC_VannyArm.BI_FC_VannyArm_C");
		return ptr;
	}

}


