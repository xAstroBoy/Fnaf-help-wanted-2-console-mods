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
	 * 		Name   -> Function BP_ThumperGameMode.BP_ThumperGameMode_C.SetMixerVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundClass*                                 Mixer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ThumperGameMode_C::SetMixerVolume(class USoundClass* Mixer, float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ThumperGameMode.BP_ThumperGameMode_C.SetMixerVolume");
		
		ABP_ThumperGameMode_C_SetMixerVolume_Params params {};
		params.Mixer = Mixer;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ThumperGameMode.BP_ThumperGameMode_C.ApplyAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      Setting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_ThumperGameMode_C::ApplyAudioSettings(const struct FAudioSettingsSaveData& Setting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ThumperGameMode.BP_ThumperGameMode_C.ApplyAudioSettings");
		
		ABP_ThumperGameMode_C_ApplyAudioSettings_Params params {};
		params.Setting = Setting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ThumperGameMode.BP_ThumperGameMode_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ThumperGameMode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ThumperGameMode.BP_ThumperGameMode_C.ReceiveBeginPlay");
		
		ABP_ThumperGameMode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ThumperGameMode.BP_ThumperGameMode_C.OnApplyAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      Settings                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_ThumperGameMode_C::OnApplyAudioSettings(const struct FAudioSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ThumperGameMode.BP_ThumperGameMode_C.OnApplyAudioSettings");
		
		ABP_ThumperGameMode_C_OnApplyAudioSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ThumperGameMode.BP_ThumperGameMode_C.ExecuteUbergraph_BP_ThumperGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ThumperGameMode_C::ExecuteUbergraph_BP_ThumperGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ThumperGameMode.BP_ThumperGameMode_C.ExecuteUbergraph_BP_ThumperGameMode");
		
		ABP_ThumperGameMode_C_ExecuteUbergraph_BP_ThumperGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ThumperGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ThumperGameMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThumperGameMode.BP_ThumperGameMode_C");
		return ptr;
	}

}


