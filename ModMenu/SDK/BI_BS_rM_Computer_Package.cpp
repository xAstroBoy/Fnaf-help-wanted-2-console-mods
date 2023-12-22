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
	 * 		Name   -> Function BI_BS_rM_Computer.BI_BS_RM_Computer_C.SetBust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BS_RM_Bust_C*                            BustRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Computer_C::SetBust(class ABP_BS_RM_Bust_C* BustRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_rM_Computer.BI_BS_RM_Computer_C.SetBust");
		
		UBI_BS_RM_Computer_C_SetBust_Params params {};
		params.BustRef = BustRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_BS_RM_Computer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_BS_RM_Computer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_BS_rM_Computer.BI_BS_RM_Computer_C");
		return ptr;
	}

}


