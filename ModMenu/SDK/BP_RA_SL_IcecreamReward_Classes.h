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
	 * BlueprintGeneratedClass BP_RA_SL_IcecreamReward.BP_RA_SL_IcecreamReward_C
	 * Size -> 0x0041 (FullSize[0x0289] - InheritedSize[0x0248])
	 */
	class ABP_RA_SL_IcecreamReward_C : public AStaticMeshGrabbableSnapActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoundaryHandlerComponent*                           BoundaryHandler;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Icecream_Base;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Ref_Owner[0x28];                                         // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IcecreamGrabbed;                                         // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool CanBeEaten(class UEaterComponent* EaterComponent);
		struct FTransform GetRespawnTransform(class UEaterComponent* EaterComponent);
		void SetCircusBabyOwnerReference();
		void PlayerTookIceCream();
		void AteIceCream();
		void BeingEaten(class UEaterComponent* EaterComponent);
		void BndEvt__BP_RA_SL_IcecreamReward_BoundaryHandler_K2Node_ComponentBoundEvent_1_OnBoundaryHitDelegate__DelegateSignature();
		void BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_2_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void ReceiveBeginPlay();
		void PlayerTrashedIcecream();
		void BndEvt__BP_RA_SL_IcecreamReward_GrabbableSnapComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void ExecuteUbergraph_BP_RA_SL_IcecreamReward(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
