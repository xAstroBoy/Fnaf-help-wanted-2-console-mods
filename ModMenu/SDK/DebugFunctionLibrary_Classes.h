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
	 * Class DebugFunctionLibrary.DebugFunctionLibrarySettings
	 * Size -> 0x02A8 (FullSize[0x02E0] - InheritedSize[0x0038])
	 */
	class UDebugFunctionLibrarySettings : public UDeveloperSettings
	{
	public:
		bool                                                       bGlobalDebug;                                            // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGlobalPrintDebug;                                       // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGlobalLogDebug;                                         // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGlobalDrawDebug;                                        // 0x003B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogErrorWithNoDebugProperties;                          // 0x003C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticallyAddDebugPropertiesToBlueprints;            // 0x003D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q637[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPrintNodeFunctionDiscoveryIterations;                 // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NG9J[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrintNodeDefaultString;                                  // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawDebugTickDuration;                                   // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrintDebugTickDuration;                                  // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickPrintClass;                                        // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickPrintFunction;                                     // 0x0061(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IYZ[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        QuickPrintMessageColour;                                 // 0x0064(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        QuickPrintWarningColour;                                 // 0x0074(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        QuickPrintErrorColour;                                   // 0x0084(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuickPrintDuration;                                      // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrintLogPrefix                                            StaticPrintLogPrefix;                                    // 0x0098(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7TT[0x3];                                   // 0x0099(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPrintLogPrefix                                            QuickPrintLogPrefix;                                     // 0x009C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HD0[0x3];                                   // 0x009D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      QuickDuration;                                           // 0x00A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuickLineThickness;                                      // 0x00A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebug;                                                  // 0x00A8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintDebug;                                             // 0x00A9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUM3[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrintDuration;                                           // 0x00AC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrintColour;                                             // 0x00B0(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrintWarningColour;                                      // 0x00C0(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrintErrorColour;                                        // 0x00D0(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintClass;                                             // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintFunction;                                          // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogDebug;                                               // 0x00E2(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogClass;                                               // 0x00E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogFunction;                                            // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x00E5(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UF2S[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawDuration;                                            // 0x00E8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawOneFrameDebugTrace;                                 // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawForDurationDebugTrace;                              // 0x00ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWQR[0x2];                                   // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LineThickness;                                           // 0x00F0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineLength;                                              // 0x00F4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x00F8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Segments;                                                // 0x00FC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrowSize;                                               // 0x0100(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HalfHeight;                                              // 0x0104(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0108(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x010C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PrimaryColour;                                           // 0x0110(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryColour;                                         // 0x0120(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TertiaryColour;                                          // 0x0130(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClearOutputLogOnPlay;                                   // 0x0140(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogInShippingBuilds;                                    // 0x0141(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY4Q[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                PrintNodeKey;                                            // 0x0148(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                QuickPrintNodeKey;                                       // 0x0160(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugActorKey;                                       // 0x0178(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugArrowKey;                                       // 0x0190(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugBoxKey;                                         // 0x01A8(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugCameraKey;                                      // 0x01C0(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugCapsuleKey;                                     // 0x01D8(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugCircleKey;                                      // 0x01F0(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugConeKey;                                        // 0x0208(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugCylinderKey;                                    // 0x0220(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugFrustrumKey;                                    // 0x0238(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugLineKey;                                        // 0x0250(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugLineDirectionKey;                               // 0x0268(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugPlaneKey;                                       // 0x0280(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugPointKey;                                       // 0x0298(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugSphereKey;                                      // 0x02B0(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DrawDebugStraightLineKey;                                // 0x02C8(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DebugFunctionLibrary.DFLDebugFL
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDFLDebugFL : public UBlueprintFunctionLibrary
	{
	public:
		void SetDebugPropertiesPrintDebugByObject(class UObject* Object, bool bNewPrintDebug);
		void SetDebugPropertiesPrintDebug(class UBlueprint* Blueprint, bool bNewPrintDebug);
		void SetDebugPropertiesLogDebugByObject(class UObject* Object, bool bNewLogDebug);
		void SetDebugPropertiesLogDebug(class UBlueprint* Blueprint, bool bNewLogDebug);
		void SetDebugPropertiesDrawDebugByObject(class UObject* Object, bool bNewDrawDebug);
		void SetDebugPropertiesDrawDebug(class UBlueprint* Blueprint, bool bNewDrawDebug);
		void SetDebugPropertiesDebugByObject(class UObject* Object, bool bNewDebug);
		void SetDebugPropertiesDebug(class UBlueprint* Blueprint, bool bNewDebug);
		void SetDebugPropertiesBoolByName(class UBlueprint* Blueprint, const class FString& Name, bool bNewValue);
		void SetDebugPropertiesBool(class UObject* Object, class UClass* Class, const class FString& Name, bool bNewValue);
		struct FColor GetTertiaryColour_FColor(class UObject* Owner);
		struct FLinearColor GetTertiaryColour(class UObject* Owner);
		float GetSize(class UObject* Owner);
		int32_t GetSegments(class UObject* Owner);
		struct FColor GetSecondaryColour_FColor(class UObject* Owner);
		struct FLinearColor GetSecondaryColour(class UObject* Owner);
		float GetScale(class UObject* Owner);
		float GetRadius(class UObject* Owner);
		struct FLinearColor GetPrintWarningColour(class UObject* Owner);
		bool GetPrintFunction(class UObject* Owner);
		struct FLinearColor GetPrintErrorColour(class UObject* Owner);
		float GetPrintDuration(class UObject* Owner);
		bool GetPrintDebug(class UObject* Owner);
		struct FLinearColor GetPrintColour(class UObject* Owner);
		bool GetPrintClass(class UObject* Owner);
		struct FColor GetPrimaryColour_FColor(class UObject* Owner);
		struct FLinearColor GetPrimaryColour(class UObject* Owner);
		EDrawDebugTrace GetOneFrameDrawDebugTrace(class UObject* Owner);
		bool GetLogFunction(class UObject* Owner);
		bool GetLogDebug(class UObject* Owner);
		bool GetLogClass(class UObject* Owner);
		float GetLineThickness(class UObject* Owner);
		float GetLineLength(class UObject* Owner);
		float GetHalfHeight(class UObject* Owner);
		EDrawDebugTrace GetForDurationDrawDebugTrace(class UObject* Owner);
		float GetDrawDuration(class UObject* Owner);
		EDrawDebugTrace GetDrawDebugTrace(class UObject* Owner);
		bool GetDrawDebug(class UObject* Owner);
		struct FVector GetDirectionFromAxis(EDFLDrawDebugAxis Axis);
		bool GetDebugPropertiesPrintDebugByObject(class UObject* Object);
		bool GetDebugPropertiesPrintDebug(class UBlueprint* Blueprint);
		bool GetDebugPropertiesLogDebugByObject(class UObject* Object);
		bool GetDebugPropertiesLogDebug(class UBlueprint* Blueprint);
		bool GetDebugPropertiesDrawDebugByObject(class UObject* Object);
		bool GetDebugPropertiesDrawDebug(class UBlueprint* Blueprint);
		bool GetDebugPropertiesDebugByObject(class UObject* Object);
		bool GetDebugPropertiesDebug(class UBlueprint* Blueprint);
		bool GetDebugPropertiesBoolByName(class UBlueprint* Blueprint, const class FString& Name);
		bool GetDebugPropertiesBool(class UObject* Object, class UClass* Class, const class FString& Name);
		bool GetDebugProperties(class UObject* Owner, struct FDFLDebugProperties* ActorDebugProperties);
		struct FLinearColor GetDebugColour(class UObject* Owner, EDFLDrawDebugColour DebugColour);
		struct FColor GetDebug_FColour(class UObject* Owner, EDFLDrawDebugColour DebugColour);
		float GetArrowSize(class UObject* Owner);
		void DFLQuickPrintMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickPrintLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickPrintLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickPrintLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickPrintError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLQuickDrawDebugTransformOverrideDuration(class UObject* Owner, const struct FTransform& Transform, float Duration, float Scale);
		void DFLQuickDrawDebugTransform(class UObject* Owner, const struct FTransform& Transform, float Scale);
		void DFLQuickDrawDebugStringOverrideDuration(class UObject* Owner, const struct FVector& Location, const class FString& Text, float Duration, float WorldSize, const struct FLinearColor& DrawDebugColour);
		void DFLQuickDrawDebugString(class UObject* Owner, const struct FVector& Location, const class FString& Text, float WorldSize, const struct FLinearColor& DrawDebugColour);
		void DFLQuickDrawDebugStraightLineOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, float LineLength, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugStraightLine(class UObject* Owner, const struct FVector& Location, float LineLength, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugSphereOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugSphere(class UObject* Owner, const struct FVector& Location, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugPointOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, float Size, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugPoint(class UObject* Owner, const struct FVector& Location, float Size, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugPlaneOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Duration, float Size, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugPlane(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Size, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugLineOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugLineDirectionOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float Duration, float LineLength, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugLineDirection(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float LineLength, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugLine(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugFrustrumOverrideDuration(class UObject* Owner, const struct FTransform& FrustrumTransform, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugFrustrum(class UObject* Owner, const struct FTransform& FrustrumTransform, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCylinderOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCylinder(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Radius, int32_t Segments, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugConeOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float Duration, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCone(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugComponentOverrideDuration(class UObject* Owner, class USceneComponent* Component, float Duration, float Scale);
		void DFLQuickDrawDebugComponent(class UObject* Owner, class USceneComponent* Component, float Scale);
		void DFLQuickDrawDebugCircleOverrideDuration(class UObject* Owner, const struct FVector& Center, float Duration, float Radius, int32_t Segments, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCircle(class UObject* Owner, const struct FVector& Center, float Radius, int32_t Segments, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCapsuleOverrideDuration(class UObject* Owner, const struct FVector& Center, float Duration, float HalfHeight, float Radius, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCapsule(class UObject* Owner, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCameraOverrideDuration(class UObject* Owner, class UCameraComponent* Camera, float Duration, float Scale, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugCamera(class UObject* Owner, class UCameraComponent* Camera, float Scale, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugBoxOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, float Duration, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugBox(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugArrowOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, float ArrowSize, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugArrow(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float ArrowSize, EDFLDrawDebugColour DrawDebugColour);
		void DFLQuickDrawDebugActorOverrideDuration(class UObject* Owner, class AActor* Actor, float Duration, float Scale);
		void DFLQuickDrawDebugActor(class UObject* Owner, class AActor* Actor, float Scale);
		void DFLPrintWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLPrintMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLPrintLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLPrintLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLPrintLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLPrintError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLPQuickPrintWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLLogWarning(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLLogMessage(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLLogError(class UObject* WorldContext, const class FString& String, float Duration, bool bCondition, const class FString& CallingFunction);
		void DFLDrawDebugTransformOverrideDuration(class UObject* Owner, const struct FTransform& Transform, float Duration);
		void DFLDrawDebugTransformOverride(class UObject* Owner, const struct FTransform& Transform, float Scale, float Duration, float Thickness);
		void DFLDrawDebugTransform(class UObject* Owner, const struct FTransform& Transform);
		void DFLDrawDebugStringOverrideDuration(class UObject* Owner, const struct FVector& Location, const class FString& Text, float Duration, float WorldSize, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugString(class UObject* Owner, const struct FVector& Location, const class FString& Text, float WorldSize, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugStraightLineOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugStraightLineOverride(class UObject* Owner, const struct FVector& Location, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugStraightLine(class UObject* Owner, const struct FVector& Location, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugSphereOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugSphereOverride(class UObject* Owner, const struct FVector& Location, float Radius, int32_t Segments, const struct FLinearColor& LineColour, float Duration, float Thickness);
		void DFLDrawDebugSphere(class UObject* Owner, const struct FVector& Location, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugPointOverrideDuration(class UObject* Owner, const struct FVector& Location, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugPointOverride(class UObject* Owner, const struct FVector& Location, float Size, const struct FLinearColor& Colour, float Duration);
		void DFLDrawDebugPoint(class UObject* Owner, const struct FVector& Location, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugPlaneOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugPlaneOverride(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, float Size, const struct FLinearColor& Colour, float Duration);
		void DFLDrawDebugPlane(class UObject* Owner, const struct FVector& Location, const struct FVector& Normal, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugLineOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugLineOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugLineDirectionOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugLineDirectionOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, float LineLength, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugLineDirection(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& Direction, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugLine(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugFrustrumOverrideDuration(class UObject* Owner, const struct FTransform& FrustrumTransform, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugFrustrumOverride(class UObject* Owner, const struct FTransform& FrustrumTransform, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugFrustrum(class UObject* Owner, const struct FTransform& FrustrumTransform, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCylinderOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCylinderOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Radius, int32_t Segments, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugCylinder(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugConeOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float AngleWidth, float AngleHeight, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugConeOverride(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugCone(class UObject* Owner, const struct FVector& Location, const struct FVector& Direction, float AngleWidth, float AngleHeight, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugComponentOverrideDuration(class UObject* Owner, class USceneComponent* Component, float Duration);
		void DFLDrawDebugComponentOverride(class UObject* Owner, class USceneComponent* Component, float Scale, float Duration, float Thickness);
		void DFLDrawDebugComponent(class UObject* Owner, class USceneComponent* Component);
		void DFLDrawDebugCircleOverrideDuration(class UObject* Owner, const struct FVector& Center, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCircleOverride(class UObject* Owner, const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& Colour, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis);
		void DFLDrawDebugCircle(class UObject* Owner, const struct FVector& Center, const struct FVector& YAxis, const struct FVector& ZAxis, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCapsuleOverrideDuration(class UObject* Owner, const struct FVector& Center, const struct FRotator& Rotation, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCapsuleOverride(class UObject* Owner, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugCapsule(class UObject* Owner, const struct FVector& Center, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCameraOverrideDuration(class UObject* Owner, class UCameraComponent* Camera, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugCameraOverride(class UObject* Owner, class UCameraComponent* Camera, float Scale, const struct FLinearColor& Colour, float Duration);
		void DFLDrawDebugCamera(class UObject* Owner, class UCameraComponent* Camera, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugBoxOverrideDuration(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugBoxOverride(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FLinearColor& Colour, const struct FRotator& Rotation, float Duration, float Thickness);
		void DFLDrawDebugBox(class UObject* Owner, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugArrowOverrideDuration(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugArrowOverride(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, float ArrowSize, const struct FLinearColor& Colour, float Duration, float Thickness);
		void DFLDrawDebugArrow(class UObject* Owner, const struct FVector& StartLocation, const struct FVector& EndLocation, EDFLDrawDebugColour DrawDebugColour);
		void DFLDrawDebugActorOverrideDuration(class UObject* Owner, class AActor* Actor, float Duration);
		void DFLDrawDebugActorOverride(class UObject* Owner, class AActor* Actor, float Scale, float Duration, float Thickness);
		void DFLDrawDebugActor(class UObject* Owner, class AActor* Actor);
		bool BlueprintHasDebugProperties(class UBlueprint* Blueprint);
		static UClass* StaticClass();
	};

	/**
	 * Class DebugFunctionLibrary.DFLDebugString
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class ADFLDebugString : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextRenderComponent*                                Text;                                                    // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugString;                                             // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0240(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldSize;                                               // 0x0244(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Colour;                                                  // 0x0248(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateEditorRotation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
