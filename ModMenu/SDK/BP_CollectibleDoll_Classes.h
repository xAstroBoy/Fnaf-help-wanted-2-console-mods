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
	 * BlueprintGeneratedClass BP_CollectibleDoll.BP_CollectibleDoll_C
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ABP_CollectibleDoll_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbable;                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        Tag;                                                     // 0x0238(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCollected;                                             // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__BP_CollectibleDoll_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void Collect();
		void ExecuteUbergraph_BP_CollectibleDoll(int32_t EntryPoint);
		void OnCollected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
