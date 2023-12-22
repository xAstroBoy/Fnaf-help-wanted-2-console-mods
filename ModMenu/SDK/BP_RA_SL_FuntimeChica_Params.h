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
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaHasCupcake
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaHasCupcake_Params
	{
	public:
		bool                                                       HasCupcake;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.SendCharacterToSpecificRoom
	 */
	struct ABP_RA_SL_FuntimeChica_C_SendCharacterToSpecificRoom_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.SetCurrentPosition
	 */
	struct ABP_RA_SL_FuntimeChica_C_SetCurrentPosition_Params
	{
	public:
		class ABP_Office_BaseWayPoint_C*                           CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.DetermineWhereToGoForCupcake
	 */
	struct ABP_RA_SL_FuntimeChica_C_DetermineWhereToGoForCupcake_Params
	{
	public:
		bool                                                       WasChicaSentSomewhereElse;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ContinueOnSamePath;                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       GestureForCupcake;                                       // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.UpdateCharacterPosition
	 */
	struct ABP_RA_SL_FuntimeChica_C_UpdateCharacterPosition_Params
	{
	public:
		bool                                                       SendToAdjacentPosition;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5EPK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaExited
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaExited_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.DEBUG_GiveCupcake
	 */
	struct ABP_RA_SL_FuntimeChica_C_DEBUG_GiveCupcake_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.ActivateAnimatronicMovement
	 */
	struct ABP_RA_SL_FuntimeChica_C_ActivateAnimatronicMovement_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.SL_TriggerLightFlicker
	 */
	struct ABP_RA_SL_FuntimeChica_C_SL_TriggerLightFlicker_Params
	{
	public:
		Enum_RA_SL_AreaZones                                       ZoneTrigger;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KU5G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DurationOverride;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.BndEvt__BP_RA_SL_FuntimeChica_CupcakeDetection_Plate_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_RA_SL_FuntimeChica_C_BndEvt__BP_RA_SL_FuntimeChica_CupcakeDetection_Plate_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_132A[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaOnCupcakeBeingMoved
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaOnCupcakeBeingMoved_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.ReceiveBeginPlay
	 */
	struct ABP_RA_SL_FuntimeChica_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaLeanIn
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaLeanIn_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaGivenCupcake
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaGivenCupcake_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaTriggerJumpscare
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaTriggerJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.BndEvt__BP_RA_SL_FuntimeChica_CupcakeDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_RA_SL_FuntimeChica_C_BndEvt__BP_RA_SL_FuntimeChica_CupcakeDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Z8B[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.FTChicaSetOwnerReference
	 */
	struct ABP_RA_SL_FuntimeChica_C_FTChicaSetOwnerReference_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.CheckIfWaitingAtDoor
	 */
	struct ABP_RA_SL_FuntimeChica_C_CheckIfWaitingAtDoor_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.CheckWhenToJumpscare
	 */
	struct ABP_RA_SL_FuntimeChica_C_CheckWhenToJumpscare_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.CheckForPassageBlocked
	 */
	struct ABP_RA_SL_FuntimeChica_C_CheckForPassageBlocked_Params
	{	};

	/**
	 * Function BP_RA_SL_FuntimeChica.BP_RA_SL_FuntimeChica_C.ExecuteUbergraph_BP_RA_SL_FuntimeChica
	 */
	struct ABP_RA_SL_FuntimeChica_C_ExecuteUbergraph_BP_RA_SL_FuntimeChica_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6994[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
