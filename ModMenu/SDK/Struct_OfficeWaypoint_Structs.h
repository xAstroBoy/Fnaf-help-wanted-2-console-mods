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
	 * UserDefinedStruct Struct_OfficeWaypoint.Struct_OfficeWaypoint
	 * Size -> 0x0009
	 */
	struct FStruct_OfficeWaypoint
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           ConnectedPositions_13_82A7D2EF478304E380E417B78CB00A7B;  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PassageBlocked_14_F03F2AED4402CB02C1AAD6AB9FA4DC8A;      // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
