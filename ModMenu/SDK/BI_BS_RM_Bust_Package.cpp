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
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.SpawnMask
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_Bust_C::SpawnMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.SpawnMask");
		
		UBI_BS_RM_Bust_C_SpawnMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenEarsSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenEarsSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenEarsSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenEarsSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenNoseSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenNoseSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenNoseSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenNoseSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenNeckSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenNeckSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenNeckSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenNeckSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenEyesSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenEyesSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenEyesSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenEyesSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenRightEyeSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenRightEyeSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenRightEyeSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenRightEyeSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenLeftEyeSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenLeftEyeSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenLeftEyeSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenLeftEyeSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenHeadSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenHeadSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenHeadSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenHeadSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenMouthSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_Bust_C::AssignToOpenMouthSocket(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_Bust.BI_BS_RM_Bust_C.AssignToOpenMouthSocket");
		
		UBI_BS_RM_Bust_C_AssignToOpenMouthSocket_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_BS_RM_Bust_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_BS_RM_Bust_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_BS_RM_Bust.BI_BS_RM_Bust_C");
		return ptr;
	}

}


