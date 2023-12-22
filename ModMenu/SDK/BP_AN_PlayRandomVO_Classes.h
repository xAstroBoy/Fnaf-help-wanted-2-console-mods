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
	 * BlueprintGeneratedClass BP_AN_PlayRandomVO.BP_AN_PlayRandomVO_C
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UBP_AN_PlayRandomVO_C : public UAnimNotify
	{
	public:
		class FName                                                Bone;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundWave*>                                  Sound;                                                   // 0x0040(0x0010) Edit, BlueprintVisible
		float                                                      VolumeMultiplier;                                        // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchMultiplier;                                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
