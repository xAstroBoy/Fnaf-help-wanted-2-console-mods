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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SWGVRBase.ESWGVRBaseHand
	 */
	enum class ESWGVRBaseHand : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		Both  = 3,
		MAX   = 4
	};

	/**
	 * Enum SWGVRBase.EHingedDoorLimit
	 */
	enum class EHingedDoorLimit : uint8_t
	{
		Min = 0,
		Max = 1
	};

	/**
	 * Enum SWGVRBase.ESocketActorRemoveReason
	 */
	enum class ESocketActorRemoveReason : uint8_t
	{
		Removed   = 0,
		Destroyed = 1,
		MAX       = 2
	};

	/**
	 * Enum SWGVRBase.ESWGVRMode
	 */
	enum class ESWGVRMode : uint8_t
	{
		Unknown = 0,
		VR      = 1,
		Flat    = 2,
		MAX     = 3
	};

	/**
	 * Enum SWGVRBase.EButtonActions
	 */
	enum class EButtonActions : uint8_t
	{
		PRESS_AND_HOLD    = 0,
		PRESS_AND_RELEASE = 1,
		TOGGLE            = 2,
		MAX               = 3
	};

	/**
	 * Enum SWGVRBase.ESightFilterOp
	 */
	enum class ESightFilterOp : uint8_t
	{
		And = 0,
		Or  = 1,
		MAX = 2
	};

	/**
	 * Enum SWGVRBase.ECrankState
	 */
	enum class ECrankState : uint8_t
	{
		IDLE                         = 0,
		WAITING_FOR_CONTROLLED_STATE = 1,
		TO_CONTROLLING_ACTIVATE      = 2,
		TO_CONTROLLING_REVERT        = 3,
		TO_REVERT                    = 4,
		TO_INTERRUPT                 = 5,
		REACHED_ACTIVATE             = 6,
		REACHED_REVERT               = 7,
		REACHED_INTERRUPT            = 8,
		MAX                          = 9
	};

	/**
	 * Enum SWGVRBase.EDialHandTooFarAction
	 */
	enum class EDialHandTooFarAction : uint8_t
	{
		Release          = 0,
		RemoveFromSocket = 1,
		MAX              = 2
	};

	/**
	 * Enum SWGVRBase.EDialGrabMode
	 */
	enum class EDialGrabMode : uint8_t
	{
		Dial   = 0,
		Pickup = 1,
		MAX    = 2
	};

	/**
	 * Enum SWGVRBase.EHandModelState
	 */
	enum class EHandModelState : uint8_t
	{
		Relaxed = 0,
		Pointer = 1,
		Gripped = 2,
		MAX     = 3
	};

	/**
	 * Enum SWGVRBase.EHandReleaseEnable
	 */
	enum class EHandReleaseEnable : uint8_t
	{
		Enabled       = 0,
		SwapHandsOnly = 1,
		Disabled      = 2,
		MAX           = 3
	};

	/**
	 * Enum SWGVRBase.ELeverType
	 */
	enum class ELeverType : uint8_t
	{
		ONE_WAY = 0,
		TWO_WAY = 1,
		MAX     = 2
	};

	/**
	 * Enum SWGVRBase.EOneWayLeverActivationState
	 */
	enum class EOneWayLeverActivationState : uint8_t
	{
		NEGATIVE = 0,
		POSITIVE = 1,
		MAX      = 2
	};

	/**
	 * Enum SWGVRBase.ELeverState
	 */
	enum class ELeverState : uint8_t
	{
		IDLE                         = 0,
		WAITING_FOR_CONTROLLED_STATE = 1,
		TO_CONTROLLING_POSITIVE      = 2,
		TO_CONTROLLING_NEGATIVE      = 3,
		TO_ORIGIN_SNAP               = 4,
		REACHED_POSITIVE             = 5,
		REACHED_NEGATIVE             = 6,
		REACHED_ORIGIN_SNAP          = 7,
		MAX                          = 8
	};

	/**
	 * Enum SWGVRBase.EResponseCurveType
	 */
	enum class EResponseCurveType : uint8_t
	{
		LINEAR          = 0,
		STANDARD        = 1,
		DYNAMIC_S_CURVE = 2,
		NUM_CURVES      = 3,
		MAX             = 4
	};

	/**
	 * Enum SWGVRBase.ESocketHoverAction
	 */
	enum class ESocketHoverAction : uint8_t
	{
		Nothing = 0,
		Insert  = 1,
		MAX     = 2
	};

	/**
	 * Enum SWGVRBase.ESocketableGrabbedAction
	 */
	enum class ESocketableGrabbedAction : uint8_t
	{
		Nothing = 0,
		Remove  = 1,
		MAX     = 2
	};

	/**
	 * Enum SWGVRBase.EDoorState
	 */
	enum class EDoorState : uint8_t
	{
		IDLE                    = 0,
		TO_ORIGIN_LOCATION      = 1,
		REACHED_ORIGIN_LOCATION = 2,
		TO_TARGET_LOCATION      = 3,
		REACHED_TARGET_LOCATION = 4,
		MAX                     = 5
	};

	/**
	 * Enum SWGVRBase.EMovementDirection
	 */
	enum class EMovementDirection : uint8_t
	{
		FORWARD  = 0,
		BACKWARD = 1,
		MAX      = 2
	};

	/**
	 * Enum SWGVRBase.ESWGVRHmdType
	 */
	enum class ESWGVRHmdType : uint8_t
	{
		Unknown    = 0,
		ValveIndex = 1,
		Vive       = 2,
		Oculus     = 3,
		PSVR       = 4,
		PSVR2      = 5,
		MAX        = 6
	};

	/**
	 * Enum SWGVRBase.ESWGVRInputKeys
	 */
	enum class ESWGVRInputKeys : uint8_t
	{
		Trigger      = 0,
		Grip         = 1,
		BottomButton = 2,
		TopButton    = 3,
		Menu         = 4,
		Stick        = 5,
		StickLeft    = 6,
		StickRight   = 7,
		StickAxisX   = 8,
		StickAxisY   = 9,
		MAX          = 10
	};

	/**
	 * Enum SWGVRBase.EPlayerRotationInputType
	 */
	enum class EPlayerRotationInputType : uint8_t
	{
		SNAP   = 0,
		SMOOTH = 1,
		MAX    = 2
	};

	/**
	 * Enum SWGVRBase.ETeleportState
	 */
	enum class ETeleportState : uint8_t
	{
		None                  = 0,
		SelectingLocation     = 1,
		TeleportingToLocation = 2,
		MAX                   = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SWGVRBase.TargetHitParams
	 * Size -> 0x0018
	 */
	struct FTargetHitParams
	{
	public:
		class AGunActor*                                           Gun;                                                     // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitByProjectile;                                        // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DTFC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UPrimitiveComponent>                  HitComponent;                                            // 0x000C(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZA2B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SWGVRBase.OnPlayerTeleportedInfo
	 * Size -> 0x0020
	 */
	struct FOnPlayerTeleportedInfo
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldPosition;                                           // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            WorldRotation;                                           // 0x0014(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SWGVRBase.VRGrabberHandInfo
	 * Size -> 0x00F8
	 */
	struct FVRGrabberHandInfo
	{
	public:
		unsigned char                                              UnknownData_MUKM[0xF8];                                  // 0x0000(0x00F8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SWGVRBase.VRGrabberHandPositionInfo
	 * Size -> 0x001C
	 */
	struct FVRGrabberHandPositionInfo
	{
	public:
		unsigned char                                              UnknownData_M96Y[0x1C];                                  // 0x0000(0x001C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
