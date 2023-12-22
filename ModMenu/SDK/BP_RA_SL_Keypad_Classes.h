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
	 * BlueprintGeneratedClass BP_RA_SL_Keypad.BP_RA_SL_Keypad_C
	 * Size -> 0x00E1 (FullSize[0x0301] - InheritedSize[0x0220])
	 */
	class ABP_RA_SL_Keypad_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_Failure;                                           // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Success;                                           // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_Overlap;                                      // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Office_KeyPanel_5;                                    // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Pound;                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Zero;                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Star;                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_10;                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_9;                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_8;                               // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_7;                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_6;                               // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_5;                               // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_4;                               // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_3;                               // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_2;                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     KeypadRoot;                                              // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Array_ButtonsEntered;                                    // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UChildActorComponent*>                        Array_Buttons;                                           // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            Array_RequiredCombinations_EasterEgg;                    // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterial*                                           DefaultButtonMaterial;                                   // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           RightButtonMaterial;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           WrongButtonMaterial;                                     // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ButtonPresesCooldown;                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetButtonActivation(bool ButtonsEnabled);
		void ChangeButtonColors(class UMaterial* Material);
		void FlickerButtonsOnSubmission(bool IsValidSubmission);
		void OnNumberEntered(int32_t NumberValue);
		void CheckSequence(bool* IsValidSequence);
		void ReceiveBeginPlay();
		void OnButtonpress_Number01(class AButtonBase* Button);
		void OnButtonpress_Number02(class AButtonBase* Button);
		void OnButtonpress_Number03(class AButtonBase* Button);
		void OnButtonpress_Number04(class AButtonBase* Button);
		void OnButtonpress_Number05(class AButtonBase* Button);
		void OnButtonpress_Number06(class AButtonBase* Button);
		void OnButtonpress_Number07(class AButtonBase* Button);
		void OnButtonpress_Number08(class AButtonBase* Button);
		void OnButtonpress_Number09(class AButtonBase* Button);
		void OnButtonpress_Number00(class AButtonBase* Button);
		void OnButtonpress_StarSymbol(class AButtonBase* Button);
		void OnButtonpress_PoundSymbol(class AButtonBase* Button);
		void ResetColorMaterial();
		void DEBUG_TestKeyPadCorrect();
		void DEBUG_TestButton();
		void CoolDownTime();
		void ExecuteUbergraph_BP_RA_SL_Keypad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
