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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Thumper.EBaBCharacterType
	 */
	enum class EBaBCharacterType : uint8_t
	{
		BonBon    = 0,
		Bonnet    = 1,
		PlushBaby = 2,
		Helpy     = 3,
		Eyes      = 4,
		Puppet    = 5,
		MAX       = 6
	};

	/**
	 * Enum Thumper.EPaintData
	 */
	enum class EPaintData : uint8_t
	{
		Clean      = 0,
		Red        = 1,
		Orange     = 2,
		Yellow     = 3,
		Green      = 4,
		Blue       = 5,
		Purple     = 6,
		Brown      = 7,
		Radium     = 8,
		NeonPink   = 9,
		NeonBlue   = 10,
		NeonYellow = 11,
		Glitter    = 12,
		MAX        = 13
	};

	/**
	 * Enum Thumper.EBonkABonHoleState
	 */
	enum class EBonkABonHoleState : uint8_t
	{
		CharacterIn  = 0,
		PoppingOut   = 1,
		CharacterOut = 2,
		PullingIn    = 3,
		MAX          = 4
	};

	/**
	 * Enum Thumper.EHeatGunMode
	 */
	enum class EHeatGunMode : uint8_t
	{
		Heat   = 0,
		Freeze = 1,
		MAX    = 2
	};

	/**
	 * Enum Thumper.ELevelCategory
	 */
	enum class ELevelCategory : uint8_t
	{
		Unknown        = 0,
		VictoryDefeat  = 1,
		Hub            = 2,
		Backstage      = 3,
		FoodPrep       = 4,
		StaffOnly      = 5,
		Fazcade        = 6,
		TicketBooth    = 7,
		SisterLocation = 8,
		PQ             = 9,
		Tutorial       = 10,
		Title          = 11,
		MAX            = 12
	};

	/**
	 * Enum Thumper.ELocalizationCulture
	 */
	enum class ELocalizationCulture : uint8_t
	{
		English               = 0,
		French                = 1,
		German                = 2,
		Italian               = 3,
		Portuguese_Brazil     = 4,
		Spanish_Latin_America = 5,
		Spanish_Spain         = 6,
		MAX                   = 7
	};

	/**
	 * Enum Thumper.ECompactShape
	 */
	enum class ECompactShape : uint8_t
	{
		Freddy = 0,
		Roxy   = 1,
		Chica  = 2,
		Monty  = 3,
		DJMM   = 4,
		Moon   = 5,
		MAX    = 6
	};

	/**
	 * Enum Thumper.EMakeupColor
	 */
	enum class EMakeupColor : uint8_t
	{
		Clean            = 0,
		Orange           = 1,
		Yellow           = 2,
		LimeGreen        = 3,
		RoyalBlue        = 4,
		Indigo           = 5,
		Red              = 6,
		Magenta          = 7,
		NeonPink         = 8,
		Lemon            = 9,
		Green            = 10,
		Turquoise        = 11,
		SeafoamGreen     = 12,
		TrueBlue         = 13,
		Purple           = 14,
		Lavender         = 15,
		IndianPaintBrush = 16,
		PalePink         = 17,
		Almond           = 18,
		CherryBlossom    = 19,
		DarkBeige        = 20,
		Brown            = 21,
		BurntOrange      = 22,
		Silver           = 23,
		MAX              = 24
	};

	/**
	 * Enum Thumper.EControllerStatus
	 */
	enum class EControllerStatus : uint8_t
	{
		Unknown    = 0,
		Tracked    = 1,
		NotTracked = 2,
		MAX        = 3
	};

	/**
	 * Enum Thumper.ETaskRound
	 */
	enum class ETaskRound : uint8_t
	{
		Undefined  = 0,
		RoundOne   = 1,
		RoundTwo   = 2,
		RoundThree = 3,
		MAX        = 4
	};

	/**
	 * Enum Thumper.EThumperBuildType
	 */
	enum class EThumperBuildType : uint8_t
	{
		Normal = 0,
		Demo   = 1,
		MAX    = 2
	};

	/**
	 * Enum Thumper.EJumpscareType
	 */
	enum class EJumpscareType : uint8_t
	{
		Lethal    = 0,
		NonLethal = 1,
		MAX       = 2
	};

	/**
	 * Enum Thumper.ELevelFinishState
	 */
	enum class ELevelFinishState : uint8_t
	{
		Unknown = 0,
		Defeat  = 1,
		Victory = 2,
		MAX     = 3
	};

	/**
	 * Enum Thumper.EColorBlindnessType
	 */
	enum class EColorBlindnessType : uint8_t
	{
		NORMALVISION = 0,
		DEUTERANOPE  = 1,
		PROTANOPE    = 2,
		TRITANOPE    = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Thumper.BaBCharacterData
	 * Size -> 0x0010
	 */
	struct FBaBCharacterData
	{
	public:
		float                                                      MinOutTime;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOutTime;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmountToSpawn;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Thumper.PrizeInfoPerLevel
	 * Size -> 0x0010
	 */
	struct FPrizeInfoPerLevel
	{
	public:
		TArray<class UPrizeInfo*>                                  PrizeInfoList;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Thumper.InstructionCardData
	 * Size -> 0x0040
	 */
	struct FInstructionCardData
	{
	public:
		class FText                                                CardDisplayText;                                         // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              CardImage[0x28];                                         // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Thumper.RoundStatus
	 * Size -> 0x0008
	 */
	struct FRoundStatus
	{
	public:
		unsigned char                                              UnknownData_5QOB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Thumper.LevelSaveData
	 * Size -> 0x0014
	 */
	struct FLevelSaveData
	{
	public:
		class FName                                                LevelID;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfTimesLoaded;                                     // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfVictories;                                       // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfDefeats;                                         // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Thumper.VideoSettingsSaveData
	 * Size -> 0x0024
	 */
	struct FVideoSettingsSaveData
	{
	public:
		EVisualQualityLevel                                        GlobalVideoSetting;                                      // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        AntiAliasSetting;                                        // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        CharacterSetting;                                        // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        EffectsSetting;                                          // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        EnviromentSetting;                                       // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        ReflectionSetting;                                       // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        ResolutionSetting;                                       // 0x0006(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        ShadowsSetting;                                          // 0x0007(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVisualQualityLevel                                        TextureSetting;                                          // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6M47[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrightnessSetting;                                       // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GammaSetting;                                            // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ContrastSetting;                                         // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EColorBlindnessType                                        ColorBlindOption;                                        // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00AQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ColorBlindSeverity;                                      // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELocalizationCulture                                       LocalizationChoice;                                      // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLNZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Thumper.SubtitlesSettingsSaveData
	 * Size -> 0x000C
	 */
	struct FSubtitlesSettingsSaveData
	{
	public:
		float                                                      VRSubtitleDepthScale;                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VRSubtitleHeightScale;                                   // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESubtitlesSize                                             SubtitlesSize;                                           // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A41X[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Thumper.AudioSettingsSaveData
	 * Size -> 0x0014
	 */
	struct FAudioSettingsSaveData
	{
	public:
		float                                                      MasterVolume;                                            // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundEffectsVolume;                                      // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpscareVolume;                                         // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoiceOverVolume;                                         // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MusicOverVolume;                                         // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Thumper.VRComfortSettingsSaveData
	 * Size -> 0x0014
	 */
	struct FVRComfortSettingsSaveData
	{
	public:
		float                                                      HeightAdjustmentScale;                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightAdjustment;                                        // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerRotationInputType                                   PlayerInputRotationType;                                 // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYLN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerRotationInputScale;                                // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertHandControls;                                     // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K55[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
