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
	 * BlueprintGeneratedClass BP_RA_SL_DeskObjectGrabbable.BP_RA_SL_DeskObjectGrabbable_C
	 * Size -> 0x0030 (FullSize[0x0278] - InheritedSize[0x0248])
	 */
	class ABP_RA_SL_DeskObjectGrabbable_C : public AStaticMeshGrabbableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoundaryHandlerComponent*                           BoundaryHandler;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          GrabSound;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ReleaseSound;                                            // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          SoftHitSound;                                            // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          HardHitSound;                                            // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetToolEnum(Enum_SO_FA_ToolSelection* ToolSelection);
		void Activate();
		void Deactivate();
		void OnInstantiate();
		void ReturnToSocket();
		void SetReturnSocket(class USocketComponent* Socket);
		void ItemAction();
		void PlayToolHaptics();
		void OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket);
		void OnEndHoverSocket(class USocketComponent* Socket);
		void OnInsertedInSocket(class USocketComponent* Socket);
		void OnRemovedFromSocket(class USocketComponent* Socket);
		void ReceiveBeginPlay();
		void BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_RA_SL_DeskObjectGrabbable_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_RA_SL_DeskObjectGrabbable_StaticMeshComponent_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BP_RA_SL_DeskObjectGrabbable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
