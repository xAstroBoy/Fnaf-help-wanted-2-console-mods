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
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaHasCupcake
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaHasCupcake_Params
	{
	public:
		bool                                                       HasCupcake;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_FTChica_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.GetRoomType
	 */
	struct UABP_RA_SL_FTChica_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.GetAssignedButton
	 */
	struct UABP_RA_SL_FTChica_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_FTChica_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_FTChica_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimGraph
	 */
	struct UABP_RA_SL_FTChica_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_82BE49314779B1AF1A4B37B29FA65BA7
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_82BE49314779B1AF1A4B37B29FA65BA7_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_9360D6274FAB29DB1445A4879262F57C
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_9360D6274FAB29DB1445A4879262F57C_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_7335FCAD4D7854DE02ED0590D24E2180
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_7335FCAD4D7854DE02ED0590D24E2180_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_1AD9C8884239F73DECC3E7A22D0BC13F
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_1AD9C8884239F73DECC3E7A22D0BC13F_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_ECBBC8774660EC7C2D0CF98C4F4C70BA
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_ECBBC8774660EC7C2D0CF98C4F4C70BA_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_0D1D4431495C6D3B1AFA0785EDF3C289
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_0D1D4431495C6D3B1AFA0785EDF3C289_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_054A19E14EA71BFB9B58CD9CA1EA93C5
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_054A19E14EA71BFB9B58CD9CA1EA93C5_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_E76BA3C147FE3AAE8090B6B313112ACE
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_E76BA3C147FE3AAE8090B6B313112ACE_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_31DFBBB3436CFB0FD3589D8328585CC2
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_31DFBBB3436CFB0FD3589D8328585CC2_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_FTChica_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaExited
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaExited_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A29234A34452F427E3953488A0A9DB3F
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A29234A34452F427E3953488A0A9DB3F_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_F9C95D96474D6589AEAC83AD5483453F
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_F9C95D96474D6589AEAC83AD5483453F_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_587563AA49C345372B879ABB0ADAC875
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_587563AA49C345372B879ABB0ADAC875_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_24422BB24B4DCC1736C44DAFD856CA69
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_24422BB24B4DCC1736C44DAFD856CA69_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_4215714242DDAA208F38478194DEF231
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_4215714242DDAA208F38478194DEF231_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_C708880544B4C04A0C18C193837E64C0
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_C708880544B4C04A0C18C193837E64C0_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_97A5E4A24D240E619FBA04BF8BEE3E3A
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_97A5E4A24D240E619FBA04BF8BEE3E3A_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A1B2866648330D31815278958386A556
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A1B2866648330D31815278958386A556_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_06A2B3814A7E0B75DDE18E8293FB4342
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_06A2B3814A7E0B75DDE18E8293FB4342_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_71C07EFE4D26B6BCEBFF24ADB31DD7B2
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_71C07EFE4D26B6BCEBFF24ADB31DD7B2_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A01FF8114EA987D8FA45F4A09517B207
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A01FF8114EA987D8FA45F4A09517B207_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_F7C835D543C2B5A1B15637B45BB7D22C
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_F7C835D543C2B5A1B15637B45BB7D22C_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_9CE8AB9742DC6DAF0976B0A1D51A7905
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_9CE8AB9742DC6DAF0976B0A1D51A7905_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A6D50C584341D986CAF4C5BFE432B87B
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_A6D50C584341D986CAF4C5BFE432B87B_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_1FCDEA1A4E268A273E061EB450993E01
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_1FCDEA1A4E268A273E061EB450993E01_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_310D783848DE0ADD78F401B2CB6B042D
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_310D783848DE0ADD78F401B2CB6B042D_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_C10950CE4CD38E61B3DD6DB79D7871B2
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_C10950CE4CD38E61B3DD6DB79D7871B2_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_4C4E41354BD66579B71170967E2C7312
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_4C4E41354BD66579B71170967E2C7312_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_1CAFEC0846D32B657FD384B64A6343E3
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_1CAFEC0846D32B657FD384B64A6343E3_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_D363AF9243153A962C2A27B985D988A4
	 */
	struct UABP_RA_SL_FTChica_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTChica_AnimGraphNode_TransitionResult_D363AF9243153A962C2A27B985D988A4_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.SetRoomType
	 */
	struct UABP_RA_SL_FTChica_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaSetOwnerReference
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaSetOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaOnCupcakeBeingMoved
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaOnCupcakeBeingMoved_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaTriggerJumpscare
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaTriggerJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaGivenCupcake
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaGivenCupcake_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimNotify_ChicaExitFinished
	 */
	struct UABP_RA_SL_FTChica_C_AnimNotify_ChicaExitFinished_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_FTChica_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_FTChica_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimNotify_FlickerLight_Left
	 */
	struct UABP_RA_SL_FTChica_C_AnimNotify_FlickerLight_Left_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimNotify_FlickerLight_Right
	 */
	struct UABP_RA_SL_FTChica_C_AnimNotify_FlickerLight_Right_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.FTChicaLeanIn
	 */
	struct UABP_RA_SL_FTChica_C_FTChicaLeanIn_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.AnimNotify_ChicaFlickerDisappear
	 */
	struct UABP_RA_SL_FTChica_C_AnimNotify_ChicaFlickerDisappear_Params
	{	};

	/**
	 * Function ABP_RA_SL_FTChica.ABP_RA_SL_FTChica_C.ExecuteUbergraph_ABP_RA_SL_FTChica
	 */
	struct UABP_RA_SL_FTChica_C_ExecuteUbergraph_ABP_RA_SL_FTChica_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
