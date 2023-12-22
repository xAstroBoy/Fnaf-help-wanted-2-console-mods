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
	 * BlueprintGeneratedClass BP_RM_EarAccessory.BP_RM_EarAccessory_C
	 * Size -> 0x0042 (FullSize[0x0262] - InheritedSize[0x0220])
	 */
	class ABP_RM_EarAccessory_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbable;                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoundaryHandlerComponent*                           BoundaryHandler;                                         // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGrabHighlightComponent*                             GrabHighlight;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    LastSocket;                                              // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              BustActor;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingFlugAfterRound;                                   // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EControllerHand                                            hand;                                                    // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket);
		void OnEndHoverSocket(class USocketComponent* Socket);
		void OnBoundryHit();
		void OnInsertedInSocket(class USocketComponent* Socket);
		void OnRemovedFromSocket(class USocketComponent* Socket);
		void MarkBeingDestoryedAfterRound();
		void BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_BS_SM_HatAccessory_Cap_SimplePhysicsGrabbable_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_RM_EarAccessory_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_RM_EarAccessory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
