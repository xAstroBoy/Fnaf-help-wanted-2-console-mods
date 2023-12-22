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
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.GetPlushBabyPose
	 */
	struct UABP_RA_SL_Ennard_C_GetPlushBabyPose_Params
	{
	public:
		Enum_RA_SL_PlushBabyPose                                   PlushBabyPose;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.GetRoomType
	 */
	struct UABP_RA_SL_Ennard_C_GetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.GetAssignedButton
	 */
	struct UABP_RA_SL_Ennard_C_GetAssignedButton_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.GetMinireenasOnDoor
	 */
	struct UABP_RA_SL_Ennard_C_GetMinireenasOnDoor_Params
	{
	public:
		int32_t                                                    MinireenaCount;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.GetAllowedCharacters
	 */
	struct UABP_RA_SL_Ennard_C_GetAllowedCharacters_Params
	{
	public:
		TArray<Enum_RA_SL_AnimatronicType>                         AllowCharacters;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimGraph
	 */
	struct UABP_RA_SL_Ennard_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F27FC346441383B8885D54BAD0C7EA13
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F27FC346441383B8885D54BAD0C7EA13_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_55E686CB49A7789DB60C1CA8BCFB7C14
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_55E686CB49A7789DB60C1CA8BCFB7C14_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AFCBD99A4D7B2D9623960F9B7943157F
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AFCBD99A4D7B2D9623960F9B7943157F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AE516B1D4695B2C18C2B2EA12BFBEAD1
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AE516B1D4695B2C18C2B2EA12BFBEAD1_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_389F89594C94DF539881479E95EF02F5
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_389F89594C94DF539881479E95EF02F5_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_202F991445822AF161424595593DE8E1
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_202F991445822AF161424595593DE8E1_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_030B5A844A2333447FFFB2AF93D54E86
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_030B5A844A2333447FFFB2AF93D54E86_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1BEE114B4BB2C654A548B0A87611A03B
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1BEE114B4BB2C654A548B0A87611A03B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AD0A8E5E4EFC7B31D2AFFCA3E6960BE9
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AD0A8E5E4EFC7B31D2AFFCA3E6960BE9_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_E65E945E4BD1080C6A59F5805BA5DDEC
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_E65E945E4BD1080C6A59F5805BA5DDEC_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4C5A650347895C46ADEE7E8A6D990280
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4C5A650347895C46ADEE7E8A6D990280_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_422727A94A3775C15E8A128FBC71E9BA
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_422727A94A3775C15E8A128FBC71E9BA_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_2331C2E543EF20BADFC6CEAC7780369D
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_2331C2E543EF20BADFC6CEAC7780369D_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AFCD180C42675C53B627C7A7C2CEE412
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AFCD180C42675C53B627C7A7C2CEE412_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_A557BBCB416A34521E0213B778C7469C
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_A557BBCB416A34521E0213B778C7469C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_9C641AD64E35DB9C5FD9B5A04F018494
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_9C641AD64E35DB9C5FD9B5A04F018494_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_5854CB31492B8ACC8AE2B4963E8DEC7A
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_5854CB31492B8ACC8AE2B4963E8DEC7A_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_56BAE9884EFC377DC9C7E9976C9D4E9C
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_56BAE9884EFC377DC9C7E9976C9D4E9C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_D334CA134CE90D577FD9E1AF6364FFDB
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_D334CA134CE90D577FD9E1AF6364FFDB_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_57BD51C0467745936A834CB974962F17
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_57BD51C0467745936A834CB974962F17_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4DDDC63E4A23EF8FDBB5F4A2441453B1
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4DDDC63E4A23EF8FDBB5F4A2441453B1_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_EC7C602B45817D6CF7C28BBFDE8D7884
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_EC7C602B45817D6CF7C28BBFDE8D7884_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_ECB3C66C4EE353996F08B6A059EC2FEA
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_ECB3C66C4EE353996F08B6A059EC2FEA_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4499E16C493A876047FD2D9C6D188CC3
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4499E16C493A876047FD2D9C6D188CC3_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_D46D49C84CB1B2B6CC140AAD583955F5
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_D46D49C84CB1B2B6CC140AAD583955F5_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4DB1F72A44034CA04610AB8224134F18
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_4DB1F72A44034CA04610AB8224134F18_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F0464DBC44CE28CD88B8B48CCF9292AA
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F0464DBC44CE28CD88B8B48CCF9292AA_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1FD376FD4A4F7163909DDB8BCECFF218
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1FD376FD4A4F7163909DDB8BCECFF218_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_3FB1E5D443681A7775724BABE066FD6F
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_3FB1E5D443681A7775724BABE066FD6F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_ACD4EDBF4D52662CA6E0BDA434FEF77B
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_ACD4EDBF4D52662CA6E0BDA434FEF77B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_D525034D408707660163DEAE82BB4F66
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_D525034D408707660163DEAE82BB4F66_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_948D29724ED42FF0EAC33FBA04BB1231
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_948D29724ED42FF0EAC33FBA04BB1231_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AEBE81C540057EF4F4CAE2A89C829786
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AEBE81C540057EF4F4CAE2A89C829786_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1B33DD3246833B1076E1EABDDCD4F526
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1B33DD3246833B1076E1EABDDCD4F526_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_2C3971824062B9DA83441A86C081EC4B
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_2C3971824062B9DA83441A86C081EC4B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_C24617B54B7B9A5D7DBCAD866DF3A734
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_C24617B54B7B9A5D7DBCAD866DF3A734_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_7B2BD2D5436279AF3E1B00A103CB2F73
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_7B2BD2D5436279AF3E1B00A103CB2F73_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_3FC192344919ED25F18A8EBE01542395
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_3FC192344919ED25F18A8EBE01542395_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_6A6AE686471382C9C15FC28F83EAA286
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_6A6AE686471382C9C15FC28F83EAA286_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_A4B7309F49B5197E5D20A78364367850
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_A4B7309F49B5197E5D20A78364367850_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AssignMinireenaToDoor
	 */
	struct UABP_RA_SL_Ennard_C_AssignMinireenaToDoor_Params
	{
	public:
		bool                                                       AddMinireenaToDoor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_2F162833412BF80DF4334ABA32FD962B
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_2F162833412BF80DF4334ABA32FD962B_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EnnardForceTriggeringJumpscare
	 */
	struct UABP_RA_SL_Ennard_C_EnnardForceTriggeringJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_B6D7E9C64C46CAF1FA2A3296D262EA67
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_B6D7E9C64C46CAF1FA2A3296D262EA67_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_CF6E23BB424497FFDF7B36B9144F7FE1
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_CF6E23BB424497FFDF7B36B9144F7FE1_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_FBAB3266450C415C00B6E5B17FA026C2
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_FBAB3266450C415C00B6E5B17FA026C2_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_6C94A4AA4251BB1C950BE1A2AE26E791
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_6C94A4AA4251BB1C950BE1A2AE26E791_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1AC572194A8BBBFE779067945183475C
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_1AC572194A8BBBFE779067945183475C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_7D5EBF31411C725509DC6F8738C67C08
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_7D5EBF31411C725509DC6F8738C67C08_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_308EE8F045FFEE04CFB72B99910E378F
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_308EE8F045FFEE04CFB72B99910E378F_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_DC4B17694CC327D1D783E493B5060369
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_DC4B17694CC327D1D783E493B5060369_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_3B4F957A40B8AB0FDB9214AEBB612C9D
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_3B4F957A40B8AB0FDB9214AEBB612C9D_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_195B1E644CA8E121C5B03BA8D61FE52D
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_195B1E644CA8E121C5B03BA8D61FE52D_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_18138C2C479C6528C3733A8182E9A343
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_18138C2C479C6528C3733A8182E9A343_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_C66E927C45BCE2926A6C15895FBBF5E9
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_C66E927C45BCE2926A6C15895FBBF5E9_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_E19E602E436DC6A181D903A95C9CC63C
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_E19E602E436DC6A181D903A95C9CC63C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_DE49C5C3431244B1176C2EACACE1E69A
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_DE49C5C3431244B1176C2EACACE1E69A_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_ED95A7084A318B5D8093339095609FD7
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_ED95A7084A318B5D8093339095609FD7_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_B4E8DB714D0CC240EEFA18B1160CFDD2
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_B4E8DB714D0CC240EEFA18B1160CFDD2_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F81C1D6D46EED7AE51A50495F7553673
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F81C1D6D46EED7AE51A50495F7553673_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_33E70E71487762DA1B3720922A9733C2
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_33E70E71487762DA1B3720922A9733C2_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_0A8D022F487C4C921ADC72A1655C9A74
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_0A8D022F487C4C921ADC72A1655C9A74_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F2751F7D430D49917CCBC59F1FCB909D
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_F2751F7D430D49917CCBC59F1FCB909D_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_C259F5264B457FFD05802CB2A8C56A7C
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_C259F5264B457FFD05802CB2A8C56A7C_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_7455A7E04D981C25D989BF94915236B1
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_7455A7E04D981C25D989BF94915236B1_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AB7ED81443A9BA94FFB4FF9BB90F2817
	 */
	struct UABP_RA_SL_Ennard_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_Ennard_AnimGraphNode_TransitionResult_AB7ED81443A9BA94FFB4FF9BB90F2817_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.SetRoomType
	 */
	struct UABP_RA_SL_Ennard_C_SetRoomType_Params
	{
	public:
		Enum_RA_SL_RoomType                                        Room;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_CheckToTriggerJumpscare
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_CheckToTriggerJumpscare_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.SetEnnardOwnerReference
	 */
	struct UABP_RA_SL_Ennard_C_SetEnnardOwnerReference_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_inviz
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_inviz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_viz
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_viz_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_FlickerLight_Left
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_FlickerLight_Left_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_FlickerLights_Right
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_FlickerLights_Right_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_FlickerLight_vent
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_FlickerLight_vent_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.SetEnnardIsWaitingAtDoor
	 */
	struct UABP_RA_SL_Ennard_C_SetEnnardIsWaitingAtDoor_Params
	{
	public:
		bool                                                       IsWaiting;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.AnimNotify_InbetweenFinished
	 */
	struct UABP_RA_SL_Ennard_C_AnimNotify_InbetweenFinished_Params
	{	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.SetEnnardDoorPlayRate
	 */
	struct UABP_RA_SL_Ennard_C_SetEnnardDoorPlayRate_Params
	{
	public:
		bool                                                       EnablePlayrate;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_RA_SL_Ennard.ABP_RA_SL_Ennard_C.ExecuteUbergraph_ABP_RA_SL_Ennard
	 */
	struct UABP_RA_SL_Ennard_C_ExecuteUbergraph_ABP_RA_SL_Ennard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
