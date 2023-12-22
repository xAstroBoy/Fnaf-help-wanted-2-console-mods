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
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ShuffleAndAssign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              OptionsArray                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      Acessory1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Acessory2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Acessory3                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Acessory4                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              ItemsToDisplay                                             (Parm, OutParm)
	 */
	void ABP_BS_SM_Bust_C::ShuffleAndAssign(TArray<class UClass*>* OptionsArray, class UClass** Acessory1, class UClass** Acessory2, class UClass** Acessory3, class UClass** Acessory4, TArray<class UClass*>* ItemsToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ShuffleAndAssign");
		
		ABP_BS_SM_Bust_C_ShuffleAndAssign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OptionsArray != nullptr)
			*OptionsArray = params.OptionsArray;
		if (Acessory1 != nullptr)
			*Acessory1 = params.Acessory1;
		if (Acessory2 != nullptr)
			*Acessory2 = params.Acessory2;
		if (Acessory3 != nullptr)
			*Acessory3 = params.Acessory3;
		if (Acessory4 != nullptr)
			*Acessory4 = params.Acessory4;
		if (ItemsToDisplay != nullptr)
			*ItemsToDisplay = params.ItemsToDisplay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_Bust_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ReceiveBeginPlay");
		
		ABP_BS_SM_Bust_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ResetBusts
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_Bust_C::ResetBusts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ResetBusts");
		
		ABP_BS_SM_Bust_C_ResetBusts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.LookAt
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_Bust_C::LookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.LookAt");
		
		ABP_BS_SM_Bust_C_LookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.DetermineLookAtPercentage
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_Bust_C::DetermineLookAtPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.DetermineLookAtPercentage");
		
		ABP_BS_SM_Bust_C_DetermineLookAtPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.EstablishAccessories
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_Bust_C::EstablishAccessories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.EstablishAccessories");
		
		ABP_BS_SM_Bust_C_EstablishAccessories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.SpawnAccessoriesOnBusts
	 * 		Flags  -> ()
	 */
	void ABP_BS_SM_Bust_C::SpawnAccessoriesOnBusts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.SpawnAccessoriesOnBusts");
		
		ABP_BS_SM_Bust_C_SpawnAccessoriesOnBusts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ExecuteUbergraph_BP_BS_SM_Bust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_SM_Bust_C::ExecuteUbergraph_BP_BS_SM_Bust(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_SM_Bust.BP_BS_SM_Bust_C.ExecuteUbergraph_BP_BS_SM_Bust");
		
		ABP_BS_SM_Bust_C_ExecuteUbergraph_BP_BS_SM_Bust_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_SM_Bust_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_SM_Bust_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_SM_Bust.BP_BS_SM_Bust_C");
		return ptr;
	}

}


