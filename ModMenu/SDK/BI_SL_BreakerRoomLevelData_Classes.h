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
	 * BlueprintGeneratedClass BI_SL_BreakerRoomLevelData.BI_SL_BreakerRoomLevelData_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SL_BreakerRoomLevelData_C : public UInterface
	{
	public:
		void GetBreakerRoomNightDifficulty(Enum_RA_FTF_LevelDifficulty* Difficulty);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
