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
	 * 		Name   -> Function BI_TB_Foxy_TrackLightReference.BI_TB_Foxy_TrackLightReference_C.GetTrackLights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ASpotLight*>                          TrackLights                                                (Parm, OutParm)
	 */
	void UBI_TB_Foxy_TrackLightReference_C::GetTrackLights(TArray<class ASpotLight*>* TrackLights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_TB_Foxy_TrackLightReference.BI_TB_Foxy_TrackLightReference_C.GetTrackLights");
		
		UBI_TB_Foxy_TrackLightReference_C_GetTrackLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TrackLights != nullptr)
			*TrackLights = params.TrackLights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_TB_Foxy_TrackLightReference_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_TB_Foxy_TrackLightReference_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_TB_Foxy_TrackLightReference.BI_TB_Foxy_TrackLightReference_C");
		return ptr;
	}

}


