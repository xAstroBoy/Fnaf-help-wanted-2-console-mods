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
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.MoveCharacterByID
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_MoveCharacterByID_Params
	{
	public:
		bool                                                       SendToHidden;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YW9G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverrideSpot;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpotOccupied;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZK0Y[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SelectRoomForBonbon
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_SelectRoomForBonbon_Params
	{
	public:
		bool                                                       IsFreddyOnRightSide;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8OJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.AudioToAlertPlayer
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_AudioToAlertPlayer_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.CheckForPassageBlocked
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.SummonBonBon
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_SummonBonBon_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.DisableAllVO
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_DisableAllVO_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeFreddy.BP_RA_SL_FuntimeFreddy_C.ExecuteUbergraph_BP_RA_SL_FuntimeFreddy
	 */
	struct ABP_RA_SL_FuntimeFreddy_C_ExecuteUbergraph_BP_RA_SL_FuntimeFreddy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VF00[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
