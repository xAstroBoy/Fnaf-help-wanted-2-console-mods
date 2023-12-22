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
	 * BlueprintGeneratedClass BP_BS_RM_RageManager.BP_BS_RM_RageManager_C
	 * Size -> 0x007C (FullSize[0x029C] - InheritedSize[0x0220])
	 */
	class ABP_BS_RM_RageManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentRageValue;                                        // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRageValue;                                            // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DecreaseRageLookingAtAmount;                             // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N1UN[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRageValueChanged;                                      // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRageValueSet;                                          // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      IncreaseRageLookingAwayAmount;                           // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IncreaseRageWalkieTalkieAmount;                          // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DecreaseRageWalkieTalkieAmount;                          // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IncreaseRageWrongLookAmount;                             // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IncreaseRageWrongItemAmount;                             // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IncreaseRageTantumAmount;                                // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              RoundStartingAmount;                                     // 0x0278(0x0010) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnRageLevelChanged;                                      // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentRageLevel;                                        // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ConcertPercentageToIndex(float Value, int32_t* Return);
		void GetIsAtMaxRage(bool* MaxRage);
		void IncreaseRageTantrum();
		void IncreaseRageWrongLook();
		void DecreaseRageWalkieTalkie();
		void IncreaseRageWalkieTalkie();
		void SetRageValue(float Value);
		void Initialize(int32_t Round);
		void UpdateRageValue(float Amount);
		void GetRagePercentage(float* Value);
		void DecreaseRageLookingAt();
		void IncreaseRageWrongItem();
		void IncreaseRageLookingAway();
		void RageSound(bool Up);
		void ExecuteUbergraph_BP_BS_RM_RageManager(int32_t EntryPoint);
		void OnRageLevelChanged__DelegateSignature(int32_t Value);
		void OnRageValueSet__DelegateSignature(float Value);
		void OnRageValueChanged__DelegateSignature(float Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
