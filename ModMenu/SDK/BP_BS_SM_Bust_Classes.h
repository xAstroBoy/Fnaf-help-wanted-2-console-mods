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
	 * BlueprintGeneratedClass BP_BS_SM_Bust.BP_BS_SM_Bust_C
	 * Size -> 0x02D0 (FullSize[0x04F0] - InheritedSize[0x0220])
	 */
	class ABP_BS_SM_Bust_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USocketComponent*                                    Bot4EarLSocket;                                          // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot4EyesSocket;                                          // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot4HatSocket;                                           // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot4MouthSocket;                                         // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot4EarRSocket;                                          // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot3MouthSocket;                                         // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot3HatSocket;                                           // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot3EarRSocket;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot3EarLSocket;                                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot3EyesSocket;                                          // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BotHead4;                                                // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BotHead3;                                                // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot2EyesSocket;                                          // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot2MouthSocket;                                         // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot2HatSocket;                                           // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot2EarRSocket;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot2EarLSocket;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BotHead2;                                                // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot4NeckSocket;                                          // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot3NeckSocket;                                          // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot2NeckSocket;                                          // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot1NeckSocket;                                          // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot1HatSocket;                                           // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot1EarRSocket;                                          // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot1EarLSocket;                                          // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot1EyesSocket;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USocketComponent*                                    Bot1MouthSocket;                                         // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BotHead1;                                                // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bot4;                                                    // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bot3;                                                    // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bot2;                                                    // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bot1;                                                    // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot1;                                       // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FBP_BS_SM_AccessoriesMapping>                AccessoriesMapping;                                      // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UClass*                                              Bot1NeckClass;                                           // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot1MouthClass;                                          // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot1EarClass;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot2NeckClass;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot2MouthClass;                                          // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot2EyesClass;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot2EarClass;                                            // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot3NeckClass;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot1EyesClass;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot2HatClass;                                            // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot3HatClass;                                            // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot4HatClass;                                            // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_BS_SM_VRPlayer_C*                                Player;                                                  // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBP_BotHeads_Mapping>                        BotHeadsMap;                                             // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      LookAtPercentage;                                        // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WO4M[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Bot1HatClass;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot3EarClass;                                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot3MouthClass;                                          // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      HatAllOptions;                                           // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      EyesAllOptions;                                          // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      EarringAllOptions;                                       // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      NeckAllOptions;                                          // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      MouthAllOptions;                                         // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              Bot4EarClass;                                            // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot4NeckClass;                                           // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot4MouthClass;                                          // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot4EyesClass;                                           // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Bot3EyesClass;                                           // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      DisplayedHats;                                           // 0x0450(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      DisplayedEyes;                                           // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      DisplayedEars;                                           // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      DisplayedNecks;                                          // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      DisplayedMouths;                                         // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USocketComponent*>                            EyeSocketArray;                                          // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USocketComponent*>                            MouthSocketArray;                                        // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USocketComponent*>                            EarSocketArray;                                          // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USocketComponent*>                            NeckSocketArray;                                         // 0x04D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USocketComponent*>                            HatSocketArray;                                          // 0x04E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void ShuffleAndAssign(TArray<class UClass*>* OptionsArray, class UClass** Acessory1, class UClass** Acessory2, class UClass** Acessory3, class UClass** Acessory4, TArray<class UClass*>* ItemsToDisplay);
		void ReceiveBeginPlay();
		void ResetBusts();
		void LookAt();
		void DetermineLookAtPercentage();
		void EstablishAccessories();
		void SpawnAccessoriesOnBusts();
		void ExecuteUbergraph_BP_BS_SM_Bust(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
