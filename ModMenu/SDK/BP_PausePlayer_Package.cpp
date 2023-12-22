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
	 * 		Name   -> Function BP_PausePlayer.BP_PausePlayer_C.InpActEvt_IA_Menu_K2Node_EnhancedInputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TriggeredTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PausePlayer_C::InpActEvt_IA_Menu_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PausePlayer.BP_PausePlayer_C.InpActEvt_IA_Menu_K2Node_EnhancedInputActionEvent_1");
		
		ABP_PausePlayer_C_InpActEvt_IA_Menu_K2Node_EnhancedInputActionEvent_1_Params params {};
		params.ActionValue = ActionValue;
		params.ElapsedTime = ElapsedTime;
		params.TriggeredTime = TriggeredTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PausePlayer.BP_PausePlayer_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PausePlayer_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PausePlayer.BP_PausePlayer_C.ReceivePossessed");
		
		ABP_PausePlayer_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PausePlayer.BP_PausePlayer_C.ExecuteUbergraph_BP_PausePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PausePlayer_C::ExecuteUbergraph_BP_PausePlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PausePlayer.BP_PausePlayer_C.ExecuteUbergraph_BP_PausePlayer");
		
		ABP_PausePlayer_C_ExecuteUbergraph_BP_PausePlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PausePlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PausePlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PausePlayer.BP_PausePlayer_C");
		return ptr;
	}

}


