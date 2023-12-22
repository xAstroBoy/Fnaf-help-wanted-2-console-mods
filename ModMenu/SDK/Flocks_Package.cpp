/**
 * Name: HW2
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateSettingsForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FDefaultBoidSettings                        Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepHealthPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateSettingsForBoid(const struct FFlocksBoidBlueprintHandle& Boid, const struct FDefaultBoidSettings& Settings, bool bKeepHealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateSettingsForBoid");
		
		UFlocksStatics_UpdateSettingsForBoid_Params params {};
		params.Boid = Boid;
		params.Settings = Settings;
		params.bKeepHealthPercent = bKeepHealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateSettingsForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDefaultBoidSettings                        Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepHealthPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateSettingsForAllBoidsInGroup(int32_t Group, const struct FDefaultBoidSettings& Settings, bool bKeepHealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateSettingsForAllBoidsInGroup");
		
		UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.Settings = Settings;
		params.bKeepHealthPercent = bKeepHealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateSettingsForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDefaultBoidSettings                        Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepHealthPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateSettingsForAllBoids(const struct FDefaultBoidSettings& Settings, bool bKeepHealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateSettingsForAllBoids");
		
		UFlocksStatics_UpdateSettingsForAllBoids_Params params {};
		params.Settings = Settings;
		params.bKeepHealthPercent = bKeepHealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultVelocityForGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultVelocityForGroup(int32_t Group, float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultVelocityForGroup");
		
		UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Params params {};
		params.Group = Group;
		params.MinVelocity = MinVelocity;
		params.MaxVelocity = MaxVelocity;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultVelocityForAllGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultVelocityForAllGroups(float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultVelocityForAllGroups");
		
		UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Params params {};
		params.MinVelocity = MinVelocity;
		params.MaxVelocity = MaxVelocity;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultTurningSpeedForGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultTurningSpeedForGroup(int32_t Group, float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultTurningSpeedForGroup");
		
		UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Params params {};
		params.Group = Group;
		params.MinTurningSpeed = MinTurningSpeed;
		params.MaxTurningSpeed = MaxTurningSpeed;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultTurningSpeedForAllGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultTurningSpeedForAllGroups(float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultTurningSpeedForAllGroups");
		
		UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Params params {};
		params.MinTurningSpeed = MinTurningSpeed;
		params.MaxTurningSpeed = MaxTurningSpeed;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultSpeedForGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultSpeedForGroup(int32_t Group, float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultSpeedForGroup");
		
		UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Params params {};
		params.Group = Group;
		params.MinSpeed = MinSpeed;
		params.MaxSpeed = MaxSpeed;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultSpeedForAllGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultSpeedForAllGroups(float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultSpeedForAllGroups");
		
		UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Params params {};
		params.MinSpeed = MinSpeed;
		params.MaxSpeed = MaxSpeed;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultSettingsForGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDefaultBoidSettings                        Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultHealthMode                       UpdateHealthMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultSettingsForGroup(int32_t Group, const struct FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultSettingsForGroup");
		
		UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Params params {};
		params.Group = Group;
		params.Settings = Settings;
		params.UpdateMode = UpdateMode;
		params.UpdateHealthMode = UpdateHealthMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultSettingsForAllGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDefaultBoidSettings                        Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultHealthMode                       UpdateHealthMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultSettingsForAllGroups(const struct FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultSettingsForAllGroups");
		
		UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Params params {};
		params.Settings = Settings;
		params.UpdateMode = UpdateMode;
		params.UpdateHealthMode = UpdateHealthMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultScaleForGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultScaleForGroup(int32_t Group, float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultScaleForGroup");
		
		UFlocksStatics_UpdateBoidDefaultScaleForGroup_Params params {};
		params.Group = Group;
		params.MinScale = MinScale;
		params.MaxScale = MaxScale;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultScaleForAllGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultScaleForAllGroups(float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultScaleForAllGroups");
		
		UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Params params {};
		params.MinScale = MinScale;
		params.MaxScale = MaxScale;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultMaxHealthForGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewMaxHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultHealthMode                       UpdateHealthMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultMaxHealthForGroup(int32_t Group, float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultMaxHealthForGroup");
		
		UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Params params {};
		params.Group = Group;
		params.NewMaxHealth = NewMaxHealth;
		params.UpdateHealthMode = UpdateHealthMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultMaxHealthForAllGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMaxHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultHealthMode                       UpdateHealthMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultMaxHealthForAllGroups(float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultMaxHealthForAllGroups");
		
		UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Params params {};
		params.NewMaxHealth = NewMaxHealth;
		params.UpdateHealthMode = UpdateHealthMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultAnimRateForMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MeshIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultAnimRateForMesh(int32_t MeshIndex, float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultAnimRateForMesh");
		
		UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Params params {};
		params.MeshIndex = MeshIndex;
		params.MinAnimRate = MinAnimRate;
		params.MaxAnimRate = MaxAnimRate;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.UpdateBoidDefaultAnimRateForAllMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUpdateBoidDefaultsMode                            UpdateMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::UpdateBoidDefaultAnimRateForAllMeshes(float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.UpdateBoidDefaultAnimRateForAllMeshes");
		
		UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Params params {};
		params.MinAnimRate = MinAnimRate;
		params.MaxAnimRate = MaxAnimRate;
		params.UpdateMode = UpdateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetVelocityForBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetVelocityForBoidsInGroup(int32_t Group, float NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetVelocityForBoidsInGroup");
		
		UFlocksStatics_SetVelocityForBoidsInGroup_Params params {};
		params.Group = Group;
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetVelocityForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetVelocityForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetVelocityForBoid");
		
		UFlocksStatics_SetVelocityForBoid_Params params {};
		params.Boid = Boid;
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetVelocityForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetVelocityForAllBoids(float NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetVelocityForAllBoids");
		
		UFlocksStatics_SetVelocityForAllBoids_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetTurningSpeedForBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetTurningSpeedForBoidsInGroup(int32_t Group, float NewTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetTurningSpeedForBoidsInGroup");
		
		UFlocksStatics_SetTurningSpeedForBoidsInGroup_Params params {};
		params.Group = Group;
		params.NewTurningSpeed = NewTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetTurningSpeedForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetTurningSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetTurningSpeedForBoid");
		
		UFlocksStatics_SetTurningSpeedForBoid_Params params {};
		params.Boid = Boid;
		params.NewTurningSpeed = NewTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetTurningSpeedForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetTurningSpeedForAllBoids(float NewTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetTurningSpeedForAllBoids");
		
		UFlocksStatics_SetTurningSpeedForAllBoids_Params params {};
		params.NewTurningSpeed = NewTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetSpeedForBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetSpeedForBoidsInGroup(int32_t Group, float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetSpeedForBoidsInGroup");
		
		UFlocksStatics_SetSpeedForBoidsInGroup_Params params {};
		params.Group = Group;
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetSpeedForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetSpeedForBoid");
		
		UFlocksStatics_SetSpeedForBoid_Params params {};
		params.Boid = Boid;
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetSpeedForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetSpeedForAllBoids(float NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetSpeedForAllBoids");
		
		UFlocksStatics_SetSpeedForAllBoids_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetScaleForBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetScaleForBoidsInGroup(int32_t Group, float NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetScaleForBoidsInGroup");
		
		UFlocksStatics_SetScaleForBoidsInGroup_Params params {};
		params.Group = Group;
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetScaleForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetScaleForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetScaleForBoid");
		
		UFlocksStatics_SetScaleForBoid_Params params {};
		params.Boid = Boid;
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetScaleForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetScaleForAllBoids(float NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetScaleForAllBoids");
		
		UFlocksStatics_SetScaleForAllBoids_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetMaxHealthForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewMaxHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepHealthPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetMaxHealthForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewMaxHealth, bool bKeepHealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetMaxHealthForBoid");
		
		UFlocksStatics_SetMaxHealthForBoid_Params params {};
		params.Boid = Boid;
		params.NewMaxHealth = NewMaxHealth;
		params.bKeepHealthPercent = bKeepHealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetMaxHealthForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewMaxHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepHealthPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetMaxHealthForAllBoidsInGroup(int32_t Group, float NewMaxHealth, bool bKeepHealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetMaxHealthForAllBoidsInGroup");
		
		UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.NewMaxHealth = NewMaxHealth;
		params.bKeepHealthPercent = bKeepHealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetMaxHealthForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMaxHealth                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepHealthPercent                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetMaxHealthForAllBoids(float NewMaxHealth, bool bKeepHealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetMaxHealthForAllBoids");
		
		UFlocksStatics_SetMaxHealthForAllBoids_Params params {};
		params.NewMaxHealth = NewMaxHealth;
		params.bKeepHealthPercent = bKeepHealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetHealthForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Health                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutKilled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetHealthForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float Health, class AController* Instigator, bool* OutKilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetHealthForBoid");
		
		UFlocksStatics_SetHealthForBoid_Params params {};
		params.Boid = Boid;
		params.Health = Health;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKilled != nullptr)
			*OutKilled = params.OutKilled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGroupSettings                              Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupSettings(int32_t Group, const struct FGroupSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupSettings");
		
		UFlocksStatics_SetGroupSettings_Params params {};
		params.Group = Group;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupSeparationRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SeparationRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupSeparationRadius(int32_t Group, float SeparationRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupSeparationRadius");
		
		UFlocksStatics_SetGroupSeparationRadius_Params params {};
		params.Group = Group;
		params.SeparationRadius = SeparationRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupSeparation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Separation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupSeparation(int32_t Group, float Separation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupSeparation");
		
		UFlocksStatics_SetGroupSeparation_Params params {};
		params.Group = Group;
		params.Separation = Separation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupRestriction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Restriction                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupRestriction(int32_t Group, float Restriction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupRestriction");
		
		UFlocksStatics_SetGroupRestriction_Params params {};
		params.Group = Group;
		params.Restriction = Restriction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupResponseToGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGroupResponses                                    Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupResponseToGroup(int32_t Group, int32_t OtherGroup, EGroupResponses Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupResponseToGroup");
		
		UFlocksStatics_SetGroupResponseToGroup_Params params {};
		params.Group = Group;
		params.OtherGroup = OtherGroup;
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupPreferNonVerticalMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPreferNonVerticalMovement                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupPreferNonVerticalMovement(int32_t Group, bool bPreferNonVerticalMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupPreferNonVerticalMovement");
		
		UFlocksStatics_SetGroupPreferNonVerticalMovement_Params params {};
		params.Group = Group;
		params.bPreferNonVerticalMovement = bPreferNonVerticalMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Goal                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupGoal(int32_t Group, float Goal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupGoal");
		
		UFlocksStatics_SetGroupGoal_Params params {};
		params.Group = Group;
		params.Goal = Goal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupFlee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Flee                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupFlee(int32_t Group, float Flee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupFlee");
		
		UFlocksStatics_SetGroupFlee_Params params {};
		params.Group = Group;
		params.Flee = Flee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupCohesionRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CohesionRadius                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupCohesionRadius(int32_t Group, float CohesionRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupCohesionRadius");
		
		UFlocksStatics_SetGroupCohesionRadius_Params params {};
		params.Group = Group;
		params.CohesionRadius = CohesionRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupCohesion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Cohesion                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupCohesion(int32_t Group, float Cohesion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupCohesion");
		
		UFlocksStatics_SetGroupCohesion_Params params {};
		params.Group = Group;
		params.Cohesion = Cohesion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupAlignmentRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AlignmentRadius                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupAlignmentRadius(int32_t Group, float AlignmentRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupAlignmentRadius");
		
		UFlocksStatics_SetGroupAlignmentRadius_Params params {};
		params.Group = Group;
		params.AlignmentRadius = AlignmentRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetGroupAlignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetGroupAlignment(int32_t Group, float Alignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetGroupAlignment");
		
		UFlocksStatics_SetGroupAlignment_Params params {};
		params.Group = Group;
		params.Alignment = Alignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetBoidMaterialCustomValueOnAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ValueIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetBoidMaterialCustomValueOnAll(int32_t ValueIndex, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetBoidMaterialCustomValueOnAll");
		
		UFlocksStatics_SetBoidMaterialCustomValueOnAll_Params params {};
		params.ValueIndex = ValueIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetBoidMaterialCustomValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ValueIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetBoidMaterialCustomValue(const struct FFlocksBoidBlueprintHandle& Boid, int32_t ValueIndex, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetBoidMaterialCustomValue");
		
		UFlocksStatics_SetBoidMaterialCustomValue_Params params {};
		params.Boid = Boid;
		params.ValueIndex = ValueIndex;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetAnimRateForBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetAnimRateForBoidsInGroup(int32_t Group, float NewAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetAnimRateForBoidsInGroup");
		
		UFlocksStatics_SetAnimRateForBoidsInGroup_Params params {};
		params.Group = Group;
		params.NewAnimRate = NewAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetAnimRateForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetAnimRateForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetAnimRateForBoid");
		
		UFlocksStatics_SetAnimRateForBoid_Params params {};
		params.Boid = Boid;
		params.NewAnimRate = NewAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.SetAnimRateForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::SetAnimRateForAllBoids(float NewAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.SetAnimRateForAllBoids");
		
		UFlocksStatics_SetAnimRateForAllBoids_Params params {};
		params.NewAnimRate = NewAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RemoveBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RemoveBoid(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RemoveBoid");
		
		UFlocksStatics_RemoveBoid_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeVelocityForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeVelocityForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinVelocity, float MaxVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeVelocityForBoid");
		
		UFlocksStatics_RandomizeVelocityForBoid_Params params {};
		params.Boid = Boid;
		params.MinVelocity = MinVelocity;
		params.MaxVelocity = MaxVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeVelocityForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeVelocityForAllBoidsInGroup(int32_t Group, float MinVelocity, float MaxVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeVelocityForAllBoidsInGroup");
		
		UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.MinVelocity = MinVelocity;
		params.MaxVelocity = MaxVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeVelocityForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeVelocityForAllBoids(float MinVelocity, float MaxVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeVelocityForAllBoids");
		
		UFlocksStatics_RandomizeVelocityForAllBoids_Params params {};
		params.MinVelocity = MinVelocity;
		params.MaxVelocity = MaxVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeTurningSpeedForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeTurningSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeTurningSpeedForBoid");
		
		UFlocksStatics_RandomizeTurningSpeedForBoid_Params params {};
		params.Boid = Boid;
		params.MinTurningSpeed = MinTurningSpeed;
		params.MaxTurningSpeed = MaxTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeTurningSpeedForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeTurningSpeedForAllBoidsInGroup(int32_t Group, float MinTurningSpeed, float MaxTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeTurningSpeedForAllBoidsInGroup");
		
		UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.MinTurningSpeed = MinTurningSpeed;
		params.MaxTurningSpeed = MaxTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeTurningSpeedForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeTurningSpeedForAllBoids(float MinTurningSpeed, float MaxTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeTurningSpeedForAllBoids");
		
		UFlocksStatics_RandomizeTurningSpeedForAllBoids_Params params {};
		params.MinTurningSpeed = MinTurningSpeed;
		params.MaxTurningSpeed = MaxTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeSpeedForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeSpeedForBoid");
		
		UFlocksStatics_RandomizeSpeedForBoid_Params params {};
		params.Boid = Boid;
		params.MinSpeed = MinSpeed;
		params.MaxSpeed = MaxSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeSpeedForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeSpeedForAllBoidsInGroup(int32_t Group, float MinSpeed, float MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeSpeedForAllBoidsInGroup");
		
		UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.MinSpeed = MinSpeed;
		params.MaxSpeed = MaxSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeSpeedForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeSpeedForAllBoids(float MinSpeed, float MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeSpeedForAllBoids");
		
		UFlocksStatics_RandomizeSpeedForAllBoids_Params params {};
		params.MinSpeed = MinSpeed;
		params.MaxSpeed = MaxSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeScaleForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeScaleForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeScaleForBoid");
		
		UFlocksStatics_RandomizeScaleForBoid_Params params {};
		params.Boid = Boid;
		params.MinScale = MinScale;
		params.MaxScale = MaxScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeScaleForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeScaleForAllBoidsInGroup(int32_t Group, float MinScale, float MaxScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeScaleForAllBoidsInGroup");
		
		UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.MinScale = MinScale;
		params.MaxScale = MaxScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeScaleForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeScaleForAllBoids(float MinScale, float MaxScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeScaleForAllBoids");
		
		UFlocksStatics_RandomizeScaleForAllBoids_Params params {};
		params.MinScale = MinScale;
		params.MaxScale = MaxScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeAnimRateForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeAnimRateForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeAnimRateForBoid");
		
		UFlocksStatics_RandomizeAnimRateForBoid_Params params {};
		params.Boid = Boid;
		params.MinAnimRate = MinAnimRate;
		params.MaxAnimRate = MaxAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeAnimRateForAllBoidsInGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeAnimRateForAllBoidsInGroup(int32_t Group, float MinAnimRate, float MaxAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeAnimRateForAllBoidsInGroup");
		
		UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Params params {};
		params.Group = Group;
		params.MinAnimRate = MinAnimRate;
		params.MaxAnimRate = MaxAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.RandomizeAnimRateForAllBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::RandomizeAnimRateForAllBoids(float MinAnimRate, float MaxAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.RandomizeAnimRateForAllBoids");
		
		UFlocksStatics_RandomizeAnimRateForAllBoids_Params params {};
		params.MinAnimRate = MinAnimRate;
		params.MaxAnimRate = MaxAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.LineTraceForBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLineTraceForBoidsResult>            Result                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::LineTraceForBoids(const struct FVector& Start, const struct FVector& End, TArray<struct FLineTraceForBoidsResult>* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.LineTraceForBoids");
		
		UFlocksStatics_LineTraceForBoids_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.LineTraceForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLineTraceForBoidsResult                    Result                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::LineTraceForBoid(const struct FVector& Start, const struct FVector& End, struct FLineTraceForBoidsResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.LineTraceForBoid");
		
		UFlocksStatics_LineTraceForBoid_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.IsValidVolumeHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksVolumeBlueprintHandle                Volume                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::IsValidVolumeHandle(const struct FFlocksVolumeBlueprintHandle& Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.IsValidVolumeHandle");
		
		UFlocksStatics_IsValidVolumeHandle_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.IsValidBoidHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::IsValidBoidHandle(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.IsValidBoidHandle");
		
		UFlocksStatics_IsValidBoidHandle_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.IsBoidGoaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::IsBoidGoaling(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.IsBoidGoaling");
		
		UFlocksStatics_IsBoidGoaling_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.IsBoidFleeing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::IsBoidFleeing(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.IsBoidFleeing");
		
		UFlocksStatics_IsBoidFleeing_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.HealBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Heal                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::HealBoid(const struct FFlocksBoidBlueprintHandle& Boid, float Heal, class AController* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.HealBoid");
		
		UFlocksStatics_HealBoid_Params params {};
		params.Boid = Boid;
		params.Heal = Heal;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetNumBoidsAffectedByVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksVolumeBlueprintHandle                Volume                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UFlocksStatics::GetNumBoidsAffectedByVolume(const struct FFlocksVolumeBlueprintHandle& Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetNumBoidsAffectedByVolume");
		
		UFlocksStatics_GetNumBoidsAffectedByVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetNumBoids
	 * 		Flags  -> ()
	 */
	int32_t UFlocksStatics::GetNumBoids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetNumBoids");
		
		UFlocksStatics_GetNumBoids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetMeshForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UStaticMesh* UFlocksStatics::GetMeshForBoid(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetMeshForBoid");
		
		UFlocksStatics_GetMeshForBoid_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetMaxGroups
	 * 		Flags  -> ()
	 */
	int32_t UFlocksStatics::GetMaxGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetMaxGroups");
		
		UFlocksStatics_GetMaxGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetMaterialInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MeshIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMaterialInstanceDynamic*>            OutMaterials                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::GetMaterialInstances(int32_t MeshIndex, TArray<class UMaterialInstanceDynamic*>* OutMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetMaterialInstances");
		
		UFlocksStatics_GetMaterialInstances_Params params {};
		params.MeshIndex = MeshIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMaterials != nullptr)
			*OutMaterials = params.OutMaterials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetGroupSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGroupSettings                              Settings                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::GetGroupSettings(int32_t Group, struct FGroupSettings* Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetGroupSettings");
		
		UFlocksStatics_GetGroupSettings_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetFlocksWorld
	 * 		Flags  -> ()
	 */
	class AFlocksWorld* UFlocksStatics::GetFlocksWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetFlocksWorld");
		
		UFlocksStatics_GetFlocksWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidTurningSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidTurningSpeed(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidTurningSpeed");
		
		UFlocksStatics_GetBoidTurningSpeed_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidSpeed(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidSpeed");
		
		UFlocksStatics_GetBoidSpeed_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FBoidSettings UFlocksStatics::GetBoidSettings(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidSettings");
		
		UFlocksStatics_GetBoidSettings_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidScale(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidScale");
		
		UFlocksStatics_GetBoidScale_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidRadiusAndCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              OutRadius                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCenter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::GetBoidRadiusAndCenter(const struct FFlocksBoidBlueprintHandle& Boid, float* OutRadius, struct FVector* OutCenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidRadiusAndCenter");
		
		UFlocksStatics_GetBoidRadiusAndCenter_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRadius != nullptr)
			*OutRadius = params.OutRadius;
		if (OutCenter != nullptr)
			*OutCenter = params.OutCenter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidMaxHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidMaxHealth(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidMaxHealth");
		
		UFlocksStatics_GetBoidMaxHealth_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UFlocksStatics::GetBoidLocation(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidLocation");
		
		UFlocksStatics_GetBoidLocation_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidHealthPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidHealthPercent(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidHealthPercent");
		
		UFlocksStatics_GetBoidHealthPercent_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidHealth(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidHealth");
		
		UFlocksStatics_GetBoidHealth_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidHeading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UFlocksStatics::GetBoidHeading(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidHeading");
		
		UFlocksStatics_GetBoidHeading_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UFlocksStatics::GetBoidGroup(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidGroup");
		
		UFlocksStatics_GetBoidGroup_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidFromBlueprintID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BlueprintID                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::GetBoidFromBlueprintID(int32_t BlueprintID, struct FFlocksBoidBlueprintHandle* Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidFromBlueprintID");
		
		UFlocksStatics_GetBoidFromBlueprintID_Params params {};
		params.BlueprintID = BlueprintID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Boid != nullptr)
			*Boid = params.Boid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidBlueprintID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BlueprintID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::GetBoidBlueprintID(const struct FFlocksBoidBlueprintHandle& Boid, int32_t* BlueprintID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidBlueprintID");
		
		UFlocksStatics_GetBoidBlueprintID_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlueprintID != nullptr)
			*BlueprintID = params.BlueprintID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::GetBoidAtIndex(int32_t Index, struct FFlocksBoidBlueprintHandle* Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidAtIndex");
		
		UFlocksStatics_GetBoidAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Boid != nullptr)
			*Boid = params.Boid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetBoidAnimRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UFlocksStatics::GetBoidAnimRate(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetBoidAnimRate");
		
		UFlocksStatics_GetBoidAnimRate_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetAllBoidsInSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FFlocksBoidBlueprintHandle> UFlocksStatics::GetAllBoidsInSphere(const struct FVector& Origin, float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetAllBoidsInSphere");
		
		UFlocksStatics_GetAllBoidsInSphere_Params params {};
		params.Origin = Origin;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.GetAllBoidsAffectedByVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksVolumeBlueprintHandle                Volume                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FFlocksBoidBlueprintHandle> UFlocksStatics::GetAllBoidsAffectedByVolume(const struct FFlocksVolumeBlueprintHandle& Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.GetAllBoidsAffectedByVolume");
		
		UFlocksStatics_GetAllBoidsAffectedByVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.DamageBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutKilled                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::DamageBoid(const struct FFlocksBoidBlueprintHandle& Boid, float Damage, class AController* Instigator, bool* OutKilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.DamageBoid");
		
		UFlocksStatics_DamageBoid_Params params {};
		params.Boid = Boid;
		params.Damage = Damage;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKilled != nullptr)
			*OutKilled = params.OutKilled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.ClampTurningSpeedForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTurningSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::ClampTurningSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.ClampTurningSpeedForBoid");
		
		UFlocksStatics_ClampTurningSpeedForBoid_Params params {};
		params.Boid = Boid;
		params.MinTurningSpeed = MinTurningSpeed;
		params.MaxTurningSpeed = MaxTurningSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.ClampSpeedForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::ClampSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.ClampSpeedForBoid");
		
		UFlocksStatics_ClampSpeedForBoid_Params params {};
		params.Boid = Boid;
		params.MinSpeed = MinSpeed;
		params.MaxSpeed = MaxSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.ClampScaleForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::ClampScaleForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.ClampScaleForBoid");
		
		UFlocksStatics_ClampScaleForBoid_Params params {};
		params.Boid = Boid;
		params.MinScale = MinScale;
		params.MaxScale = MaxScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.ClampAnimRateForBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxAnimRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::ClampAnimRateForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.ClampAnimRateForBoid");
		
		UFlocksStatics_ClampAnimRateForBoid_Params params {};
		params.Boid = Boid;
		params.MinAnimRate = MinAnimRate;
		params.MaxAnimRate = MaxAnimRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.BatchRemoveBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::BatchRemoveBoids(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.BatchRemoveBoids");
		
		UFlocksStatics_BatchRemoveBoids_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.BatchAddBoids
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FFlocksBoidBlueprintHandle> UFlocksStatics::BatchAddBoids(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.BatchAddBoids");
		
		UFlocksStatics_BatchAddBoids_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.ApplyBoidMaterialCustomValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFlocksStatics::ApplyBoidMaterialCustomValues(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.ApplyBoidMaterialCustomValues");
		
		UFlocksStatics_ApplyBoidMaterialCustomValues_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.ApplyAllBoidMaterialCustomValues
	 * 		Flags  -> ()
	 */
	void UFlocksStatics::ApplyAllBoidMaterialCustomValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.ApplyAllBoidMaterialCustomValues");
		
		UFlocksStatics_ApplyAllBoidMaterialCustomValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.AddBoidAtSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRandomRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              RandomRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  OutBoid                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::AddBoidAtSpawnPoint(int32_t Group, int32_t SpawnPoint, bool bRandomRotation, const struct FRotator& Rotation, float RandomRadius, struct FFlocksBoidBlueprintHandle* OutBoid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.AddBoidAtSpawnPoint");
		
		UFlocksStatics_AddBoidAtSpawnPoint_Params params {};
		params.Group = Group;
		params.SpawnPoint = SpawnPoint;
		params.bRandomRotation = bRandomRotation;
		params.Rotation = Rotation;
		params.RandomRadius = RandomRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBoid != nullptr)
			*OutBoid = params.OutBoid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.AddBoidAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRandomRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              RandomRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  OutBoid                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::AddBoidAtLocation(int32_t Group, const struct FVector& Location, bool bRandomRotation, const struct FRotator& Rotation, float RandomRadius, struct FFlocksBoidBlueprintHandle* OutBoid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.AddBoidAtLocation");
		
		UFlocksStatics_AddBoidAtLocation_Params params {};
		params.Group = Group;
		params.Location = Location;
		params.bRandomRotation = bRandomRotation;
		params.Rotation = Rotation;
		params.RandomRadius = RandomRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBoid != nullptr)
			*OutBoid = params.OutBoid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.AddBoidAtActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRandomRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              RandomRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  OutBoid                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::AddBoidAtActor(int32_t Group, class AActor* Actor, bool bRandomRotation, const struct FRotator& Rotation, float RandomRadius, struct FFlocksBoidBlueprintHandle* OutBoid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.AddBoidAtActor");
		
		UFlocksStatics_AddBoidAtActor_Params params {};
		params.Group = Group;
		params.Actor = Actor;
		params.bRandomRotation = bRandomRotation;
		params.Rotation = Rotation;
		params.RandomRadius = RandomRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBoid != nullptr)
			*OutBoid = params.OutBoid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.AddBoidAdvanced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MeshIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpawnTypeSettings                          Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  OutBoid                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::AddBoidAdvanced(int32_t Group, int32_t MeshIndex, const struct FSpawnTypeSettings& Settings, struct FFlocksBoidBlueprintHandle* OutBoid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.AddBoidAdvanced");
		
		UFlocksStatics_AddBoidAdvanced_Params params {};
		params.Group = Group;
		params.MeshIndex = MeshIndex;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBoid != nullptr)
			*OutBoid = params.OutBoid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksStatics.AddBoid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlocksStatics::AddBoid(int32_t Group, struct FFlocksBoidBlueprintHandle* Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksStatics.AddBoid");
		
		UFlocksStatics_AddBoid_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Boid != nullptr)
			*Boid = params.Boid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlocksStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlocksStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Flocks.FlocksStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlocksAnimationData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlocksAnimationData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Flocks.FlocksAnimationData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksVolumeActor.OnEnableVolume
	 * 		Flags  -> ()
	 */
	void AFlocksVolumeActor::OnEnableVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksVolumeActor.OnEnableVolume");
		
		AFlocksVolumeActor_OnEnableVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksVolumeActor.OnDisableVolume
	 * 		Flags  -> ()
	 */
	void AFlocksVolumeActor::OnDisableVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksVolumeActor.OnDisableVolume");
		
		AFlocksVolumeActor_OnDisableVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksVolumeActor.GetVolumeHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksVolumeBlueprintHandle                OutHandle                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AFlocksVolumeActor::GetVolumeHandle(struct FFlocksVolumeBlueprintHandle* OutHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksVolumeActor.GetVolumeHandle");
		
		AFlocksVolumeActor_GetVolumeHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHandle != nullptr)
			*OutHandle = params.OutHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksVolumeActor.EnableVolume
	 * 		Flags  -> ()
	 */
	void AFlocksVolumeActor::EnableVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksVolumeActor.EnableVolume");
		
		AFlocksVolumeActor_EnableVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksVolumeActor.DisableVolume
	 * 		Flags  -> ()
	 */
	void AFlocksVolumeActor::DisableVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksVolumeActor.DisableVolume");
		
		AFlocksVolumeActor_DisableVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlocksVolumeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlocksVolumeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Flocks.FlocksVolumeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksWorld.OnBoidRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AFlocksWorld::OnBoidRemoved(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksWorld.OnBoidRemoved");
		
		AFlocksWorld_OnBoidRemoved_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksWorld.OnBoidKilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class AController*                                 CausedBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlocksWorld::OnBoidKilled(const struct FFlocksBoidBlueprintHandle& Boid, class AController* CausedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksWorld.OnBoidKilled");
		
		AFlocksWorld_OnBoidKilled_Params params {};
		params.Boid = Boid;
		params.CausedBy = CausedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksWorld.OnBoidHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              OldHealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewHealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 CausedBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlocksWorld::OnBoidHealthChanged(const struct FFlocksBoidBlueprintHandle& Boid, float OldHealth, float NewHealth, class AController* CausedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksWorld.OnBoidHealthChanged");
		
		AFlocksWorld_OnBoidHealthChanged_Params params {};
		params.Boid = Boid;
		params.OldHealth = OldHealth;
		params.NewHealth = NewHealth;
		params.CausedBy = CausedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Flocks.FlocksWorld.OnBoidAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFlocksBoidBlueprintHandle                  Boid                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AFlocksWorld::OnBoidAdded(const struct FFlocksBoidBlueprintHandle& Boid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Flocks.FlocksWorld.OnBoidAdded");
		
		AFlocksWorld_OnBoidAdded_Params params {};
		params.Boid = Boid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFlocksWorld.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlocksWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Flocks.FlocksWorld");
		return ptr;
	}

}


