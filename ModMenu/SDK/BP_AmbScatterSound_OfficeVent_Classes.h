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
	 * BlueprintGeneratedClass BP_AmbScatterSound_OfficeVent.BP_AmbScatterSound_OfficeVent_C
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class ABP_AmbScatterSound_OfficeVent_C : public ABP_AmbScatterSound_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_Button_C*                                        Button;                                                  // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ToggleScatterSound();
		void BndEvt__BP_AmbScatterSound_OfficeVent_NewVar_0_K2Node_ComponentBoundEvent_0_ButtonDelegate__DelegateSignature(class AButtonBase* Button);
		void ExecuteUbergraph_BP_AmbScatterSound_OfficeVent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
