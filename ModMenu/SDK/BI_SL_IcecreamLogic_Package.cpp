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
	 * 		Name   -> Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.PlayerTrashedIcecream
	 * 		Flags  -> ()
	 */
	void UBI_SL_IcecreamLogic_C::PlayerTrashedIcecream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.PlayerTrashedIcecream");
		
		UBI_SL_IcecreamLogic_C_PlayerTrashedIcecream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.AteIceCream
	 * 		Flags  -> ()
	 */
	void UBI_SL_IcecreamLogic_C::AteIceCream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.AteIceCream");
		
		UBI_SL_IcecreamLogic_C_AteIceCream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.PlayerTookIceCream
	 * 		Flags  -> ()
	 */
	void UBI_SL_IcecreamLogic_C::PlayerTookIceCream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.PlayerTookIceCream");
		
		UBI_SL_IcecreamLogic_C_PlayerTookIceCream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.SetCircusBabyOwnerReference
	 * 		Flags  -> ()
	 */
	void UBI_SL_IcecreamLogic_C::SetCircusBabyOwnerReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C.SetCircusBabyOwnerReference");
		
		UBI_SL_IcecreamLogic_C_SetCircusBabyOwnerReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SL_IcecreamLogic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SL_IcecreamLogic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SL_IcecreamLogic.BI_SL_IcecreamLogic_C");
		return ptr;
	}

}


