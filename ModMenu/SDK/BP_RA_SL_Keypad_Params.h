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
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.SetButtonActivation
	 */
	struct ABP_RA_SL_Keypad_C_SetButtonActivation_Params
	{
	public:
		bool                                                       ButtonsEnabled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ChangeButtonColors
	 */
	struct ABP_RA_SL_Keypad_C_ChangeButtonColors_Params
	{
	public:
		class UMaterial*                                           Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.FlickerButtonsOnSubmission
	 */
	struct ABP_RA_SL_Keypad_C_FlickerButtonsOnSubmission_Params
	{
	public:
		bool                                                       IsValidSubmission;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XHPL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnNumberEntered
	 */
	struct ABP_RA_SL_Keypad_C_OnNumberEntered_Params
	{
	public:
		int32_t                                                    NumberValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.CheckSequence
	 */
	struct ABP_RA_SL_Keypad_C_CheckSequence_Params
	{
	public:
		bool                                                       IsValidSequence;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_Keypad_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number01
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number01_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number02
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number02_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number03
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number03_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number04
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number04_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number05
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number05_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number06
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number06_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number07
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number07_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number08
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number08_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number09
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number09_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_Number00
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_Number00_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_StarSymbol
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_StarSymbol_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.OnButtonpress_PoundSymbol
	 */
	struct ABP_RA_SL_Keypad_C_OnButtonpress_PoundSymbol_Params
	{
	public:
		class AButtonBase*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ResetColorMaterial
	 */
	struct ABP_RA_SL_Keypad_C_ResetColorMaterial_Params
	{	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.DEBUG_TestKeyPadCorrect
	 */
	struct ABP_RA_SL_Keypad_C_DEBUG_TestKeyPadCorrect_Params
	{	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.DEBUG_TestButton
	 */
	struct ABP_RA_SL_Keypad_C_DEBUG_TestButton_Params
	{	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.CoolDownTime
	 */
	struct ABP_RA_SL_Keypad_C_CoolDownTime_Params
	{	};

	/**
	 * Function BP_RA_SL_Keypad.BP_RA_SL_Keypad_C.ExecuteUbergraph_BP_RA_SL_Keypad
	 */
	struct ABP_RA_SL_Keypad_C_ExecuteUbergraph_BP_RA_SL_Keypad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
