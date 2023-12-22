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
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.UpdateSelectionText
	 */
	struct UWBP_Title_Combo_Box_C_UpdateSelectionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.GetSelection
	 */
	struct UWBP_Title_Combo_Box_C_GetSelection_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z12N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.SetSelection
	 */
	struct UWBP_Title_Combo_Box_C_SetSelection_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.UpdateSelectedOption
	 */
	struct UWBP_Title_Combo_Box_C_UpdateSelectedOption_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IB2U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.CycleThoughOptions
	 */
	struct UWBP_Title_Combo_Box_C_CycleThoughOptions_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentSelection;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutSeletion;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.PreConstruct
	 */
	struct UWBP_Title_Combo_Box_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.Construct
	 */
	struct UWBP_Title_Combo_Box_C_Construct_Params
	{	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Title_Combo_Box_C_BndEvt__WBP_Title_Combo_Box_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Title_Combo_Box_C_BndEvt__WBP_Title_Combo_Box_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWBP_Title_Combo_Box_C_BndEvt__WBP_Title_Combo_Box_ComboButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.ExecuteUbergraph_WBP_Title_Combo_Box
	 */
	struct UWBP_Title_Combo_Box_C_ExecuteUbergraph_WBP_Title_Combo_Box_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YSZC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Title_Combo_Box.WBP_Title_Combo_Box_C.OnChangedSelection__DelegateSignature
	 */
	struct UWBP_Title_Combo_Box_C_OnChangedSelection__DelegateSignature_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
