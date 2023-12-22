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
	 * BlueprintGeneratedClass BP_RA_SL_CameraSystem.BP_RA_SL_CameraSystem_C
	 * Size -> 0x00E0 (FullSize[0x0352] - InheritedSize[0x0272])
	 */
	class ABP_RA_SL_CameraSystem_C : public ABP_RA_CameraSystem_C
	{
	public:
		unsigned char                                              UnknownData_J195[0x6];                                   // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight_Right;                                         // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight_Left;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DrainWarningIcon;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                DrainWarningIcon1;                                       // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget_UsageScreen;                                      // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender_Shocking;                                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MonitorBase_Vent;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MonitorBase_Left;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ChangeScreenAudio;                                 // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		Enum_RA_SL_RoomType                                        CurrentRoomCamera;                                       // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8T0C[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_RA_DoorButton_C*                                 Ref_ShockButton;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StaticCooldown;                                          // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ONFI[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           Ref_StaticTVMaterial;                                    // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DynamicScreenMaterial;                                   // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ASecurityCamera*>                             Array_CameraOrder;                                       // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       JobInterviewOverRide;                                    // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDrainGateOpen;                                         // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G99O[0x6];                                   // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterial*                                           DisabledScreenMaterial;                                  // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Enum_RA_SL_AreaZones                                       CurrentMonitorOn;                                        // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y4AB[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MonitorSetToDisplay;                                     // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UChildActorComponent*>                        Array_CameraButtons;                                     // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		unsigned char                                              Ref_LightsLeftHallway[0x10];                             // 0x0330(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Ref_LightsRightHallway[0x10];                            // 0x0340(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       JobInterviewLights;                                      // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Enum_RA_SL_GameType                                        CurrentGameMode;                                         // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentVisibleRoom(Enum_RA_SL_RoomType* CurrentRoom);
		void GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose);
		void GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters);
		void GetMinireenasOnDoor(int32_t* MinireenaCount);
		void GetAssignedButton();
		void GetRoomType(Enum_RA_SL_RoomType* Room);
		void CheckForRoomToAllowShockButton();
		void SwitchBetweenMonitorScreens();
		void OrganizeCameraArray();
		void OnCameraUpdate();
		void GetCurrentVisibleStaffbot();
		void UpdateVisibleCamera();
		void TriggerControlledShock(int32_t CamerToShock);
		void DisablePowerReadout();
		void CurrentAnimatronicOnScreen();
		void AssignMinireenaToDoor(bool AddMinireenaToDoor);
		void ReceiveBeginPlay();
		void TriggerPostShock();
		void SetRoomType(Enum_RA_SL_RoomType Room);
		void DEBUG_TestStaticScreen();
		void TriggerCameraStaticTransition(Enum_RA_SL_RoomType TriggeringRoom, bool OverrideTrigger, class AActor* TriggeringActor);
		void NotifyOfPowerDrain(bool IsActive);
		void CameraSystemPower(bool IsOn);
		void OnCameraButtonPress(int32_t ButtonID);
		void OnCameraSwitch(int32_t ButtonID);
		void JobInterview_Override();
		void TriggerCameraStatic_HideAndSeek(bool Enable);
		void UpdatePowerPercentage(float PowerPercent, float PowerUsage);
		void OnPowerShutOff();
		void JobInterview_ActivateLights();
		void ExecuteUbergraph_BP_RA_SL_CameraSystem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
