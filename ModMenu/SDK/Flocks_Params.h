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
	 * Function Flocks.FlocksStatics.UpdateSettingsForBoid
	 */
	struct UFlocksStatics_UpdateSettingsForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FDefaultBoidSettings                                Settings;                                                // 0x0004(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bKeepHealthPercent;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateSettingsForAllBoidsInGroup
	 */
	struct UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDefaultBoidSettings                                Settings;                                                // 0x0004(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bKeepHealthPercent;                                      // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateSettingsForAllBoids
	 */
	struct UFlocksStatics_UpdateSettingsForAllBoids_Params
	{
	public:
		struct FDefaultBoidSettings                                Settings;                                                // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bKeepHealthPercent;                                      // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultVelocityForGroup
	 */
	struct UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxVelocity;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultVelocityForAllGroups
	 */
	struct UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Params
	{
	public:
		float                                                      MinVelocity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultTurningSpeedForGroup
	 */
	struct UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTurningSpeed;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultTurningSpeedForAllGroups
	 */
	struct UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Params
	{
	public:
		float                                                      MinTurningSpeed;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultSpeedForGroup
	 */
	struct UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultSpeedForAllGroups
	 */
	struct UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Params
	{
	public:
		float                                                      MinSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultSettingsForGroup
	 */
	struct UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDefaultBoidSettings                                Settings;                                                // 0x0004(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultHealthMode                               UpdateHealthMode;                                        // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultSettingsForAllGroups
	 */
	struct UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Params
	{
	public:
		struct FDefaultBoidSettings                                Settings;                                                // 0x0000(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultHealthMode                               UpdateHealthMode;                                        // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultScaleForGroup
	 */
	struct UFlocksStatics_UpdateBoidDefaultScaleForGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScale;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultScaleForAllGroups
	 */
	struct UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Params
	{
	public:
		float                                                      MinScale;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultMaxHealthForGroup
	 */
	struct UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewMaxHealth;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultHealthMode                               UpdateHealthMode;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultMaxHealthForAllGroups
	 */
	struct UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Params
	{
	public:
		float                                                      NewMaxHealth;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultHealthMode                               UpdateHealthMode;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultAnimRateForMesh
	 */
	struct UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Params
	{
	public:
		int32_t                                                    MeshIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAnimRate;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.UpdateBoidDefaultAnimRateForAllMeshes
	 */
	struct UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Params
	{
	public:
		float                                                      MinAnimRate;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUpdateBoidDefaultsMode                                    UpdateMode;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetVelocityForBoidsInGroup
	 */
	struct UFlocksStatics_SetVelocityForBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetVelocityForBoid
	 */
	struct UFlocksStatics_SetVelocityForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetVelocityForAllBoids
	 */
	struct UFlocksStatics_SetVelocityForAllBoids_Params
	{
	public:
		float                                                      NewVelocity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetTurningSpeedForBoidsInGroup
	 */
	struct UFlocksStatics_SetTurningSpeedForBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetTurningSpeedForBoid
	 */
	struct UFlocksStatics_SetTurningSpeedForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetTurningSpeedForAllBoids
	 */
	struct UFlocksStatics_SetTurningSpeedForAllBoids_Params
	{
	public:
		float                                                      NewTurningSpeed;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetSpeedForBoidsInGroup
	 */
	struct UFlocksStatics_SetSpeedForBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetSpeedForBoid
	 */
	struct UFlocksStatics_SetSpeedForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetSpeedForAllBoids
	 */
	struct UFlocksStatics_SetSpeedForAllBoids_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetScaleForBoidsInGroup
	 */
	struct UFlocksStatics_SetScaleForBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetScaleForBoid
	 */
	struct UFlocksStatics_SetScaleForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetScaleForAllBoids
	 */
	struct UFlocksStatics_SetScaleForAllBoids_Params
	{
	public:
		float                                                      NewScale;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetMaxHealthForBoid
	 */
	struct UFlocksStatics_SetMaxHealthForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewMaxHealth;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepHealthPercent;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetMaxHealthForAllBoidsInGroup
	 */
	struct UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewMaxHealth;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepHealthPercent;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetMaxHealthForAllBoids
	 */
	struct UFlocksStatics_SetMaxHealthForAllBoids_Params
	{
	public:
		float                                                      NewMaxHealth;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepHealthPercent;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetHealthForBoid
	 */
	struct UFlocksStatics_SetHealthForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Health;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutKilled;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupSettings
	 */
	struct UFlocksStatics_SetGroupSettings_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7KIQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGroupSettings                                      Settings;                                                // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupSeparationRadius
	 */
	struct UFlocksStatics_SetGroupSeparationRadius_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SeparationRadius;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupSeparation
	 */
	struct UFlocksStatics_SetGroupSeparation_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Separation;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupRestriction
	 */
	struct UFlocksStatics_SetGroupRestriction_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Restriction;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupResponseToGroup
	 */
	struct UFlocksStatics_SetGroupResponseToGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherGroup;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGroupResponses                                            Response;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupPreferNonVerticalMovement
	 */
	struct UFlocksStatics_SetGroupPreferNonVerticalMovement_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreferNonVerticalMovement;                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupGoal
	 */
	struct UFlocksStatics_SetGroupGoal_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Goal;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupFlee
	 */
	struct UFlocksStatics_SetGroupFlee_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Flee;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupCohesionRadius
	 */
	struct UFlocksStatics_SetGroupCohesionRadius_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CohesionRadius;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupCohesion
	 */
	struct UFlocksStatics_SetGroupCohesion_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Cohesion;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupAlignmentRadius
	 */
	struct UFlocksStatics_SetGroupAlignmentRadius_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AlignmentRadius;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetGroupAlignment
	 */
	struct UFlocksStatics_SetGroupAlignment_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Alignment;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetBoidMaterialCustomValueOnAll
	 */
	struct UFlocksStatics_SetBoidMaterialCustomValueOnAll_Params
	{
	public:
		int32_t                                                    ValueIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetBoidMaterialCustomValue
	 */
	struct UFlocksStatics_SetBoidMaterialCustomValue_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ValueIndex;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetAnimRateForBoidsInGroup
	 */
	struct UFlocksStatics_SetAnimRateForBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetAnimRateForBoid
	 */
	struct UFlocksStatics_SetAnimRateForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      NewAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.SetAnimRateForAllBoids
	 */
	struct UFlocksStatics_SetAnimRateForAllBoids_Params
	{
	public:
		float                                                      NewAnimRate;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RemoveBoid
	 */
	struct UFlocksStatics_RemoveBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeVelocityForBoid
	 */
	struct UFlocksStatics_RandomizeVelocityForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxVelocity;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeVelocityForAllBoidsInGroup
	 */
	struct UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxVelocity;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeVelocityForAllBoids
	 */
	struct UFlocksStatics_RandomizeVelocityForAllBoids_Params
	{
	public:
		float                                                      MinVelocity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxVelocity;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeTurningSpeedForBoid
	 */
	struct UFlocksStatics_RandomizeTurningSpeedForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTurningSpeed;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeTurningSpeedForAllBoidsInGroup
	 */
	struct UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTurningSpeed;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeTurningSpeedForAllBoids
	 */
	struct UFlocksStatics_RandomizeTurningSpeedForAllBoids_Params
	{
	public:
		float                                                      MinTurningSpeed;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeSpeedForBoid
	 */
	struct UFlocksStatics_RandomizeSpeedForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeSpeedForAllBoidsInGroup
	 */
	struct UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeSpeedForAllBoids
	 */
	struct UFlocksStatics_RandomizeSpeedForAllBoids_Params
	{
	public:
		float                                                      MinSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeScaleForBoid
	 */
	struct UFlocksStatics_RandomizeScaleForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScale;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeScaleForAllBoidsInGroup
	 */
	struct UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScale;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeScaleForAllBoids
	 */
	struct UFlocksStatics_RandomizeScaleForAllBoids_Params
	{
	public:
		float                                                      MinScale;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeAnimRateForBoid
	 */
	struct UFlocksStatics_RandomizeAnimRateForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAnimRate;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeAnimRateForAllBoidsInGroup
	 */
	struct UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAnimRate;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.RandomizeAnimRateForAllBoids
	 */
	struct UFlocksStatics_RandomizeAnimRateForAllBoids_Params
	{
	public:
		float                                                      MinAnimRate;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.LineTraceForBoids
	 */
	struct UFlocksStatics_LineTraceForBoids_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLineTraceForBoidsResult>                    Result;                                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.LineTraceForBoid
	 */
	struct UFlocksStatics_LineTraceForBoid_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLineTraceForBoidsResult                            Result;                                                  // 0x0018(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.IsValidVolumeHandle
	 */
	struct UFlocksStatics_IsValidVolumeHandle_Params
	{
	public:
		struct FFlocksVolumeBlueprintHandle                        Volume;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.IsValidBoidHandle
	 */
	struct UFlocksStatics_IsValidBoidHandle_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.IsBoidGoaling
	 */
	struct UFlocksStatics_IsBoidGoaling_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.IsBoidFleeing
	 */
	struct UFlocksStatics_IsBoidFleeing_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.HealBoid
	 */
	struct UFlocksStatics_HealBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Heal;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetNumBoidsAffectedByVolume
	 */
	struct UFlocksStatics_GetNumBoidsAffectedByVolume_Params
	{
	public:
		struct FFlocksVolumeBlueprintHandle                        Volume;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetNumBoids
	 */
	struct UFlocksStatics_GetNumBoids_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetMeshForBoid
	 */
	struct UFlocksStatics_GetMeshForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HTMD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetMaxGroups
	 */
	struct UFlocksStatics_GetMaxGroups_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetMaterialInstances
	 */
	struct UFlocksStatics_GetMaterialInstances_Params
	{
	public:
		int32_t                                                    MeshIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QP8M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMaterialInstanceDynamic*>                    OutMaterials;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetGroupSettings
	 */
	struct UFlocksStatics_GetGroupSettings_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YYAA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGroupSettings                                      Settings;                                                // 0x0008(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetFlocksWorld
	 */
	struct UFlocksStatics_GetFlocksWorld_Params
	{
	public:
		class AFlocksWorld*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidTurningSpeed
	 */
	struct UFlocksStatics_GetBoidTurningSpeed_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidSpeed
	 */
	struct UFlocksStatics_GetBoidSpeed_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidSettings
	 */
	struct UFlocksStatics_GetBoidSettings_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FBoidSettings                                       ReturnValue;                                             // 0x0004(0x0040)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidScale
	 */
	struct UFlocksStatics_GetBoidScale_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidRadiusAndCenter
	 */
	struct UFlocksStatics_GetBoidRadiusAndCenter_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      OutRadius;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutCenter;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidMaxHealth
	 */
	struct UFlocksStatics_GetBoidMaxHealth_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidLocation
	 */
	struct UFlocksStatics_GetBoidLocation_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidHealthPercent
	 */
	struct UFlocksStatics_GetBoidHealthPercent_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidHealth
	 */
	struct UFlocksStatics_GetBoidHealth_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidHeading
	 */
	struct UFlocksStatics_GetBoidHeading_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidGroup
	 */
	struct UFlocksStatics_GetBoidGroup_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidFromBlueprintID
	 */
	struct UFlocksStatics_GetBoidFromBlueprintID_Params
	{
	public:
		int32_t                                                    BlueprintID;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0004(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidBlueprintID
	 */
	struct UFlocksStatics_GetBoidBlueprintID_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    BlueprintID;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidAtIndex
	 */
	struct UFlocksStatics_GetBoidAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0004(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetBoidAnimRate
	 */
	struct UFlocksStatics_GetBoidAnimRate_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetAllBoidsInSphere
	 */
	struct UFlocksStatics_GetAllBoidsInSphere_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FFlocksBoidBlueprintHandle>                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.GetAllBoidsAffectedByVolume
	 */
	struct UFlocksStatics_GetAllBoidsAffectedByVolume_Params
	{
	public:
		struct FFlocksVolumeBlueprintHandle                        Volume;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7GA2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFlocksBoidBlueprintHandle>                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.DamageBoid
	 */
	struct UFlocksStatics_DamageBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutKilled;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.ClampTurningSpeedForBoid
	 */
	struct UFlocksStatics_ClampTurningSpeedForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinTurningSpeed;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxTurningSpeed;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.ClampSpeedForBoid
	 */
	struct UFlocksStatics_ClampSpeedForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.ClampScaleForBoid
	 */
	struct UFlocksStatics_ClampScaleForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinScale;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxScale;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.ClampAnimRateForBoid
	 */
	struct UFlocksStatics_ClampAnimRateForBoid_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MinAnimRate;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAnimRate;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.BatchRemoveBoids
	 */
	struct UFlocksStatics_BatchRemoveBoids_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.BatchAddBoids
	 */
	struct UFlocksStatics_BatchAddBoids_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PN3G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFlocksBoidBlueprintHandle>                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.ApplyBoidMaterialCustomValues
	 */
	struct UFlocksStatics_ApplyBoidMaterialCustomValues_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.ApplyAllBoidMaterialCustomValues
	 */
	struct UFlocksStatics_ApplyAllBoidMaterialCustomValues_Params
	{	};

	/**
	 * Function Flocks.FlocksStatics.AddBoidAtSpawnPoint
	 */
	struct UFlocksStatics_AddBoidAtSpawnPoint_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SpawnPoint;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRandomRotation;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I3LK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      RandomRadius;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          OutBoid;                                                 // 0x001C(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.AddBoidAtLocation
	 */
	struct UFlocksStatics_AddBoidAtLocation_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRandomRotation;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RAKF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      RandomRadius;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          OutBoid;                                                 // 0x0024(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.AddBoidAtActor
	 */
	struct UFlocksStatics_AddBoidAtActor_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CV8X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRandomRotation;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J2KJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      RandomRadius;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          OutBoid;                                                 // 0x0024(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.AddBoidAdvanced
	 */
	struct UFlocksStatics_AddBoidAdvanced_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MeshIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSpawnTypeSettings                                  Settings;                                                // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          OutBoid;                                                 // 0x0038(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksStatics.AddBoid
	 */
	struct UFlocksStatics_AddBoid_Params
	{
	public:
		int32_t                                                    Group;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0004(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksVolumeActor.OnEnableVolume
	 */
	struct AFlocksVolumeActor_OnEnableVolume_Params
	{	};

	/**
	 * Function Flocks.FlocksVolumeActor.OnDisableVolume
	 */
	struct AFlocksVolumeActor_OnDisableVolume_Params
	{	};

	/**
	 * Function Flocks.FlocksVolumeActor.GetVolumeHandle
	 */
	struct AFlocksVolumeActor_GetVolumeHandle_Params
	{
	public:
		struct FFlocksVolumeBlueprintHandle                        OutHandle;                                               // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksVolumeActor.EnableVolume
	 */
	struct AFlocksVolumeActor_EnableVolume_Params
	{	};

	/**
	 * Function Flocks.FlocksVolumeActor.DisableVolume
	 */
	struct AFlocksVolumeActor_DisableVolume_Params
	{	};

	/**
	 * Function Flocks.FlocksWorld.OnBoidRemoved
	 */
	struct AFlocksWorld_OnBoidRemoved_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksWorld.OnBoidKilled
	 */
	struct AFlocksWorld_OnBoidKilled_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3NO1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         CausedBy;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksWorld.OnBoidHealthChanged
	 */
	struct AFlocksWorld_OnBoidHealthChanged_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      OldHealth;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewHealth;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PRQH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         CausedBy;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Flocks.FlocksWorld.OnBoidAdded
	 */
	struct AFlocksWorld_OnBoidAdded_Params
	{
	public:
		struct FFlocksBoidBlueprintHandle                          Boid;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
