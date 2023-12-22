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
	 * BlueprintGeneratedClass BP_BS_SM_LazySusan.BP_BS_SM_LazySusan_C
	 * Size -> 0x0039 (FullSize[0x0281] - InheritedSize[0x0248])
	 */
	class ABP_BS_SM_LazySusan_C : public AStaticMeshGrabbableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URotatingMovementComponent*                          RotatingMovement;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     RotationSound;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FBP_BS_SM_AccessoriesMapping>                AccessoriesMapping;                                      // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      LastPosition;                                            // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Moving;                                                  // 0x0274(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IOH8[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotationYawAmount;                                       // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationDecayAmount;                                     // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Grabbed;                                                 // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DecayRotation();
		void CalculateRotationSpeed(float LastPosition, float DeltaTime, float* CurrentSpeed, float* CurrentPosition);
		void HandleRotationSound(float Speed);
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_0_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_BS_SM_LazySusan_SimplePhysicsGrabbableComponent_K2Node_ComponentBoundEvent_1_SimplePhysicsGrabbableDelegate__DelegateSignature(class AActor* Actor);
		void ExecuteUbergraph_BP_BS_SM_LazySusan(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
