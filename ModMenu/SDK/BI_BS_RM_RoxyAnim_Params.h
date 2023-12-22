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
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EyeAim
	 */
	struct UBI_BS_RM_RoxyAnim_C_EyeAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.BlinkOnce
	 */
	struct UBI_BS_RM_RoxyAnim_C_BlinkOnce_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.HeadAim
	 */
	struct UBI_BS_RM_RoxyAnim_C_HeadAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EnableNotLookingADD
	 */
	struct UBI_BS_RM_RoxyAnim_C_EnableNotLookingADD_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.StopTantrum
	 */
	struct UBI_BS_RM_RoxyAnim_C_StopTantrum_Params
	{	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.StartTantrum
	 */
	struct UBI_BS_RM_RoxyAnim_C_StartTantrum_Params
	{	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.UpdateRageValue
	 */
	struct UBI_BS_RM_RoxyAnim_C_UpdateRageValue_Params
	{
	public:
		float                                                      Rage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RageLevel;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.EyeDarts
	 */
	struct UBI_BS_RM_RoxyAnim_C_EyeDarts_Params
	{
	public:
		bool                                                       EyeDart;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.Blinking
	 */
	struct UBI_BS_RM_RoxyAnim_C_Blinking_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.LidAim
	 */
	struct UBI_BS_RM_RoxyAnim_C_LidAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.AllEyeAim
	 */
	struct UBI_BS_RM_RoxyAnim_C_AllEyeAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.TiltHead
	 */
	struct UBI_BS_RM_RoxyAnim_C_TiltHead_Params
	{
	public:
		bool                                                       TiltHead;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.AddEyeDart
	 */
	struct UBI_BS_RM_RoxyAnim_C_AddEyeDart_Params
	{
	public:
		struct FVector                                             EyeDartLocation;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.ClearRoxyFaceBetweenRounds
	 */
	struct UBI_BS_RM_RoxyAnim_C_ClearRoxyFaceBetweenRounds_Params
	{	};

	/**
	 * Function BI_BS_RM_RoxyAnim.BI_BS_RM_RoxyAnim_C.PlayerNotLooking
	 */
	struct UBI_BS_RM_RoxyAnim_C_PlayerNotLooking_Params
	{
	public:
		bool                                                       PlayerNotLooking;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
