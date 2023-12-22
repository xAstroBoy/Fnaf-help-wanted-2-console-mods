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
	 * BlueprintGeneratedClass BP_FizzyFazLevelInformation.BP_FizzyFazLevelInformation_C
	 * Size -> 0x0004 (FullSize[0x012C] - InheritedSize[0x0128])
	 */
	class UBP_FizzyFazLevelInformation_C : public ULevelInformation
	{
	public:
		int32_t                                                    WhatNightIsIt;                                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetNightDifficulty(int32_t* NightDifficulty);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
