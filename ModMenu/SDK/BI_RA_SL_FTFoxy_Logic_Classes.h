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
	 * BlueprintGeneratedClass BI_RA_SL_FTFoxy_Logic.BI_RA_SL_FTFoxy_Logic_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_RA_SL_FTFoxy_Logic_C : public UInterface
	{
	public:
		void AdvanceFoxyPosition();
		void SetFoxyOwnerReference();
		void SetRunning(bool IsRunning);
		void SetSpotId(int32_t SetCurrentID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
