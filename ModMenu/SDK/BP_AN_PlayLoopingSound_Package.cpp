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
	 * 		Name   -> Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.BP_AN_PlayLoopingSound_AutoGenFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAudioComponentPlayState                           PlayState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AN_PlayLoopingSound_C::BP_AN_PlayLoopingSound_AutoGenFunc(EAudioComponentPlayState PlayState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.BP_AN_PlayLoopingSound_AutoGenFunc");
		
		UBP_AN_PlayLoopingSound_C_BP_AN_PlayLoopingSound_AutoGenFunc_Params params {};
		params.PlayState = PlayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.LocalSpawnSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             AttachToComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RandomStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAudioComponent* UBP_AN_PlayLoopingSound_C::LocalSpawnSound(class USoundBase* Sound, class USceneComponent* AttachToComponent, bool RandomStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.LocalSpawnSound");
		
		UBP_AN_PlayLoopingSound_C_LocalSpawnSound_Params params {};
		params.Sound = Sound;
		params.AttachToComponent = AttachToComponent;
		params.RandomStart = RandomStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.Received_NotifyTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FrameDeltaTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AN_PlayLoopingSound_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.Received_NotifyTick");
		
		UBP_AN_PlayLoopingSound_C_Received_NotifyTick_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.FrameDeltaTime = FrameDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.Received_NotifyEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AN_PlayLoopingSound_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.Received_NotifyEnd");
		
		UBP_AN_PlayLoopingSound_C_Received_NotifyEnd_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.Received_NotifyBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_AN_PlayLoopingSound_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C.Received_NotifyBegin");
		
		UBP_AN_PlayLoopingSound_C_Received_NotifyBegin_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AN_PlayLoopingSound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AN_PlayLoopingSound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AN_PlayLoopingSound.BP_AN_PlayLoopingSound_C");
		return ptr;
	}

}


