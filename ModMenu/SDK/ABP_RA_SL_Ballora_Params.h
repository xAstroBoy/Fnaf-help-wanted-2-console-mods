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
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_Ballora_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetRoomType
	 */
	struct UABP_RA_SL_Ballora_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetAssignedButton
	 */
	struct UABP_RA_SL_Ballora_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_Ballora_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_Ballora_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimGraph
	 */
	struct UABP_RA_SL_Ballora_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_Ballora_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B3BB6A4C46DA300A926627B80D001CBB
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B3BB6A4C46DA300A926627B80D001CBB_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_421D98D5481E6876E91407A6EFB83715
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_421D98D5481E6876E91407A6EFB83715_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2FC6E9C3472C4FBC0BB7A78FCD33873C
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2FC6E9C3472C4FBC0BB7A78FCD33873C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_531DBFE34ACA9CD77C7FDFAB71D2579B
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_531DBFE34ACA9CD77C7FDFAB71D2579B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_5EAD33954E5789AB0DC9179D40AAAC17
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_5EAD33954E5789AB0DC9179D40AAAC17_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_41CCDBE947D14797239052A2B7D5384F
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_41CCDBE947D14797239052A2B7D5384F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CF9E7A1D497FC69E1F14B49BEDD7E1DC
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CF9E7A1D497FC69E1F14B49BEDD7E1DC_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_C36466FF4D20C08A6C63199A3C0F0382
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_C36466FF4D20C08A6C63199A3C0F0382_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_D92C6D3E4149EEF245C1D88935D1B813
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_D92C6D3E4149EEF245C1D88935D1B813_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_18CAB4114465724151A439ABCCFC8BC6
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_18CAB4114465724151A439ABCCFC8BC6_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CD63898545E0E5FD29B2BD890D19643A
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_CD63898545E0E5FD29B2BD890D19643A_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_81F95408418EFD78744A9B9C9F837C00
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_81F95408418EFD78744A9B9C9F837C00_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B42AA5884C01DF35B6D639AA9C6D980D
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_B42AA5884C01DF35B6D639AA9C6D980D_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3587C5E94629CD416B2120AD17F683F7
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3587C5E94629CD416B2120AD17F683F7_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_E14FB3094475F8B41029F587605925E8
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_E14FB3094475F8B41029F587605925E8_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3A643DC84383E1A3F8FBB399801439F6
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_3A643DC84383E1A3F8FBB399801439F6_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_214B1B7D4337276BAE09ADABEB3D9328
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_214B1B7D4337276BAE09ADABEB3D9328_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_85CC12994F50DCBE3EE71EB89323FDCB
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_85CC12994F50DCBE3EE71EB89323FDCB_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_A21F93214DD193735AA729A46F451298
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_A21F93214DD193735AA729A46F451298_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2CFAC2CD4598F9112BB9F78BEB3D865F
	 */
	struct UABP_RA_SL_Ballora_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ballora_AnimGraphNode_TransitionResult_2CFAC2CD4598F9112BB9F78BEB3D865F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetRoomType
	 */
	struct UABP_RA_SL_Ballora_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraForcingJumpscare
	 */
	struct UABP_RA_SL_Ballora_C_BalloraForcingJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetBalloraOwnerReference
	 */
	struct UABP_RA_SL_Ballora_C_SetBalloraOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraAtDoor
	 */
	struct UABP_RA_SL_Ballora_C_BalloraAtDoor_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_CheckForDoorStatus
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_CheckForDoorStatus_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_FlickerLight_Left
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_FlickerLight_Left_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_FlickerLight_Right
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_FlickerLight_Right_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.BalloraHasLeftArea
	 */
	struct UABP_RA_SL_Ballora_C_BalloraHasLeftArea_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_BalloraLeftArea
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_BalloraLeftArea_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.SetBalloraDoorClosed
	 */
	struct UABP_RA_SL_Ballora_C_SetBalloraDoorClosed_Params
	{
	public:
		bool                                                       DoorIsClosed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.AnimNotify_CannotReturn
	 */
	struct UABP_RA_SL_Ballora_C_AnimNotify_CannotReturn_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ballora.ABP_RA_SL_Ballora_C.ExecuteUbergraph_ABP_RA_SL_Ballora
	 */
	struct UABP_RA_SL_Ballora_C_ExecuteUbergraph_ABP_RA_SL_Ballora_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
