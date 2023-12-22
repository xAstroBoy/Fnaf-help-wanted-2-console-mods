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
	 * BlueprintGeneratedClass BP_LipSyncComp.BP_LipSyncComp_C
	 * Size -> 0x0034 (FullSize[0x00E4] - InheritedSize[0x00B0])
	 */
	class UBP_LipSyncComp_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Component;                                               // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundWave*                                          SoundWave;                                               // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UObject*>                                     TargetObject;                                            // 0x00C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MinAmplitude;                                            // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxAmplitude;                                            // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnvelopeMultiplier;                                      // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpecifyTarget(class UObject* NewObject, bool* bSuccess);
		void UpdateFromEnvelopeValue(class USoundWave* SoundWave, float Envelope);
		bool AddTarget(class UObject* NewItem);
		void SetupTargets();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void StopJawFlap();
		void ExecuteUbergraph_BP_LipSyncComp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
