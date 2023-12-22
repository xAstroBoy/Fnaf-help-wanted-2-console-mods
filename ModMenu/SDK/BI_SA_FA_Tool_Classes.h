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
	 * BlueprintGeneratedClass BI_SA_FA_Tool.BI_SA_FA_Tool_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_SA_FA_Tool_C : public UInterface
	{
	public:
		void PlayToolHaptics();
		void ItemAction();
		void SetReturnSocket(class USocketComponent* Socket);
		void ReturnToSocket();
		void OnInstantiate();
		void GetToolEnum(Enum_SO_FA_ToolSelection* ToolSelection);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
