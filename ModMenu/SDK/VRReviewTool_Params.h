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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function VRReviewTool.VRReviewScreenWidget.OnAcceptClicked
	 */
	struct UVRReviewScreenWidget_OnAcceptClicked_Params
	{	};

	/**
	 * Function VRReviewTool.VRReviewToolActorComponent.GetMainMenu
	 */
	struct UVRReviewToolActorComponent_GetMainMenu_Params
	{
	public:
		class AVRReviewToolMainMenuWidgetActor*                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRReviewTool.VRReviewToolModuleBase.OnExitModule
	 */
	struct UVRReviewToolModuleBase_OnExitModule_Params
	{	};

	/**
	 * Function VRReviewTool.VRReviewToolModuleBase.OnEnterModule
	 */
	struct UVRReviewToolModuleBase_OnEnterModule_Params
	{
	public:
		int32_t                                                    ActiveModuleIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRReviewTool.VRReviewToolModuleBase.OnActorSelected
	 */
	struct UVRReviewToolModuleBase_OnActorSelected_Params
	{
	public:
		struct FHitResult                                          OutHit;                                                  // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRReviewTool.VRReviewToolModuleBase.EnterActorSelection
	 */
	struct UVRReviewToolModuleBase_EnterActorSelection_Params
	{	};

	/**
	 * Function VRReviewTool.VRReviewToolMainMenu.SwapToPanel
	 */
	struct UVRReviewToolMainMenu_SwapToPanel_Params
	{
	public:
		class UVRReviewToolToggleButton*                           ToggleButton;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRReviewTool.VRReviewToolMainMenuWidgetActor.GetMainMenu
	 */
	struct AVRReviewToolMainMenuWidgetActor_GetMainMenu_Params
	{
	public:
		class UVRReviewToolMainMenu*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRReviewTool.VRReviewToolModuleInterface.SetModuleIndex
	 */
	struct UVRReviewToolModuleInterface_SetModuleIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRReviewTool.VRReviewToolToggleButton.ToggleOnClick
	 */
	struct UVRReviewToolToggleButton_ToggleOnClick_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
