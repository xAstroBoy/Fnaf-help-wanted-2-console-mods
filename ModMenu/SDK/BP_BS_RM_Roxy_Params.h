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
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Stop All VO
	 */
	struct ABP_BS_RM_Roxy_C_StopAllVO_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Can Play VO
	 */
	struct ABP_BS_RM_Roxy_C_CanPlayVO_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YUAO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ItsNotEasyAchievement
	 */
	struct ABP_BS_RM_Roxy_C_ItsNotEasyAchievement_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GetAllAccessorieSockets
	 */
	struct ABP_BS_RM_Roxy_C_GetAllAccessorieSockets_Params
	{
	public:
		TArray<class USocketComponent*>                            Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RemoveAndDestorySocketActor
	 */
	struct ABP_BS_RM_Roxy_C_RemoveAndDestorySocketActor_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ClearMakupForNewRound
	 */
	struct ABP_BS_RM_Roxy_C_ClearMakupForNewRound_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLeftCheekColor
	 */
	struct ABP_BS_RM_Roxy_C_SetLeftCheekColor_Params
	{
	public:
		class UMakeupColorData*                                    Color;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetRightCheekColor
	 */
	struct ABP_BS_RM_Roxy_C_SetRightCheekColor_Params
	{
	public:
		class UMakeupColorData*                                    Color;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLipColor
	 */
	struct ABP_BS_RM_Roxy_C_SetLipColor_Params
	{
	public:
		class UMakeupColorData*                                    Color;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetRightEyeColor
	 */
	struct ABP_BS_RM_Roxy_C_SetRightEyeColor_Params
	{
	public:
		class UMakeupColorData*                                    Color;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.SetLeftEyeColor
	 */
	struct ABP_BS_RM_Roxy_C_SetLeftEyeColor_Params
	{
	public:
		class UMakeupColorData*                                    Color;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EarSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_EarSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C0R9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftEyebrowSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_LeftEyebrowSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_95BK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightEyebrowSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_RightEyebrowSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQKG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.NoseSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_NoseSocketIsCorrect_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXOH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.NeckSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_NeckSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_16KN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_EyeSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FTHA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ForeheadSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_ForeheadSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMMU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HairSocketIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_HairSocketIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5VD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftCheekIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_LeftCheekIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightCheekIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_RightCheekIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LipIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_LipIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.RightEyeIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_RightEyeIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LeftEyeIsCorrect
	 */
	struct ABP_BS_RM_Roxy_C_LeftEyeIsCorrect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Initialize
	 */
	struct ABP_BS_RM_Roxy_C_Initialize_Params
	{
	public:
		E_RM_Round                                                 Round;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.IsBrushActor
	 */
	struct ABP_BS_RM_Roxy_C_IsBrushActor_Params
	{
	public:
		class UObject*                                             TestObject;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXZM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMakeupColorData*                                    Color;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HandleBushColoringEvent
	 */
	struct ABP_BS_RM_Roxy_C_HandleBushColoringEvent_Params
	{
	public:
		class FName                                                materialParamName;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    BrushColor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                MaterialColorParamName;                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMeshComponent*                                      MeshTargetr;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMakeupColorData*                                    CurrentBrushColor;                                       // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.IsLookCorrect
	 */
	struct ABP_BS_RM_Roxy_C_IsLookCorrect_Params
	{
	public:
		bool                                                       LookIsCorrect;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200002
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200002_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200003
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200003_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200004
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200004_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200006
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200006_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200008
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200008_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200009
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200009_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200010
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200010_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012b
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200012b_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012c
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200012c_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200014
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200014_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200016
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200016_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200017
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200017_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200018
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200018_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200019
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200019_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200019a
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200019a_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.PlayerNotLooking
	 */
	struct ABP_BS_RM_Roxy_C_PlayerNotLooking_Params
	{
	public:
		bool                                                       PlayerNotLooking;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.AddEyeDart
	 */
	struct ABP_BS_RM_Roxy_C_AddEyeDart_Params
	{
	public:
		struct FVector                                             EyeDartLocation;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.TiltHead
	 */
	struct ABP_BS_RM_Roxy_C_TiltHead_Params
	{
	public:
		bool                                                       TiltHead;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.AllEyeAim
	 */
	struct ABP_BS_RM_Roxy_C_AllEyeAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.LidAim
	 */
	struct ABP_BS_RM_Roxy_C_LidAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Blinking
	 */
	struct ABP_BS_RM_Roxy_C_Blinking_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeDarts
	 */
	struct ABP_BS_RM_Roxy_C_EyeDarts_Params
	{
	public:
		bool                                                       EyeDart;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.UpdateRageValue
	 */
	struct ABP_BS_RM_Roxy_C_UpdateRageValue_Params
	{
	public:
		float                                                      Rage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RageLevel;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.StartTantrum
	 */
	struct ABP_BS_RM_Roxy_C_StartTantrum_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.StopTantrum
	 */
	struct ABP_BS_RM_Roxy_C_StopTantrum_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EnableNotLookingADD
	 */
	struct ABP_BS_RM_Roxy_C_EnableNotLookingADD_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.HeadAim
	 */
	struct ABP_BS_RM_Roxy_C_HeadAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BlinkOnce
	 */
	struct ABP_BS_RM_Roxy_C_BlinkOnce_Params
	{
	public:
		bool                                                       Blink;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.EyeAim
	 */
	struct ABP_BS_RM_Roxy_C_EyeAim_Params
	{
	public:
		bool                                                       Aim;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EyeLOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DRAS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EyeROverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FIIJ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_LipOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KARL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_CheekROverlap_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_36GA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_CheekLOverlap_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HA7M[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_7_OnActorSocketedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_8_OnActorSocketedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_9_OnActorSocketedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_12_OnActorSocketedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_VisualSource_K2Node_ComponentBoundEvent_13_OnSourceVisibilityChange__DelegateSignature_Params
	{
	public:
		class UVisualSourceComponent*                              VisualSource;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USightComponent*                                     SightSource;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisible;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ClearRoxyFaceBetweenRounds
	 */
	struct ABP_BS_RM_Roxy_C_ClearRoxyFaceBetweenRounds_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ReceiveBeginPlay
	 */
	struct ABP_BS_RM_Roxy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Eyes_K2Node_ComponentBoundEvent_18_OnActorRemovedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingRemoved;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESocketActorRemoveReason                                   RemoveReason;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Nose_K2Node_ComponentBoundEvent_20_OnActorRemovedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingRemoved;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESocketActorRemoveReason                                   RemoveReason;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_EarL_K2Node_ComponentBoundEvent_26_OnActorRemovedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingRemoved;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESocketActorRemoveReason                                   RemoveReason;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Neck_K2Node_ComponentBoundEvent_31_OnActorRemovedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingRemoved;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESocketActorRemoveReason                                   RemoveReason;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_HandCollider_K2Node_ComponentBoundEvent_15_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCTM[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.CheckHandOverlapping
	 */
	struct ABP_BS_RM_Roxy_C_CheckHandOverlapping_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_17_OnActorSocketedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingSocketed;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_Hair2_K2Node_ComponentBoundEvent_19_OnActorRemovedDelegate__DelegateSignature_Params
	{
	public:
		class USocketComponent*                                    SocketComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorBeingRemoved;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESocketActorRemoveReason                                   RemoveReason;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopLidAim
	 */
	struct ABP_BS_RM_Roxy_C_DEBUG_StopLidAim_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopAllEyeAim
	 */
	struct ABP_BS_RM_Roxy_C_DEBUG_StopAllEyeAim_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopEyeDarts
	 */
	struct ABP_BS_RM_Roxy_C_DEBUG_StopEyeDarts_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.DEBUG_StopBlinking
	 */
	struct ABP_BS_RM_Roxy_C_DEBUG_StopBlinking_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.Update Rage
	 */
	struct ABP_BS_RM_Roxy_C_UpdateRage_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200001
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200001_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200005
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200005_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200007
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200007_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200011
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200011_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200012
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200012_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200013
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200013_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.GLRoxyHW200015
	 */
	struct ABP_BS_RM_Roxy_C_GLRoxyHW200015_Params
	{	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature
	 */
	struct ABP_BS_RM_Roxy_C_BndEvt__BP_BS_RM_Roxy_VO_K2Node_ComponentBoundEvent_6_OnAudioSingleEnvelopeValue__DelegateSignature_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EnvelopeValue;                                           // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BS_RM_Roxy.BP_BS_RM_Roxy_C.ExecuteUbergraph_BP_BS_RM_Roxy
	 */
	struct ABP_BS_RM_Roxy_C_ExecuteUbergraph_BP_BS_RM_Roxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
