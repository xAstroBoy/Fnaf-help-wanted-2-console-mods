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
	 * BlueprintGeneratedClass BP_RA_DoorButton_Child.BP_RA_DoorButton_Child_C
	 * Size -> 0x0028 (FullSize[0x0401] - InheritedSize[0x03D9])
	 */
	class ABP_RA_DoorButton_Child_C : public ABP_RA_DoorButton_C
	{
	public:
		unsigned char                                              UnknownData_PI1B[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       TriggerBox_PowerOutageClick;                             // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_PointerOverlap;                               // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PowerOutageClickCooldown;                                // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ChangeButtonMaterialState(bool EnabledButton);
		void UpdateLightColor(const struct FLinearColor& Color);
		void PowerOutage();
		void EnableDoorButton(bool Enable);
		void BndEvt__BP_RA_DoorButton_Child_TriggerBox_PowerOutageClick_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_RA_DoorButton_Child_TriggerBox_PowerOutageClick_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ExecuteUbergraph_BP_RA_DoorButton_Child(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
