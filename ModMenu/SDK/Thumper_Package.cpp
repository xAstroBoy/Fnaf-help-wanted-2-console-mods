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
	 * 		Name   -> Function Thumper.ActivateByGameplayTag.OnTagsChanged
	 * 		Flags  -> ()
	 */
	void UActivateByGameplayTag::OnTagsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ActivateByGameplayTag.OnTagsChanged");
		
		UActivateByGameplayTag_OnTagsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateByGameplayTag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateByGameplayTag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ActivateByGameplayTag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ArtsAndCraftsPaintData.GetPaintColorCode
	 * 		Flags  -> ()
	 */
	struct FVector UArtsAndCraftsPaintData::GetPaintColorCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ArtsAndCraftsPaintData.GetPaintColorCode");
		
		UArtsAndCraftsPaintData_GetPaintColorCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ArtsAndCraftsPaintData.GetPaintByNumbersValue
	 * 		Flags  -> ()
	 */
	int32_t UArtsAndCraftsPaintData::GetPaintByNumbersValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ArtsAndCraftsPaintData.GetPaintByNumbersValue");
		
		UArtsAndCraftsPaintData_GetPaintByNumbersValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ArtsAndCraftsPaintData.GetIsPrimaryColor
	 * 		Flags  -> ()
	 */
	bool UArtsAndCraftsPaintData::GetIsPrimaryColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ArtsAndCraftsPaintData.GetIsPrimaryColor");
		
		UArtsAndCraftsPaintData_GetIsPrimaryColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ArtsAndCraftsPaintData.GetAssetPaintColor
	 * 		Flags  -> ()
	 */
	EPaintData UArtsAndCraftsPaintData::GetAssetPaintColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ArtsAndCraftsPaintData.GetAssetPaintColor");
		
		UArtsAndCraftsPaintData_GetAssetPaintColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArtsAndCraftsPaintData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArtsAndCraftsPaintData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ArtsAndCraftsPaintData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.UnlockRequiresInhibitor
	 * 		Flags  -> ()
	 */
	bool ULevelInformation::UnlockRequiresInhibitor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.UnlockRequiresInhibitor");
		
		ULevelInformation_UnlockRequiresInhibitor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.IsForDemo
	 * 		Flags  -> ()
	 */
	bool ULevelInformation::IsForDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.IsForDemo");
		
		ULevelInformation_IsForDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetUnlockTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ULevelInformation::GetUnlockTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetUnlockTag");
		
		ULevelInformation_GetUnlockTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetRequiredUnlockLevel
	 * 		Flags  -> ()
	 */
	class ULevelInformation* ULevelInformation::GetRequiredUnlockLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetRequiredUnlockLevel");
		
		ULevelInformation_GetRequiredUnlockLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetLevelSequence
	 * 		Flags  -> ()
	 */
	int32_t ULevelInformation::GetLevelSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetLevelSequence");
		
		ULevelInformation_GetLevelSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetLevelInstructionSetData
	 * 		Flags  -> ()
	 */
	void ULevelInformation::GetLevelInstructionSetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetLevelInstructionSetData");
		
		ULevelInformation_GetLevelInstructionSetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetLevelDisplayName
	 * 		Flags  -> ()
	 */
	class FText ULevelInformation::GetLevelDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetLevelDisplayName");
		
		ULevelInformation_GetLevelDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetLevelDisplayDescription
	 * 		Flags  -> ()
	 */
	class FText ULevelInformation::GetLevelDisplayDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetLevelDisplayDescription");
		
		ULevelInformation_GetLevelDisplayDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetLevelCategory
	 * 		Flags  -> ()
	 */
	ELevelCategory ULevelInformation::GetLevelCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetLevelCategory");
		
		ULevelInformation_GetLevelCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetLevel
	 * 		Flags  -> ()
	 */
	void ULevelInformation::GetLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetLevel");
		
		ULevelInformation_GetLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetIcon
	 * 		Flags  -> ()
	 */
	void ULevelInformation::GetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetIcon");
		
		ULevelInformation_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelInformation.GetFolderIcon
	 * 		Flags  -> ()
	 */
	void ULevelInformation::GetFolderIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelInformation.GetFolderIcon");
		
		ULevelInformation_GetFolderIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelInformation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelInformation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.LevelInformation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaBLevelInformation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaBLevelInformation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.BaBLevelInformation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BaBLevelInformationInterface.IsNightmareMode
	 * 		Flags  -> ()
	 */
	bool UBaBLevelInformationInterface::IsNightmareMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BaBLevelInformationInterface.IsNightmareMode");
		
		UBaBLevelInformationInterface_IsNightmareMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaBLevelInformationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaBLevelInformationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.BaBLevelInformationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.OnPullIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsJumpscare                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABonkABonCharacterHole::OnPullIn(bool bIsJumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.OnPullIn");
		
		ABonkABonCharacterHole_OnPullIn_Params params {};
		params.bIsJumpscare = bIsJumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.OnPopOut
	 * 		Flags  -> ()
	 */
	void ABonkABonCharacterHole::OnPopOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.OnPopOut");
		
		ABonkABonCharacterHole_OnPopOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.OnHoleCooldownFinished
	 * 		Flags  -> ()
	 */
	void ABonkABonCharacterHole::OnHoleCooldownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.OnHoleCooldownFinished");
		
		ABonkABonCharacterHole_OnHoleCooldownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.OnHitDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHitDetectionComponent*                      HitDetection                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Hitter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABonkABonCharacterHole::OnHitDetected(class UHitDetectionComponent* HitDetection, class AActor* Hitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.OnHitDetected");
		
		ABonkABonCharacterHole_OnHitDetected_Params params {};
		params.HitDetection = HitDetection;
		params.Hitter = Hitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.OnHitCooldownFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Hitter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABonkABonCharacterHole::OnHitCooldownFinished(class AActor* Hitter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.OnHitCooldownFinished");
		
		ABonkABonCharacterHole_OnHitCooldownFinished_Params params {};
		params.Hitter = Hitter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.IsObstructed
	 * 		Flags  -> ()
	 */
	bool ABonkABonCharacterHole::IsObstructed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.IsObstructed");
		
		ABonkABonCharacterHole_IsObstructed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.IsInEditor
	 * 		Flags  -> ()
	 */
	bool ABonkABonCharacterHole::IsInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.IsInEditor");
		
		ABonkABonCharacterHole_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.GetState
	 * 		Flags  -> ()
	 */
	EBonkABonHoleState ABonkABonCharacterHole::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.GetState");
		
		ABonkABonCharacterHole_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.GetCharacterType
	 * 		Flags  -> ()
	 */
	EBaBCharacterType ABonkABonCharacterHole::GetCharacterType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.GetCharacterType");
		
		ABonkABonCharacterHole_GetCharacterType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonCharacterHole.CharacterMovementFinished
	 * 		Flags  -> ()
	 */
	void ABonkABonCharacterHole::CharacterMovementFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonCharacterHole.CharacterMovementFinished");
		
		ABonkABonCharacterHole_CharacterMovementFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABonkABonCharacterHole.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABonkABonCharacterHole::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.BonkABonCharacterHole");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.StopRandomizer
	 * 		Flags  -> ()
	 */
	void ABonkABonRandomizer::StopRandomizer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.StopRandomizer");
		
		ABonkABonRandomizer_StopRandomizer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.StartRandomizer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBonkABonSettings*                           BonkABonSettings                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABonkABonRandomizer::StartRandomizer(class UBonkABonSettings* BonkABonSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.StartRandomizer");
		
		ABonkABonRandomizer_StartRandomizer_Params params {};
		params.BonkABonSettings = BonkABonSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.SpawnCharactersInRandomHoles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EBaBCharacterType>                          Characters                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              PopOutTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDisableDeath                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABonkABonRandomizer::SpawnCharactersInRandomHoles(TArray<EBaBCharacterType> Characters, float PopOutTime, bool bDisableDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.SpawnCharactersInRandomHoles");
		
		ABonkABonRandomizer_SpawnCharactersInRandomHoles_Params params {};
		params.Characters = Characters;
		params.PopOutTime = PopOutTime;
		params.bDisableDeath = bDisableDeath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.SetActiveCharacterHoles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABonkABonCharacterHole*>              NewCharacterHoles                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ABonkABonRandomizer::SetActiveCharacterHoles(TArray<class ABonkABonCharacterHole*> NewCharacterHoles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.SetActiveCharacterHoles");
		
		ABonkABonRandomizer_SetActiveCharacterHoles_Params params {};
		params.NewCharacterHoles = NewCharacterHoles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.ResumeRandomizer
	 * 		Flags  -> ()
	 */
	void ABonkABonRandomizer::ResumeRandomizer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.ResumeRandomizer");
		
		ABonkABonRandomizer_ResumeRandomizer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.ResetCharacters
	 * 		Flags  -> ()
	 */
	void ABonkABonRandomizer::ResetCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.ResetCharacters");
		
		ABonkABonRandomizer_ResetCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.PauseRandomizer
	 * 		Flags  -> ()
	 */
	void ABonkABonRandomizer::PauseRandomizer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.PauseRandomizer");
		
		ABonkABonRandomizer_PauseRandomizer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BonkABonRandomizer.GetAllCharacterHoles
	 * 		Flags  -> ()
	 */
	TArray<class ABonkABonCharacterHole*> ABonkABonRandomizer::GetAllCharacterHoles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BonkABonRandomizer.GetAllCharacterHoles");
		
		ABonkABonRandomizer_GetAllCharacterHoles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABonkABonRandomizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABonkABonRandomizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.BonkABonRandomizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBonkABonSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBonkABonSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.BonkABonSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.BootupLevelInfo.GetActivityLevelMap
	 * 		Flags  -> ()
	 */
	void UBootupLevelInfo::GetActivityLevelMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.BootupLevelInfo.GetActivityLevelMap");
		
		UBootupLevelInfo_GetActivityLevelMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBootupLevelInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBootupLevelInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.BootupLevelInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.CraneGameActor.OnPrizesReady
	 * 		Flags  -> ()
	 */
	void ACraneGameActor::OnPrizesReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.CraneGameActor.OnPrizesReady");
		
		ACraneGameActor_OnPrizesReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.CraneGameActor.HasLoadedPrizes
	 * 		Flags  -> ()
	 */
	bool ACraneGameActor::HasLoadedPrizes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.CraneGameActor.HasLoadedPrizes");
		
		ACraneGameActor_HasLoadedPrizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.CraneGameActor.GetChosenPrizes
	 * 		Flags  -> ()
	 */
	TArray<class UPrizeInfo*> ACraneGameActor::GetChosenPrizes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.CraneGameActor.GetChosenPrizes");
		
		ACraneGameActor_GetChosenPrizes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACraneGameActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACraneGameActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.CraneGameActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraneGameConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraneGameConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.CraneGameConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJMMDifficultySetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJMMDifficultySetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.DJMMDifficultySetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJMMLevelInformation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJMMLevelInformation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.DJMMLevelInformation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.DJMMLevelInformationInterface.GetDifficultySetting
	 * 		Flags  -> ()
	 */
	class UDJMMDifficultySetting* UDJMMLevelInformationInterface::GetDifficultySetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.DJMMLevelInformationInterface.GetDifficultySetting");
		
		UDJMMLevelInformationInterface_GetDifficultySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDJMMLevelInformationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDJMMLevelInformationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.DJMMLevelInformationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetUseFazerblaster
	 * 		Flags  -> ()
	 */
	bool UFazerblastGallerySettings::GetUseFazerblaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetUseFazerblaster");
		
		UFazerblastGallerySettings_GetUseFazerblaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetUseDartGun
	 * 		Flags  -> ()
	 */
	bool UFazerblastGallerySettings::GetUseDartGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetUseDartGun");
		
		UFazerblastGallerySettings_GetUseDartGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetUseBalls
	 * 		Flags  -> ()
	 */
	bool UFazerblastGallerySettings::GetUseBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetUseBalls");
		
		UFazerblastGallerySettings_GetUseBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetThrownBallAimAssitRadius
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetThrownBallAimAssitRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetThrownBallAimAssitRadius");
		
		UFazerblastGallerySettings_GetThrownBallAimAssitRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetTargetBase
	 * 		Flags  -> ()
	 */
	int32_t UFazerblastGallerySettings::GetTargetBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetTargetBase");
		
		UFazerblastGallerySettings_GetTargetBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetPlushBabySpawnTimeVarience
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetPlushBabySpawnTimeVarience()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetPlushBabySpawnTimeVarience");
		
		UFazerblastGallerySettings_GetPlushBabySpawnTimeVarience_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetPlushBabyMinSpawnTime
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetPlushBabyMinSpawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetPlushBabyMinSpawnTime");
		
		UFazerblastGallerySettings_GetPlushBabyMinSpawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetPlushBabyEnabled
	 * 		Flags  -> ()
	 */
	bool UFazerblastGallerySettings::GetPlushBabyEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetPlushBabyEnabled");
		
		UFazerblastGallerySettings_GetPlushBabyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetNight
	 * 		Flags  -> ()
	 */
	int32_t UFazerblastGallerySettings::GetNight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetNight");
		
		UFazerblastGallerySettings_GetNight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetMinPointsToPassLevel
	 * 		Flags  -> ()
	 */
	int32_t UFazerblastGallerySettings::GetMinPointsToPassLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetMinPointsToPassLevel");
		
		UFazerblastGallerySettings_GetMinPointsToPassLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionStartRate
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetDreadbearMeterAggressionStartRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionStartRate");
		
		UFazerblastGallerySettings_GetDreadbearMeterAggressionStartRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionIncreaseAmount
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetDreadbearMeterAggressionIncreaseAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionIncreaseAmount");
		
		UFazerblastGallerySettings_GetDreadbearMeterAggressionIncreaseAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionEndRate
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetDreadbearMeterAggressionEndRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionEndRate");
		
		UFazerblastGallerySettings_GetDreadbearMeterAggressionEndRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FazerblastGallerySettings.GetBeatsPerMinute
	 * 		Flags  -> ()
	 */
	float UFazerblastGallerySettings::GetBeatsPerMinute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FazerblastGallerySettings.GetBeatsPerMinute");
		
		UFazerblastGallerySettings_GetBeatsPerMinute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFazerblastGallerySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFazerblastGallerySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.FazerblastGallerySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFazerblastLevelSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFazerblastLevelSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.FazerblastLevelSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SpawnPoint.IsPossibleSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     UserData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASpawnPoint::IsPossibleSpawnPoint(class UObject* UserData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SpawnPoint.IsPossibleSpawnPoint");
		
		ASpawnPoint_IsPossibleSpawnPoint_Params params {};
		params.UserData = UserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlashlightTestedSpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlightTestedSpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.FlashlightTestedSpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.SetIsOnTray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoodPrepItemComponent::SetIsOnTray(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.SetIsOnTray");
		
		UFoodPrepItemComponent_SetIsOnTray_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.SetIsInSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoodPrepItemComponent::SetIsInSocket(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.SetIsInSocket");
		
		UFoodPrepItemComponent_SetIsInSocket_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.SetIsInArmsReach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoodPrepItemComponent::SetIsInArmsReach(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.SetIsInArmsReach");
		
		UFoodPrepItemComponent_SetIsInArmsReach_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.SetIsHeld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoodPrepItemComponent::SetIsHeld(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.SetIsHeld");
		
		UFoodPrepItemComponent_SetIsHeld_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.OnOwnerReleased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoodPrepItemComponent::OnOwnerReleased(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.OnOwnerReleased");
		
		UFoodPrepItemComponent_OnOwnerReleased_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.OnOwnerGrabbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFoodPrepItemComponent::OnOwnerGrabbed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.OnOwnerGrabbed");
		
		UFoodPrepItemComponent_OnOwnerGrabbed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.GetIsHeld
	 * 		Flags  -> ()
	 */
	bool UFoodPrepItemComponent::GetIsHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.GetIsHeld");
		
		UFoodPrepItemComponent_GetIsHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.FoodPrepItemComponent.CanBeCulled
	 * 		Flags  -> ()
	 */
	bool UFoodPrepItemComponent::CanBeCulled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.FoodPrepItemComponent.CanBeCulled");
		
		UFoodPrepItemComponent_CanBeCulled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoodPrepItemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoodPrepItemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.FoodPrepItemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.ShouldShowEndingGalleryObject
	 * 		Flags  -> ()
	 */
	bool AGalleryManager::ShouldShowEndingGalleryObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.ShouldShowEndingGalleryObject");
		
		AGalleryManager_ShouldShowEndingGalleryObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.SetShouldShowEndingGalleryObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGalleryManager::SetShouldShowEndingGalleryObject(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.SetShouldShowEndingGalleryObject");
		
		AGalleryManager_SetShouldShowEndingGalleryObject_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.OnGalleryFinishedLoading
	 * 		Flags  -> ()
	 */
	void AGalleryManager::OnGalleryFinishedLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.OnGalleryFinishedLoading");
		
		AGalleryManager_OnGalleryFinishedLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.LoadGalleryInfo
	 * 		Flags  -> ()
	 */
	void AGalleryManager::LoadGalleryInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.LoadGalleryInfo");
		
		AGalleryManager_LoadGalleryInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.HasEndingGalleryObject
	 * 		Flags  -> ()
	 */
	bool AGalleryManager::HasEndingGalleryObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.HasEndingGalleryObject");
		
		AGalleryManager_HasEndingGalleryObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.GetGalleryInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InfoIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutActualIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGalleryObjectInfo*                          OutGalleryObjectInfo                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGalleryManager::GetGalleryInfo(int32_t InfoIndex, int32_t* OutActualIndex, class UGalleryObjectInfo** OutGalleryObjectInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.GetGalleryInfo");
		
		AGalleryManager_GetGalleryInfo_Params params {};
		params.InfoIndex = InfoIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActualIndex != nullptr)
			*OutActualIndex = params.OutActualIndex;
		if (OutGalleryObjectInfo != nullptr)
			*OutGalleryObjectInfo = params.OutGalleryObjectInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.GetEndingGalleryObject
	 * 		Flags  -> ()
	 */
	class UGalleryObjectInfo* AGalleryManager::GetEndingGalleryObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.GetEndingGalleryObject");
		
		AGalleryManager_GetEndingGalleryObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.GalleryManager.AwardEndingGalleryObjectIfPossible
	 * 		Flags  -> ()
	 */
	bool AGalleryManager::AwardEndingGalleryObjectIfPossible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.GalleryManager.AwardEndingGalleryObjectIfPossible");
		
		AGalleryManager_AwardEndingGalleryObjectIfPossible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGalleryManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGalleryManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.GalleryManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGalleryObjectInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGalleryObjectInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.GalleryObjectInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.StopLoopAudio
	 * 		Flags  -> ()
	 */
	void AHeatGunActor::StopLoopAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.StopLoopAudio");
		
		AHeatGunActor_StopLoopAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.SetCanUseGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inCanUseGun                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHeatGunActor::SetCanUseGun(bool inCanUseGun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.SetCanUseGun");
		
		AHeatGunActor_SetCanUseGun_Params params {};
		params.inCanUseGun = inCanUseGun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.OnHeatModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHeatGunMode                                       NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHeatGunActor::OnHeatModeChanged(EHeatGunMode NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.OnHeatModeChanged");
		
		AHeatGunActor_OnHeatModeChanged_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.OnDialSocketed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorBeingSocketed                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHeatGunActor::OnDialSocketed(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.OnDialSocketed");
		
		AHeatGunActor_OnDialSocketed_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingSocketed = ActorBeingSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.OnDialRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorBeingRemoved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESocketActorRemoveReason                           RemoveReason                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHeatGunActor::OnDialRemoved(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.OnDialRemoved");
		
		AHeatGunActor_OnDialRemoved_Params params {};
		params.SocketComponent = SocketComponent;
		params.ActorBeingRemoved = ActorBeingRemoved;
		params.RemoveReason = RemoveReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.OnDialRangeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ADial*                                       Dial                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OldRangeName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewRangeName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHeatGunActor::OnDialRangeChanged(class ADial* Dial, const class FName& OldRangeName, const class FName& NewRangeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.OnDialRangeChanged");
		
		AHeatGunActor_OnDialRangeChanged_Params params {};
		params.Dial = Dial;
		params.OldRangeName = OldRangeName;
		params.NewRangeName = NewRangeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.GetCurrentHeatMode
	 * 		Flags  -> ()
	 */
	EHeatGunMode AHeatGunActor::GetCurrentHeatMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.GetCurrentHeatMode");
		
		AHeatGunActor_GetCurrentHeatMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.HeatGunActor.GetCanUseGun
	 * 		Flags  -> ()
	 */
	bool AHeatGunActor::GetCanUseGun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.HeatGunActor.GetCanUseGun");
		
		AHeatGunActor_GetCanUseGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHeatGunActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHeatGunActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.HeatGunActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJoystick.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJoystick::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.Joystick");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.JoystickControllable.OnVectorInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   VectorInput                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJoystickControllable::OnVectorInput(const struct FVector2D& VectorInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.JoystickControllable.OnVectorInput");
		
		UJoystickControllable_OnVectorInput_Params params {};
		params.VectorInput = VectorInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJoystickControllable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoystickControllable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.JoystickControllable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.JumpscareBoundaryAction.PerformJumpscare
	 * 		Flags  -> ()
	 */
	void UJumpscareBoundaryAction::PerformJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.JumpscareBoundaryAction.PerformJumpscare");
		
		UJumpscareBoundaryAction_PerformJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJumpscareBoundaryAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJumpscareBoundaryAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.JumpscareBoundaryAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.JumpscareFinishProvider.IsJumpscareFinished
	 * 		Flags  -> ()
	 */
	bool UJumpscareFinishProvider::IsJumpscareFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.JumpscareFinishProvider.IsJumpscareFinished");
		
		UJumpscareFinishProvider_IsJumpscareFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJumpscareFinishProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJumpscareFinishProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.JumpscareFinishProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJumpscareHandlerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJumpscareHandlerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.JumpscareHandlerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.JumpscareInitiator.InitiateJumpscare
	 * 		Flags  -> ()
	 */
	void UJumpscareInitiator::InitiateJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.JumpscareInitiator.InitiateJumpscare");
		
		UJumpscareInitiator_InitiateJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJumpscareInitiator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJumpscareInitiator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.JumpscareInitiator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AJumpscarePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AJumpscarePawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.JumpscarePawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelInstructionSetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelInstructionSetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.LevelInstructionSetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.WaitForLevelInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ULevelInformation*>                   OutLevelInformations                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULevelSystem::WaitForLevelInfo(TArray<class ULevelInformation*>* OutLevelInformations, const struct FLatentActionInfo& LatentActionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.WaitForLevelInfo");
		
		ULevelSystem_WaitForLevelInfo_Params params {};
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevelInformations != nullptr)
			*OutLevelInformations = params.OutLevelInformations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.ReloadCurrentLevel
	 * 		Flags  -> ()
	 */
	void ULevelSystem::ReloadCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.ReloadCurrentLevel");
		
		ULevelSystem_ReloadCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadVictoryDefeat
	 * 		Flags  -> ()
	 */
	void ULevelSystem::LoadVictoryDefeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadVictoryDefeat");
		
		ULevelSystem_LoadVictoryDefeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadTutorialRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelToLoadAfterTutorial                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSystem::LoadTutorialRoom(class ULevelInformation* LevelToLoadAfterTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadTutorialRoom");
		
		ULevelSystem_LoadTutorialRoom_Params params {};
		params.LevelToLoadAfterTutorial = LevelToLoadAfterTutorial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadTitle
	 * 		Flags  -> ()
	 */
	void ULevelSystem::LoadTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadTitle");
		
		ULevelSystem_LoadTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadMainHUB
	 * 		Flags  -> ()
	 */
	void ULevelSystem::LoadMainHUB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadMainHUB");
		
		ULevelSystem_LoadMainHUB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadLevelByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSystem::LoadLevelByName(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadLevelByName");
		
		ULevelSystem_LoadLevelByName_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadLevelByInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelSystem::LoadLevelByInfo(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadLevelByInfo");
		
		ULevelSystem_LoadLevelByInfo_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.LoadAfterTutorial
	 * 		Flags  -> ()
	 */
	void ULevelSystem::LoadAfterTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.LoadAfterTutorial");
		
		ULevelSystem_LoadAfterTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.IsLoadingLevel
	 * 		Flags  -> ()
	 */
	bool ULevelSystem::IsLoadingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.IsLoadingLevel");
		
		ULevelSystem_IsLoadingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.IsLevelInfoLoaded
	 * 		Flags  -> ()
	 */
	bool ULevelSystem::IsLevelInfoLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.IsLevelInfoLoaded");
		
		ULevelSystem_IsLevelInfoLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.IsCurrentLevelVictoryDefeat
	 * 		Flags  -> ()
	 */
	bool ULevelSystem::IsCurrentLevelVictoryDefeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.IsCurrentLevelVictoryDefeat");
		
		ULevelSystem_IsCurrentLevelVictoryDefeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.IsCurrentLevelMainHUB
	 * 		Flags  -> ()
	 */
	bool ULevelSystem::IsCurrentLevelMainHUB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.IsCurrentLevelMainHUB");
		
		ULevelSystem_IsCurrentLevelMainHUB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetTextFromLevelCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelCategory                                     LevelCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText ULevelSystem::GetTextFromLevelCategory(ELevelCategory LevelCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetTextFromLevelCategory");
		
		ULevelSystem_GetTextFromLevelCategory_Params params {};
		params.LevelCategory = LevelCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetMainHUBLevelInformation
	 * 		Flags  -> ()
	 */
	class ULevelInformation* ULevelSystem::GetMainHUBLevelInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetMainHUBLevelInformation");
		
		ULevelSystem_GetMainHUBLevelInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetLevelsForCategoryOrdered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelCategory                                     LevelCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevelInformation*> ULevelSystem::GetLevelsForCategoryOrdered(ELevelCategory LevelCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetLevelsForCategoryOrdered");
		
		ULevelSystem_GetLevelsForCategoryOrdered_Params params {};
		params.LevelCategory = LevelCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetLevelsForCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelCategory                                     LevelCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevelInformation*> ULevelSystem::GetLevelsForCategory(ELevelCategory LevelCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetLevelsForCategory");
		
		ULevelSystem_GetLevelsForCategory_Params params {};
		params.LevelCategory = LevelCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetLevelInformationByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelInformation* ULevelSystem::GetLevelInformationByName(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetLevelInformationByName");
		
		ULevelSystem_GetLevelInformationByName_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetLevelByCategoryAndSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelCategory                                     LevelCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LevelSequenceNumber                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelInformation* ULevelSystem::GetLevelByCategoryAndSequence(ELevelCategory LevelCategory, int32_t LevelSequenceNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetLevelByCategoryAndSequence");
		
		ULevelSystem_GetLevelByCategoryAndSequence_Params params {};
		params.LevelCategory = LevelCategory;
		params.LevelSequenceNumber = LevelSequenceNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetLevelAfterTutorial
	 * 		Flags  -> ()
	 */
	class ULevelInformation* ULevelSystem::GetLevelAfterTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetLevelAfterTutorial");
		
		ULevelSystem_GetLevelAfterTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetCurrentLevelInformation
	 * 		Flags  -> ()
	 */
	class ULevelInformation* ULevelSystem::GetCurrentLevelInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetCurrentLevelInformation");
		
		ULevelSystem_GetCurrentLevelInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystem.GetAllLevelInformation
	 * 		Flags  -> ()
	 */
	TArray<class ULevelInformation*> ULevelSystem::GetAllLevelInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystem.GetAllLevelInformation");
		
		ULevelSystem_GetAllLevelInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.LevelSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystemInformation.GetTutorialRoomInformation
	 * 		Flags  -> ()
	 */
	void ULevelSystemInformation::GetTutorialRoomInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystemInformation.GetTutorialRoomInformation");
		
		ULevelSystemInformation_GetTutorialRoomInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystemInformation.GetTitleInformation
	 * 		Flags  -> ()
	 */
	void ULevelSystemInformation::GetTitleInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystemInformation.GetTitleInformation");
		
		ULevelSystemInformation_GetTitleInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystemInformation.GetTextFromCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelCategory                                     LevelCategory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText ULevelSystemInformation::GetTextFromCategory(ELevelCategory LevelCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystemInformation.GetTextFromCategory");
		
		ULevelSystemInformation_GetTextFromCategory_Params params {};
		params.LevelCategory = LevelCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystemInformation.GetMainHubInformation
	 * 		Flags  -> ()
	 */
	void ULevelSystemInformation::GetMainHubInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystemInformation.GetMainHubInformation");
		
		ULevelSystemInformation_GetMainHubInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.LevelSystemInformation.GetLevelInfoFromActivityName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelInformation* ULevelSystemInformation::GetLevelInfoFromActivityName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.LevelSystemInformation.GetLevelInfoFromActivityName");
		
		ULevelSystemInformation_GetLevelInfoFromActivityName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelSystemInformation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelSystemInformation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.LevelSystemInformation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.Localization.GetLocalizationCultureFromSteam
	 * 		Flags  -> ()
	 */
	ELocalizationCulture ULocalization::GetLocalizationCultureFromSteam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.Localization.GetLocalizationCultureFromSteam");
		
		ULocalization_GetLocalizationCultureFromSteam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.Localization.GetCurrentLocalizationCulture
	 * 		Flags  -> ()
	 */
	ELocalizationCulture ULocalization::GetCurrentLocalizationCulture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.Localization.GetCurrentLocalizationCulture");
		
		ULocalization_GetCurrentLocalizationCulture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.Localization.ChangeLocalizationCulture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocalizationCulture                               Culture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULocalization::ChangeLocalizationCulture(ELocalizationCulture Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.Localization.ChangeLocalizationCulture");
		
		ULocalization_ChangeLocalizationCulture_Params params {};
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.Localization");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMainDishData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMainDishData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.MainDishData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MakeupColorData.GetTileParam
	 * 		Flags  -> ()
	 */
	float UMakeupColorData::GetTileParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MakeupColorData.GetTileParam");
		
		UMakeupColorData_GetTileParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MakeupColorData.GetMaterialMask
	 * 		Flags  -> ()
	 */
	struct FVector UMakeupColorData::GetMaterialMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MakeupColorData.GetMaterialMask");
		
		UMakeupColorData_GetMaterialMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MakeupColorData.GetMakeupColorCode
	 * 		Flags  -> ()
	 */
	struct FVector UMakeupColorData::GetMakeupColorCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MakeupColorData.GetMakeupColorCode");
		
		UMakeupColorData_GetMakeupColorCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MakeupColorData.GetCompactShape
	 * 		Flags  -> ()
	 */
	ECompactShape UMakeupColorData::GetCompactShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MakeupColorData.GetCompactShape");
		
		UMakeupColorData_GetCompactShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMakeupColorData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMakeupColorData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.MakeupColorData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.ShowMenu
	 * 		Flags  -> ()
	 */
	void UMenuComponent::ShowMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.ShowMenu");
		
		UMenuComponent_ShowMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.SetMenuWidgetActorClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InNewClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuComponent::SetMenuWidgetActorClass(class UClass* InNewClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.SetMenuWidgetActorClass");
		
		UMenuComponent_SetMenuWidgetActorClass_Params params {};
		params.InNewClass = InNewClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.SetFlatModeWidgetClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InNewClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuComponent::SetFlatModeWidgetClass(class UClass* InNewClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.SetFlatModeWidgetClass");
		
		UMenuComponent_SetFlatModeWidgetClass_Params params {};
		params.InNewClass = InNewClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.OnVRModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESWGVRMode                                         NewVRMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMenuComponent::OnVRModeChanged(ESWGVRMode NewVRMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.OnVRModeChanged");
		
		UMenuComponent_OnVRModeChanged_Params params {};
		params.NewVRMode = NewVRMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.HideMenu
	 * 		Flags  -> ()
	 */
	void UMenuComponent::HideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.HideMenu");
		
		UMenuComponent_HideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.GetMenuWidgetActorClass
	 * 		Flags  -> ()
	 */
	class UClass* UMenuComponent::GetMenuWidgetActorClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.GetMenuWidgetActorClass");
		
		UMenuComponent_GetMenuWidgetActorClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.MenuComponent.GetFlatModeWidgetClass
	 * 		Flags  -> ()
	 */
	class UClass* UMenuComponent::GetFlatModeWidgetClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.MenuComponent.GetFlatModeWidgetClass");
		
		UMenuComponent_GetFlatModeWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.MenuComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APausePlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APausePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PausePlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PausePlayerInterface.ReturnToGameplay
	 * 		Flags  -> ()
	 */
	void UPausePlayerInterface::ReturnToGameplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PausePlayerInterface.ReturnToGameplay");
		
		UPausePlayerInterface_ReturnToGameplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPausePlayerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPausePlayerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PausePlayerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PlayerHeightAdjustGadget.OnResetPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerHeightAdjustGadget::OnResetPressed(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PlayerHeightAdjustGadget.OnResetPressed");
		
		APlayerHeightAdjustGadget_OnResetPressed_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PlayerHeightAdjustGadget.OnIncreasePressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerHeightAdjustGadget::OnIncreasePressed(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PlayerHeightAdjustGadget.OnIncreasePressed");
		
		APlayerHeightAdjustGadget_OnIncreasePressed_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PlayerHeightAdjustGadget.OnDecreasePressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AButtonBase*                                 Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerHeightAdjustGadget::OnDecreasePressed(class AButtonBase* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PlayerHeightAdjustGadget.OnDecreasePressed");
		
		APlayerHeightAdjustGadget_OnDecreasePressed_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PlayerHeightAdjustGadget.AdjustHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerHeightAdjustGadget::AdjustHeight(bool bUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PlayerHeightAdjustGadget.AdjustHeight");
		
		APlayerHeightAdjustGadget_AdjustHeight_Params params {};
		params.bUp = bUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerHeightAdjustGadget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerHeightAdjustGadget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PlayerHeightAdjustGadget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PlayerHeightAdjustGadgetComponent.SetHeightAdjustEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerHeightAdjustGadgetComponent::SetHeightAdjustEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PlayerHeightAdjustGadgetComponent.SetHeightAdjustEnable");
		
		UPlayerHeightAdjustGadgetComponent_SetHeightAdjustEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHeightAdjustGadgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHeightAdjustGadgetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PlayerHeightAdjustGadgetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PQ4Pawn2DMovementComponent.SetPawnLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPQ4Pawn2DMovementComponent::SetPawnLocation(const struct FVector& InWorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PQ4Pawn2DMovementComponent.SetPawnLocation");
		
		UPQ4Pawn2DMovementComponent_SetPawnLocation_Params params {};
		params.InWorldLocation = InWorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.PQ4Pawn2DMovementComponent.MovePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InMoveVector                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPQ4Pawn2DMovementComponent::MovePawn(const struct FVector2D& InMoveVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.PQ4Pawn2DMovementComponent.MovePawn");
		
		UPQ4Pawn2DMovementComponent_MovePawn_Params params {};
		params.InMoveVector = InMoveVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPQ4Pawn2DMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPQ4Pawn2DMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PQ4Pawn2DMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrizeActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PrizeActorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrizeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrizeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.PrizeInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RandomTextGenerator.RandomizePortionOfString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinCharsToRandomize                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCharsToRandomize                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InOutString                                                (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URandomTextGenerator::RandomizePortionOfString(int32_t MinCharsToRandomize, int32_t MaxCharsToRandomize, class FString* InOutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RandomTextGenerator.RandomizePortionOfString");
		
		URandomTextGenerator_RandomizePortionOfString_Params params {};
		params.MinCharsToRandomize = MinCharsToRandomize;
		params.MaxCharsToRandomize = MaxCharsToRandomize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutString != nullptr)
			*InOutString = params.InOutString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RandomTextGenerator.GetPossibleChars
	 * 		Flags  -> ()
	 */
	class FString URandomTextGenerator::GetPossibleChars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RandomTextGenerator.GetPossibleChars");
		
		URandomTextGenerator_GetPossibleChars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RandomTextGenerator.CreateRandomString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinLen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxLen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URandomTextGenerator::CreateRandomString(int32_t MinLen, int32_t MaxLen, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RandomTextGenerator.CreateRandomString");
		
		URandomTextGenerator_CreateRandomString_Params params {};
		params.MinLen = MinLen;
		params.MaxLen = MaxLen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomTextGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomTextGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.RandomTextGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.TaskComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ATask*                                       CompletedTask                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoundSequence::TaskComplete(class ATask* CompletedTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.TaskComplete");
		
		ARoundSequence_TaskComplete_Params params {};
		params.CompletedTask = CompletedTask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.StartRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETaskRound                                         CurrentRound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoundSequence::StartRound(ETaskRound CurrentRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.StartRound");
		
		ARoundSequence_StartRound_Params params {};
		params.CurrentRound = CurrentRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.StartNextRound
	 * 		Flags  -> ()
	 */
	void ARoundSequence::StartNextRound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.StartNextRound");
		
		ARoundSequence_StartNextRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.PopulateTaskLists
	 * 		Flags  -> ()
	 */
	void ARoundSequence::PopulateTaskLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.PopulateTaskLists");
		
		ARoundSequence_PopulateTaskLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.FinalRoundComplete
	 * 		Flags  -> ()
	 */
	void ARoundSequence::FinalRoundComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.FinalRoundComplete");
		
		ARoundSequence_FinalRoundComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.EndRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETaskRound                                         CurrentRound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoundSequence::EndRound(ETaskRound CurrentRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.EndRound");
		
		ARoundSequence_EndRound_Params params {};
		params.CurrentRound = CurrentRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.DeactivateObjectsForRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETaskRound                                         CurrentRound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoundSequence::DeactivateObjectsForRound(ETaskRound CurrentRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.DeactivateObjectsForRound");
		
		ARoundSequence_DeactivateObjectsForRound_Params params {};
		params.CurrentRound = CurrentRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.RoundSequence.ActivateObjectsForRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETaskRound                                         CurrentRound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARoundSequence::ActivateObjectsForRound(ETaskRound CurrentRound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.RoundSequence.ActivateObjectsForRound");
		
		ARoundSequence_ActivateObjectsForRound_Params params {};
		params.CurrentRound = CurrentRound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARoundSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARoundSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.RoundSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USauceData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USauceData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SauceData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCamera.StopCamera
	 * 		Flags  -> ()
	 */
	void ASecurityCamera::StopCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCamera.StopCamera");
		
		ASecurityCamera_StopCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCamera.StartCamera
	 * 		Flags  -> ()
	 */
	void ASecurityCamera::StartCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCamera.StartCamera");
		
		ASecurityCamera_StartCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCamera.SetTextureRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      InTextureRenderTarget                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::SetTextureRenderTarget(class UTextureRenderTarget2D* InTextureRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCamera.SetTextureRenderTarget");
		
		ASecurityCamera_SetTextureRenderTarget_Params params {};
		params.InTextureRenderTarget = InTextureRenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCamera.IsCameraActive
	 * 		Flags  -> ()
	 */
	bool ASecurityCamera::IsCameraActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCamera.IsCameraActive");
		
		ASecurityCamera_IsCameraActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCamera.GetTextureRenderTarget
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* ASecurityCamera::GetTextureRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCamera.GetTextureRenderTarget");
		
		ASecurityCamera_GetTextureRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecurityCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SecurityCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCameraSystem.GetAllSecurityCameras
	 * 		Flags  -> ()
	 */
	TArray<class ASecurityCamera*> USecurityCameraSystem::GetAllSecurityCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCameraSystem.GetAllSecurityCameras");
		
		USecurityCameraSystem_GetAllSecurityCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCameraSystem.GetActiveSecurityCameras
	 * 		Flags  -> ()
	 */
	TArray<class ASecurityCamera*> USecurityCameraSystem::GetActiveSecurityCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCameraSystem.GetActiveSecurityCameras");
		
		USecurityCameraSystem_GetActiveSecurityCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCameraSystem.DeactivateCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USecurityCameraSystem::DeactivateCamera(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCameraSystem.DeactivateCamera");
		
		USecurityCameraSystem_DeactivateCamera_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SecurityCameraSystem.ActivateCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USecurityCameraSystem::ActivateCamera(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SecurityCameraSystem.ActivateCamera");
		
		USecurityCameraSystem_ActivateCamera_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecurityCameraSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityCameraSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SecurityCameraSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USideDishData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USideDishData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SideDishData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlushyData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlushyData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SlushyData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SpawnPointSystem.GetPossibleSpawnPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     UserData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ASpawnPoint*> USpawnPointSystem::GetPossibleSpawnPoints(class UObject* UserData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SpawnPointSystem.GetPossibleSpawnPoints");
		
		USpawnPointSystem_GetPossibleSpawnPoints_Params params {};
		params.UserData = UserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.SpawnPointSystem.GetAllSpawnPoints
	 * 		Flags  -> ()
	 */
	TArray<class ASpawnPoint*> USpawnPointSystem::GetAllSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.SpawnPointSystem.GetAllSpawnPoints");
		
		USpawnPointSystem_GetAllSpawnPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnPointSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnPointSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SpawnPointSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.StaticDisplayInterface.ShowStatic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStaticDisplayInterface::ShowStatic(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.StaticDisplayInterface.ShowStatic");
		
		UStaticDisplayInterface_ShowStatic_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaticDisplayInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaticDisplayInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.StaticDisplayInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USystemEventsPauser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USystemEventsPauser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SystemEventsPauser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.Task.ToggleTaskActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATask::ToggleTaskActors(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.Task.ToggleTaskActors");
		
		ATask_ToggleTaskActors_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.Task.TaskComplete
	 * 		Flags  -> ()
	 */
	void ATask::TaskComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.Task.TaskComplete");
		
		ATask_TaskComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.Task");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TaskList.RandomlyTrimToSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskList::RandomlyTrimToSize(int32_t Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TaskList.RandomlyTrimToSize");
		
		ATaskList_RandomlyTrimToSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.TaskList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.SetTemperatureInDegrees
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDegrees                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTemperatureHandler::SetTemperatureInDegrees(float InDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.SetTemperatureInDegrees");
		
		UTemperatureHandler_SetTemperatureInDegrees_Params params {};
		params.InDegrees = InDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.SetTemperatureChangeEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTemperatureHandler::SetTemperatureChangeEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.SetTemperatureChangeEnable");
		
		UTemperatureHandler_SetTemperatureChangeEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.SetTemperatureChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDegreesPerSecond                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTemperatureHandler::SetTemperatureChange(float InDegreesPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.SetTemperatureChange");
		
		UTemperatureHandler_SetTemperatureChange_Params params {};
		params.InDegreesPerSecond = InDegreesPerSecond;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.HandleTemperatureChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChangeInDegrees                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTemperatureHandler::HandleTemperatureChange(float ChangeInDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.HandleTemperatureChange");
		
		UTemperatureHandler_HandleTemperatureChange_Params params {};
		params.ChangeInDegrees = ChangeInDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.GetTemperaturePercentage
	 * 		Flags  -> ()
	 */
	float UTemperatureHandler::GetTemperaturePercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.GetTemperaturePercentage");
		
		UTemperatureHandler_GetTemperaturePercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.GetTemperatureInDegrees
	 * 		Flags  -> ()
	 */
	float UTemperatureHandler::GetTemperatureInDegrees()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.GetTemperatureInDegrees");
		
		UTemperatureHandler_GetTemperatureInDegrees_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.GetTemperatureChangeEnable
	 * 		Flags  -> ()
	 */
	bool UTemperatureHandler::GetTemperatureChangeEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.GetTemperatureChangeEnable");
		
		UTemperatureHandler_GetTemperatureChangeEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.GetNormalizedTemperature
	 * 		Flags  -> ()
	 */
	float UTemperatureHandler::GetNormalizedTemperature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.GetNormalizedTemperature");
		
		UTemperatureHandler_GetNormalizedTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.GetMinTemperature
	 * 		Flags  -> ()
	 */
	int32_t UTemperatureHandler::GetMinTemperature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.GetMinTemperature");
		
		UTemperatureHandler_GetMinTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.GetMaxTemperature
	 * 		Flags  -> ()
	 */
	int32_t UTemperatureHandler::GetMaxTemperature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.GetMaxTemperature");
		
		UTemperatureHandler_GetMaxTemperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureHandler.CanChangeTemperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTemperatureHandler::CanChangeTemperature(class UPrimitiveComponent* PrimitiveComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureHandler.CanChangeTemperature");
		
		UTemperatureHandler_CanChangeTemperature_Params params {};
		params.PrimitiveComponent = PrimitiveComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemperatureHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemperatureHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.TemperatureHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureManager.OnHandlerActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATemperatureManager::OnHandlerActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureManager.OnHandlerActorDestroyed");
		
		ATemperatureManager_OnHandlerActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.TemperatureManager.GetCombinedTemperaturePercent
	 * 		Flags  -> ()
	 */
	float ATemperatureManager::GetCombinedTemperaturePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.TemperatureManager.GetCombinedTemperaturePercent");
		
		ATemperatureManager_GetCombinedTemperaturePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATemperatureManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATemperatureManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.TemperatureManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemperatureMaterialHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemperatureMaterialHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.TemperatureMaterialHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATempJumpscareHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATempJumpscareHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.TempJumpscareHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperAssetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperAssetManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperAssetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperCheatsData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperCheatsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperCheatsData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.WaitForLevelLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUnused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::WaitForLevelLoad(bool bUnused, const struct FLatentActionInfo& LatentActionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.WaitForLevelLoad");
		
		UThumperGameManager_WaitForLevelLoad_Params params {};
		params.bUnused = bUnused;
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.VisualQualityDataLoaded
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::VisualQualityDataLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.VisualQualityDataLoaded");
		
		UThumperGameManager_VisualQualityDataLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.UnlockAllLevels
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::UnlockAllLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.UnlockAllLevels");
		
		UThumperGameManager_UnlockAllLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.UnlockAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AchievementID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::UnlockAchievement(const class FString& AchievementID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.UnlockAchievement");
		
		UThumperGameManager_UnlockAchievement_Params params {};
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SwitchOnBuildType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EThumperBuildType                                  BuildType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SwitchOnBuildType(EThumperBuildType* BuildType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SwitchOnBuildType");
		
		UThumperGameManager_SwitchOnBuildType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BuildType != nullptr)
			*BuildType = params.BuildType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.StartJumpscare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJumpscareType                                     JumpscareType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseTemporary                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UHapticFeedbackEffect_Base*                  HapticEffect                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     JumpscareFinisher                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::StartJumpscare(EJumpscareType JumpscareType, bool bUseTemporary, class USceneComponent* AttachToComponent, const class FName& SocketName, class UHapticFeedbackEffect_Base* HapticEffect, class UObject* JumpscareFinisher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.StartJumpscare");
		
		UThumperGameManager_StartJumpscare_Params params {};
		params.JumpscareType = JumpscareType;
		params.bUseTemporary = bUseTemporary;
		params.AttachToComponent = AttachToComponent;
		params.SocketName = SocketName;
		params.HapticEffect = HapticEffect;
		params.JumpscareFinisher = JumpscareFinisher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetVRComfortSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRComfortSettingsSaveData                  Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetVRComfortSettings(const struct FVRComfortSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetVRComfortSettings");
		
		UThumperGameManager_SetVRComfortSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetVideoSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVideoSettingsSaveData                      Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetVideoSettings(const struct FVideoSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetVideoSettings");
		
		UThumperGameManager_SetVideoSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetSubtitleSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubtitlesSettingsSaveData                  Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetSubtitleSettings(const struct FSubtitlesSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetSubtitleSettings");
		
		UThumperGameManager_SetSubtitleSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetSteamDefaultCulture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocalizationCulture                               Culture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetSteamDefaultCulture(ELocalizationCulture Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetSteamDefaultCulture");
		
		UThumperGameManager_SetSteamDefaultCulture_Params params {};
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetPlayerInputsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetPlayerInputsEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetPlayerInputsEnabled");
		
		UThumperGameManager_SetPlayerInputsEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetPlayerHeightOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetPlayerHeightOffset(float Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetPlayerHeightOffset");
		
		UThumperGameManager_SetPlayerHeightOffset_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetNextJumpscareLoadLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetNextJumpscareLoadLevel(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetNextJumpscareLoadLevel");
		
		UThumperGameManager_SetNextJumpscareLoadLevel_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetCounterForVictory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetCounterForVictory(const struct FGameplayTag& Tag, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetCounterForVictory");
		
		UThumperGameManager_SetCounterForVictory_Params params {};
		params.Tag = Tag;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::SetAudioSettings(const struct FAudioSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetAudioSettings");
		
		UThumperGameManager_SetAudioSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SetAndCheckAllHighScoresForAchieve
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                SetNewScore                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::SetAndCheckAllHighScoresForAchieve(const struct FGameplayTag& SetNewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SetAndCheckAllHighScoresForAchieve");
		
		UThumperGameManager_SetAndCheckAllHighScoresForAchieve_Params params {};
		params.SetNewScore = SetNewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SavePlayerSettings
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::SavePlayerSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SavePlayerSettings");
		
		UThumperGameManager_SavePlayerSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.SaveGame
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.SaveGame");
		
		UThumperGameManager_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.RegisterActivityCallback
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::RegisterActivityCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.RegisterActivityCallback");
		
		UThumperGameManager_RegisterActivityCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ProgressAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AchievementID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::ProgressAchievement(const class FString& AchievementID, int32_t Progress, const class FString& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ProgressAchievement");
		
		UThumperGameManager_ProgressAchievement_Params params {};
		params.AchievementID = AchievementID;
		params.Progress = Progress;
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.OnLevelLoadStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::OnLevelLoadStarted(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.OnLevelLoadStarted");
		
		UThumperGameManager_OnLevelLoadStarted_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveGameSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::LoadSaveGame(const class FString& SaveGameSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadSaveGame");
		
		UThumperGameManager_LoadSaveGame_Params params {};
		params.SaveGameSlotName = SaveGameSlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadPlayerSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveGameSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::LoadPlayerSettings(const class FString& SaveGameSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadPlayerSettings");
		
		UThumperGameManager_LoadPlayerSettings_Params params {};
		params.SaveGameSlotName = SaveGameSlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadLevelViaActivity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ActivityName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::LoadLevelViaActivity(const class FString& ActivityName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadLevelViaActivity");
		
		UThumperGameManager_LoadLevelViaActivity_Params params {};
		params.ActivityName = ActivityName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadLevelCheatMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UThumperGameManager::LoadLevelCheatMenu(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadLevelCheatMenu");
		
		UThumperGameManager_LoadLevelCheatMenu_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadCurrentLevelInstructionSetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUnused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ULevelInstructionSetData*                    InstructionSetData                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::LoadCurrentLevelInstructionSetData(bool bUnused, const struct FLatentActionInfo& LatentActionInfo, class ULevelInstructionSetData** InstructionSetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadCurrentLevelInstructionSetData");
		
		UThumperGameManager_LoadCurrentLevelInstructionSetData_Params params {};
		params.bUnused = bUnused;
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstructionSetData != nullptr)
			*InstructionSetData = params.InstructionSetData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadCheatMenu
	 * 		Flags  -> ()
	 */
	class UClass* UThumperGameManager::LoadCheatMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadCheatMenu");
		
		UThumperGameManager_LoadCheatMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LoadAnimCheatManagerForCurrentLevel
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::LoadAnimCheatManagerForCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LoadAnimCheatManagerForCurrentLevel");
		
		UThumperGameManager_LoadAnimCheatManagerForCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LevelHasBeenWonBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::LevelHasBeenWonBefore(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LevelHasBeenWonBefore");
		
		UThumperGameManager_LevelHasBeenWonBefore_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.LevelHasBeenPlayedBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::LevelHasBeenPlayedBefore(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.LevelHasBeenPlayedBefore");
		
		UThumperGameManager_LevelHasBeenPlayedBefore_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsSavingGame
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::IsSavingGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsSavingGame");
		
		UThumperGameManager_IsSavingGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsRetry
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::IsRetry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsRetry");
		
		UThumperGameManager_IsRetry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsPlayingFromTutorial
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::IsPlayingFromTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsPlayingFromTutorial");
		
		UThumperGameManager_IsPlayingFromTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsLoadingLevel
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::IsLoadingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsLoadingLevel");
		
		UThumperGameManager_IsLoadingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsLevelUnlockedWithoutInhibitor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::IsLevelUnlockedWithoutInhibitor(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsLevelUnlockedWithoutInhibitor");
		
		UThumperGameManager_IsLevelUnlockedWithoutInhibitor_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsLevelUnlockedInSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::IsLevelUnlockedInSequence(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsLevelUnlockedInSequence");
		
		UThumperGameManager_IsLevelUnlockedInSequence_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsLevelUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::IsLevelUnlocked(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsLevelUnlocked");
		
		UThumperGameManager_IsLevelUnlocked_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IsJumpScareInProgress
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::IsJumpScareInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IsJumpScareInProgress");
		
		UThumperGameManager_IsJumpScareInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.IncrementCounterForVictory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::IncrementCounterForVictory(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.IncrementCounterForVictory");
		
		UThumperGameManager_IncrementCounterForVictory_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.HasTagForVictory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::HasTagForVictory(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.HasTagForVictory");
		
		UThumperGameManager_HasTagForVictory_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.HasSavedTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::HasSavedTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.HasSavedTag");
		
		UThumperGameManager_HasSavedTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.HasSavedOrForVictoryTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperGameManager::HasSavedOrForVictoryTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.HasSavedOrForVictoryTag");
		
		UThumperGameManager_HasSavedOrForVictoryTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.HasSaveData
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::HasSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.HasSaveData");
		
		UThumperGameManager_HasSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.HasPlayerSettingsSave
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::HasPlayerSettingsSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.HasPlayerSettingsSave");
		
		UThumperGameManager_HasPlayerSettingsSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetSaveGame
	 * 		Flags  -> ()
	 */
	class UThumperSaveGame* UThumperGameManager::GetSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetSaveGame");
		
		UThumperGameManager_GetSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetPlayerSettings
	 * 		Flags  -> ()
	 */
	class UThumperPlayerSettingsSave* UThumperGameManager::GetPlayerSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetPlayerSettings");
		
		UThumperGameManager_GetPlayerSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetPlatformFeatureSubsystem
	 * 		Flags  -> ()
	 */
	class UPlatformFeatureSubsystem* UThumperGameManager::GetPlatformFeatureSubsystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetPlatformFeatureSubsystem");
		
		UThumperGameManager_GetPlatformFeatureSubsystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetLastFinishState
	 * 		Flags  -> ()
	 */
	ELevelFinishState UThumperGameManager::GetLastFinishState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetLastFinishState");
		
		UThumperGameManager_GetLastFinishState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetLastFinishedLevelInformation
	 * 		Flags  -> ()
	 */
	class ULevelInformation* UThumperGameManager::GetLastFinishedLevelInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetLastFinishedLevelInformation");
		
		UThumperGameManager_GetLastFinishedLevelInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetDefaultVRComfortSettings
	 * 		Flags  -> ()
	 */
	struct FVRComfortSettingsSaveData UThumperGameManager::GetDefaultVRComfortSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetDefaultVRComfortSettings");
		
		UThumperGameManager_GetDefaultVRComfortSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetDefaultVideoSettings
	 * 		Flags  -> ()
	 */
	struct FVideoSettingsSaveData UThumperGameManager::GetDefaultVideoSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetDefaultVideoSettings");
		
		UThumperGameManager_GetDefaultVideoSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetDefaultSubtitleSettings
	 * 		Flags  -> ()
	 */
	struct FSubtitlesSettingsSaveData UThumperGameManager::GetDefaultSubtitleSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetDefaultSubtitleSettings");
		
		UThumperGameManager_GetDefaultSubtitleSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetDefaultAudioSettings
	 * 		Flags  -> ()
	 */
	struct FAudioSettingsSaveData UThumperGameManager::GetDefaultAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetDefaultAudioSettings");
		
		UThumperGameManager_GetDefaultAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetCurrentLevelSaveData
	 * 		Flags  -> ()
	 */
	struct FLevelSaveData UThumperGameManager::GetCurrentLevelSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetCurrentLevelSaveData");
		
		UThumperGameManager_GetCurrentLevelSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetCounterForVictoryOrSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UThumperGameManager::GetCounterForVictoryOrSave(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetCounterForVictoryOrSave");
		
		UThumperGameManager_GetCounterForVictoryOrSave_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetBuildType
	 * 		Flags  -> ()
	 */
	EThumperBuildType UThumperGameManager::GetBuildType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetBuildType");
		
		UThumperGameManager_GetBuildType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetBrightnessDeltaValue
	 * 		Flags  -> ()
	 */
	float UThumperGameManager::GetBrightnessDeltaValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetBrightnessDeltaValue");
		
		UThumperGameManager_GetBrightnessDeltaValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.GetActivityToLoad
	 * 		Flags  -> ()
	 */
	class FString UThumperGameManager::GetActivityToLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.GetActivityToLoad");
		
		UThumperGameManager_GetActivityToLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.FinishLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELevelFinishState                                  LevelFinishState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::FinishLevel(ELevelFinishState LevelFinishState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.FinishLevel");
		
		UThumperGameManager_FinishLevel_Params params {};
		params.LevelFinishState = LevelFinishState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.EndJumpscare
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::EndJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.EndJumpscare");
		
		UThumperGameManager_EndJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.CurrentLevelHasBeenWonBefore
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::CurrentLevelHasBeenWonBefore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.CurrentLevelHasBeenWonBefore");
		
		UThumperGameManager_CurrentLevelHasBeenWonBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.CurrentLevelHasBeenPlayedThroughBefore
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::CurrentLevelHasBeenPlayedThroughBefore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.CurrentLevelHasBeenPlayedThroughBefore");
		
		UThumperGameManager_CurrentLevelHasBeenPlayedThroughBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.CurrentLevelHasBeenPlayedBefore
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::CurrentLevelHasBeenPlayedBefore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.CurrentLevelHasBeenPlayedBefore");
		
		UThumperGameManager_CurrentLevelHasBeenPlayedBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.CurrentLevelHasBeenLostBefore
	 * 		Flags  -> ()
	 */
	bool UThumperGameManager::CurrentLevelHasBeenLostBefore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.CurrentLevelHasBeenLostBefore");
		
		UThumperGameManager_CurrentLevelHasBeenLostBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ClearTagsForVictory
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ClearTagsForVictory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ClearTagsForVictory");
		
		UThumperGameManager_ClearTagsForVictory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ClearSaveOnVictoryCounters
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ClearSaveOnVictoryCounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ClearSaveOnVictoryCounters");
		
		UThumperGameManager_ClearSaveOnVictoryCounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ClearSaveGame
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ClearSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ClearSaveGame");
		
		UThumperGameManager_ClearSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.BroadcastSaveTagsChangeEvent
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::BroadcastSaveTagsChangeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.BroadcastSaveTagsChangeEvent");
		
		UThumperGameManager_BroadcastSaveTagsChangeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ApplyVRComfortSettings
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ApplyVRComfortSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ApplyVRComfortSettings");
		
		UThumperGameManager_ApplyVRComfortSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ApplyVisualQualitySettings
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ApplyVisualQualitySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ApplyVisualQualitySettings");
		
		UThumperGameManager_ApplyVisualQualitySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ApplySubtitleSettings
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ApplySubtitleSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ApplySubtitleSettings");
		
		UThumperGameManager_ApplySubtitleSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.ApplyAudioSettings
	 * 		Flags  -> ()
	 */
	void UThumperGameManager::ApplyAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.ApplyAudioSettings");
		
		UThumperGameManager_ApplyAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameManager.AddTagForVictory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperGameManager::AddTagForVictory(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameManager.AddTagForVictory");
		
		UThumperGameManager_AddTagForVictory_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperGameManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperGameManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperGameManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperGameMode.OnApplyAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AThumperGameMode::OnApplyAudioSettings(const struct FAudioSettingsSaveData& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperGameMode.OnApplyAudioSettings");
		
		AThumperGameMode_OnApplyAudioSettings_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThumperGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThumperGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperLevelCheatData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperLevelCheatData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperLevelCheatData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperManagerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperManagerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperManagerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThumperPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThumperPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperPlayerHeightAdjustComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperPlayerHeightAdjustComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperPlayerHeightAdjustComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.SetLevelSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLevelSaveData                              LevelSaveData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UThumperSaveGame::SetLevelSaveData(const struct FLevelSaveData& LevelSaveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.SetLevelSaveData");
		
		UThumperSaveGame_SetLevelSaveData_Params params {};
		params.LevelSaveData = LevelSaveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.SetCounterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperSaveGame::SetCounterValue(const struct FGameplayTag& Tag, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.SetCounterValue");
		
		UThumperSaveGame_SetCounterValue_Params params {};
		params.Tag = Tag;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.RemoveTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperSaveGame::RemoveTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.RemoveTag");
		
		UThumperSaveGame_RemoveTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.IncrementCounterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperSaveGame::IncrementCounterValue(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.IncrementCounterValue");
		
		UThumperSaveGame_IncrementCounterValue_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.HasTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UThumperSaveGame::HasTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.HasTag");
		
		UThumperSaveGame_HasTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.GetLevelSaveDataByLevelInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelInformation*                           LevelInformation                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLevelSaveData UThumperSaveGame::GetLevelSaveDataByLevelInfo(class ULevelInformation* LevelInformation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.GetLevelSaveDataByLevelInfo");
		
		UThumperSaveGame_GetLevelSaveDataByLevelInfo_Params params {};
		params.LevelInformation = LevelInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.GetLevelSaveDataByLevelID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLevelSaveData UThumperSaveGame::GetLevelSaveDataByLevelID(const class FName& LevelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.GetLevelSaveDataByLevelID");
		
		UThumperSaveGame_GetLevelSaveDataByLevelID_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.GetCounterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UThumperSaveGame::GetCounterValue(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.GetCounterValue");
		
		UThumperSaveGame_GetCounterValue_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.GetAllLevelData
	 * 		Flags  -> ()
	 */
	TArray<struct FLevelSaveData> UThumperSaveGame::GetAllLevelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.GetAllLevelData");
		
		UThumperSaveGame_GetAllLevelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperSaveGame.AddTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumperSaveGame::AddTag(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperSaveGame.AddTag");
		
		UThumperSaveGame_AddTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperSaveGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperSaveGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperSaveGame");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperPlayerSettingsSave.GetVRComfortSettings
	 * 		Flags  -> ()
	 */
	struct FVRComfortSettingsSaveData UThumperPlayerSettingsSave::GetVRComfortSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperPlayerSettingsSave.GetVRComfortSettings");
		
		UThumperPlayerSettingsSave_GetVRComfortSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperPlayerSettingsSave.GetVideoSettings
	 * 		Flags  -> ()
	 */
	struct FVideoSettingsSaveData UThumperPlayerSettingsSave::GetVideoSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperPlayerSettingsSave.GetVideoSettings");
		
		UThumperPlayerSettingsSave_GetVideoSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperPlayerSettingsSave.GetSubtitleSettings
	 * 		Flags  -> ()
	 */
	struct FSubtitlesSettingsSaveData UThumperPlayerSettingsSave::GetSubtitleSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperPlayerSettingsSave.GetSubtitleSettings");
		
		UThumperPlayerSettingsSave_GetSubtitleSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperPlayerSettingsSave.GetAudioSettings
	 * 		Flags  -> ()
	 */
	struct FAudioSettingsSaveData UThumperPlayerSettingsSave::GetAudioSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperPlayerSettingsSave.GetAudioSettings");
		
		UThumperPlayerSettingsSave_GetAudioSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperPlayerSettingsSave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperPlayerSettingsSave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperPlayerSettingsSave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRComfortSettingsSaveData                  A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVRComfortSettingsSaveData                  B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData(const struct FVRComfortSettingsSaveData& A, const struct FVRComfortSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData");
		
		UKismetPlayerSettingsibrary_NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.NotEqual_VideoSettingsSaveDataVideoSettingsSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVideoSettingsSaveData                      A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVideoSettingsSaveData                      B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::NotEqual_VideoSettingsSaveDataVideoSettingsSaveData(const struct FVideoSettingsSaveData& A, const struct FVideoSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.NotEqual_VideoSettingsSaveDataVideoSettingsSaveData");
		
		UKismetPlayerSettingsibrary_NotEqual_VideoSettingsSaveDataVideoSettingsSaveData_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.NotEqual_SubtitleSettingsSubtitleSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubtitlesSettingsSaveData                  A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSubtitlesSettingsSaveData                  B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::NotEqual_SubtitleSettingsSubtitleSettings(const struct FSubtitlesSettingsSaveData& A, const struct FSubtitlesSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.NotEqual_SubtitleSettingsSubtitleSettings");
		
		UKismetPlayerSettingsibrary_NotEqual_SubtitleSettingsSubtitleSettings_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.NotEqual_AudioSettingsAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAudioSettingsSaveData                      B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::NotEqual_AudioSettingsAudioSettings(const struct FAudioSettingsSaveData& A, const struct FAudioSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.NotEqual_AudioSettingsAudioSettings");
		
		UKismetPlayerSettingsibrary_NotEqual_AudioSettingsAudioSettings_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRComfortSettingsSaveData                  A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVRComfortSettingsSaveData                  B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData(const struct FVRComfortSettingsSaveData& A, const struct FVRComfortSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData");
		
		UKismetPlayerSettingsibrary_EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVideoSettingsSaveData                      A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVideoSettingsSaveData                      B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData(const struct FVideoSettingsSaveData& A, const struct FVideoSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData");
		
		UKismetPlayerSettingsibrary_EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.EqualExactly_SubtitleSettingsSubtitleSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSubtitlesSettingsSaveData                  A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSubtitlesSettingsSaveData                  B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::EqualExactly_SubtitleSettingsSubtitleSettings(const struct FSubtitlesSettingsSaveData& A, const struct FSubtitlesSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.EqualExactly_SubtitleSettingsSubtitleSettings");
		
		UKismetPlayerSettingsibrary_EqualExactly_SubtitleSettingsSubtitleSettings_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.KismetPlayerSettingsibrary.EqualExactly_AudioSettingsAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAudioSettingsSaveData                      A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAudioSettingsSaveData                      B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UKismetPlayerSettingsibrary::EqualExactly_AudioSettingsAudioSettings(const struct FAudioSettingsSaveData& A, const struct FAudioSettingsSaveData& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.KismetPlayerSettingsibrary.EqualExactly_AudioSettingsAudioSettings");
		
		UKismetPlayerSettingsibrary_EqualExactly_AudioSettingsAudioSettings_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKismetPlayerSettingsibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKismetPlayerSettingsibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.KismetPlayerSettingsibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Thumper.ThumperTestManager.RetryGenerateMenu
	 * 		Flags  -> ()
	 */
	void UThumperTestManager::RetryGenerateMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thumper.ThumperTestManager.RetryGenerateMenu");
		
		UThumperTestManager_RetryGenerateMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumperTestManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumperTestManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ThumperTestManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToppingData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToppingData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.ToppingData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USodaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USodaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Thumper.SodaData");
		return ptr;
	}

}


