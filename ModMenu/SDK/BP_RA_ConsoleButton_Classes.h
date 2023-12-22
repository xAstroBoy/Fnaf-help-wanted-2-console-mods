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
	 * BlueprintGeneratedClass BP_RA_ConsoleButton.BP_RA_ConsoleButton_C
	 * Size -> 0x0017 (FullSize[0x03F0] - InheritedSize[0x03D9])
	 */
	class ABP_RA_ConsoleButton_C : public ABP_RA_DoorButton_C
	{
	public:
		unsigned char                                              UnknownData_VQII[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialInstanceDynamic*                            Button_DynamicMaterial;                                  // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void Event_ButtonPressed(class AButtonBase* Button);
		void Event_ButtonReleased(class AButtonBase* Button);
		void ExecuteUbergraph_BP_RA_ConsoleButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
