﻿#pragma once

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
	 * UserDefinedStruct ForkTraversalHelper.ForkTraversalHelper
	 * Size -> 0x0028
	 */
	struct FForkTraversalHelper
	{
	public:
		class ABP_SplinePathway_C*                                 Parent_6_B29E0EA7409F59F244399B9C1F2309F4;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_SplinePathway_C*>                         Splines_7_A2EF2B79492FF7FBD9BD4284FBF7B36F;              // 0x0008(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ABP_SplinePathFork_C*>                        OriginalForks_12_7AB1BD93442FC6D177F27EA1E4DCC664;       // 0x0018(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
