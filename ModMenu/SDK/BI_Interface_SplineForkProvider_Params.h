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
	 * Function BI_Interface_SplineForkProvider.BI_Interface_SplineForkProvider_C.GetPossibleForks
	 */
	struct UBI_Interface_SplineForkProvider_C_GetPossibleForks_Params
	{
	public:
		class AActor*                                              SplineFollowerActor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABP_SplinePathway_C*>                         PossibleSplines;                                         // 0x0008(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
