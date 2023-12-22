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
	 * Function BP_Breaker_LevelInformation.BP_Breaker_LevelInformation_C.GetBreakerRoomNightDifficulty
	 */
	struct UBP_Breaker_LevelInformation_C_GetBreakerRoomNightDifficulty_Params
	{
	public:
		Enum_RA_FTF_LevelDifficulty                                Difficulty;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
