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
	 * Class VRReviewTool.VRDebugDrawingWorldSubsystem
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UVRDebugDrawingWorldSubsystem : public UTickableWorldSubsystem
	{
	public:
		TArray<struct FVRDebugDrawingRecord>                       Splines;                                                 // 0x0040(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UStaticMesh*                                         SplineComponentMesh;                                     // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterial*                                           SplineComponentMaterial;                                 // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMotionControllerComponent*                          MotionController;                                        // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             LastMCPosition;                                          // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDrawingSessionActive;                                   // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7DFG[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewScreenWidget
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UVRReviewScreenWidget : public UUserWidget
	{
	public:
		class UMultiLineEditableTextBox*                           TextBox;                                                 // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             AcceptButton;                                            // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              CursorImage;                                             // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RSAQ[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnAcceptClicked();
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewScreenWidgetActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AVRReviewScreenWidgetActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewTextWidget
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UVRReviewTextWidget : public UUserWidget
	{
	public:
		class UMultiLineEditableTextBox*                           TextBlock;                                               // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolActorComponent
	 * Size -> 0x0170 (FullSize[0x0220] - InheritedSize[0x00B0])
	 */
	class UVRReviewToolActorComponent : public UActorComponent
	{
	public:
		class UClass*                                              MainMenuClass;                                           // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AVRReviewToolMainMenuWidgetActor*                    MainMenu;                                                // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AVRReviewToolFloatingTextActor*                      SelectedActorText;                                       // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class UClass*>                         ModulesToLoad;                                           // 0x00C8(0x0050) Edit, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMLF[0x48];                                  // 0x0118(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetInteractionComponent*                         WidgetInteraction;                                       // 0x0160(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetComponent*                                    MainMenuComponent;                                       // 0x0168(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                ToggleReviewModeMappingContext;                          // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        ToggleReviewModeAction;                                  // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputMappingContext*                                InteractionMappingContext;                               // 0x0180(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInputAction*                                        RightControllerTriggerAction;                            // 0x0188(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CBGG[0x90];                                  // 0x0190(0x0090) MISSED OFFSET (PADDING)

	public:
		class AVRReviewToolMainMenuWidgetActor* GetMainMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolDataSystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UVRReviewToolDataSystem : public UWorldSubsystem
	{
	public:
		TArray<class AVRReviewWidgetActor*>                        ReviewWidgetActors;                                      // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolFloatingText
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UVRReviewToolFloatingText : public UUserWidget
	{
	public:
		class UTextBlock*                                          FloatingText;                                            // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolFloatingTextActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AVRReviewToolFloatingTextActor : public AActor
	{
	public:
		class UWidgetComponent*                                    WidgetComponent;                                         // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolModuleBase
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UVRReviewToolModuleBase : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_7O79[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsModuleActive;                                         // 0x0268(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NRAI[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ModuleIndex;                                             // 0x026C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UVRReviewToolActorComponent*                         VRReviewTool;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnExitModule();
		void OnEnterModule(int32_t ActiveModuleIndex);
		void OnActorSelected(const struct FHitResult& OutHit);
		void EnterActorSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolFloatingTextMenu
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UVRReviewToolFloatingTextMenu : public UVRReviewToolModuleBase
	{
	public:
		class UButton*                                             ToggleButton;                                            // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolMainMenu
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UVRReviewToolMainMenu : public UUserWidget
	{
	public:
		class UVerticalBox*                                        SideButtons;                                             // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidgetSwitcher*                                     ModuleUISwitcher;                                        // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVRReviewToolToggleButton*                           ToggleButtonTemplate;                                    // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVRReviewToolModuleUI*                               ModuleUITemplate;                                        // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0R1Z[0x28];                                  // 0x0280(0x0028) MISSED OFFSET (PADDING)

	public:
		void SwapToPanel(class UVRReviewToolToggleButton* ToggleButton);
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolMainMenuWidgetActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AVRReviewToolMainMenuWidgetActor : public AActor
	{
	public:
		class UWidgetComponent*                                    WidgetComponent;                                         // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              WidgetClass;                                             // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UVRReviewToolMainMenu* GetMainMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolModuleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRReviewToolModuleInterface : public UInterface
	{
	public:
		void SetModuleIndex(int32_t NewIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolModuleUI
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UVRReviewToolModuleUI : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        ModuleUICanvas;                                          // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TitleText;                                               // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolPlayerPawn
	 * Size -> 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
	 */
	class AVRReviewToolPlayerPawn : public APawn
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMotionControllerComponent*                          LeftMotionController;                                    // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMotionControllerComponent*                          RightMotionController;                                   // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetInteractionComponent*                         WidgetInteractionComponent;                              // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolSaveData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVRReviewToolSaveData : public USaveGame
	{
	public:
		TArray<struct FVRReviewToolTextBlockData>                  TextNotes;                                               // 0x0028(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewToolToggleButton
	 * Size -> 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
	 */
	class UVRReviewToolToggleButton : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_B2JW[0x20];                                  // 0x0260(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UButton*                                             ToggleButton;                                            // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          TextBlock;                                               // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8IAR[0x58];                                  // 0x0290(0x0058) MISSED OFFSET (PADDING)

	public:
		void ToggleOnClick();
		static UClass* StaticClass();
	};

	/**
	 * Class VRReviewTool.VRReviewWidgetActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AVRReviewWidgetActor : public AActor
	{
	public:
		class UWidgetComponent*                                    WidgetComponent;                                         // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
