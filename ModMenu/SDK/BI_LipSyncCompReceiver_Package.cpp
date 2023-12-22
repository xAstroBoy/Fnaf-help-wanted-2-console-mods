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
	 * 		Name   -> Function BI_LipSyncCompReceiver.BI_LipSyncCompReceiver_C.SetLipSyncAmp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amplitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_LipSyncCompReceiver_C::SetLipSyncAmp(float Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_LipSyncCompReceiver.BI_LipSyncCompReceiver_C.SetLipSyncAmp");
		
		UBI_LipSyncCompReceiver_C_SetLipSyncAmp_Params params {};
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_LipSyncCompReceiver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_LipSyncCompReceiver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_LipSyncCompReceiver.BI_LipSyncCompReceiver_C");
		return ptr;
	}

}


