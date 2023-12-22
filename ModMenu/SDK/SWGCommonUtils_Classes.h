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
	 * Class SWGCommonUtils.SWGDebugUtilFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGDebugUtilFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void SWGAssert(bool Condition, const class FString& InMessage, int32_t MsgDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
