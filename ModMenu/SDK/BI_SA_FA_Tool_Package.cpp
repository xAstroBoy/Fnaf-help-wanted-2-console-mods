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
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.PlayToolHaptics
	 * 		Flags  -> ()
	 */
	void UBI_SA_FA_Tool_C::PlayToolHaptics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.PlayToolHaptics");
		
		UBI_SA_FA_Tool_C_PlayToolHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.ItemAction
	 * 		Flags  -> ()
	 */
	void UBI_SA_FA_Tool_C::ItemAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.ItemAction");
		
		UBI_SA_FA_Tool_C_ItemAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.SetReturnSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            Socket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SA_FA_Tool_C::SetReturnSocket(class USocketComponent* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.SetReturnSocket");
		
		UBI_SA_FA_Tool_C_SetReturnSocket_Params params {};
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.ReturnToSocket
	 * 		Flags  -> ()
	 */
	void UBI_SA_FA_Tool_C::ReturnToSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.ReturnToSocket");
		
		UBI_SA_FA_Tool_C_ReturnToSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.OnInstantiate
	 * 		Flags  -> ()
	 */
	void UBI_SA_FA_Tool_C::OnInstantiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.OnInstantiate");
		
		UBI_SA_FA_Tool_C_OnInstantiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.GetToolEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_SO_FA_ToolSelection                           ToolSelection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_SA_FA_Tool_C::GetToolEnum(Enum_SO_FA_ToolSelection* ToolSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.GetToolEnum");
		
		UBI_SA_FA_Tool_C_GetToolEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolSelection != nullptr)
			*ToolSelection = params.ToolSelection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.Deactivate
	 * 		Flags  -> ()
	 */
	void UBI_SA_FA_Tool_C::Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.Deactivate");
		
		UBI_SA_FA_Tool_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.Activate
	 * 		Flags  -> ()
	 */
	void UBI_SA_FA_Tool_C::Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.Activate");
		
		UBI_SA_FA_Tool_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_SA_FA_Tool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_SA_FA_Tool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_SA_FA_Tool.BI_SA_FA_Tool_C");
		return ptr;
	}

}


