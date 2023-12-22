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
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.DestoryAllExistingProps
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::DestoryAllExistingProps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.DestoryAllExistingProps");
		
		ABP_BS_RM_Bust_C_DestoryAllExistingProps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllEyeSockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Bust_C::GetAllEyeSockets(TArray<class USocketComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllEyeSockets");
		
		ABP_BS_RM_Bust_C_GetAllEyeSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllNeckSockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Bust_C::GetAllNeckSockets(TArray<class USocketComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllNeckSockets");
		
		ABP_BS_RM_Bust_C_GetAllNeckSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllEarSockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Bust_C::GetAllEarSockets(TArray<class USocketComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllEarSockets");
		
		ABP_BS_RM_Bust_C_GetAllEarSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllNoseSockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Bust_C::GetAllNoseSockets(TArray<class USocketComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllNoseSockets");
		
		ABP_BS_RM_Bust_C_GetAllNoseSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllHeadSockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Bust_C::GetAllHeadSockets(TArray<class USocketComponent*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAllHeadSockets");
		
		ABP_BS_RM_Bust_C_GetAllHeadSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.FindOpenSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USocketComponent*>                    Sockets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::FindOpenSocket(TArray<class USocketComponent*>* Sockets, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.FindOpenSocket");
		
		ABP_BS_RM_Bust_C_FindOpenSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sockets != nullptr)
			*Sockets = params.Sockets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAccessoriesMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBP_BS_SM_AccessoriesMapping>        Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_BS_RM_Bust_C::GetAccessoriesMapping(TArray<struct FBP_BS_SM_AccessoriesMapping>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.GetAccessoriesMapping");
		
		ABP_BS_RM_Bust_C_GetAccessoriesMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ShuffleAndAssign
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UClass*>                              OptionsArray                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      Acessory1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Acessory2                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Acessory3                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Acessory4                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              ItemsToDisplay                                             (Parm, OutParm)
	 */
	void ABP_BS_RM_Bust_C::ShuffleAndAssign(TArray<class UClass*>* OptionsArray, class UClass** Acessory1, class UClass** Acessory2, class UClass** Acessory3, class UClass** Acessory4, TArray<class UClass*>* ItemsToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ShuffleAndAssign");
		
		ABP_BS_RM_Bust_C_ShuffleAndAssign_Params params {};
		
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
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenMouthSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenMouthSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenMouthSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenMouthSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenLeftEyeSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenLeftEyeSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenLeftEyeSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenLeftEyeSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenRightEyeSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenRightEyeSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenRightEyeSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenRightEyeSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.SpawnMask
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::SpawnMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.SpawnMask");
		
		ABP_BS_RM_Bust_C_SpawnMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ReceiveBeginPlay");
		
		ABP_BS_RM_Bust_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ResetBusts
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::ResetBusts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ResetBusts");
		
		ABP_BS_RM_Bust_C_ResetBusts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.LookAt
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::LookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.LookAt");
		
		ABP_BS_RM_Bust_C_LookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.DetermineLookAtPercentage
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::DetermineLookAtPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.DetermineLookAtPercentage");
		
		ABP_BS_RM_Bust_C_DetermineLookAtPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.EstablishAccessories
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::EstablishAccessories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.EstablishAccessories");
		
		ABP_BS_RM_Bust_C_EstablishAccessories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.SpawnAccessoriesOnBusts
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_Bust_C::SpawnAccessoriesOnBusts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.SpawnAccessoriesOnBusts");
		
		ABP_BS_RM_Bust_C_SpawnAccessoriesOnBusts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenEyesSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenEyesSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenEyesSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenEyesSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenNeckSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenNeckSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenNeckSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenNeckSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenNoseSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenNoseSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenNoseSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenNoseSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenEarsSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenEarsSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenEarsSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenEarsSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenHeadSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::AssignToOpenHeadSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.AssignToOpenHeadSocket");
		
		ABP_BS_RM_Bust_C_AssignToOpenHeadSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ExecuteUbergraph_BP_BS_RM_Bust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_Bust_C::ExecuteUbergraph_BP_BS_RM_Bust(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_Bust.BP_BS_RM_Bust_C.ExecuteUbergraph_BP_BS_RM_Bust");
		
		ABP_BS_RM_Bust_C_ExecuteUbergraph_BP_BS_RM_Bust_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_RM_Bust_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_RM_Bust_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_RM_Bust.BP_BS_RM_Bust_C");
		return ptr;
	}

}


