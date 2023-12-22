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
	 * 		Name   -> Function ThumperCheats.CheatMenu.SetupCheatMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetSwitcher*                             WidgetSwitcher                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCheatMenu::SetupCheatMenu(class UWidgetSwitcher* WidgetSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThumperCheats.CheatMenu.SetupCheatMenu");
		
		UCheatMenu_SetupCheatMenu_Params params {};
		params.WidgetSwitcher = WidgetSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheatMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheatMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ThumperCheats.CheatMenu");
		return ptr;
	}

}


