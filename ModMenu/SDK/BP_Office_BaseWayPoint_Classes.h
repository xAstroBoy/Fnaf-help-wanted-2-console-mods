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
	 * BlueprintGeneratedClass BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class ABP_Office_BaseWayPoint_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FStruct_OfficeWaypoint>                      Ref_ConnectPath;                                         // 0x0240(0x0010) Edit, BlueprintVisible
		TArray<struct FStruct_OfficeWaypoint>                      Ref_NextChain;                                           // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsOccupied;                                              // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9RJX[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Office_AnimatronicBase_C*                        OccupyingCharacters;                                     // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHiddenRoom;                                            // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0HCP[0x3];                                   // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpotID;                                                  // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASecurityCamera*                                     Ref_AssignedCamera;                                      // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetID(int32_t* SpotID);
		void AvailableToCharacter(class ABP_Office_AnimatronicBase_C* Character, bool* IsAllowed);
		void GetIsOccupied(bool* IsOccupied);
		void SetIsOccupied(bool Occupied);
		void CheckConnectingPaths(class ABP_Office_BaseWayPoint_C* Waypoint, bool CheckFullChain);
		void DEBUG_GetImmediateConnectingPaths();
		void DEBUG_DisplayPathChain();
		void DEBUG_ContinueChain();
		void ExecuteUbergraph_BP_Office_BaseWayPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
