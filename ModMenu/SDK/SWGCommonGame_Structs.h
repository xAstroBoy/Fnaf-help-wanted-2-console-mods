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
	 * Enum SWGCommonGame.EActivityOutcome
	 */
	enum class EActivityOutcome : uint8_t
	{
		Completed = 0,
		Failed    = 1,
		Cancelled = 2,
		MAX       = 3
	};

	/**
	 * Enum SWGCommonGame.ESightType
	 */
	enum class ESightType : uint8_t
	{
		Cone    = 0,
		FOV     = 1,
		Frustum = 2,
		MAX     = 3
	};

	/**
	 * Enum SWGCommonGame.ESubtitlesSize
	 */
	enum class ESubtitlesSize : uint8_t
	{
		OFF    = 0,
		SMALL  = 1,
		MEDIUM = 2,
		LARGE  = 3,
		MAX    = 4
	};

	/**
	 * Enum SWGCommonGame.ESWGPlayVOExec
	 */
	enum class ESWGPlayVOExec : uint8_t
	{
		Completed = 0,
		Canceled  = 1,
		MAX       = 2
	};

	/**
	 * Enum SWGCommonGame.EVisualQualityLevel
	 */
	enum class EVisualQualityLevel : uint8_t
	{
		LOW    = 0,
		MEDIUM = 1,
		HIGH   = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SWGCommonGame.FlickerStepData
	 * Size -> 0x0008
	 */
	struct FFlickerStepData
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurationSeconds;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGCommonGame.RangedValueI
	 * Size -> 0x0008
	 */
	struct FRangedValueI
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGCommonGame.RangedValueF
	 * Size -> 0x0008
	 */
	struct FRangedValueF
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGCommonGame.TaggedRange
	 * Size -> 0x000C
	 */
	struct FTaggedRange
	{
	public:
		class FName                                                RangeTag;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangePercent;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGCommonGame.RangeArray
	 * Size -> 0x0010
	 */
	struct FRangeArray
	{
	public:
		TArray<struct FTaggedRange>                                Ranges;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGCommonGame.SubtitleRecord
	 * Size -> 0x0038
	 */
	struct FSubtitleRecord
	{
	public:
		class FText                                                Speaker;                                                 // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Subtitle;                                                // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      DisplayDuration;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6703[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SWGCommonGame.VisualQualitySettingsCommand
	 * Size -> 0x0020
	 */
	struct FVisualQualitySettingsCommand
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGCommonGame.LightFlickerProperties
	 * Size -> 0x0028
	 */
	struct FLightFlickerProperties
	{
	public:
		float                                                      DefaultIntensity;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIntensity;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRangedValueI                                       FlickerCount;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRangedValueF                                       Delay;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRangedValueF                                       StepIntensityPercentage;                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRangedValueF                                       TimeBetweenSteps;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
