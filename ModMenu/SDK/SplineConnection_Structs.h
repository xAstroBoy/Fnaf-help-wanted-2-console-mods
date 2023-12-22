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
	 * UserDefinedStruct SplineConnection.SplineConnection
	 * Size -> 0x0019
	 */
	struct FSplineConnection
	{
	public:
		class ABP_SplinePathway_C*                                 Spline_13_5DFD486A4D14DB6128D013ACD92E2CCF;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Distance_2_2A201CF540050AA193C6A481DA6B6A46;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VisibleLocation_5_DAD437954B1E49312F4BBD94F6CA8486;      // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESplineFollowDirection                                     Direction_12_F4BCD4E44AE4223437C5BD8CAE3A2989;           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
