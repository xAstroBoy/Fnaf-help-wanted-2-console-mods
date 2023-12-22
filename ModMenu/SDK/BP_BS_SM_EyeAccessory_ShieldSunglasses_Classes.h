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
	 * BlueprintGeneratedClass BP_BS_SM_EyeAccessory_ShieldSunglasses.BP_BS_SM_EyeAccessory_ShieldSunglasses_C
	 * Size -> 0x0018 (FullSize[0x0261] - InheritedSize[0x0249])
	 */
	class ABP_BS_SM_EyeAccessory_ShieldSunglasses_C : public ABP_BS_SM_EyesAccessory_C
	{
	public:
		unsigned char                                              UnknownData_9I7O[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Sunglasses;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUsed;                                                  // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetIsUsed(bool* IsUsed);
		void ReceiveBeginPlay();
		void SetIsUsed(bool IsUsed);
		void BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_BS_SM_EyeAccessory_ShieldSunglasses_Sunglasses_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_BS_SM_EyeAccessory_ShieldSunglasses(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
