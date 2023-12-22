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
	 * BlueprintGeneratedClass BP_SisterLocationLevelInformation.BP_SisterLocationLevelInformation_C
	 * Size -> 0x0001 (FullSize[0x0129] - InheritedSize[0x0128])
	 */
	class UBP_SisterLocationLevelInformation_C : public ULevelInformation
	{
	public:
		Enum_RA_SL_GameType                                        GameMode;                                                // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetNightData(Enum_RA_SL_GameType* GameMode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
