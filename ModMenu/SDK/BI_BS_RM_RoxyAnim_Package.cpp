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
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EyeAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::EyeAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EyeAim");
		
		UBI_BS_RM_RoxyAnim_C_EyeAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.BlinkOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::BlinkOnce(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.BlinkOnce");
		
		UBI_BS_RM_RoxyAnim_C_BlinkOnce_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.HeadAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::HeadAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.HeadAim");
		
		UBI_BS_RM_RoxyAnim_C_HeadAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EnableNotLookingADD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::EnableNotLookingADD(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EnableNotLookingADD");
		
		UBI_BS_RM_RoxyAnim_C_EnableNotLookingADD_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.StopTantrum
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_RoxyAnim_C::StopTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.StopTantrum");
		
		UBI_BS_RM_RoxyAnim_C_StopTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.StartTantrum
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_RoxyAnim_C::StartTantrum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.StartTantrum");
		
		UBI_BS_RM_RoxyAnim_C_StartTantrum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.UpdateRageValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RageLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_RoxyAnim_C::UpdateRageValue(float Rage, int32_t RageLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.UpdateRageValue");
		
		UBI_BS_RM_RoxyAnim_C_UpdateRageValue_Params params {};
		params.Rage = Rage;
		params.RageLevel = RageLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EyeDarts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EyeDart                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::EyeDarts(bool EyeDart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EyeDarts");
		
		UBI_BS_RM_RoxyAnim_C_EyeDarts_Params params {};
		params.EyeDart = EyeDart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.Blinking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Blink                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::Blinking(bool Blink)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.Blinking");
		
		UBI_BS_RM_RoxyAnim_C_Blinking_Params params {};
		params.Blink = Blink;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.LidAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::LidAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.LidAim");
		
		UBI_BS_RM_RoxyAnim_C_LidAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.AllEyeAim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Aim                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::AllEyeAim(bool Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.AllEyeAim");
		
		UBI_BS_RM_RoxyAnim_C_AllEyeAim_Params params {};
		params.Aim = Aim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.TiltHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TiltHead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::TiltHead(bool TiltHead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.TiltHead");
		
		UBI_BS_RM_RoxyAnim_C_TiltHead_Params params {};
		params.TiltHead = TiltHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.AddEyeDart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     EyeDartLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBI_BS_RM_RoxyAnim_C::AddEyeDart(const struct FVector& EyeDartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.AddEyeDart");
		
		UBI_BS_RM_RoxyAnim_C_AddEyeDart_Params params {};
		params.EyeDartLocation = EyeDartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.ClearRoxyFaceBetweenRounds
	 * 		Flags  -> ()
	 */
	void UBI_BS_RM_RoxyAnim_C::ClearRoxyFaceBetweenRounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.ClearRoxyFaceBetweenRounds");
		
		UBI_BS_RM_RoxyAnim_C_ClearRoxyFaceBetweenRounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.PlayerNotLooking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerNotLooking                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBI_BS_RM_RoxyAnim_C::PlayerNotLooking(bool PlayerNotLooking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.PlayerNotLooking");
		
		UBI_BS_RM_RoxyAnim_C_PlayerNotLooking_Params params {};
		params.PlayerNotLooking = PlayerNotLooking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBI_BS_RM_RoxyAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBI_BS_RM_RoxyAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C");
		return ptr;
	}

}


