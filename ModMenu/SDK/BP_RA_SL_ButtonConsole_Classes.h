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
	 * BlueprintGeneratedClass BP_RA_SL_ButtonConsole.BP_RA_SL_ButtonConsole_C
	 * Size -> 0x0098 (FullSize[0x02B8] - InheritedSize[0x0220])
	 */
	class ABP_RA_SL_ButtonConsole_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_SL_Office_CameraControl;                              // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_PointerFingerOverlap;                         // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Right_Main;                      // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Left_Main;                       // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Right_Hallway;                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Vent;                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Left_Closet;                     // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Left_Hallway;                    // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildActor_KeypadButton_Right_Closet;                    // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConsoleRoot;                                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Ref_CameraSystem[0x28];                                  // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UChildActorComponent*>                        Array_CameraButtons;                                     // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UnpressCameraButtons(class AButtonBase* CurrentButton);
		void BindButtonEvents();
		void ButtonPress_LeftMain(class AButtonBase* Button);
		void ButtonPress_Vent(class AButtonBase* Button);
		void ButtonPress_RightMain(class AButtonBase* Button);
		void ButtonPress_LeftHalway(class AButtonBase* Button);
		void ButtonPress_RightHallway(class AButtonBase* Button);
		void ButtonPress_LeftCloset(class AButtonBase* Button);
		void ButtonPress_RightCloset(class AButtonBase* Button);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_RA_SL_ButtonConsole(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
