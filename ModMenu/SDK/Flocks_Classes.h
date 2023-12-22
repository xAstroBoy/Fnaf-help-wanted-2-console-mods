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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Flocks.FlocksStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlocksStatics : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateSettingsForBoid(const struct FFlocksBoidBlueprintHandle& Boid, const struct FDefaultBoidSettings& Settings, bool bKeepHealthPercent);
		void UpdateSettingsForAllBoidsInGroup(int32_t Group, const struct FDefaultBoidSettings& Settings, bool bKeepHealthPercent);
		void UpdateSettingsForAllBoids(const struct FDefaultBoidSettings& Settings, bool bKeepHealthPercent);
		void UpdateBoidDefaultVelocityForGroup(int32_t Group, float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultVelocityForAllGroups(float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultTurningSpeedForGroup(int32_t Group, float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultTurningSpeedForAllGroups(float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultSpeedForGroup(int32_t Group, float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultSpeedForAllGroups(float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultSettingsForGroup(int32_t Group, const struct FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode);
		void UpdateBoidDefaultSettingsForAllGroups(const struct FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode);
		void UpdateBoidDefaultScaleForGroup(int32_t Group, float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultScaleForAllGroups(float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultMaxHealthForGroup(int32_t Group, float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode);
		void UpdateBoidDefaultMaxHealthForAllGroups(float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode);
		void UpdateBoidDefaultAnimRateForMesh(int32_t MeshIndex, float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode);
		void UpdateBoidDefaultAnimRateForAllMeshes(float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode);
		void SetVelocityForBoidsInGroup(int32_t Group, float NewVelocity);
		void SetVelocityForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewVelocity);
		void SetVelocityForAllBoids(float NewVelocity);
		void SetTurningSpeedForBoidsInGroup(int32_t Group, float NewTurningSpeed);
		void SetTurningSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewTurningSpeed);
		void SetTurningSpeedForAllBoids(float NewTurningSpeed);
		void SetSpeedForBoidsInGroup(int32_t Group, float NewSpeed);
		void SetSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewSpeed);
		void SetSpeedForAllBoids(float NewSpeed);
		void SetScaleForBoidsInGroup(int32_t Group, float NewScale);
		void SetScaleForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewScale);
		void SetScaleForAllBoids(float NewScale);
		void SetMaxHealthForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewMaxHealth, bool bKeepHealthPercent);
		void SetMaxHealthForAllBoidsInGroup(int32_t Group, float NewMaxHealth, bool bKeepHealthPercent);
		void SetMaxHealthForAllBoids(float NewMaxHealth, bool bKeepHealthPercent);
		void SetHealthForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float Health, class AController* Instigator, bool* OutKilled);
		void SetGroupSettings(int32_t Group, const struct FGroupSettings& Settings);
		void SetGroupSeparationRadius(int32_t Group, float SeparationRadius);
		void SetGroupSeparation(int32_t Group, float Separation);
		void SetGroupRestriction(int32_t Group, float Restriction);
		void SetGroupResponseToGroup(int32_t Group, int32_t OtherGroup, EGroupResponses Response);
		void SetGroupPreferNonVerticalMovement(int32_t Group, bool bPreferNonVerticalMovement);
		void SetGroupGoal(int32_t Group, float Goal);
		void SetGroupFlee(int32_t Group, float Flee);
		void SetGroupCohesionRadius(int32_t Group, float CohesionRadius);
		void SetGroupCohesion(int32_t Group, float Cohesion);
		void SetGroupAlignmentRadius(int32_t Group, float AlignmentRadius);
		void SetGroupAlignment(int32_t Group, float Alignment);
		void SetBoidMaterialCustomValueOnAll(int32_t ValueIndex, float Value);
		void SetBoidMaterialCustomValue(const struct FFlocksBoidBlueprintHandle& Boid, int32_t ValueIndex, float Value);
		void SetAnimRateForBoidsInGroup(int32_t Group, float NewAnimRate);
		void SetAnimRateForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float NewAnimRate);
		void SetAnimRateForAllBoids(float NewAnimRate);
		void RemoveBoid(const struct FFlocksBoidBlueprintHandle& Boid);
		void RandomizeVelocityForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinVelocity, float MaxVelocity);
		void RandomizeVelocityForAllBoidsInGroup(int32_t Group, float MinVelocity, float MaxVelocity);
		void RandomizeVelocityForAllBoids(float MinVelocity, float MaxVelocity);
		void RandomizeTurningSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed);
		void RandomizeTurningSpeedForAllBoidsInGroup(int32_t Group, float MinTurningSpeed, float MaxTurningSpeed);
		void RandomizeTurningSpeedForAllBoids(float MinTurningSpeed, float MaxTurningSpeed);
		void RandomizeSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed);
		void RandomizeSpeedForAllBoidsInGroup(int32_t Group, float MinSpeed, float MaxSpeed);
		void RandomizeSpeedForAllBoids(float MinSpeed, float MaxSpeed);
		void RandomizeScaleForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale);
		void RandomizeScaleForAllBoidsInGroup(int32_t Group, float MinScale, float MaxScale);
		void RandomizeScaleForAllBoids(float MinScale, float MaxScale);
		void RandomizeAnimRateForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate);
		void RandomizeAnimRateForAllBoidsInGroup(int32_t Group, float MinAnimRate, float MaxAnimRate);
		void RandomizeAnimRateForAllBoids(float MinAnimRate, float MaxAnimRate);
		bool LineTraceForBoids(const struct FVector& Start, const struct FVector& End, TArray<struct FLineTraceForBoidsResult>* Result);
		bool LineTraceForBoid(const struct FVector& Start, const struct FVector& End, struct FLineTraceForBoidsResult* Result);
		bool IsValidVolumeHandle(const struct FFlocksVolumeBlueprintHandle& Volume);
		bool IsValidBoidHandle(const struct FFlocksBoidBlueprintHandle& Boid);
		bool IsBoidGoaling(const struct FFlocksBoidBlueprintHandle& Boid);
		bool IsBoidFleeing(const struct FFlocksBoidBlueprintHandle& Boid);
		void HealBoid(const struct FFlocksBoidBlueprintHandle& Boid, float Heal, class AController* Instigator);
		int32_t GetNumBoidsAffectedByVolume(const struct FFlocksVolumeBlueprintHandle& Volume);
		int32_t GetNumBoids();
		class UStaticMesh* GetMeshForBoid(const struct FFlocksBoidBlueprintHandle& Boid);
		int32_t GetMaxGroups();
		void GetMaterialInstances(int32_t MeshIndex, TArray<class UMaterialInstanceDynamic*>* OutMaterials);
		void GetGroupSettings(int32_t Group, struct FGroupSettings* Settings);
		class AFlocksWorld* GetFlocksWorld();
		float GetBoidTurningSpeed(const struct FFlocksBoidBlueprintHandle& Boid);
		float GetBoidSpeed(const struct FFlocksBoidBlueprintHandle& Boid);
		struct FBoidSettings GetBoidSettings(const struct FFlocksBoidBlueprintHandle& Boid);
		float GetBoidScale(const struct FFlocksBoidBlueprintHandle& Boid);
		void GetBoidRadiusAndCenter(const struct FFlocksBoidBlueprintHandle& Boid, float* OutRadius, struct FVector* OutCenter);
		float GetBoidMaxHealth(const struct FFlocksBoidBlueprintHandle& Boid);
		struct FVector GetBoidLocation(const struct FFlocksBoidBlueprintHandle& Boid);
		float GetBoidHealthPercent(const struct FFlocksBoidBlueprintHandle& Boid);
		float GetBoidHealth(const struct FFlocksBoidBlueprintHandle& Boid);
		struct FRotator GetBoidHeading(const struct FFlocksBoidBlueprintHandle& Boid);
		int32_t GetBoidGroup(const struct FFlocksBoidBlueprintHandle& Boid);
		bool GetBoidFromBlueprintID(int32_t BlueprintID, struct FFlocksBoidBlueprintHandle* Boid);
		bool GetBoidBlueprintID(const struct FFlocksBoidBlueprintHandle& Boid, int32_t* BlueprintID);
		bool GetBoidAtIndex(int32_t Index, struct FFlocksBoidBlueprintHandle* Boid);
		float GetBoidAnimRate(const struct FFlocksBoidBlueprintHandle& Boid);
		TArray<struct FFlocksBoidBlueprintHandle> GetAllBoidsInSphere(const struct FVector& Origin, float Radius);
		TArray<struct FFlocksBoidBlueprintHandle> GetAllBoidsAffectedByVolume(const struct FFlocksVolumeBlueprintHandle& Volume);
		void DamageBoid(const struct FFlocksBoidBlueprintHandle& Boid, float Damage, class AController* Instigator, bool* OutKilled);
		void ClampTurningSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed);
		void ClampSpeedForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed);
		void ClampScaleForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale);
		void ClampAnimRateForBoid(const struct FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate);
		void BatchRemoveBoids(int32_t Amount);
		TArray<struct FFlocksBoidBlueprintHandle> BatchAddBoids(int32_t Amount);
		void ApplyBoidMaterialCustomValues(const struct FFlocksBoidBlueprintHandle& Boid);
		void ApplyAllBoidMaterialCustomValues();
		bool AddBoidAtSpawnPoint(int32_t Group, int32_t SpawnPoint, bool bRandomRotation, const struct FRotator& Rotation, float RandomRadius, struct FFlocksBoidBlueprintHandle* OutBoid);
		bool AddBoidAtLocation(int32_t Group, const struct FVector& Location, bool bRandomRotation, const struct FRotator& Rotation, float RandomRadius, struct FFlocksBoidBlueprintHandle* OutBoid);
		bool AddBoidAtActor(int32_t Group, class AActor* Actor, bool bRandomRotation, const struct FRotator& Rotation, float RandomRadius, struct FFlocksBoidBlueprintHandle* OutBoid);
		bool AddBoidAdvanced(int32_t Group, int32_t MeshIndex, const struct FSpawnTypeSettings& Settings, struct FFlocksBoidBlueprintHandle* OutBoid);
		bool AddBoid(int32_t Group, struct FFlocksBoidBlueprintHandle* Boid);
		static UClass* StaticClass();
	};

	/**
	 * Class Flocks.FlocksAnimationData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UFlocksAnimationData : public UDataAsset
	{
	public:
		class UTexture2D*                                          PositionTexture;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          NormalTexture;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRandomStartTime;                                     // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HGJ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFlocksAnimation>                            Animations;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EFlocksAnimationMode                                       AnimationMode;                                           // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGLE[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultAnimation;                                        // 0x005C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEIK[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFlocksAnimationVariationData>               AnimationVariations;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Flocks.FlocksVolumeActor
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class AFlocksVolumeActor : public AActor
	{
	public:
		bool                                                       StartEnabled;                                            // 0x0220(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQE4[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVolumeInfo                                         Info;                                                    // 0x0228(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LAV5[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEnableVolume();
		void OnDisableVolume();
		void GetVolumeHandle(struct FFlocksVolumeBlueprintHandle* OutHandle);
		void EnableVolume();
		void DisableVolume();
		static UClass* StaticClass();
	};

	/**
	 * Class Flocks.FlocksWorld
	 * Size -> 0x40F40 (FullSize[0x41160] - InheritedSize[0x0220])
	 */
	class AFlocksWorld : public AActor
	{
	public:
		bool                                                       GPUSim;                                                  // 0x0220(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrackVolumeOverlaps;                                    // 0x0221(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMEZ[0x2];                                   // 0x0222(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNeighbourChecks;                                      // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      SpawnPoints;                                             // 0x0228(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PluginReservedCustomDataValues;                          // 0x023C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BoidHealthChangedDelegate;                               // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BoidKilledDelegate;                                      // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8W97[0x7D8];                                 // 0x0260(0x07D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMeshRendererData>                           Meshes;                                                  // 0x0A38(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FPerGroupDefaultSettings>                    Settings;                                                // 0x0A48(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QBS7[0x40708];                               // 0x0A58(0x40708) MISSED OFFSET (PADDING)

	public:
		void OnBoidRemoved(const struct FFlocksBoidBlueprintHandle& Boid);
		void OnBoidKilled(const struct FFlocksBoidBlueprintHandle& Boid, class AController* CausedBy);
		void OnBoidHealthChanged(const struct FFlocksBoidBlueprintHandle& Boid, float OldHealth, float NewHealth, class AController* CausedBy);
		void OnBoidAdded(const struct FFlocksBoidBlueprintHandle& Boid);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
