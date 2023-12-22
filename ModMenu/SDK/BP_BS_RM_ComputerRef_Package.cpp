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
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ResetAssignments
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_ComputerRef_C::ResetAssignments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ResetAssignments");
		
		ABP_BS_RM_ComputerRef_C_ResetAssignments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayForehead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedEyes                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetDisplayForehead(class UClass* AssignedEyes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayForehead");
		
		ABP_BS_RM_ComputerRef_C_SetDisplayForehead_Params params {};
		params.AssignedEyes = AssignedEyes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SaveAssignedColors
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_ComputerRef_C::SaveAssignedColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SaveAssignedColors");
		
		ABP_BS_RM_ComputerRef_C_SaveAssignedColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayEyes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedEyes                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetDisplayEyes(class UClass* AssignedEyes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayEyes");
		
		ABP_BS_RM_ComputerRef_C_SetDisplayEyes_Params params {};
		params.AssignedEyes = AssignedEyes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayNeck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedNeck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetDisplayNeck(class UClass* AssignedNeck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayNeck");
		
		ABP_BS_RM_ComputerRef_C_SetDisplayNeck_Params params {};
		params.AssignedNeck = AssignedNeck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayMustache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedMustache                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetDisplayMustache(class UClass* AssignedMustache)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayMustache");
		
		ABP_BS_RM_ComputerRef_C_SetDisplayMustache_Params params {};
		params.AssignedMustache = AssignedMustache;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayEars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedEars                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetDisplayEars(class UClass* AssignedEars)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayEars");
		
		ABP_BS_RM_ComputerRef_C_SetDisplayEars_Params params {};
		params.AssignedEars = AssignedEars;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AssignedHat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetDisplayHat(class UClass* AssignedHat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetDisplayHat");
		
		ABP_BS_RM_ComputerRef_C_SetDisplayHat_Params params {};
		params.AssignedHat = AssignedHat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.PickRandomAccessory
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_ComputerRef_C::PickRandomAccessory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.PickRandomAccessory");
		
		ABP_BS_RM_ComputerRef_C_PickRandomAccessory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.PickRandomMakeup
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_ComputerRef_C::PickRandomMakeup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.PickRandomMakeup");
		
		ABP_BS_RM_ComputerRef_C_PickRandomMakeup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BS_RM_ComputerRef_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ReceiveBeginPlay");
		
		ABP_BS_RM_ComputerRef_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetBust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BS_RM_Bust_C*                            BustRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::SetBust(class ABP_BS_RM_Bust_C* BustRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.SetBust");
		
		ABP_BS_RM_ComputerRef_C_SetBust_Params params {};
		params.BustRef = BustRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ExecuteUbergraph_BP_BS_RM_ComputerRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BS_RM_ComputerRef_C::ExecuteUbergraph_BP_BS_RM_ComputerRef(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C.ExecuteUbergraph_BP_BS_RM_ComputerRef");
		
		ABP_BS_RM_ComputerRef_C_ExecuteUbergraph_BP_BS_RM_ComputerRef_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BS_RM_ComputerRef_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BS_RM_ComputerRef_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_RM_ComputerRef.BP_BS_RM_ComputerRef_C");
		return ptr;
	}

}


