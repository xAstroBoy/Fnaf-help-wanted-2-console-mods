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
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.GetID
	 */
	struct ABP_Office_BaseWayPoint_C_GetID_Params
	{
	public:
		int32_t                                                    SpotID;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.AvailableToCharacter
	 */
	struct ABP_Office_BaseWayPoint_C_AvailableToCharacter_Params
	{
	public:
		class ABP_Office_AnimatronicBase_C*                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAllowed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.GetIsOccupied
	 */
	struct ABP_Office_BaseWayPoint_C_GetIsOccupied_Params
	{
	public:
		bool                                                       IsOccupied;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.SetIsOccupied
	 */
	struct ABP_Office_BaseWayPoint_C_SetIsOccupied_Params
	{
	public:
		bool                                                       Occupied;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.CheckConnectingPaths
	 */
	struct ABP_Office_BaseWayPoint_C_CheckConnectingPaths_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           Waypoint;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckFullChain;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F5E2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_GetImmediateConnectingPaths
	 */
	struct ABP_Office_BaseWayPoint_C_DEBUG_GetImmediateConnectingPaths_Params
	{	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_DisplayPathChain
	 */
	struct ABP_Office_BaseWayPoint_C_DEBUG_DisplayPathChain_Params
	{	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.DEBUG_ContinueChain
	 */
	struct ABP_Office_BaseWayPoint_C_DEBUG_ContinueChain_Params
	{	};

	/**
	 * Function BP_Office_BaseWayPoint.BP_Office_BaseWayPoint_C.ExecuteUbergraph_BP_Office_BaseWayPoint
	 */
	struct ABP_Office_BaseWayPoint_C_ExecuteUbergraph_BP_Office_BaseWayPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
