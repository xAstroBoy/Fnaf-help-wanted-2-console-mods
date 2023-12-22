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
	 * BlueprintGeneratedClass BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C
	 * Size -> 0x005E (FullSize[0x0310] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_FuntimeChica_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_3NUX[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       CupcakeDetection_Plate;                                  // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CupcakeMesh;                                             // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CupcakeDetection;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Ref_Cupcake[0x28];                                       // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       HasBeenGivenCupcake;                                     // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TriggerLeanIn;                                           // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SH6S[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              BlockingButton;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FTChicaHasCupcake(bool* HasCupcake);
		void SendCharacterToSpecificRoom(class ABP_Office_BaseWayPoint_C* Room);
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void DetermineWhereToGoForCupcake(bool* WasChicaSentSomewhereElse, bool* ContinueOnSamePath, bool* GestureForCupcake);
		void UpdateCharacterPosition(bool SendToAdjacentPosition);
		void FTChicaExited();
		void DEBUG_GiveCupcake();
		void ActivateAnimatronicMovement();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void BndEvt__BP_RA_SL_FuntimeChica_CupcakeDetection_Plate_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void FTChicaOnCupcakeBeingMoved();
		void ReceiveBeginPlay();
		void FTChicaLeanIn();
		void FTChicaGivenCupcake();
		void FTChicaTriggerJumpscare();
		void BndEvt__BP_RA_SL_FuntimeChica_CupcakeDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void FTChicaSetOwnerReference();
		void CheckIfWaitingAtDoor();
		void CheckWhenToJumpscare();
		void CheckForPassageBlocked();
		void ExecuteUbergraph_BP_RA_SL_FuntimeChica(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
