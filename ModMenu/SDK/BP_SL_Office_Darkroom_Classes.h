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
	 * BlueprintGeneratedClass BP_SL_Office_Darkroom.BP_SL_Office_Darkroom_C
	 * Size -> 0x0009 (FullSize[0x0289] - InheritedSize[0x0280])
	 */
	class ABP_SL_Office_Darkroom_C : public ABP_DarkRoom_Jumpscare_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		Enum_RA_SL_AnimatronicType                                 TriggeringAnimatronic;                                   // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAnimatronicType(Enum_RA_SL_AnimatronicType* Animatronic);
		void IsDrainingPower(bool* IsDrainingPower);
		void DetermineAnimatronicTriggeringJumpscare();
		void TriggerJumpscare(Enum_RA_SL_AnimatronicType TriggeringAnimatronic);
		void DisableAllVO();
		void ReceiveBeginPlay();
		void SetAnimatronicType(Enum_RA_SL_AnimatronicType AnimatronicToSet);
		void InitiateJumpscare();
		void ExecuteUbergraph_BP_SL_Office_Darkroom(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
