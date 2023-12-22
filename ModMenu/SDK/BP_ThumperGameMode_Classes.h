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
	 * BlueprintGeneratedClass BP_ThumperGameMode.BP_ThumperGameMode_C
	 * Size -> 0x0040 (FullSize[0x0348] - InheritedSize[0x0308])
	 */
	class ABP_ThumperGameMode_C : public AThumperGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USoundClass*                                         MusicAudioMixer;                                         // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundClass*                                         SFXAudioMixer;                                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundClass*                                         JumpscareAudioMixer;                                     // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundClass*                                         VoiceAudioMixer;                                         // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundClass*                                         MasterAudioMixer;                                        // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimaryDataAsset*                                   QualitySettingsRef;                                      // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetMixerVolume(class USoundClass* Mixer, float Volume);
		void ApplyAudioSettings(const struct FAudioSettingsSaveData& Setting);
		void ReceiveBeginPlay();
		void OnApplyAudioSettings(const struct FAudioSettingsSaveData& Settings);
		void ExecuteUbergraph_BP_ThumperGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
