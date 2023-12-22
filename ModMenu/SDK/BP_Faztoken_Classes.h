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
	 * BlueprintGeneratedClass BP_Faztoken.BP_Faztoken_C
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ABP_Faztoken_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbable;                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CollectDelay;                                            // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        CoinCollectTag;                                          // 0x023C(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3X6R[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  AlreadyCollectedMaterial;                                // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupVFX();
		bool HasCollectedCoin();
		void BndEvt__BP_Faztoken_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void CollectCoin();
		void ReceiveBeginPlay();
		void BndEvt__BP_Faztoken_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void ExecuteUbergraph_BP_Faztoken(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
