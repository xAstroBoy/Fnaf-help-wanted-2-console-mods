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
	 * ScriptStruct VRReviewTool.VRDebugDrawingRecord
	 * Size -> 0x0018
	 */
	struct FVRDebugDrawingRecord
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USplineMeshComponent*>                        Components;                                              // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRReviewTool.VRReviewToolTextBlockData
	 * Size -> 0x0028
	 */
	struct FVRReviewToolTextBlockData
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) NativeAccessSpecifierPublic
		struct FVector                                             WorldLocation;                                           // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA4M[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
