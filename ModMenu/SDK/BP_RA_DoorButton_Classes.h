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
	 * BlueprintGeneratedClass BP_RA_DoorButton.BP_RA_DoorButton_C
	 * Size -> 0x0051 (FullSize[0x03D9] - InheritedSize[0x0388])
	 */
	class ABP_RA_DoorButton_C : public ABP_Button_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextRenderComponent*                                TextRender_Readout;                                      // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                TextReadout;                                             // 0x0398(0x0018) Edit, BlueprintVisible
		class UMaterialInterface*                                  DefaultButtonMaterial;                                   // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  PressedButtonMaterial;                                   // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShockButton;                                             // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RM5O[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Array_BlockingCharacters;                                // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       ButtonCooldown;                                          // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChangeButtonMaterialState(bool EnabledButton);
		void CheckOverlappingHandForHaptic();
		void SetMaterialOnButton(class UMaterial* Material);
		void EnableDoorButton(bool Enable);
		void Event_ButtonReleased(class AButtonBase* Button);
		void CheckIfButtonIsBlocked();
		void AssignBlockingCharacter();
		void RemoveBlockingCharacter();
		void UpdateLightColor(const struct FLinearColor& Color);
		void Event_ButtonPressed(class AButtonBase* Button);
		void BndEvt__BP_RA_DoorButton_TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveBeginPlay();
		void PowerOutage();
		void BndEvt__BP_RA_DoorButton_TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ExecuteUbergraph_BP_RA_DoorButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
