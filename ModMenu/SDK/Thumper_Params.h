#pragma once

/**
 * Name: HW2
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Thumper.ActivateByGameplayTag.OnTagsChanged
	 */
	struct UActivateByGameplayTag_OnTagsChanged_Params
	{	};

	/**
	 * Function Thumper.ArtsAndCraftsPaintData.GetPaintColorCode
	 */
	struct UArtsAndCraftsPaintData_GetPaintColorCode_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ArtsAndCraftsPaintData.GetPaintByNumbersValue
	 */
	struct UArtsAndCraftsPaintData_GetPaintByNumbersValue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ArtsAndCraftsPaintData.GetIsPrimaryColor
	 */
	struct UArtsAndCraftsPaintData_GetIsPrimaryColor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ArtsAndCraftsPaintData.GetAssetPaintColor
	 */
	struct UArtsAndCraftsPaintData_GetAssetPaintColor_Params
	{
	public:
		EPaintData                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.UnlockRequiresInhibitor
	 */
	struct ULevelInformation_UnlockRequiresInhibitor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.IsForDemo
	 */
	struct ULevelInformation_IsForDemo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetUnlockTag
	 */
	struct ULevelInformation_GetUnlockTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetRequiredUnlockLevel
	 */
	struct ULevelInformation_GetRequiredUnlockLevel_Params
	{
	public:
		class ULevelInformation*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetLevelSequence
	 */
	struct ULevelInformation_GetLevelSequence_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetLevelInstructionSetData
	 */
	struct ULevelInformation_GetLevelInstructionSetData_Params
	{	};

	/**
	 * Function Thumper.LevelInformation.GetLevelDisplayName
	 */
	struct ULevelInformation_GetLevelDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetLevelDisplayDescription
	 */
	struct ULevelInformation_GetLevelDisplayDescription_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetLevelCategory
	 */
	struct ULevelInformation_GetLevelCategory_Params
	{
	public:
		ELevelCategory                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelInformation.GetLevel
	 */
	struct ULevelInformation_GetLevel_Params
	{	};

	/**
	 * Function Thumper.LevelInformation.GetIcon
	 */
	struct ULevelInformation_GetIcon_Params
	{	};

	/**
	 * Function Thumper.LevelInformation.GetFolderIcon
	 */
	struct ULevelInformation_GetFolderIcon_Params
	{	};

	/**
	 * Function Thumper.BaBLevelInformationInterface.IsNightmareMode
	 */
	struct UBaBLevelInformationInterface_IsNightmareMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.OnPullIn
	 */
	struct ABonkABonCharacterHole_OnPullIn_Params
	{
	public:
		bool                                                       bIsJumpscare;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.OnPopOut
	 */
	struct ABonkABonCharacterHole_OnPopOut_Params
	{	};

	/**
	 * Function Thumper.BonkABonCharacterHole.OnHoleCooldownFinished
	 */
	struct ABonkABonCharacterHole_OnHoleCooldownFinished_Params
	{	};

	/**
	 * Function Thumper.BonkABonCharacterHole.OnHitDetected
	 */
	struct ABonkABonCharacterHole_OnHitDetected_Params
	{
	public:
		class UHitDetectionComponent*                              HitDetection;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Hitter;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.OnHitCooldownFinished
	 */
	struct ABonkABonCharacterHole_OnHitCooldownFinished_Params
	{
	public:
		class AActor*                                              Hitter;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.IsObstructed
	 */
	struct ABonkABonCharacterHole_IsObstructed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.IsInEditor
	 */
	struct ABonkABonCharacterHole_IsInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.GetState
	 */
	struct ABonkABonCharacterHole_GetState_Params
	{
	public:
		EBonkABonHoleState                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.GetCharacterType
	 */
	struct ABonkABonCharacterHole_GetCharacterType_Params
	{
	public:
		EBaBCharacterType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonCharacterHole.CharacterMovementFinished
	 */
	struct ABonkABonCharacterHole_CharacterMovementFinished_Params
	{	};

	/**
	 * Function Thumper.BonkABonRandomizer.StopRandomizer
	 */
	struct ABonkABonRandomizer_StopRandomizer_Params
	{	};

	/**
	 * Function Thumper.BonkABonRandomizer.StartRandomizer
	 */
	struct ABonkABonRandomizer_StartRandomizer_Params
	{
	public:
		class UBonkABonSettings*                                   BonkABonSettings;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonRandomizer.SpawnCharactersInRandomHoles
	 */
	struct ABonkABonRandomizer_SpawnCharactersInRandomHoles_Params
	{
	public:
		TArray<EBaBCharacterType>                                  Characters;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      PopOutTime;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDisableDeath;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonRandomizer.SetActiveCharacterHoles
	 */
	struct ABonkABonRandomizer_SetActiveCharacterHoles_Params
	{
	public:
		TArray<class ABonkABonCharacterHole*>                      NewCharacterHoles;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BonkABonRandomizer.ResumeRandomizer
	 */
	struct ABonkABonRandomizer_ResumeRandomizer_Params
	{	};

	/**
	 * Function Thumper.BonkABonRandomizer.ResetCharacters
	 */
	struct ABonkABonRandomizer_ResetCharacters_Params
	{	};

	/**
	 * Function Thumper.BonkABonRandomizer.PauseRandomizer
	 */
	struct ABonkABonRandomizer_PauseRandomizer_Params
	{	};

	/**
	 * Function Thumper.BonkABonRandomizer.GetAllCharacterHoles
	 */
	struct ABonkABonRandomizer_GetAllCharacterHoles_Params
	{
	public:
		TArray<class ABonkABonCharacterHole*>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.BootupLevelInfo.GetActivityLevelMap
	 */
	struct UBootupLevelInfo_GetActivityLevelMap_Params
	{	};

	/**
	 * Function Thumper.CraneGameActor.OnPrizesReady
	 */
	struct ACraneGameActor_OnPrizesReady_Params
	{	};

	/**
	 * Function Thumper.CraneGameActor.HasLoadedPrizes
	 */
	struct ACraneGameActor_HasLoadedPrizes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.CraneGameActor.GetChosenPrizes
	 */
	struct ACraneGameActor_GetChosenPrizes_Params
	{
	public:
		TArray<class UPrizeInfo*>                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.DJMMLevelInformationInterface.GetDifficultySetting
	 */
	struct UDJMMLevelInformationInterface_GetDifficultySetting_Params
	{
	public:
		class UDJMMDifficultySetting*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetUseFazerblaster
	 */
	struct UFazerblastGallerySettings_GetUseFazerblaster_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetUseDartGun
	 */
	struct UFazerblastGallerySettings_GetUseDartGun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetUseBalls
	 */
	struct UFazerblastGallerySettings_GetUseBalls_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetThrownBallAimAssitRadius
	 */
	struct UFazerblastGallerySettings_GetThrownBallAimAssitRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetTargetBase
	 */
	struct UFazerblastGallerySettings_GetTargetBase_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetPlushBabySpawnTimeVarience
	 */
	struct UFazerblastGallerySettings_GetPlushBabySpawnTimeVarience_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetPlushBabyMinSpawnTime
	 */
	struct UFazerblastGallerySettings_GetPlushBabyMinSpawnTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetPlushBabyEnabled
	 */
	struct UFazerblastGallerySettings_GetPlushBabyEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetNight
	 */
	struct UFazerblastGallerySettings_GetNight_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetMinPointsToPassLevel
	 */
	struct UFazerblastGallerySettings_GetMinPointsToPassLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionStartRate
	 */
	struct UFazerblastGallerySettings_GetDreadbearMeterAggressionStartRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionIncreaseAmount
	 */
	struct UFazerblastGallerySettings_GetDreadbearMeterAggressionIncreaseAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetDreadbearMeterAggressionEndRate
	 */
	struct UFazerblastGallerySettings_GetDreadbearMeterAggressionEndRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FazerblastGallerySettings.GetBeatsPerMinute
	 */
	struct UFazerblastGallerySettings_GetBeatsPerMinute_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SpawnPoint.IsPossibleSpawnPoint
	 */
	struct ASpawnPoint_IsPossibleSpawnPoint_Params
	{
	public:
		class UObject*                                             UserData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.SetIsOnTray
	 */
	struct UFoodPrepItemComponent_SetIsOnTray_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.SetIsInSocket
	 */
	struct UFoodPrepItemComponent_SetIsInSocket_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.SetIsInArmsReach
	 */
	struct UFoodPrepItemComponent_SetIsInArmsReach_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.SetIsHeld
	 */
	struct UFoodPrepItemComponent_SetIsHeld_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.OnOwnerReleased
	 */
	struct UFoodPrepItemComponent_OnOwnerReleased_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.OnOwnerGrabbed
	 */
	struct UFoodPrepItemComponent_OnOwnerGrabbed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.GetIsHeld
	 */
	struct UFoodPrepItemComponent_GetIsHeld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.FoodPrepItemComponent.CanBeCulled
	 */
	struct UFoodPrepItemComponent_CanBeCulled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.GalleryManager.ShouldShowEndingGalleryObject
	 */
	struct AGalleryManager_ShouldShowEndingGalleryObject_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.GalleryManager.SetShouldShowEndingGalleryObject
	 */
	struct AGalleryManager_SetShouldShowEndingGalleryObject_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.GalleryManager.OnGalleryFinishedLoading
	 */
	struct AGalleryManager_OnGalleryFinishedLoading_Params
	{	};

	/**
	 * Function Thumper.GalleryManager.LoadGalleryInfo
	 */
	struct AGalleryManager_LoadGalleryInfo_Params
	{	};

	/**
	 * Function Thumper.GalleryManager.HasEndingGalleryObject
	 */
	struct AGalleryManager_HasEndingGalleryObject_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.GalleryManager.GetGalleryInfo
	 */
	struct AGalleryManager_GetGalleryInfo_Params
	{
	public:
		int32_t                                                    InfoIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OutActualIndex;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGalleryObjectInfo*                                  OutGalleryObjectInfo;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.GalleryManager.GetEndingGalleryObject
	 */
	struct AGalleryManager_GetEndingGalleryObject_Params
	{
	public:
		class UGalleryObjectInfo*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.GalleryManager.AwardEndingGalleryObjectIfPossible
	 */
	struct AGalleryManager_AwardEndingGalleryObjectIfPossible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.StopLoopAudio
	 */
	struct AHeatGunActor_StopLoopAudio_Params
	{	};

	/**
	 * Function Thumper.HeatGunActor.SetCanUseGun
	 */
	struct AHeatGunActor_SetCanUseGun_Params
	{
	public:
		bool                                                       inCanUseGun;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.OnHeatModeChanged
	 */
	struct AHeatGunActor_OnHeatModeChanged_Params
	{
	public:
		EHeatGunMode                                               NewMode;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.OnDialSocketed
	 */
	struct AHeatGunActor_OnDialSocketed_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.OnDialRemoved
	 */
	struct AHeatGunActor_OnDialRemoved_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ActorBeingRemoved;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESocketActorRemoveReason                                   RemoveReason;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.OnDialRangeChanged
	 */
	struct AHeatGunActor_OnDialRangeChanged_Params
	{
	public:
		class ADial*                                               Dial;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OldRangeName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewRangeName;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.GetCurrentHeatMode
	 */
	struct AHeatGunActor_GetCurrentHeatMode_Params
	{
	public:
		EHeatGunMode                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.HeatGunActor.GetCanUseGun
	 */
	struct AHeatGunActor_GetCanUseGun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.JoystickControllable.OnVectorInput
	 */
	struct UJoystickControllable_OnVectorInput_Params
	{
	public:
		struct FVector2D                                           VectorInput;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.JumpscareBoundaryAction.PerformJumpscare
	 */
	struct UJumpscareBoundaryAction_PerformJumpscare_Params
	{	};

	/**
	 * Function Thumper.JumpscareFinishProvider.IsJumpscareFinished
	 */
	struct UJumpscareFinishProvider_IsJumpscareFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.JumpscareInitiator.InitiateJumpscare
	 */
	struct UJumpscareInitiator_InitiateJumpscare_Params
	{	};

	/**
	 * Function Thumper.LevelSystem.WaitForLevelInfo
	 */
	struct ULevelSystem_WaitForLevelInfo_Params
	{
	public:
		TArray<class ULevelInformation*>                           OutLevelInformations;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.ReloadCurrentLevel
	 */
	struct ULevelSystem_ReloadCurrentLevel_Params
	{	};

	/**
	 * Function Thumper.LevelSystem.LoadVictoryDefeat
	 */
	struct ULevelSystem_LoadVictoryDefeat_Params
	{	};

	/**
	 * Function Thumper.LevelSystem.LoadTutorialRoom
	 */
	struct ULevelSystem_LoadTutorialRoom_Params
	{
	public:
		class ULevelInformation*                                   LevelToLoadAfterTutorial;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.LoadTitle
	 */
	struct ULevelSystem_LoadTitle_Params
	{	};

	/**
	 * Function Thumper.LevelSystem.LoadMainHUB
	 */
	struct ULevelSystem_LoadMainHUB_Params
	{	};

	/**
	 * Function Thumper.LevelSystem.LoadLevelByName
	 */
	struct ULevelSystem_LoadLevelByName_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.LoadLevelByInfo
	 */
	struct ULevelSystem_LoadLevelByInfo_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.LoadAfterTutorial
	 */
	struct ULevelSystem_LoadAfterTutorial_Params
	{	};

	/**
	 * Function Thumper.LevelSystem.IsLoadingLevel
	 */
	struct ULevelSystem_IsLoadingLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.IsLevelInfoLoaded
	 */
	struct ULevelSystem_IsLevelInfoLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.IsCurrentLevelVictoryDefeat
	 */
	struct ULevelSystem_IsCurrentLevelVictoryDefeat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.IsCurrentLevelMainHUB
	 */
	struct ULevelSystem_IsCurrentLevelMainHUB_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetTextFromLevelCategory
	 */
	struct ULevelSystem_GetTextFromLevelCategory_Params
	{
	public:
		ELevelCategory                                             LevelCategory;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_50TV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetMainHUBLevelInformation
	 */
	struct ULevelSystem_GetMainHUBLevelInformation_Params
	{
	public:
		class ULevelInformation*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetLevelsForCategoryOrdered
	 */
	struct ULevelSystem_GetLevelsForCategoryOrdered_Params
	{
	public:
		ELevelCategory                                             LevelCategory;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H26M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ULevelInformation*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetLevelsForCategory
	 */
	struct ULevelSystem_GetLevelsForCategory_Params
	{
	public:
		ELevelCategory                                             LevelCategory;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X6M2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ULevelInformation*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetLevelInformationByName
	 */
	struct ULevelSystem_GetLevelInformationByName_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelInformation*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetLevelByCategoryAndSequence
	 */
	struct ULevelSystem_GetLevelByCategoryAndSequence_Params
	{
	public:
		ELevelCategory                                             LevelCategory;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JC3K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    LevelSequenceNumber;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelInformation*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetLevelAfterTutorial
	 */
	struct ULevelSystem_GetLevelAfterTutorial_Params
	{
	public:
		class ULevelInformation*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetCurrentLevelInformation
	 */
	struct ULevelSystem_GetCurrentLevelInformation_Params
	{
	public:
		class ULevelInformation*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystem.GetAllLevelInformation
	 */
	struct ULevelSystem_GetAllLevelInformation_Params
	{
	public:
		TArray<class ULevelInformation*>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystemInformation.GetTutorialRoomInformation
	 */
	struct ULevelSystemInformation_GetTutorialRoomInformation_Params
	{	};

	/**
	 * Function Thumper.LevelSystemInformation.GetTitleInformation
	 */
	struct ULevelSystemInformation_GetTitleInformation_Params
	{	};

	/**
	 * Function Thumper.LevelSystemInformation.GetTextFromCategory
	 */
	struct ULevelSystemInformation_GetTextFromCategory_Params
	{
	public:
		ELevelCategory                                             LevelCategory;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HWTF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.LevelSystemInformation.GetMainHubInformation
	 */
	struct ULevelSystemInformation_GetMainHubInformation_Params
	{	};

	/**
	 * Function Thumper.LevelSystemInformation.GetLevelInfoFromActivityName
	 */
	struct ULevelSystemInformation_GetLevelInfoFromActivityName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULevelInformation*                                   ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.Localization.GetLocalizationCultureFromSteam
	 */
	struct ULocalization_GetLocalizationCultureFromSteam_Params
	{
	public:
		ELocalizationCulture                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.Localization.GetCurrentLocalizationCulture
	 */
	struct ULocalization_GetCurrentLocalizationCulture_Params
	{
	public:
		ELocalizationCulture                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.Localization.ChangeLocalizationCulture
	 */
	struct ULocalization_ChangeLocalizationCulture_Params
	{
	public:
		ELocalizationCulture                                       Culture;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MakeupColorData.GetTileParam
	 */
	struct UMakeupColorData_GetTileParam_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MakeupColorData.GetMaterialMask
	 */
	struct UMakeupColorData_GetMaterialMask_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MakeupColorData.GetMakeupColorCode
	 */
	struct UMakeupColorData_GetMakeupColorCode_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MakeupColorData.GetCompactShape
	 */
	struct UMakeupColorData_GetCompactShape_Params
	{
	public:
		ECompactShape                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MenuComponent.ShowMenu
	 */
	struct UMenuComponent_ShowMenu_Params
	{	};

	/**
	 * Function Thumper.MenuComponent.SetMenuWidgetActorClass
	 */
	struct UMenuComponent_SetMenuWidgetActorClass_Params
	{
	public:
		class UClass*                                              InNewClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MenuComponent.SetFlatModeWidgetClass
	 */
	struct UMenuComponent_SetFlatModeWidgetClass_Params
	{
	public:
		class UClass*                                              InNewClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MenuComponent.OnVRModeChanged
	 */
	struct UMenuComponent_OnVRModeChanged_Params
	{
	public:
		ESWGVRMode                                                 NewVRMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MenuComponent.HideMenu
	 */
	struct UMenuComponent_HideMenu_Params
	{	};

	/**
	 * Function Thumper.MenuComponent.GetMenuWidgetActorClass
	 */
	struct UMenuComponent_GetMenuWidgetActorClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.MenuComponent.GetFlatModeWidgetClass
	 */
	struct UMenuComponent_GetFlatModeWidgetClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PausePlayerInterface.ReturnToGameplay
	 */
	struct UPausePlayerInterface_ReturnToGameplay_Params
	{	};

	/**
	 * Function Thumper.PlayerHeightAdjustGadget.OnResetPressed
	 */
	struct APlayerHeightAdjustGadget_OnResetPressed_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PlayerHeightAdjustGadget.OnIncreasePressed
	 */
	struct APlayerHeightAdjustGadget_OnIncreasePressed_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PlayerHeightAdjustGadget.OnDecreasePressed
	 */
	struct APlayerHeightAdjustGadget_OnDecreasePressed_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PlayerHeightAdjustGadget.AdjustHeight
	 */
	struct APlayerHeightAdjustGadget_AdjustHeight_Params
	{
	public:
		bool                                                       bUp;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PlayerHeightAdjustGadgetComponent.SetHeightAdjustEnable
	 */
	struct UPlayerHeightAdjustGadgetComponent_SetHeightAdjustEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PQ4Pawn2DMovementComponent.SetPawnLocation
	 */
	struct UPQ4Pawn2DMovementComponent_SetPawnLocation_Params
	{
	public:
		struct FVector                                             InWorldLocation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.PQ4Pawn2DMovementComponent.MovePawn
	 */
	struct UPQ4Pawn2DMovementComponent_MovePawn_Params
	{
	public:
		struct FVector2D                                           InMoveVector;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RandomTextGenerator.RandomizePortionOfString
	 */
	struct URandomTextGenerator_RandomizePortionOfString_Params
	{
	public:
		int32_t                                                    MinCharsToRandomize;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCharsToRandomize;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InOutString;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RandomTextGenerator.GetPossibleChars
	 */
	struct URandomTextGenerator_GetPossibleChars_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RandomTextGenerator.CreateRandomString
	 */
	struct URandomTextGenerator_CreateRandomString_Params
	{
	public:
		int32_t                                                    MinLen;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxLen;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutString;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RoundSequence.TaskComplete
	 */
	struct ARoundSequence_TaskComplete_Params
	{
	public:
		class ATask*                                               CompletedTask;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RoundSequence.StartRound
	 */
	struct ARoundSequence_StartRound_Params
	{
	public:
		ETaskRound                                                 CurrentRound;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RoundSequence.StartNextRound
	 */
	struct ARoundSequence_StartNextRound_Params
	{	};

	/**
	 * Function Thumper.RoundSequence.PopulateTaskLists
	 */
	struct ARoundSequence_PopulateTaskLists_Params
	{	};

	/**
	 * Function Thumper.RoundSequence.FinalRoundComplete
	 */
	struct ARoundSequence_FinalRoundComplete_Params
	{	};

	/**
	 * Function Thumper.RoundSequence.EndRound
	 */
	struct ARoundSequence_EndRound_Params
	{
	public:
		ETaskRound                                                 CurrentRound;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RoundSequence.DeactivateObjectsForRound
	 */
	struct ARoundSequence_DeactivateObjectsForRound_Params
	{
	public:
		ETaskRound                                                 CurrentRound;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.RoundSequence.ActivateObjectsForRound
	 */
	struct ARoundSequence_ActivateObjectsForRound_Params
	{
	public:
		ETaskRound                                                 CurrentRound;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCamera.StopCamera
	 */
	struct ASecurityCamera_StopCamera_Params
	{	};

	/**
	 * Function Thumper.SecurityCamera.StartCamera
	 */
	struct ASecurityCamera_StartCamera_Params
	{	};

	/**
	 * Function Thumper.SecurityCamera.SetTextureRenderTarget
	 */
	struct ASecurityCamera_SetTextureRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              InTextureRenderTarget;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCamera.IsCameraActive
	 */
	struct ASecurityCamera_IsCameraActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCamera.GetTextureRenderTarget
	 */
	struct ASecurityCamera_GetTextureRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCameraSystem.GetAllSecurityCameras
	 */
	struct USecurityCameraSystem_GetAllSecurityCameras_Params
	{
	public:
		TArray<class ASecurityCamera*>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCameraSystem.GetActiveSecurityCameras
	 */
	struct USecurityCameraSystem_GetActiveSecurityCameras_Params
	{
	public:
		TArray<class ASecurityCamera*>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCameraSystem.DeactivateCamera
	 */
	struct USecurityCameraSystem_DeactivateCamera_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SecurityCameraSystem.ActivateCamera
	 */
	struct USecurityCameraSystem_ActivateCamera_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SpawnPointSystem.GetPossibleSpawnPoints
	 */
	struct USpawnPointSystem_GetPossibleSpawnPoints_Params
	{
	public:
		class UObject*                                             UserData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ASpawnPoint*>                                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.SpawnPointSystem.GetAllSpawnPoints
	 */
	struct USpawnPointSystem_GetAllSpawnPoints_Params
	{
	public:
		TArray<class ASpawnPoint*>                                 ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.StaticDisplayInterface.ShowStatic
	 */
	struct UStaticDisplayInterface_ShowStatic_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.Task.ToggleTaskActors
	 */
	struct ATask_ToggleTaskActors_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.Task.TaskComplete
	 */
	struct ATask_TaskComplete_Params
	{	};

	/**
	 * Function Thumper.TaskList.RandomlyTrimToSize
	 */
	struct ATaskList_RandomlyTrimToSize_Params
	{
	public:
		int32_t                                                    Size;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.SetTemperatureInDegrees
	 */
	struct UTemperatureHandler_SetTemperatureInDegrees_Params
	{
	public:
		float                                                      InDegrees;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.SetTemperatureChangeEnable
	 */
	struct UTemperatureHandler_SetTemperatureChangeEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.SetTemperatureChange
	 */
	struct UTemperatureHandler_SetTemperatureChange_Params
	{
	public:
		float                                                      InDegreesPerSecond;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.HandleTemperatureChange
	 */
	struct UTemperatureHandler_HandleTemperatureChange_Params
	{
	public:
		float                                                      ChangeInDegrees;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.GetTemperaturePercentage
	 */
	struct UTemperatureHandler_GetTemperaturePercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.GetTemperatureInDegrees
	 */
	struct UTemperatureHandler_GetTemperatureInDegrees_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.GetTemperatureChangeEnable
	 */
	struct UTemperatureHandler_GetTemperatureChangeEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.GetNormalizedTemperature
	 */
	struct UTemperatureHandler_GetNormalizedTemperature_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.GetMinTemperature
	 */
	struct UTemperatureHandler_GetMinTemperature_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.GetMaxTemperature
	 */
	struct UTemperatureHandler_GetMaxTemperature_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureHandler.CanChangeTemperature
	 */
	struct UTemperatureHandler_CanChangeTemperature_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureManager.OnHandlerActorDestroyed
	 */
	struct ATemperatureManager_OnHandlerActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.TemperatureManager.GetCombinedTemperaturePercent
	 */
	struct ATemperatureManager_GetCombinedTemperaturePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.WaitForLevelLoad
	 */
	struct UThumperGameManager_WaitForLevelLoad_Params
	{
	public:
		bool                                                       bUnused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KN6H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.VisualQualityDataLoaded
	 */
	struct UThumperGameManager_VisualQualityDataLoaded_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.UnlockAllLevels
	 */
	struct UThumperGameManager_UnlockAllLevels_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.UnlockAchievement
	 */
	struct UThumperGameManager_UnlockAchievement_Params
	{
	public:
		class FString                                              AchievementID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SwitchOnBuildType
	 */
	struct UThumperGameManager_SwitchOnBuildType_Params
	{
	public:
		EThumperBuildType                                          BuildType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.StartJumpscare
	 */
	struct UThumperGameManager_StartJumpscare_Params
	{
	public:
		EJumpscareType                                             JumpscareType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseTemporary;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YA2Y[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHapticFeedbackEffect_Base*                          HapticEffect;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             JumpscareFinisher;                                       // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetVRComfortSettings
	 */
	struct UThumperGameManager_SetVRComfortSettings_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          Settings;                                                // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetVideoSettings
	 */
	struct UThumperGameManager_SetVideoSettings_Params
	{
	public:
		struct FVideoSettingsSaveData                              Settings;                                                // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetSubtitleSettings
	 */
	struct UThumperGameManager_SetSubtitleSettings_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          Settings;                                                // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetSteamDefaultCulture
	 */
	struct UThumperGameManager_SetSteamDefaultCulture_Params
	{
	public:
		ELocalizationCulture                                       Culture;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetPlayerInputsEnabled
	 */
	struct UThumperGameManager_SetPlayerInputsEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetPlayerHeightOffset
	 */
	struct UThumperGameManager_SetPlayerHeightOffset_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetNextJumpscareLoadLevel
	 */
	struct UThumperGameManager_SetNextJumpscareLoadLevel_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetCounterForVictory
	 */
	struct UThumperGameManager_SetCounterForVictory_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetAudioSettings
	 */
	struct UThumperGameManager_SetAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              Settings;                                                // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SetAndCheckAllHighScoresForAchieve
	 */
	struct UThumperGameManager_SetAndCheckAllHighScoresForAchieve_Params
	{
	public:
		struct FGameplayTag                                        SetNewScore;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.SavePlayerSettings
	 */
	struct UThumperGameManager_SavePlayerSettings_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.SaveGame
	 */
	struct UThumperGameManager_SaveGame_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.RegisterActivityCallback
	 */
	struct UThumperGameManager_RegisterActivityCallback_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ProgressAchievement
	 */
	struct UThumperGameManager_ProgressAchievement_Params
	{
	public:
		class FString                                              AchievementID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Progress;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GOVT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StatName;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.OnLevelLoadStarted
	 */
	struct UThumperGameManager_OnLevelLoadStarted_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadSaveGame
	 */
	struct UThumperGameManager_LoadSaveGame_Params
	{
	public:
		class FString                                              SaveGameSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadPlayerSettings
	 */
	struct UThumperGameManager_LoadPlayerSettings_Params
	{
	public:
		class FString                                              SaveGameSlotName;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadLevelViaActivity
	 */
	struct UThumperGameManager_LoadLevelViaActivity_Params
	{
	public:
		class FString                                              ActivityName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadLevelCheatMenu
	 */
	struct UThumperGameManager_LoadLevelCheatMenu_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadCurrentLevelInstructionSetData
	 */
	struct UThumperGameManager_LoadCurrentLevelInstructionSetData_Params
	{
	public:
		bool                                                       bUnused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TPIW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLatentActionInfo                                   LatentActionInfo;                                        // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class ULevelInstructionSetData*                            InstructionSetData;                                      // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadCheatMenu
	 */
	struct UThumperGameManager_LoadCheatMenu_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LoadAnimCheatManagerForCurrentLevel
	 */
	struct UThumperGameManager_LoadAnimCheatManagerForCurrentLevel_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.LevelHasBeenWonBefore
	 */
	struct UThumperGameManager_LevelHasBeenWonBefore_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.LevelHasBeenPlayedBefore
	 */
	struct UThumperGameManager_LevelHasBeenPlayedBefore_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsSavingGame
	 */
	struct UThumperGameManager_IsSavingGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsRetry
	 */
	struct UThumperGameManager_IsRetry_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsPlayingFromTutorial
	 */
	struct UThumperGameManager_IsPlayingFromTutorial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsLoadingLevel
	 */
	struct UThumperGameManager_IsLoadingLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsLevelUnlockedWithoutInhibitor
	 */
	struct UThumperGameManager_IsLevelUnlockedWithoutInhibitor_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsLevelUnlockedInSequence
	 */
	struct UThumperGameManager_IsLevelUnlockedInSequence_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsLevelUnlocked
	 */
	struct UThumperGameManager_IsLevelUnlocked_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IsJumpScareInProgress
	 */
	struct UThumperGameManager_IsJumpScareInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.IncrementCounterForVictory
	 */
	struct UThumperGameManager_IncrementCounterForVictory_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.HasTagForVictory
	 */
	struct UThumperGameManager_HasTagForVictory_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.HasSavedTag
	 */
	struct UThumperGameManager_HasSavedTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.HasSavedOrForVictoryTag
	 */
	struct UThumperGameManager_HasSavedOrForVictoryTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.HasSaveData
	 */
	struct UThumperGameManager_HasSaveData_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.HasPlayerSettingsSave
	 */
	struct UThumperGameManager_HasPlayerSettingsSave_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetSaveGame
	 */
	struct UThumperGameManager_GetSaveGame_Params
	{
	public:
		class UThumperSaveGame*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetPlayerSettings
	 */
	struct UThumperGameManager_GetPlayerSettings_Params
	{
	public:
		class UThumperPlayerSettingsSave*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetPlatformFeatureSubsystem
	 */
	struct UThumperGameManager_GetPlatformFeatureSubsystem_Params
	{
	public:
		class UPlatformFeatureSubsystem*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetLastFinishState
	 */
	struct UThumperGameManager_GetLastFinishState_Params
	{
	public:
		ELevelFinishState                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetLastFinishedLevelInformation
	 */
	struct UThumperGameManager_GetLastFinishedLevelInformation_Params
	{
	public:
		class ULevelInformation*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetDefaultVRComfortSettings
	 */
	struct UThumperGameManager_GetDefaultVRComfortSettings_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetDefaultVideoSettings
	 */
	struct UThumperGameManager_GetDefaultVideoSettings_Params
	{
	public:
		struct FVideoSettingsSaveData                              ReturnValue;                                             // 0x0000(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetDefaultSubtitleSettings
	 */
	struct UThumperGameManager_GetDefaultSubtitleSettings_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetDefaultAudioSettings
	 */
	struct UThumperGameManager_GetDefaultAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetCurrentLevelSaveData
	 */
	struct UThumperGameManager_GetCurrentLevelSaveData_Params
	{
	public:
		struct FLevelSaveData                                      ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetCounterForVictoryOrSave
	 */
	struct UThumperGameManager_GetCounterForVictoryOrSave_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetBuildType
	 */
	struct UThumperGameManager_GetBuildType_Params
	{
	public:
		EThumperBuildType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetBrightnessDeltaValue
	 */
	struct UThumperGameManager_GetBrightnessDeltaValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.GetActivityToLoad
	 */
	struct UThumperGameManager_GetActivityToLoad_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.FinishLevel
	 */
	struct UThumperGameManager_FinishLevel_Params
	{
	public:
		ELevelFinishState                                          LevelFinishState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.EndJumpscare
	 */
	struct UThumperGameManager_EndJumpscare_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.CurrentLevelHasBeenWonBefore
	 */
	struct UThumperGameManager_CurrentLevelHasBeenWonBefore_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.CurrentLevelHasBeenPlayedThroughBefore
	 */
	struct UThumperGameManager_CurrentLevelHasBeenPlayedThroughBefore_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.CurrentLevelHasBeenPlayedBefore
	 */
	struct UThumperGameManager_CurrentLevelHasBeenPlayedBefore_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.CurrentLevelHasBeenLostBefore
	 */
	struct UThumperGameManager_CurrentLevelHasBeenLostBefore_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameManager.ClearTagsForVictory
	 */
	struct UThumperGameManager_ClearTagsForVictory_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ClearSaveOnVictoryCounters
	 */
	struct UThumperGameManager_ClearSaveOnVictoryCounters_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ClearSaveGame
	 */
	struct UThumperGameManager_ClearSaveGame_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.BroadcastSaveTagsChangeEvent
	 */
	struct UThumperGameManager_BroadcastSaveTagsChangeEvent_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ApplyVRComfortSettings
	 */
	struct UThumperGameManager_ApplyVRComfortSettings_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ApplyVisualQualitySettings
	 */
	struct UThumperGameManager_ApplyVisualQualitySettings_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ApplySubtitleSettings
	 */
	struct UThumperGameManager_ApplySubtitleSettings_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.ApplyAudioSettings
	 */
	struct UThumperGameManager_ApplyAudioSettings_Params
	{	};

	/**
	 * Function Thumper.ThumperGameManager.AddTagForVictory
	 */
	struct UThumperGameManager_AddTagForVictory_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperGameMode.OnApplyAudioSettings
	 */
	struct AThumperGameMode_OnApplyAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              Settings;                                                // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.SetLevelSaveData
	 */
	struct UThumperSaveGame_SetLevelSaveData_Params
	{
	public:
		struct FLevelSaveData                                      LevelSaveData;                                           // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.SetCounterValue
	 */
	struct UThumperSaveGame_SetCounterValue_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.RemoveTag
	 */
	struct UThumperSaveGame_RemoveTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.IncrementCounterValue
	 */
	struct UThumperSaveGame_IncrementCounterValue_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.HasTag
	 */
	struct UThumperSaveGame_HasTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.GetLevelSaveDataByLevelInfo
	 */
	struct UThumperSaveGame_GetLevelSaveDataByLevelInfo_Params
	{
	public:
		class ULevelInformation*                                   LevelInformation;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLevelSaveData                                      ReturnValue;                                             // 0x0008(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.GetLevelSaveDataByLevelID
	 */
	struct UThumperSaveGame_GetLevelSaveDataByLevelID_Params
	{
	public:
		class FName                                                LevelID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLevelSaveData                                      ReturnValue;                                             // 0x0008(0x0014)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.GetCounterValue
	 */
	struct UThumperSaveGame_GetCounterValue_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.GetAllLevelData
	 */
	struct UThumperSaveGame_GetAllLevelData_Params
	{
	public:
		TArray<struct FLevelSaveData>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperSaveGame.AddTag
	 */
	struct UThumperSaveGame_AddTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperPlayerSettingsSave.GetVRComfortSettings
	 */
	struct UThumperPlayerSettingsSave_GetVRComfortSettings_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperPlayerSettingsSave.GetVideoSettings
	 */
	struct UThumperPlayerSettingsSave_GetVideoSettings_Params
	{
	public:
		struct FVideoSettingsSaveData                              ReturnValue;                                             // 0x0000(0x0024)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperPlayerSettingsSave.GetSubtitleSettings
	 */
	struct UThumperPlayerSettingsSave_GetSubtitleSettings_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperPlayerSettingsSave.GetAudioSettings
	 */
	struct UThumperPlayerSettingsSave_GetAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData
	 */
	struct UKismetPlayerSettingsibrary_NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          A;                                                       // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVRComfortSettingsSaveData                          B;                                                       // 0x0014(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.NotEqual_VideoSettingsSaveDataVideoSettingsSaveData
	 */
	struct UKismetPlayerSettingsibrary_NotEqual_VideoSettingsSaveDataVideoSettingsSaveData_Params
	{
	public:
		struct FVideoSettingsSaveData                              A;                                                       // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVideoSettingsSaveData                              B;                                                       // 0x0024(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.NotEqual_SubtitleSettingsSubtitleSettings
	 */
	struct UKismetPlayerSettingsibrary_NotEqual_SubtitleSettingsSubtitleSettings_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          A;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSubtitlesSettingsSaveData                          B;                                                       // 0x000C(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.NotEqual_AudioSettingsAudioSettings
	 */
	struct UKismetPlayerSettingsibrary_NotEqual_AudioSettingsAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              A;                                                       // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FAudioSettingsSaveData                              B;                                                       // 0x0014(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData
	 */
	struct UKismetPlayerSettingsibrary_EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData_Params
	{
	public:
		struct FVRComfortSettingsSaveData                          A;                                                       // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVRComfortSettingsSaveData                          B;                                                       // 0x0014(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData
	 */
	struct UKismetPlayerSettingsibrary_EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData_Params
	{
	public:
		struct FVideoSettingsSaveData                              A;                                                       // 0x0000(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVideoSettingsSaveData                              B;                                                       // 0x0024(0x0024)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.EqualExactly_SubtitleSettingsSubtitleSettings
	 */
	struct UKismetPlayerSettingsibrary_EqualExactly_SubtitleSettingsSubtitleSettings_Params
	{
	public:
		struct FSubtitlesSettingsSaveData                          A;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FSubtitlesSettingsSaveData                          B;                                                       // 0x000C(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.KismetPlayerSettingsibrary.EqualExactly_AudioSettingsAudioSettings
	 */
	struct UKismetPlayerSettingsibrary_EqualExactly_AudioSettingsAudioSettings_Params
	{
	public:
		struct FAudioSettingsSaveData                              A;                                                       // 0x0000(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FAudioSettingsSaveData                              B;                                                       // 0x0014(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Thumper.ThumperTestManager.RetryGenerateMenu
	 */
	struct UThumperTestManager_RetryGenerateMenu_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
