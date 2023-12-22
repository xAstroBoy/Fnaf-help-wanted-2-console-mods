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
	 * 		Name   -> PredefinedFunction UDebugFunctionLibrarySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugFunctionLibrarySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugFunctionLibrary.DebugFunctionLibrarySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesPrintDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewPrintDebug                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesPrintDebugByObject(class UObject* Object, bool bNewPrintDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesPrintDebugByObject");
		
		UDFLDebugFL_SetDebugPropertiesPrintDebugByObject_Params params {};
		params.Object = Object;
		params.bNewPrintDebug = bNewPrintDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesPrintDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewPrintDebug                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesPrintDebug(class UBlueprint* Blueprint, bool bNewPrintDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesPrintDebug");
		
		UDFLDebugFL_SetDebugPropertiesPrintDebug_Params params {};
		params.Blueprint = Blueprint;
		params.bNewPrintDebug = bNewPrintDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesLogDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewLogDebug                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesLogDebugByObject(class UObject* Object, bool bNewLogDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesLogDebugByObject");
		
		UDFLDebugFL_SetDebugPropertiesLogDebugByObject_Params params {};
		params.Object = Object;
		params.bNewLogDebug = bNewLogDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesLogDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewLogDebug                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesLogDebug(class UBlueprint* Blueprint, bool bNewLogDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesLogDebug");
		
		UDFLDebugFL_SetDebugPropertiesLogDebug_Params params {};
		params.Blueprint = Blueprint;
		params.bNewLogDebug = bNewLogDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDrawDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDrawDebug                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesDrawDebugByObject(class UObject* Object, bool bNewDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDrawDebugByObject");
		
		UDFLDebugFL_SetDebugPropertiesDrawDebugByObject_Params params {};
		params.Object = Object;
		params.bNewDrawDebug = bNewDrawDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDrawDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDrawDebug                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesDrawDebug(class UBlueprint* Blueprint, bool bNewDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDrawDebug");
		
		UDFLDebugFL_SetDebugPropertiesDrawDebug_Params params {};
		params.Blueprint = Blueprint;
		params.bNewDrawDebug = bNewDrawDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDebug                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesDebugByObject(class UObject* Object, bool bNewDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDebugByObject");
		
		UDFLDebugFL_SetDebugPropertiesDebugByObject_Params params {};
		params.Object = Object;
		params.bNewDebug = bNewDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDebug                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesDebug(class UBlueprint* Blueprint, bool bNewDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesDebug");
		
		UDFLDebugFL_SetDebugPropertiesDebug_Params params {};
		params.Blueprint = Blueprint;
		params.bNewDebug = bNewDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesBoolByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesBoolByName(class UBlueprint* Blueprint, const class FString& Name, bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesBoolByName");
		
		UDFLDebugFL_SetDebugPropertiesBoolByName_Params params {};
		params.Blueprint = Blueprint;
		params.Name = Name;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::SetDebugPropertiesBool(class UObject* Object, class UClass* Class, const class FString& Name, bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.SetDebugPropertiesBool");
		
		UDFLDebugFL_SetDebugPropertiesBool_Params params {};
		params.Object = Object;
		params.Class = Class;
		params.Name = Name;
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetTertiaryColour_FColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UDFLDebugFL::GetTertiaryColour_FColor(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetTertiaryColour_FColor");
		
		UDFLDebugFL_GetTertiaryColour_FColor_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetTertiaryColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetTertiaryColour(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetTertiaryColour");
		
		UDFLDebugFL_GetTertiaryColour_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetSize(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetSize");
		
		UDFLDebugFL_GetSize_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetSegments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDFLDebugFL::GetSegments(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetSegments");
		
		UDFLDebugFL_GetSegments_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetSecondaryColour_FColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UDFLDebugFL::GetSecondaryColour_FColor(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetSecondaryColour_FColor");
		
		UDFLDebugFL_GetSecondaryColour_FColor_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetSecondaryColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetSecondaryColour(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetSecondaryColour");
		
		UDFLDebugFL_GetSecondaryColour_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetScale(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetScale");
		
		UDFLDebugFL_GetScale_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetRadius(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetRadius");
		
		UDFLDebugFL_GetRadius_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintWarningColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetPrintWarningColour(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintWarningColour");
		
		UDFLDebugFL_GetPrintWarningColour_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetPrintFunction(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintFunction");
		
		UDFLDebugFL_GetPrintFunction_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintErrorColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetPrintErrorColour(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintErrorColour");
		
		UDFLDebugFL_GetPrintErrorColour_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetPrintDuration(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintDuration");
		
		UDFLDebugFL_GetPrintDuration_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetPrintDebug(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintDebug");
		
		UDFLDebugFL_GetPrintDebug_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetPrintColour(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintColour");
		
		UDFLDebugFL_GetPrintColour_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrintClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetPrintClass(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrintClass");
		
		UDFLDebugFL_GetPrintClass_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrimaryColour_FColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UDFLDebugFL::GetPrimaryColour_FColor(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrimaryColour_FColor");
		
		UDFLDebugFL_GetPrimaryColour_FColor_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetPrimaryColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetPrimaryColour(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetPrimaryColour");
		
		UDFLDebugFL_GetPrimaryColour_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetOneFrameDrawDebugTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EDrawDebugTrace UDFLDebugFL::GetOneFrameDrawDebugTrace(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetOneFrameDrawDebugTrace");
		
		UDFLDebugFL_GetOneFrameDrawDebugTrace_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetLogFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetLogFunction(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetLogFunction");
		
		UDFLDebugFL_GetLogFunction_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetLogDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetLogDebug(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetLogDebug");
		
		UDFLDebugFL_GetLogDebug_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetLogClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetLogClass(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetLogClass");
		
		UDFLDebugFL_GetLogClass_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetLineThickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetLineThickness(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetLineThickness");
		
		UDFLDebugFL_GetLineThickness_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetLineLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetLineLength(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetLineLength");
		
		UDFLDebugFL_GetLineLength_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetHalfHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetHalfHeight(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetHalfHeight");
		
		UDFLDebugFL_GetHalfHeight_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetForDurationDrawDebugTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EDrawDebugTrace UDFLDebugFL::GetForDurationDrawDebugTrace(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetForDurationDrawDebugTrace");
		
		UDFLDebugFL_GetForDurationDrawDebugTrace_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDrawDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetDrawDuration(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDrawDuration");
		
		UDFLDebugFL_GetDrawDuration_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDrawDebugTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EDrawDebugTrace UDFLDebugFL::GetDrawDebugTrace(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDrawDebugTrace");
		
		UDFLDebugFL_GetDrawDebugTrace_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDrawDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDrawDebug(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDrawDebug");
		
		UDFLDebugFL_GetDrawDebug_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDirectionFromAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDFLDrawDebugAxis                                  Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UDFLDebugFL::GetDirectionFromAxis(EDFLDrawDebugAxis Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDirectionFromAxis");
		
		UDFLDebugFL_GetDirectionFromAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesPrintDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesPrintDebugByObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesPrintDebugByObject");
		
		UDFLDebugFL_GetDebugPropertiesPrintDebugByObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesPrintDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesPrintDebug(class UBlueprint* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesPrintDebug");
		
		UDFLDebugFL_GetDebugPropertiesPrintDebug_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesLogDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesLogDebugByObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesLogDebugByObject");
		
		UDFLDebugFL_GetDebugPropertiesLogDebugByObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesLogDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesLogDebug(class UBlueprint* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesLogDebug");
		
		UDFLDebugFL_GetDebugPropertiesLogDebug_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDrawDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesDrawDebugByObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDrawDebugByObject");
		
		UDFLDebugFL_GetDebugPropertiesDrawDebugByObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDrawDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesDrawDebug(class UBlueprint* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDrawDebug");
		
		UDFLDebugFL_GetDebugPropertiesDrawDebug_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDebugByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesDebugByObject(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDebugByObject");
		
		UDFLDebugFL_GetDebugPropertiesDebugByObject_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesDebug(class UBlueprint* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesDebug");
		
		UDFLDebugFL_GetDebugPropertiesDebug_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesBoolByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesBoolByName(class UBlueprint* Blueprint, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesBoolByName");
		
		UDFLDebugFL_GetDebugPropertiesBoolByName_Params params {};
		params.Blueprint = Blueprint;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugPropertiesBool(class UObject* Object, class UClass* Class, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugPropertiesBool");
		
		UDFLDebugFL_GetDebugPropertiesBool_Params params {};
		params.Object = Object;
		params.Class = Class;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDFLDebugProperties                         ActorDebugProperties                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::GetDebugProperties(class UObject* Owner, struct FDFLDebugProperties* ActorDebugProperties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugProperties");
		
		UDFLDebugFL_GetDebugProperties_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorDebugProperties != nullptr)
			*ActorDebugProperties = params.ActorDebugProperties;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebugColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DebugColour                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UDFLDebugFL::GetDebugColour(class UObject* Owner, EDFLDrawDebugColour DebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebugColour");
		
		UDFLDebugFL_GetDebugColour_Params params {};
		params.Owner = Owner;
		params.DebugColour = DebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetDebug_FColour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DebugColour                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FColor UDFLDebugFL::GetDebug_FColour(class UObject* Owner, EDFLDrawDebugColour DebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetDebug_FColour");
		
		UDFLDebugFL_GetDebug_FColour_Params params {};
		params.Owner = Owner;
		params.DebugColour = DebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.GetArrowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDFLDebugFL::GetArrowSize(class UObject* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.GetArrowSize");
		
		UDFLDebugFL_GetArrowSize_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickPrintMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintMessage");
		
		UDFLDebugFL_DFLQuickPrintMessage_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintLogWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickPrintLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintLogWarning");
		
		UDFLDebugFL_DFLQuickPrintLogWarning_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintLogMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickPrintLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintLogMessage");
		
		UDFLDebugFL_DFLQuickPrintLogMessage_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintLogError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickPrintLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintLogError");
		
		UDFLDebugFL_DFLQuickPrintLogError_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickPrintError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickPrintError");
		
		UDFLDebugFL_DFLQuickPrintError_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickLogWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickLogWarning");
		
		UDFLDebugFL_DFLQuickLogWarning_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickLogMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickLogMessage");
		
		UDFLDebugFL_DFLQuickLogMessage_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickLogError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickLogError");
		
		UDFLDebugFL_DFLQuickLogError_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugTransformOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugTransformOverrideDuration(class UObject* Owner, const struct FTransform& Transform, float Duration, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugTransformOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugTransformOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Transform = Transform;
		params.Duration = Duration;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugTransform(class UObject* Owner, const struct FTransform& Transform, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugTransform");
		
		UDFLDebugFL_DFLQuickDrawDebugTransform_Params params {};
		params.Owner = Owner;
		params.Transform = Transform;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugStringOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugStringOverrideDuration(class UObject* Owner, const struct FVector& Location, const class FString& Text, float Duration, float WorldSize, const struct FLinearColor& DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugStringOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugStringOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Text = Text;
		params.Duration = Duration;
		params.WorldSize = WorldSize;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugString(class UObject* Owner, const struct FVector& Location, const class FString& Text, float WorldSize, const struct FLinearColor& DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugString");
		
		UDFLDebugFL_DFLQuickDrawDebugString_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Text = Text;
		params.WorldSize = WorldSize;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugStraightLineOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugStraightLineOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, float LineLength, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugStraightLineOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugStraightLineOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Duration = Duration;
		params.LineLength = LineLength;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugStraightLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugStraightLine(class UObject* Owner, const struct FVector& Location, float LineLength, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugStraightLine");
		
		UDFLDebugFL_DFLQuickDrawDebugStraightLine_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.LineLength = LineLength;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugSphereOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugSphereOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugSphereOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugSphereOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Duration = Duration;
		params.Radius = Radius;
		params.Segments = Segments;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugSphere(class UObject* Owner, const struct FVector& Location, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugSphere");
		
		UDFLDebugFL_DFLQuickDrawDebugSphere_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Radius = Radius;
		params.Segments = Segments;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPointOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugPointOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, float Size, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPointOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugPointOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Duration = Duration;
		params.Size = Size;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugPoint(class UObject* Owner, const struct FVector& Location, float Size, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPoint");
		
		UDFLDebugFL_DFLQuickDrawDebugPoint_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Size = Size;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPlaneOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugPlaneOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Duration, float Size, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPlaneOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugPlaneOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Normal = Normal;
		params.Duration = Duration;
		params.Size = Size;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugPlane(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Size, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugPlane");
		
		UDFLDebugFL_DFLQuickDrawDebugPlane_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Normal = Normal;
		params.Size = Size;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLineOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugLineOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLineOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugLineOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLineDirectionOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugLineDirectionOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float Duration, float LineLength, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLineDirectionOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugLineDirectionOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.Direction = Direction;
		params.Duration = Duration;
		params.LineLength = LineLength;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLineDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugLineDirection(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float LineLength, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLineDirection");
		
		UDFLDebugFL_DFLQuickDrawDebugLineDirection_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.Direction = Direction;
		params.LineLength = LineLength;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugLine(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugLine");
		
		UDFLDebugFL_DFLQuickDrawDebugLine_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugFrustrumOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  FrustrumTransform                                          (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugFrustrumOverrideDuration(class UObject* Owner, const struct FTransform& FrustrumTransform, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugFrustrumOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugFrustrumOverrideDuration_Params params {};
		params.Owner = Owner;
		params.FrustrumTransform = FrustrumTransform;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugFrustrum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  FrustrumTransform                                          (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugFrustrum(class UObject* Owner, const struct FTransform& FrustrumTransform, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugFrustrum");
		
		UDFLDebugFL_DFLQuickDrawDebugFrustrum_Params params {};
		params.Owner = Owner;
		params.FrustrumTransform = FrustrumTransform;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCylinderOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCylinderOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCylinderOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugCylinderOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Duration = Duration;
		params.Radius = Radius;
		params.Segments = Segments;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCylinder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCylinder(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCylinder");
		
		UDFLDebugFL_DFLQuickDrawDebugCylinder_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Radius = Radius;
		params.Segments = Segments;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugConeOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleWidth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleHeight                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSides                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugConeOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float Duration, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugConeOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugConeOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Direction = Direction;
		params.Duration = Duration;
		params.Length = Length;
		params.AngleWidth = AngleWidth;
		params.AngleHeight = AngleHeight;
		params.NumSides = NumSides;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleWidth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleHeight                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSides                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCone(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCone");
		
		UDFLDebugFL_DFLQuickDrawDebugCone_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Direction = Direction;
		params.Length = Length;
		params.AngleWidth = AngleWidth;
		params.AngleHeight = AngleHeight;
		params.NumSides = NumSides;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugComponentOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugComponentOverrideDuration(class UObject* Owner, class USceneComponent* Component, float Duration, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugComponentOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugComponentOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Component = Component;
		params.Duration = Duration;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugComponent(class UObject* Owner, class USceneComponent* Component, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugComponent");
		
		UDFLDebugFL_DFLQuickDrawDebugComponent_Params params {};
		params.Owner = Owner;
		params.Component = Component;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCircleOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     YAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawAxis                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCircleOverrideDuration(class UObject* Owner, const struct FVector& Center, float Duration, float Radius, int32_t Segments, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCircleOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugCircleOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.Duration = Duration;
		params.Radius = Radius;
		params.Segments = Segments;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.bDrawAxis = bDrawAxis;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCircle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     YAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawAxis                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCircle(class UObject* Owner, const struct FVector& Center, float Radius, int32_t Segments, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCircle");
		
		UDFLDebugFL_DFLQuickDrawDebugCircle_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.Radius = Radius;
		params.Segments = Segments;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.bDrawAxis = bDrawAxis;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCapsuleOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCapsuleOverrideDuration(class UObject* Owner, const struct FVector& Center, float Duration, float HalfHeight, float Radius, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCapsuleOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugCapsuleOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.Duration = Duration;
		params.HalfHeight = HalfHeight;
		params.Radius = Radius;
		params.Rotation = Rotation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCapsule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCapsule(class UObject* Owner, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCapsule");
		
		UDFLDebugFL_DFLQuickDrawDebugCapsule_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.HalfHeight = HalfHeight;
		params.Radius = Radius;
		params.Rotation = Rotation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCameraOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraComponent*                            Camera                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCameraOverrideDuration(class UObject* Owner, class UCameraComponent* Camera, float Duration, float Scale, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCameraOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugCameraOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Camera = Camera;
		params.Duration = Duration;
		params.Scale = Scale;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraComponent*                            Camera                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugCamera(class UObject* Owner, class UCameraComponent* Camera, float Scale, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugCamera");
		
		UDFLDebugFL_DFLQuickDrawDebugCamera_Params params {};
		params.Owner = Owner;
		params.Camera = Camera;
		params.Scale = Scale;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugBoxOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugBoxOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, float Duration, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugBoxOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugBoxOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Extent = Extent;
		params.Duration = Duration;
		params.Rotation = Rotation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugBox(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugBox");
		
		UDFLDebugFL_DFLQuickDrawDebugBox_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Extent = Extent;
		params.Rotation = Rotation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugArrowOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ArrowSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugArrowOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, float ArrowSize, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugArrowOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugArrowOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Duration = Duration;
		params.ArrowSize = ArrowSize;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ArrowSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugArrow(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float ArrowSize, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugArrow");
		
		UDFLDebugFL_DFLQuickDrawDebugArrow_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.ArrowSize = ArrowSize;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugActorOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugActorOverrideDuration(class UObject* Owner, class AActor* Actor, float Duration, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugActorOverrideDuration");
		
		UDFLDebugFL_DFLQuickDrawDebugActorOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Actor = Actor;
		params.Duration = Duration;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLQuickDrawDebugActor(class UObject* Owner, class AActor* Actor, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLQuickDrawDebugActor");
		
		UDFLDebugFL_DFLQuickDrawDebugActor_Params params {};
		params.Owner = Owner;
		params.Actor = Actor;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPrintWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPrintWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPrintWarning");
		
		UDFLDebugFL_DFLPrintWarning_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPrintMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPrintMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPrintMessage");
		
		UDFLDebugFL_DFLPrintMessage_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPrintLogWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPrintLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPrintLogWarning");
		
		UDFLDebugFL_DFLPrintLogWarning_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPrintLogMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPrintLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPrintLogMessage");
		
		UDFLDebugFL_DFLPrintLogMessage_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPrintLogError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPrintLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPrintLogError");
		
		UDFLDebugFL_DFLPrintLogError_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPrintError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPrintError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPrintError");
		
		UDFLDebugFL_DFLPrintError_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLPQuickPrintWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLPQuickPrintWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLPQuickPrintWarning");
		
		UDFLDebugFL_DFLPQuickPrintWarning_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLLogWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLLogWarning");
		
		UDFLDebugFL_DFLLogWarning_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLLogMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLLogMessage");
		
		UDFLDebugFL_DFLLogMessage_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLLogError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CallingFunction                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLLogError");
		
		UDFLDebugFL_DFLLogError_Params params {};
		params.WorldContext = WorldContext;
		params.String = String;
		params.Duration = Duration;
		params.bCondition = bCondition;
		params.CallingFunction = CallingFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugTransformOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugTransformOverrideDuration(class UObject* Owner, const struct FTransform& Transform, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugTransformOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugTransformOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Transform = Transform;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugTransformOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugTransformOverride(class UObject* Owner, const struct FTransform& Transform, float Scale, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugTransformOverride");
		
		UDFLDebugFL_DFLDrawDebugTransformOverride_Params params {};
		params.Owner = Owner;
		params.Transform = Transform;
		params.Scale = Scale;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugTransform(class UObject* Owner, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugTransform");
		
		UDFLDebugFL_DFLDrawDebugTransform_Params params {};
		params.Owner = Owner;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStringOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugStringOverrideDuration(class UObject* Owner, const struct FVector& Location, const class FString& Text, float Duration, float WorldSize, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStringOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugStringOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Text = Text;
		params.Duration = Duration;
		params.WorldSize = WorldSize;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugString(class UObject* Owner, const struct FVector& Location, const class FString& Text, float WorldSize, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugString");
		
		UDFLDebugFL_DFLDrawDebugString_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Text = Text;
		params.WorldSize = WorldSize;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStraightLineOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugStraightLineOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStraightLineOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugStraightLineOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStraightLineOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugStraightLineOverride(class UObject* Owner, const struct FVector& Location, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStraightLineOverride");
		
		UDFLDebugFL_DFLDrawDebugStraightLineOverride_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStraightLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugStraightLine(class UObject* Owner, const struct FVector& Location, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugStraightLine");
		
		UDFLDebugFL_DFLDrawDebugStraightLine_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugSphereOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugSphereOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugSphereOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugSphereOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugSphereOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColour                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugSphereOverride(class UObject* Owner, const struct FVector& Location, float Radius, int32_t Segments, const struct FLinearColor& LineColour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugSphereOverride");
		
		UDFLDebugFL_DFLDrawDebugSphereOverride_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Radius = Radius;
		params.Segments = Segments;
		params.LineColour = LineColour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugSphere(class UObject* Owner, const struct FVector& Location, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugSphere");
		
		UDFLDebugFL_DFLDrawDebugSphere_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPointOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugPointOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPointOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugPointOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPointOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugPointOverride(class UObject* Owner, const struct FVector& Location, float Size, const struct FLinearColor& Colour, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPointOverride");
		
		UDFLDebugFL_DFLDrawDebugPointOverride_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Size = Size;
		params.Colour = Colour;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugPoint(class UObject* Owner, const struct FVector& Location, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPoint");
		
		UDFLDebugFL_DFLDrawDebugPoint_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPlaneOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugPlaneOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPlaneOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugPlaneOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Normal = Normal;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPlaneOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugPlaneOverride(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Size, const struct FLinearColor& Colour, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPlaneOverride");
		
		UDFLDebugFL_DFLDrawDebugPlaneOverride_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Normal = Normal;
		params.Size = Size;
		params.Colour = Colour;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Normal                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugPlane(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugPlane");
		
		UDFLDebugFL_DFLDrawDebugPlane_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Normal = Normal;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugLineOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugLineOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugLineOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineOverride");
		
		UDFLDebugFL_DFLDrawDebugLineOverride_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineDirectionOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugLineDirectionOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineDirectionOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugLineDirectionOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.Direction = Direction;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineDirectionOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugLineDirectionOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float LineLength, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineDirectionOverride");
		
		UDFLDebugFL_DFLDrawDebugLineDirectionOverride_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.Direction = Direction;
		params.LineLength = LineLength;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugLineDirection(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLineDirection");
		
		UDFLDebugFL_DFLDrawDebugLineDirection_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.Direction = Direction;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugLine(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugLine");
		
		UDFLDebugFL_DFLDrawDebugLine_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugFrustrumOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  FrustrumTransform                                          (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugFrustrumOverrideDuration(class UObject* Owner, const struct FTransform& FrustrumTransform, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugFrustrumOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugFrustrumOverrideDuration_Params params {};
		params.Owner = Owner;
		params.FrustrumTransform = FrustrumTransform;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugFrustrumOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  FrustrumTransform                                          (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugFrustrumOverride(class UObject* Owner, const struct FTransform& FrustrumTransform, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugFrustrumOverride");
		
		UDFLDebugFL_DFLDrawDebugFrustrumOverride_Params params {};
		params.Owner = Owner;
		params.FrustrumTransform = FrustrumTransform;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugFrustrum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  FrustrumTransform                                          (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugFrustrum(class UObject* Owner, const struct FTransform& FrustrumTransform, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugFrustrum");
		
		UDFLDebugFL_DFLDrawDebugFrustrum_Params params {};
		params.Owner = Owner;
		params.FrustrumTransform = FrustrumTransform;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCylinderOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCylinderOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCylinderOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugCylinderOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCylinderOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCylinderOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Radius, int32_t Segments, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCylinderOverride");
		
		UDFLDebugFL_DFLDrawDebugCylinderOverride_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Radius = Radius;
		params.Segments = Segments;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCylinder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCylinder(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCylinder");
		
		UDFLDebugFL_DFLDrawDebugCylinder_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugConeOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleWidth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleHeight                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugConeOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float AngleWidth, float AngleHeight, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugConeOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugConeOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Direction = Direction;
		params.AngleWidth = AngleWidth;
		params.AngleHeight = AngleHeight;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugConeOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Length                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleWidth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleHeight                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSides                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugConeOverride(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugConeOverride");
		
		UDFLDebugFL_DFLDrawDebugConeOverride_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Direction = Direction;
		params.Length = Length;
		params.AngleWidth = AngleWidth;
		params.AngleHeight = AngleHeight;
		params.NumSides = NumSides;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleWidth                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AngleHeight                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCone(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float AngleWidth, float AngleHeight, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCone");
		
		UDFLDebugFL_DFLDrawDebugCone_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Direction = Direction;
		params.AngleWidth = AngleWidth;
		params.AngleHeight = AngleHeight;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugComponentOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugComponentOverrideDuration(class UObject* Owner, class USceneComponent* Component, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugComponentOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugComponentOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Component = Component;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugComponentOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugComponentOverride(class UObject* Owner, class USceneComponent* Component, float Scale, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugComponentOverride");
		
		UDFLDebugFL_DFLDrawDebugComponentOverride_Params params {};
		params.Owner = Owner;
		params.Component = Component;
		params.Scale = Scale;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugComponent(class UObject* Owner, class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugComponent");
		
		UDFLDebugFL_DFLDrawDebugComponent_Params params {};
		params.Owner = Owner;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCircleOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     YAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCircleOverrideDuration(class UObject* Owner, const struct FVector& Center, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCircleOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugCircleOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCircleOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Segments                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     YAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawAxis                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCircleOverride(class UObject* Owner, const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& Colour, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCircleOverride");
		
		UDFLDebugFL_DFLDrawDebugCircleOverride_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.Radius = Radius;
		params.Segments = Segments;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.bDrawAxis = bDrawAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCircle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     YAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ZAxis                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCircle(class UObject* Owner, const struct FVector& Center, const struct FVector& YAxis, const struct FVector& ZAxis, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCircle");
		
		UDFLDebugFL_DFLDrawDebugCircle_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCapsuleOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCapsuleOverrideDuration(class UObject* Owner, const struct FVector& Center, const struct FRotator& Rotation, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCapsuleOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugCapsuleOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.Rotation = Rotation;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCapsuleOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCapsuleOverride(class UObject* Owner, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCapsuleOverride");
		
		UDFLDebugFL_DFLDrawDebugCapsuleOverride_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.HalfHeight = HalfHeight;
		params.Radius = Radius;
		params.Rotation = Rotation;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCapsule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCapsule(class UObject* Owner, const struct FVector& Center, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCapsule");
		
		UDFLDebugFL_DFLDrawDebugCapsule_Params params {};
		params.Owner = Owner;
		params.Center = Center;
		params.Rotation = Rotation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCameraOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraComponent*                            Camera                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCameraOverrideDuration(class UObject* Owner, class UCameraComponent* Camera, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCameraOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugCameraOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Camera = Camera;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCameraOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraComponent*                            Camera                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCameraOverride(class UObject* Owner, class UCameraComponent* Camera, float Scale, const struct FLinearColor& Colour, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCameraOverride");
		
		UDFLDebugFL_DFLDrawDebugCameraOverride_Params params {};
		params.Owner = Owner;
		params.Camera = Camera;
		params.Scale = Scale;
		params.Colour = Colour;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraComponent*                            Camera                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugCamera(class UObject* Owner, class UCameraComponent* Camera, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugCamera");
		
		UDFLDebugFL_DFLDrawDebugCamera_Params params {};
		params.Owner = Owner;
		params.Camera = Camera;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugBoxOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugBoxOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugBoxOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugBoxOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Extent = Extent;
		params.Rotation = Rotation;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugBoxOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugBoxOverride(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FLinearColor& Colour, const struct FRotator& Rotation, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugBoxOverride");
		
		UDFLDebugFL_DFLDrawDebugBoxOverride_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Extent = Extent;
		params.Colour = Colour;
		params.Rotation = Rotation;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugBox(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugBox");
		
		UDFLDebugFL_DFLDrawDebugBox_Params params {};
		params.Owner = Owner;
		params.Location = Location;
		params.Extent = Extent;
		params.Rotation = Rotation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugArrowOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugArrowOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugArrowOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugArrowOverrideDuration_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.Duration = Duration;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugArrowOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ArrowSize                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Colour                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugArrowOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float ArrowSize, const struct FLinearColor& Colour, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugArrowOverride");
		
		UDFLDebugFL_DFLDrawDebugArrowOverride_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.ArrowSize = ArrowSize;
		params.Colour = Colour;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     StartLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndLocation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDFLDrawDebugColour                                DrawDebugColour                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugArrow(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugArrow");
		
		UDFLDebugFL_DFLDrawDebugArrow_Params params {};
		params.Owner = Owner;
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.DrawDebugColour = DrawDebugColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugActorOverrideDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugActorOverrideDuration(class UObject* Owner, class AActor* Actor, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugActorOverrideDuration");
		
		UDFLDebugFL_DFLDrawDebugActorOverrideDuration_Params params {};
		params.Owner = Owner;
		params.Actor = Actor;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugActorOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugActorOverride(class UObject* Owner, class AActor* Actor, float Scale, float Duration, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugActorOverride");
		
		UDFLDebugFL_DFLDrawDebugActorOverride_Params params {};
		params.Owner = Owner;
		params.Actor = Actor;
		params.Scale = Scale;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDFLDebugFL::DFLDrawDebugActor(class UObject* Owner, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.DFLDrawDebugActor");
		
		UDFLDebugFL_DFLDrawDebugActor_Params params {};
		params.Owner = Owner;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugFL.BlueprintHasDebugProperties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBlueprint*                                  Blueprint                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDFLDebugFL::BlueprintHasDebugProperties(class UBlueprint* Blueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugFL.BlueprintHasDebugProperties");
		
		UDFLDebugFL_BlueprintHasDebugProperties_Params params {};
		params.Blueprint = Blueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDFLDebugFL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDFLDebugFL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugFunctionLibrary.DFLDebugFL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugFunctionLibrary.DFLDebugString.UpdateEditorRotation
	 * 		Flags  -> ()
	 */
	void ADFLDebugString::UpdateEditorRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugFunctionLibrary.DFLDebugString.UpdateEditorRotation");
		
		ADFLDebugString_UpdateEditorRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADFLDebugString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADFLDebugString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DebugFunctionLibrary.DFLDebugString");
		return ptr;
	}

}


