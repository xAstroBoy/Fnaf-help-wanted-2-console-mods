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
	 * BlueprintGeneratedClass BP_BS_SM_EarringAccessory.BP_BS_SM_EarringAccessory_C
	 * Size -> 0x0031 (FullSize[0x0251] - InheritedSize[0x0220])
	 */
	class ABP_BS_SM_EarringAccessory_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoundaryHandlerComponent*                           BoundaryHandler;                                         // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USimplePhysicsGrabbableComponent*                    SimplePhysicsGrabbable;                                  // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUsed;                                                  // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2KJK[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BS_SM_Bust_C*                                    Bust;                                                    // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EControllerHand                                            hand;                                                    // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetIsUsed(bool* IsUsed);
		void ResocketToBust();
		void SetIsUsed(bool IsUsed);
		void OnEndHoverSocket(class USocketComponent* Socket);
		void OnBeginHoverSocket(class USocketComponent* Socket, bool bCanSocket);
		void SetBust(class ABP_BS_SM_Bust_C* Bust);
		void BndEvt__BP_BS_SM_NeckAccessory_BoundaryHandler_K2Node_ComponentBoundEvent_0_OnBoundaryHitDelegate__DelegateSignature();
		void OnInsertedInSocket(class USocketComponent* Socket);
		void OnRemovedFromSocket(class USocketComponent* Socket);
		void ForceBoundaryAction();
		void ExecuteUbergraph_BP_BS_SM_EarringAccessory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
