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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Thumper.ActivateByGameplayTag
	 * Size -> 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
	 */
	class UActivateByGameplayTag : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnTagActivation;                                         // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Tag;                                                     // 0x00C0(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x00C8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               NegativeGameplayTags;                                    // 0x00E8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7QON[0x50];                                  // 0x0108(0x0050) MISSED OFFSET (PADDING)

	public:
		void OnTagsChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ArtsAndCraftsPaintData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UArtsAndCraftsPaintData : public UPrimaryDataAsset
	{
	public:
		struct FVector                                             PaintColorCode;                                          // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPrimaryColor;                                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPaintData                                                 PaintColor;                                              // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R3Q[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PaintByNumbersValue;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAL1[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FVector GetPaintColorCode();
		int32_t GetPaintByNumbersValue();
		bool GetIsPrimaryColor();
		EPaintData GetAssetPaintColor();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.LevelInformation
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class ULevelInformation : public UPrimaryDataAsset
	{
	public:
		class FText                                                DisplayName;                                             // 0x0030(0x0018) Edit, NativeAccessSpecifierPrivate
		class FText                                                DisplayDescription;                                      // 0x0048(0x0018) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              LevelIcon[0x28];                                         // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LevelFolderIcon[0x28];                                   // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		ELevelCategory                                             Category;                                                // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TW41[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SequenceInCategory;                                      // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevelInformation*                                   RequiredUnlockLevel;                                     // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequiresInhibitor;                                      // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FZYJ[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        RequiredUnlockTag;                                       // 0x00C4(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z8ID[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Level[0x28];                                             // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InstructionSetData[0x28];                                // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsForDemo;                                              // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_826O[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (PADDING)

	public:
		bool UnlockRequiresInhibitor();
		bool IsForDemo();
		struct FGameplayTag GetUnlockTag();
		class ULevelInformation* GetRequiredUnlockLevel();
		int32_t GetLevelSequence();
		void GetLevelInstructionSetData();
		class FText GetLevelDisplayName();
		class FText GetLevelDisplayDescription();
		ELevelCategory GetLevelCategory();
		void GetLevel();
		void GetIcon();
		void GetFolderIcon();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.BaBLevelInformation
	 * Size -> 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
	 */
	class UBaBLevelInformation : public ULevelInformation
	{
	public:
		unsigned char                                              UnknownData_4A3I[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsNightmareMode;                                         // 0x0130(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KDEV[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.BaBLevelInformationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaBLevelInformationInterface : public UInterface
	{
	public:
		bool IsNightmareMode();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.BonkABonCharacterHole
	 * Size -> 0x0090 (FullSize[0x02B0] - InheritedSize[0x0220])
	 */
	class ABonkABonCharacterHole : public AActor
	{
	public:
		class FScriptMulticastDelegate                             OnBonkABonCharacterKilled;                               // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBonkABonCharacterHit;                                  // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHGI[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHitDetectionComponent*                              HitDetectionComponent;                                   // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RootSceneComponent;                                      // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       ObstructionDetector;                                     // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              MalletClass;                                             // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      fHoleCooldownTime;                                       // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3O57[0xC];                                   // 0x026C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      fHitCooldownTime;                                        // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BCAZ[0x34];                                  // 0x027C(0x0034) MISSED OFFSET (PADDING)

	public:
		void OnPullIn(bool bIsJumpscare);
		void OnPopOut();
		void OnHoleCooldownFinished();
		void OnHitDetected(class UHitDetectionComponent* HitDetection, class AActor* Hitter);
		void OnHitCooldownFinished(class AActor* Hitter);
		bool IsObstructed();
		bool IsInEditor();
		EBonkABonHoleState GetState();
		EBaBCharacterType GetCharacterType();
		void CharacterMovementFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.BonkABonRandomizer
	 * Size -> 0x0078 (FullSize[0x0298] - InheritedSize[0x0220])
	 */
	class ABonkABonRandomizer : public AActor
	{
	public:
		TArray<class ABonkABonCharacterHole*>                      CharacterHoles;                                          // 0x0220(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HD05[0x68];                                  // 0x0230(0x0068) MISSED OFFSET (PADDING)

	public:
		void StopRandomizer();
		void StartRandomizer(class UBonkABonSettings* BonkABonSettings);
		void SpawnCharactersInRandomHoles(TArray<EBaBCharacterType> Characters, float PopOutTime, bool bDisableDeath);
		void SetActiveCharacterHoles(TArray<class ABonkABonCharacterHole*> NewCharacterHoles);
		void ResumeRandomizer();
		void ResetCharacters();
		void PauseRandomizer();
		TArray<class ABonkABonCharacterHole*> GetAllCharacterHoles();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.BonkABonSettings
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UBonkABonSettings : public UPrimaryDataAsset
	{
	public:
		TMap<EBaBCharacterType, struct FBaBCharacterData>          CharacterInformation;                                    // 0x0030(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    TotalTime;                                               // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpawnTime;                                            // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpawnTime;                                            // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinToSpawn;                                              // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxToSpawn;                                              // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0ZP[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.BootupLevelInfo
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UBootupLevelInfo : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              ActivityNameToBootLevel[0x50];                           // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		void GetActivityLevelMap();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.CraneGameActor
	 * Size -> 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
	 */
	class ACraneGameActor : public AActor
	{
	public:
		class UCraneGameConfig*                                    CraneGameConfig;                                         // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      JumpscareActors;                                         // 0x0228(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseJumpscarePrize;                                      // 0x0238(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72P2[0x3F];                                  // 0x0239(0x003F) MISSED OFFSET (PADDING)

	public:
		void OnPrizesReady();
		bool HasLoadedPrizes();
		TArray<class UPrizeInfo*> GetChosenPrizes();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.CraneGameConfig
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UCraneGameConfig : public UPrimaryDataAsset
	{
	public:
		class UPrizeInfo*                                          FazwrenchInfo;                                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FazwrenchVictories;                                      // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentChanceOfJumpscare;                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrizeInfo*                                          NothingLeftPrize;                                        // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class ULevelInformation*, struct FPrizeInfoPerLevel>  PrizeInfoPerLevel;                                       // 0x0048(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.DJMMDifficultySetting
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDJMMDifficultySetting : public UPrimaryDataAsset
	{
	public:
		int32_t                                                    NumberOfRounds;                                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfReplays;                                         // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfSubmits;                                         // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondsPerRound;                                         // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinNumberOfChannels;                                     // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfChannels;                                     // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMiniMusicMen;                                         // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MiniMusicManStartRound;                                  // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManSpawnMinTime;                                // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManSpawnMaxTime;                                // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManWaitMinTime;                                 // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManWaitMaxTime;                                 // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBoardMiniMusicMan;                                   // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNLW[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MiniMusicManBoardStartRound;                             // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManBoardMinTime;                                // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManBoardMaxTime;                                // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManBoardAttackMinTime;                          // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiniMusicManBoardAttackMaxTime;                          // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.DJMMLevelInformation
	 * Size -> 0x0010 (FullSize[0x0138] - InheritedSize[0x0128])
	 */
	class UDJMMLevelInformation : public ULevelInformation
	{
	public:
		unsigned char                                              UnknownData_J6MQ[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDJMMDifficultySetting*                              DifficultySetting;                                       // 0x0130(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.DJMMLevelInformationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDJMMLevelInformationInterface : public UInterface
	{
	public:
		class UDJMMDifficultySetting* GetDifficultySetting();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.FazerblastGallerySettings
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UFazerblastGallerySettings : public UPrimaryDataAsset
	{
	public:
		float                                                      BeatsPerMinute;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinPointsToPassLevel;                                    // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Night;                                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseFazerblaster;                                        // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseDartGun;                                             // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseBalls;                                               // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPlushBabyEnabled;                                       // 0x003F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlushBabyMinSpawnTime;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PlushBabySpawnTimeVarience;                              // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ThrownBallAimAssistRadius;                               // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DreadbearMeterAggressionStartRate;                       // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DreadbearMeterAggressionEndRate;                         // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DreadbearMeterAggressionIncreaseAmount;                  // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    TargetBase;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X2QT[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool GetUseFazerblaster();
		bool GetUseDartGun();
		bool GetUseBalls();
		float GetThrownBallAimAssitRadius();
		int32_t GetTargetBase();
		float GetPlushBabySpawnTimeVarience();
		float GetPlushBabyMinSpawnTime();
		bool GetPlushBabyEnabled();
		int32_t GetNight();
		int32_t GetMinPointsToPassLevel();
		float GetDreadbearMeterAggressionStartRate();
		float GetDreadbearMeterAggressionIncreaseAmount();
		float GetDreadbearMeterAggressionEndRate();
		float GetBeatsPerMinute();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.FazerblastLevelSystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFazerblastLevelSystem : public UGameInstanceSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SpawnPoint
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ASpawnPoint : public AActor
	{
	public:
		class UBillboardComponent*                                 BillboardComponent;                                      // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool IsPossibleSpawnPoint(class UObject* UserData);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.FlashlightTestedSpawnPoint
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AFlashlightTestedSpawnPoint : public ASpawnPoint
	{
	public:
		class UFlashlightReactionComponent*                        FlashlightReactionComponent;                             // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.FoodPrepItemComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UFoodPrepItemComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IOGF[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsOnTray(bool Value);
		void SetIsInSocket(bool Value);
		void SetIsInArmsReach(bool Value);
		void SetIsHeld(bool Value);
		void OnOwnerReleased(class AActor* Actor);
		void OnOwnerGrabbed(class AActor* Actor);
		bool GetIsHeld();
		bool CanBeCulled();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.GalleryManager
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AGalleryManager : public AActor
	{
	public:
		struct FGameplayTag                                        EndingGalleryObject;                                     // 0x0220(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ShowEndingGalleryObject;                                 // 0x0228(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UGalleryObjectInfo*>                          GalleryObjectInfos;                                      // 0x0230(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGalleryObjectInfo*>                          UnlockedGalleryObjectInfos;                              // 0x0240(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		bool ShouldShowEndingGalleryObject();
		void SetShouldShowEndingGalleryObject(bool bShow);
		void OnGalleryFinishedLoading();
		void LoadGalleryInfo();
		bool HasEndingGalleryObject();
		void GetGalleryInfo(int32_t InfoIndex, int32_t* OutActualIndex, class UGalleryObjectInfo** OutGalleryObjectInfo);
		class UGalleryObjectInfo* GetEndingGalleryObject();
		bool AwardEndingGalleryObjectIfPossible();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.GalleryObjectInfo
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UGalleryObjectInfo : public UPrimaryDataAsset
	{
	public:
		class FText                                                ObjectName;                                              // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              ObjectClass[0x28];                                       // 0x0048(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              Icon[0x28];                                              // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        UnlockTag;                                               // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurtain;                                             // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ9P[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.HeatGunActor
	 * Size -> 0x00A0 (FullSize[0x02E8] - InheritedSize[0x0248])
	 */
	class AHeatGunActor : public AGunActor
	{
	public:
		bool                                                       bCanUseGun;                                              // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YB2O[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   DetectionColliderCapsule;                                // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGrabHighlightComponent*                             GrabHighlightComponent;                                  // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USocketComponent*                                    DialSocket;                                              // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EHeatGunMode                                               HeatGunMode;                                             // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K69G[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DegreesPerSecond;                                        // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                DialRangeForHeating;                                     // 0x0270(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                DialRangeForCooling;                                     // 0x0278(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioSetToHot;                                           // 0x0280(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioSetToCold;                                          // 0x0288(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioTriggerPressed;                                     // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioTriggerReleased;                                    // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioHeatLoop;                                           // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HeatLoopDelay;                                           // 0x02A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8ZY0[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AudioCoolLoop;                                           // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CoolLoopDelay;                                           // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZXY[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AudioHeatStop;                                           // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioCoolStop;                                           // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          AudioCannotUseGun;                                       // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0O2D[0x10];                                  // 0x02D8(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopLoopAudio();
		void SetCanUseGun(bool inCanUseGun);
		void OnHeatModeChanged(EHeatGunMode NewMode);
		void OnDialSocketed(class USocketComponent* SocketComponent, class AActor* ActorBeingSocketed);
		void OnDialRemoved(class USocketComponent* SocketComponent, class AActor* ActorBeingRemoved, ESocketActorRemoveReason RemoveReason);
		void OnDialRangeChanged(class ADial* Dial, const class FName& OldRangeName, const class FName& NewRangeName);
		EHeatGunMode GetCurrentHeatMode();
		bool GetCanUseGun();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.Joystick
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class AJoystick : public AActor
	{
	public:
		unsigned char                                              UnknownData_DFJT[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     JoystickRoot;                                            // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     JoystickRotationRoot;                                    // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                JoystickMesh;                                            // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1BZP[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      ControllableActors;                                      // 0x0248(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      MaxAngleDegrees;                                         // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CXMY[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DeadZoneCurve;                                           // 0x0260(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LCBJ[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.JoystickControllable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJoystickControllable : public UInterface
	{
	public:
		void OnVectorInput(const struct FVector2D& VectorInput);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.JumpscareBoundaryAction
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UJumpscareBoundaryAction : public UBoundaryHandlerAction
	{
	public:
		unsigned char                                              JumpscareInitiatorActor[0x28];                           // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USoundBase*                                          SoundToPlayBeforeJumpscare;                              // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void PerformJumpscare();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.JumpscareFinishProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJumpscareFinishProvider : public UInterface
	{
	public:
		bool IsJumpscareFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.JumpscareHandlerActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AJumpscareHandlerActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_RUBX[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.JumpscareInitiator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UJumpscareInitiator : public UInterface
	{
	public:
		void InitiateJumpscare();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.JumpscarePawn
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class AJumpscarePawn : public APawn
	{
	public:
		class USceneComponent*                                     PawnOrigin;                                              // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     VROrigin;                                                // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCameraComponent*                                    CameraComponent;                                         // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.LevelInstructionSetData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULevelInstructionSetData : public UPrimaryDataAsset
	{
	public:
		TArray<struct FInstructionCardData>                        InstructionCards;                                        // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.LevelSystem
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class ULevelSystem : public UGameInstanceSubsystem
	{
	public:
		class FScriptMulticastDelegate                             OnStartedLevelLoad;                                      // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FName, class ULevelInformation*>                LevelInformationMap;                                     // 0x0040(0x0050) NativeAccessSpecifierPrivate
		class ULevelSystemInformation*                             LevelSystemInformation;                                  // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_85P0[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (PADDING)

	public:
		void WaitForLevelInfo(TArray<class ULevelInformation*>* OutLevelInformations, const struct FLatentActionInfo& LatentActionInfo);
		void ReloadCurrentLevel();
		void LoadVictoryDefeat();
		void LoadTutorialRoom(class ULevelInformation* LevelToLoadAfterTutorial);
		void LoadTitle();
		void LoadMainHUB();
		void LoadLevelByName(const class FName& LevelName);
		void LoadLevelByInfo(class ULevelInformation* LevelInformation);
		void LoadAfterTutorial();
		bool IsLoadingLevel();
		bool IsLevelInfoLoaded();
		bool IsCurrentLevelVictoryDefeat();
		bool IsCurrentLevelMainHUB();
		class FText GetTextFromLevelCategory(ELevelCategory LevelCategory);
		class ULevelInformation* GetMainHUBLevelInformation();
		TArray<class ULevelInformation*> GetLevelsForCategoryOrdered(ELevelCategory LevelCategory);
		TArray<class ULevelInformation*> GetLevelsForCategory(ELevelCategory LevelCategory);
		class ULevelInformation* GetLevelInformationByName(const class FName& LevelName);
		class ULevelInformation* GetLevelByCategoryAndSequence(ELevelCategory LevelCategory, int32_t LevelSequenceNumber);
		class ULevelInformation* GetLevelAfterTutorial();
		class ULevelInformation* GetCurrentLevelInformation();
		TArray<class ULevelInformation*> GetAllLevelInformation();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.LevelSystemInformation
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class ULevelSystemInformation : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              MainHubInformation[0x28];                                // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DemoMainHubInformation[0x28];                            // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TutorialRoomInformation[0x28];                           // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TitleInformation[0x28];                                  // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<ELevelCategory, class FText>                          LevelCategoryDisplayNames;                               // 0x00D0(0x0050) Edit, NativeAccessSpecifierPrivate
		class UBootupLevelInfo*                                    ActivityLevelsToLoad;                                    // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void GetTutorialRoomInformation();
		void GetTitleInformation();
		class FText GetTextFromCategory(ELevelCategory LevelCategory);
		void GetMainHubInformation();
		class ULevelInformation* GetLevelInfoFromActivityName(const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.Localization
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULocalization : public UBlueprintFunctionLibrary
	{
	public:
		ELocalizationCulture GetLocalizationCultureFromSteam();
		ELocalizationCulture GetCurrentLocalizationCulture();
		void ChangeLocalizationCulture(ELocalizationCulture Culture);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.MainDishData
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UMainDishData : public UPrimaryDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           CookedColorMaterial;                                     // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         UncookedMesh;                                            // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CookedMesh;                                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.MakeupColorData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UMakeupColorData : public UPrimaryDataAsset
	{
	public:
		EMakeupColor                                               MakeupColor;                                             // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECompactShape                                              CompactShape;                                            // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGQM[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MakeupColorCode;                                         // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaterialMask;                                            // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileParam;                                               // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		float GetTileParam();
		struct FVector GetMaterialMask();
		struct FVector GetMakeupColorCode();
		ECompactShape GetCompactShape();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.MenuComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class UMenuComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_1UIR[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPauseMenuShowHide;                                     // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              MenuWidgetActorClass;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              FlatModeWidgetClass;                                     // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PausePlayerClass;                                        // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             PausePawnSpawnLocation;                                  // 0x00E0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HNNX[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputMappingContext*                                MenuMappingContext;                                      // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      DistanceFromCamera;                                      // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BUV4[0x1C];                                  // 0x00FC(0x001C) MISSED OFFSET (PADDING)

	public:
		void ShowMenu();
		void SetMenuWidgetActorClass(class UClass* InNewClass);
		void SetFlatModeWidgetClass(class UClass* InNewClass);
		void OnVRModeChanged(ESWGVRMode NewVRMode);
		void HideMenu();
		class UClass* GetMenuWidgetActorClass();
		class UClass* GetFlatModeWidgetClass();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PausePlayer
	 * Size -> 0x0050 (FullSize[0x0550] - InheritedSize[0x0500])
	 */
	class APausePlayer : public ASWGVRBasePlayerCharacter
	{
	public:
		class UVRPlayerWidgetInteractor*                           WidgetInteractor;                                        // 0x0500(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetComponent*                                    PauseWidget;                                             // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                DarkBackground;                                          // 0x0510(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               OriginalPlayerPawn;                                      // 0x0518(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMenuComponent*                                      MenuComponent;                                           // 0x0520(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2ZJ[0x28];                                  // 0x0528(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PausePlayerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPausePlayerInterface : public UInterface
	{
	public:
		void ReturnToGameplay();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PlayerHeightAdjustGadget
	 * Size -> 0x0098 (FullSize[0x02B8] - InheritedSize[0x0220])
	 */
	class APlayerHeightAdjustGadget : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UChildActorComponent*                                IncreaseButton;                                          // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UChildActorComponent*                                DecreaseButton;                                          // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UChildActorComponent*                                ResetHeightButton;                                       // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OF9[0x78];                                  // 0x0240(0x0078) MISSED OFFSET (PADDING)

	public:
		void OnResetPressed(class AButtonBase* Button);
		void OnIncreasePressed(class AButtonBase* Button);
		void OnDecreasePressed(class AButtonBase* Button);
		void AdjustHeight(bool bUp);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PlayerHeightAdjustGadgetComponent
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UPlayerHeightAdjustGadgetComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_4Z4P[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputAction*                                        ToggleHeightAdjustAction;                                // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                ToggleHeightAdjustContext;                               // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHeightAdjustEnable;                                     // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1H4L[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HeightAdjusterClass;                                     // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SpawnDistance;                                           // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z2KY[0x34];                                  // 0x00DC(0x0034) MISSED OFFSET (PADDING)

	public:
		void SetHeightAdjustEnable(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PQ4Pawn2DMovementComponent
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UPQ4Pawn2DMovementComponent : public UPawnMovementComponent
	{
	public:
		float                                                      MaxWalkSpeed;                                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9UI0[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetPawnLocation(const struct FVector& InWorldLocation);
		void MovePawn(const struct FVector2D& InMoveVector);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PrizeActorBase
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class APrizeActorBase : public AActor
	{
	public:
		class UActivateByGameplayTag*                              ActivateByGameplayTag;                                   // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.PrizeInfo
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UPrizeInfo : public UPrimaryDataAsset
	{
	public:
		class FText                                                PrizeDisplayName;                                        // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PrizeTag;                                                // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PrizeImage[0x28];                                        // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.RandomTextGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URandomTextGenerator : public UBlueprintFunctionLibrary
	{
	public:
		void RandomizePortionOfString(int32_t MinCharsToRandomize, int32_t MaxCharsToRandomize, class FString* InOutString);
		class FString GetPossibleChars();
		void CreateRandomString(int32_t MinLen, int32_t MaxLen, class FString* OutString);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.RoundSequence
	 * Size -> 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
	 */
	class ARoundSequence : public AActor
	{
	public:
		TMap<ETaskRound, int32_t>                                  TasksPerRound;                                           // 0x0220(0x0050) Edit, Protected, NativeAccessSpecifierProtected
		struct FRoundStatus                                        CurrentRoundStatus;                                      // 0x0270(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		TMap<ETaskRound, class ATaskList*>                         ListOfRounds;                                            // 0x0278(0x0050) BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             ReadyToFadeInDelegate;                                   // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             RoundCompleteDelegate;                                   // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             GameCompleteDelegate;                                    // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             TaskStartedDelegate;                                     // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D8DP[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (PADDING)

	public:
		void TaskComplete(class ATask* CompletedTask);
		void StartRound(ETaskRound CurrentRound);
		void StartNextRound();
		void PopulateTaskLists();
		void FinalRoundComplete();
		void EndRound(ETaskRound CurrentRound);
		void DeactivateObjectsForRound(ETaskRound CurrentRound);
		void ActivateObjectsForRound(ETaskRound CurrentRound);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SauceData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USauceData : public UPrimaryDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ColorMaterial;                                           // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Diffuse;                                                 // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Normals;                                                 // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            ORM;                                                     // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SecurityCamera
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ASecurityCamera : public AActor
	{
	public:
		class USceneCaptureComponent2D*                            CameraCapture;                                           // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopCamera();
		void StartCamera();
		void SetTextureRenderTarget(class UTextureRenderTarget2D* InTextureRenderTarget);
		bool IsCameraActive();
		class UTextureRenderTarget2D* GetTextureRenderTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SecurityCameraSystem
	 * Size -> 0x0088 (FullSize[0x00C8] - InheritedSize[0x0040])
	 */
	class USecurityCameraSystem : public UTickableWorldSubsystem
	{
	public:
		TArray<class ASecurityCamera*>                             RegisteredSecurityCameras;                               // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class ASecurityCamera*>                             ActiveSecurityCameras;                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UTextureRenderTarget2D*>                      TextureRenderTargets;                                    // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8881[0x58];                                  // 0x0070(0x0058) MISSED OFFSET (PADDING)

	public:
		TArray<class ASecurityCamera*> GetAllSecurityCameras();
		TArray<class ASecurityCamera*> GetActiveSecurityCameras();
		void DeactivateCamera(class ASecurityCamera* SecurityCamera);
		void ActivateCamera(class ASecurityCamera* SecurityCamera);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SideDishData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class USideDishData : public UPrimaryDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ColorMaterial;                                           // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SlushyData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USlushyData : public UPrimaryDataAsset
	{
	public:
		class USodaData*                                           RequiredSoda;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USideDishData*                                       RequiredSide;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USodaData*                                           Data;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SpawnPointSystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USpawnPointSystem : public UWorldSubsystem
	{
	public:
		TArray<class ASpawnPoint*>                                 SpawnPoints;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		TArray<class ASpawnPoint*> GetPossibleSpawnPoints(class UObject* UserData);
		TArray<class ASpawnPoint*> GetAllSpawnPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.StaticDisplayInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStaticDisplayInterface : public UInterface
	{
	public:
		void ShowStatic(bool bShow);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SystemEventsPauser
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class USystemEventsPauser : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.Task
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ATask : public AActor
	{
	public:
		TArray<class AActor*>                                      RelevantObjects;                                         // 0x0220(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ETaskRound                                                 RoundForTask;                                            // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYKR[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        InjuryTag;                                               // 0x0234(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P77Q[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TaskCompleteDelegate;                                    // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ToggleTaskActors(bool bActive);
		void TaskComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.TaskList
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ATaskList : public AActor
	{
	public:
		TArray<class ATask*>                                       TasksToComplete;                                         // 0x0220(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void RandomlyTrimToSize(int32_t Size);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.TemperatureHandler
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UTemperatureHandler : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnTemperatureChanged;                                    // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTemperatureMaxReached;                                 // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTemperatureMinReached;                                 // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeperatureRangeChanged;                                // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MinTemperature;                                          // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxTemperature;                                          // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StartingTemperature;                                     // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                RequiredPrimitiveComponentName;                          // 0x00FC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableTemperatureChange;                                // 0x0104(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VB93[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DegreesPerSecond;                                        // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IOGN[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URangeAsset*                                         RangeAsset;                                              // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRangeArray                                         TemperatureRanges;                                       // 0x0118(0x0010) Edit, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PDBH[0x18];                                  // 0x0128(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTemperatureInDegrees(float InDegrees);
		void SetTemperatureChangeEnable(bool bEnable);
		void SetTemperatureChange(float InDegreesPerSecond);
		void HandleTemperatureChange(float ChangeInDegrees);
		float GetTemperaturePercentage();
		float GetTemperatureInDegrees();
		bool GetTemperatureChangeEnable();
		float GetNormalizedTemperature();
		int32_t GetMinTemperature();
		int32_t GetMaxTemperature();
		bool CanChangeTemperature(class UPrimitiveComponent* PrimitiveComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.TemperatureManager
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class ATemperatureManager : public AActor
	{
	public:
		unsigned char                                              TemperatureHandlerActors[0x10];                          // 0x0220(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_2POT[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnHandlerActorDestroyed(class AActor* DestroyedActor);
		float GetCombinedTemperaturePercent();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.TemperatureMaterialHandler
	 * Size -> 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
	 */
	class UTemperatureMaterialHandler : public UTemperatureHandler
	{
	public:
		class FName                                                MaterialParameterName;                                   // 0x0140(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                MeshComponentName;                                       // 0x0148(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.TempJumpscareHandler
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ATempJumpscareHandler : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              JumpscareMesh;                                           // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2EOW[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperAssetManager
	 * Size -> 0x0000 (FullSize[0x0478] - InheritedSize[0x0478])
	 */
	class UThumperAssetManager : public UAssetManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperCheatManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UThumperCheatManager : public UCheatManagerExtension
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperCheatsData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UThumperCheatsData : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              SpecificLevelCheatData[0x50];                            // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperGameManager
	 * Size -> 0x01B0 (FullSize[0x01E0] - InheritedSize[0x0030])
	 */
	class UThumperGameManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_62B3[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSaveTagsChanged;                                       // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSaveSettingsComplete;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadSettingsComplete;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSaveGameStarted;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSaveGameComplete;                                      // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                HighScoreTags;                                           // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class UThumperSaveGame*                                    SaveGameData;                                            // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UThumperPlayerSettingsSave*                          PlayerSettingsData;                                      // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          JumpscareStaticSound;                                    // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UHapticFeedbackEffect_Base*                          JumpscareHapticDefault;                                  // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0W9C[0x128];                                 // 0x00B8(0x0128) MISSED OFFSET (PADDING)

	public:
		void WaitForLevelLoad(bool bUnused, const struct FLatentActionInfo& LatentActionInfo);
		void VisualQualityDataLoaded();
		void UnlockAllLevels();
		void UnlockAchievement(const class FString& AchievementID);
		void SwitchOnBuildType(EThumperBuildType* BuildType);
		void StartJumpscare(EJumpscareType JumpscareType, bool bUseTemporary, class USceneComponent* AttachToComponent, const class FName& SocketName, class UHapticFeedbackEffect_Base* HapticEffect, class UObject* JumpscareFinisher);
		void SetVRComfortSettings(const struct FVRComfortSettingsSaveData& Settings);
		void SetVideoSettings(const struct FVideoSettingsSaveData& Settings);
		void SetSubtitleSettings(const struct FSubtitlesSettingsSaveData& Settings);
		void SetSteamDefaultCulture(ELocalizationCulture Culture);
		void SetPlayerInputsEnabled(bool bEnable);
		void SetPlayerHeightOffset(float Offset);
		void SetNextJumpscareLoadLevel(class ULevelInformation* LevelInformation);
		void SetCounterForVictory(const struct FGameplayTag& Tag, int32_t Value);
		void SetAudioSettings(const struct FAudioSettingsSaveData& Settings);
		bool SetAndCheckAllHighScoresForAchieve(const struct FGameplayTag& SetNewScore);
		void SavePlayerSettings();
		void SaveGame();
		void RegisterActivityCallback();
		void ProgressAchievement(const class FString& AchievementID, int32_t Progress, const class FString& StatName);
		void OnLevelLoadStarted(class ULevelInformation* LevelInformation);
		void LoadSaveGame(const class FString& SaveGameSlotName);
		void LoadPlayerSettings(const class FString& SaveGameSlotName);
		void LoadLevelViaActivity(const class FString& ActivityName);
		class UClass* LoadLevelCheatMenu(class ULevelInformation* LevelInformation);
		void LoadCurrentLevelInstructionSetData(bool bUnused, const struct FLatentActionInfo& LatentActionInfo, class ULevelInstructionSetData** InstructionSetData);
		class UClass* LoadCheatMenu();
		void LoadAnimCheatManagerForCurrentLevel();
		bool LevelHasBeenWonBefore(class ULevelInformation* LevelInformation);
		bool LevelHasBeenPlayedBefore(class ULevelInformation* LevelInformation);
		bool IsSavingGame();
		bool IsRetry();
		bool IsPlayingFromTutorial();
		bool IsLoadingLevel();
		bool IsLevelUnlockedWithoutInhibitor(class ULevelInformation* LevelInformation);
		bool IsLevelUnlockedInSequence(class ULevelInformation* LevelInformation);
		bool IsLevelUnlocked(class ULevelInformation* LevelInformation);
		bool IsJumpScareInProgress();
		void IncrementCounterForVictory(const struct FGameplayTag& Tag);
		bool HasTagForVictory(const struct FGameplayTag& Tag);
		bool HasSavedTag(const struct FGameplayTag& Tag);
		bool HasSavedOrForVictoryTag(const struct FGameplayTag& Tag);
		bool HasSaveData();
		bool HasPlayerSettingsSave();
		class UThumperSaveGame* GetSaveGame();
		class UThumperPlayerSettingsSave* GetPlayerSettings();
		class UPlatformFeatureSubsystem* GetPlatformFeatureSubsystem();
		ELevelFinishState GetLastFinishState();
		class ULevelInformation* GetLastFinishedLevelInformation();
		struct FVRComfortSettingsSaveData GetDefaultVRComfortSettings();
		struct FVideoSettingsSaveData GetDefaultVideoSettings();
		struct FSubtitlesSettingsSaveData GetDefaultSubtitleSettings();
		struct FAudioSettingsSaveData GetDefaultAudioSettings();
		struct FLevelSaveData GetCurrentLevelSaveData();
		int32_t GetCounterForVictoryOrSave(const struct FGameplayTag& Tag);
		EThumperBuildType GetBuildType();
		float GetBrightnessDeltaValue();
		class FString GetActivityToLoad();
		void FinishLevel(ELevelFinishState LevelFinishState);
		void EndJumpscare();
		bool CurrentLevelHasBeenWonBefore();
		bool CurrentLevelHasBeenPlayedThroughBefore();
		bool CurrentLevelHasBeenPlayedBefore();
		bool CurrentLevelHasBeenLostBefore();
		void ClearTagsForVictory();
		void ClearSaveOnVictoryCounters();
		void ClearSaveGame();
		void BroadcastSaveTagsChangeEvent();
		void ApplyVRComfortSettings();
		void ApplyVisualQualitySettings();
		void ApplySubtitleSettings();
		void ApplyAudioSettings();
		void AddTagForVictory(const struct FGameplayTag& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperGameMode
	 * Size -> 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
	 */
	class AThumperGameMode : public AGameMode
	{
	public:
		void OnApplyAudioSettings(const struct FAudioSettingsSaveData& Settings);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperLevelCheatData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UThumperLevelCheatData : public UPrimaryDataAsset
	{
	public:
		unsigned char                                              LevelCheatMenu[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              AnimCheatManagerClass[0x28];                             // 0x0058(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperManagerData
	 * Size -> 0x0120 (FullSize[0x0158] - InheritedSize[0x0038])
	 */
	class UThumperManagerData : public UDeveloperSettings
	{
	public:
		EThumperBuildType                                          TestBuildType;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXV0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              StaticDisplayWidget;                                     // 0x0040(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticDisplayWidgetMaterial[0x28];                       // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StaticAudio[0x28];                                       // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              JumpscareHapticDefault[0x28];                            // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      SecondsOfStatic;                                         // 0x00C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAfterFade;                                        // 0x00C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsOfFade;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelWaitFadeInSeconds;                                  // 0x00CC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LevelFadeInSeconds;                                      // 0x00D0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBrightnessDelta;                                      // 0x00D4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        InhibitorTag;                                            // 0x00D8(0x0008) Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ConduitTag;                                              // 0x00E0(0x0008) Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CoinInsertedTag;                                         // 0x00E8(0x0008) Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayerHeightAdjustmentInCm;                           // 0x00F0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayerHeightAdjustmentInCm;                           // 0x00F4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               AchievementMaxStatValues;                                // 0x00F8(0x0050) Edit, Config, NativeAccessSpecifierPublic
		TArray<class FString>                                      AchieveLevelsToIgnore;                                   // 0x0148(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperPlayerController
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class AThumperPlayerController : public APlayerController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperPlayerHeightAdjustComponent
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UThumperPlayerHeightAdjustComponent : public UPlayerHeightAdjustComponent
	{
	public:
		class UInputMappingContext*                                HeightToggleInputMappingContext;                         // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        HeightToggleInputAction;                                 // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              HeightAdjustWidgetActorClass;                            // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VO1Y[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperSaveGame
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UThumperSaveGame : public USaveGame
	{
	public:
		TArray<struct FLevelSaveData>                              LevelSaveDataList;                                       // 0x0028(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPrivate
		unsigned char                                              SavedTags[0x50];                                         // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<struct FGameplayTag, int32_t>                         TaggedCounters;                                          // 0x0088(0x0050) SaveGame, NativeAccessSpecifierPrivate

	public:
		void SetLevelSaveData(const struct FLevelSaveData& LevelSaveData);
		void SetCounterValue(const struct FGameplayTag& Tag, int32_t NewValue);
		void RemoveTag(const struct FGameplayTag& Tag);
		void IncrementCounterValue(const struct FGameplayTag& Tag);
		bool HasTag(const struct FGameplayTag& Tag);
		struct FLevelSaveData GetLevelSaveDataByLevelInfo(class ULevelInformation* LevelInformation);
		struct FLevelSaveData GetLevelSaveDataByLevelID(const class FName& LevelID);
		int32_t GetCounterValue(const struct FGameplayTag& Tag);
		TArray<struct FLevelSaveData> GetAllLevelData();
		void AddTag(const struct FGameplayTag& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperPlayerSettingsSave
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UThumperPlayerSettingsSave : public USaveGame
	{
	public:
		struct FVideoSettingsSaveData                              VideoSettings;                                           // 0x0028(0x0024) SaveGame, NoDestructor, NativeAccessSpecifierPrivate
		struct FSubtitlesSettingsSaveData                          SubtitleSettings;                                        // 0x004C(0x000C) SaveGame, NoDestructor, NativeAccessSpecifierPrivate
		struct FAudioSettingsSaveData                              AudioSettings;                                           // 0x0058(0x0014) SaveGame, NoDestructor, NativeAccessSpecifierPrivate
		struct FVRComfortSettingsSaveData                          VRComfortSettings;                                       // 0x006C(0x0014) SaveGame, NoDestructor, NativeAccessSpecifierPrivate

	public:
		struct FVRComfortSettingsSaveData GetVRComfortSettings();
		struct FVideoSettingsSaveData GetVideoSettings();
		struct FSubtitlesSettingsSaveData GetSubtitleSettings();
		struct FAudioSettingsSaveData GetAudioSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.KismetPlayerSettingsibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKismetPlayerSettingsibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool NotEqual_VRComfortSettingsSaveDataVRComfortSettingsSaveData(const struct FVRComfortSettingsSaveData& A, const struct FVRComfortSettingsSaveData& B);
		bool NotEqual_VideoSettingsSaveDataVideoSettingsSaveData(const struct FVideoSettingsSaveData& A, const struct FVideoSettingsSaveData& B);
		bool NotEqual_SubtitleSettingsSubtitleSettings(const struct FSubtitlesSettingsSaveData& A, const struct FSubtitlesSettingsSaveData& B);
		bool NotEqual_AudioSettingsAudioSettings(const struct FAudioSettingsSaveData& A, const struct FAudioSettingsSaveData& B);
		bool EqualExactly_VRComfortSettingsSaveDataVRComfortSettingsSaveData(const struct FVRComfortSettingsSaveData& A, const struct FVRComfortSettingsSaveData& B);
		bool EqualExactly_VideoSettingsSaveDataVideoSettingsSaveData(const struct FVideoSettingsSaveData& A, const struct FVideoSettingsSaveData& B);
		bool EqualExactly_SubtitleSettingsSubtitleSettings(const struct FSubtitlesSettingsSaveData& A, const struct FSubtitlesSettingsSaveData& B);
		bool EqualExactly_AudioSettingsAudioSettings(const struct FAudioSettingsSaveData& A, const struct FAudioSettingsSaveData& B);
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ThumperTestManager
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UThumperTestManager : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_9EA1[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		void RetryGenerateMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.ToppingData
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UToppingData : public UPrimaryDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ColorMaterial;                                           // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         StaticMesh;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Thumper.SodaData
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USodaData : public UPrimaryDataAsset
	{
	public:
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ColorMaterial;                                           // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         FilledMesh;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
