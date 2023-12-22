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
	 * BlueprintGeneratedClass BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C
	 * Size -> 0x0078 (FullSize[0x0298] - InheritedSize[0x0220])
	 */
	class ABP_TB_Foxy_SplinePath_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USplineComponent*                                    Spline;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_TB_Foxy_SplinePath_C*>                    Ref_ConnectingTracks;                                    // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       IsMainPath;                                              // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WM0W[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AssignedCurve;                                           // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeLength;                                              // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsShootingGallery;                                       // 0x025C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsEndPoint;                                              // 0x025D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsStartPoint;                                            // 0x025E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NSXE[0x1];                                   // 0x025F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASpotLight*>                                  Ref_ConnectedLights;                                     // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class ATriggerBox*                                         REF_StopTrigger;                                         // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             FreezeForGallery;                                        // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       OnGalleryLockOrientation;                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DBV3[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_TB_Foxy_TargetGroupManager_C*                    Ref_TargetManager;                                       // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void DEBUG_GetWorldLocationOfEndPoint();
		void TriggerGallery(class AActor* OverlappedActor, class AActor* OtherActor);
		void DEBUG_GetSplineLength();
		void ExecuteUbergraph_BP_TB_Foxy_SplinePath(int32_t EntryPoint);
		void FreezeForGallery__DelegateSignature(const struct FRotator& Orientation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
