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
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.SpecifyTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     NewObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LipSyncComp_C::SpecifyTarget(class UObject* NewObject, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.SpecifyTarget");
		
		UBP_LipSyncComp_C_SpecifyTarget_Params params {};
		params.NewObject = NewObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.UpdateFromEnvelopeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  SoundWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Envelope                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LipSyncComp_C::UpdateFromEnvelopeValue(class USoundWave* SoundWave, float Envelope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.UpdateFromEnvelopeValue");
		
		UBP_LipSyncComp_C_UpdateFromEnvelopeValue_Params params {};
		params.SoundWave = SoundWave;
		params.Envelope = Envelope;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.AddTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_LipSyncComp_C::AddTarget(class UObject* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.AddTarget");
		
		UBP_LipSyncComp_C_AddTarget_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.Setup Targets
	 * 		Flags  -> ()
	 */
	void UBP_LipSyncComp_C::SetupTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.Setup Targets");
		
		UBP_LipSyncComp_C_SetupTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_LipSyncComp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.ReceiveBeginPlay");
		
		UBP_LipSyncComp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LipSyncComp_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.ReceiveTick");
		
		UBP_LipSyncComp_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.StopJawFlap
	 * 		Flags  -> ()
	 */
	void UBP_LipSyncComp_C::StopJawFlap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.StopJawFlap");
		
		UBP_LipSyncComp_C_StopJawFlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LipSyncComp.BP_LipSyncComp_C.ExecuteUbergraph_BP_LipSyncComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LipSyncComp_C::ExecuteUbergraph_BP_LipSyncComp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LipSyncComp.BP_LipSyncComp_C.ExecuteUbergraph_BP_LipSyncComp");
		
		UBP_LipSyncComp_C_ExecuteUbergraph_BP_LipSyncComp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LipSyncComp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LipSyncComp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LipSyncComp.BP_LipSyncComp_C");
		return ptr;
	}

}


