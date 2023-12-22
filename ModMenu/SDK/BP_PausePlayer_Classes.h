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
	 * BlueprintGeneratedClass BP_PausePlayer.BP_PausePlayer_C
	 * Size -> 0x0008 (FullSize[0x0558] - InheritedSize[0x0550])
	 */
	class ABP_PausePlayer_C : public APausePlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void InpActEvt_IA_Menu_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime);
		void ReceivePossessed(class AController* NewController);
		void ExecuteUbergraph_BP_PausePlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
