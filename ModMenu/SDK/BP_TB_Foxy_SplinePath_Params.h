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
	 * Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.ReceiveBeginPlay
	 */
	struct ABP_TB_Foxy_SplinePath_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.DEBUG_GetWorldLocationOfEndPoint
	 */
	struct ABP_TB_Foxy_SplinePath_C_DEBUG_GetWorldLocationOfEndPoint_Params
	{	};

	/**
	 * Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.TriggerGallery
	 */
	struct ABP_TB_Foxy_SplinePath_C_TriggerGallery_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.DEBUG_GetSplineLength
	 */
	struct ABP_TB_Foxy_SplinePath_C_DEBUG_GetSplineLength_Params
	{	};

	/**
	 * Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.ExecuteUbergraph_BP_TB_Foxy_SplinePath
	 */
	struct ABP_TB_Foxy_SplinePath_C_ExecuteUbergraph_BP_TB_Foxy_SplinePath_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TB_Foxy_SplinePath.BP_TB_Foxy_SplinePath_C.FreezeForGallery__DelegateSignature
	 */
	struct ABP_TB_Foxy_SplinePath_C_FreezeForGallery__DelegateSignature_Params
	{
	public:
		struct FRotator                                            Orientation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
