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
	 * BlueprintGeneratedClass BP_Breaker_LevelInformation.BP_Breaker_LevelInformation_C
	 * Size -> 0x0001 (FullSize[0x0129] - InheritedSize[0x0128])
	 */
	class UBP_Breaker_LevelInformation_C : public ULevelInformation
	{
	public:
		Enum_RA_FTF_LevelDifficulty                                Difficulty;                                              // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetBreakerRoomNightDifficulty(Enum_RA_FTF_LevelDifficulty* Difficulty);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
