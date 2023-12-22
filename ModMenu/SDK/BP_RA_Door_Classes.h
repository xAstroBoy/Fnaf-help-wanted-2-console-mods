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
	 * BlueprintGeneratedClass BP_RA_Door.BP_RA_Door_C
	 * Size -> 0x0058 (FullSize[0x02F8] - InheritedSize[0x02A0])
	 */
	class ABP_RA_Door_C : public ABP_Door_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Sparks2;                                                 // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Sparks1;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     DoorAdjecentAmbience;                                    // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             DoorInteraction;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_Office_BaseWayPoint_C*                           Ref_AssignedWaypoint;                                    // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             DeactivateDoor;                                          // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       InteractionAllowed;                                      // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TORY[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AdjecentAmbienceSound;                                   // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleAdjecentAmbience(bool Close);
		void Activated();
		void Deactivated();
		void OnDoorDeactivation();
		void DEBUGCloseDoor();
		void DEBUGOpenDoor();
		void IncrementalActivation(float PercentageActivated);
		void ReceiveBeginPlay();
		void Event_DoorInteraction(class ABP_Office_BaseWayPoint_C* AssignedWaypoint, bool IsClosed);
		void ActivateSparks();
		void ExecuteUbergraph_BP_RA_Door(int32_t EntryPoint);
		void DeactivateDoor__DelegateSignature();
		void DoorInteraction__DelegateSignature(class ABP_Office_BaseWayPoint_C* AssignedWaypoint, bool IsClosed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
