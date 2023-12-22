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
	 * BlueprintGeneratedClass BI_BS_RM_Bust.BI_BS_RM_Bust_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_BS_RM_Bust_C : public UInterface
	{
	public:
		void SpawnMask();
		void AssignToOpenEarsSocket(class AActor* Actor);
		void AssignToOpenNoseSocket(class AActor* Actor);
		void AssignToOpenNeckSocket(class AActor* Actor);
		void AssignToOpenEyesSocket(class AActor* Actor);
		void AssignToOpenRightEyeSocket(class AActor* Actor);
		void AssignToOpenLeftEyeSocket(class AActor* Actor);
		void AssignToOpenHeadSocket(class AActor* Actor);
		void AssignToOpenMouthSocket(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
