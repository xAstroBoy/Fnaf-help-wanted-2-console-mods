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
	 * 		Name   -> Function SWGCommonUtils.SWGDebugUtilFunctions.SWGAssert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMessage                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MsgDuration                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USWGDebugUtilFunctions::SWGAssert(bool Condition, const class FString& InMessage, int32_t MsgDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SWGCommonUtils.SWGDebugUtilFunctions.SWGAssert");
		
		USWGDebugUtilFunctions_SWGAssert_Params params {};
		params.Condition = Condition;
		params.InMessage = InMessage;
		params.MsgDuration = MsgDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USWGDebugUtilFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USWGDebugUtilFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SWGCommonUtils.SWGDebugUtilFunctions");
		return ptr;
	}

}


