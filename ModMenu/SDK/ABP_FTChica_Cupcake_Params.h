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
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.CanBeGrabbed
	 */
	struct UABP_FTChica_Cupcake_C_CanBeGrabbed_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQN6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.CanBeReleased
	 */
	struct UABP_FTChica_Cupcake_C_CanBeReleased_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHandReleaseEnable                                         ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.GetGrabber
	 */
	struct UABP_FTChica_Cupcake_C_GetGrabber_Params
	{
	public:
		class UVRGrabberComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.AnimGraph
	 */
	struct UABP_FTChica_Cupcake_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberReleasedPostVelocity
	 */
	struct UABP_FTChica_Cupcake_C_OnGrabberReleasedPostVelocity_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TSAD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HeldComponent;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnEndGrabberHover
	 */
	struct UABP_FTChica_Cupcake_C_OnEndGrabberHover_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JJA5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnBeginGrabberHover
	 */
	struct UABP_FTChica_Cupcake_C_OnBeginGrabberHover_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVY3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.BlueprintUpdateAnimation
	 */
	struct UABP_FTChica_Cupcake_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberGrabbed
	 */
	struct UABP_FTChica_Cupcake_C_OnGrabberGrabbed_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               GrabberPawn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJBG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.OnGrabberReleased
	 */
	struct UABP_FTChica_Cupcake_C_OnGrabberReleased_Params
	{
	public:
		class UVRGrabberComponent*                                 GrabberComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Grabber;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESWGVRBaseHand                                             hand;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L4P6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ComponentToGrab;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FTChica_Cupcake.ABP_FTChica_Cupcake_C.ExecuteUbergraph_ABP_FTChica_Cupcake
	 */
	struct UABP_FTChica_Cupcake_C_ExecuteUbergraph_ABP_FTChica_Cupcake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RI0P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
