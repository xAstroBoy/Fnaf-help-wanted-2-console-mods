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
	 * BlueprintGeneratedClass BP_RA_SL_FuntimeFoxy.BP_RA_SL_FuntimeFoxy_C
	 * Size -> 0x00B2 (FullSize[0x0364] - InheritedSize[0x02B2])
	 */
	class ABP_RA_SL_FuntimeFoxy_C : public ABP_Office_SL_Animatronic_C
	{
	public:
		unsigned char                                              UnknownData_KFFV[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASecurityCamera*                                     BP_CameraWatchingFoxy;                                   // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeenWatched;                                         // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeWaiting;                                             // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JU5B[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Timer_NormalWaitTime;                                    // 0x02D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ASecurityCamera*                                     BP_CameraLeftHalfway;                                    // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASecurityCamera*                                     BP_CameraRightHalfway;                                   // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingWatched;                                          // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WARG[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllowedTimeToBeWatched;                                  // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Timer_FoxyBeingWatched;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ProgressStepsInsideCove;                                 // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_26YY[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_RightCurtain;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Right_Curtain_InitialLocation;                           // 0x0310(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRunning;                                               // 0x031C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z7ZU[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timer_FoxyRunLength;                                     // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AFQW[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Ref_LeftCurtain;                                         // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          Left_Curtain_InitialLocation;                            // 0x0330(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Time_OverrideTriggerFoxyRun;                             // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckIfPathIsBlocked(bool* IsFullyBlocked);
		void UpdateCharacterPosition(bool SendToAdjacentPosition);
		void SetCurrentPosition(class ABP_Office_BaseWayPoint_C* CurrentPosition);
		void PutFoxyInUniqueStart();
		void SetRunning(bool IsRunning);
		void SetFoxyOwnerReference();
		void ReceiveTick(float DeltaSeconds);
		void ActivateAnimatronicMovement();
		void CheckWhenToJumpscare();
		void AdvanceFoxy();
		void FoxyWantsToMoveForward();
		void PauseFoxyWhileWatched();
		void ResumeFoxyTimer();
		void FoxyWatchedToClosely();
		void Reset_PauseFoxyWhileWatched();
		void CheckForPassageBlocked();
		void ReceiveBeginPlay();
		void TriggerOnFoxyRunning();
		void DEBUG_SetupFoxyToRun();
		void SetSpotId(int32_t SetCurrentID);
		void DEBUG_AdvanceFoxy();
		void AdvanceFoxyPosition();
		void DEBUG_StartFoxy();
		void SL_TriggerLightFlicker(Enum_RA_SL_AreaZones ZoneTrigger, float DurationOverride);
		void ExecuteUbergraph_BP_RA_SL_FuntimeFoxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
