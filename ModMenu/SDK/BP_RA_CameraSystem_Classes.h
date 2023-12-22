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
	 * BlueprintGeneratedClass BP_RA_CameraSystem.BP_RA_CameraSystem_C
	 * Size -> 0x0052 (FullSize[0x0272] - InheritedSize[0x0220])
	 */
	class ABP_RA_CameraSystem_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ChildActor_PowerButton;                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MonitorScreen;                                           // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MonitorBase;                                             // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       StopCurrent;                                             // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FT8Y[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentCameraIndex;                                      // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASecurityCamera*                                     CurrentCamera;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CameraSystemStatus;                                      // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       PowerOutageOverride;                                     // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsActive;                                                // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		float GetActivation();
		void SetCurrentRoom();
		void GetCurrentRoom();
		void SetIsActive(bool IsActive);
		void GetIsActive(bool* IsActive);
		void UpdateVisibleCamera();
		void IncrementalActivation(float PercentageActivated);
		void ReceiveBeginPlay();
		void NextCamera();
		void Activated();
		void Deactivated();
		void Event_OnPowerButtonPress(class AButtonBase* Button);
		void CameraSystemPower(bool IsOn);
		void OnPowerShutOff();
		void DEBUG_CycleMoniterScreens();
		void ExecuteUbergraph_BP_RA_CameraSystem(int32_t EntryPoint);
		void CameraSystemStatus__DelegateSignature(bool IsOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
