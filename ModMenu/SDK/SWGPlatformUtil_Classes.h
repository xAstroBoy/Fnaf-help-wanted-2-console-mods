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
	 * Class SWGPlatformUtil.SWGPlatformDLCHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGPlatformDLCHandler : public UBlueprintFunctionLibrary
	{
	public:
		void MountDLCPackage(const class FString& DLCNameToMount);
		static UClass* StaticClass();
	};

	/**
	 * Class SWGPlatformUtil.SWGPlatformSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USWGPlatformSettings : public UDeveloperSettings
	{
	public:
		ESWGPlatform                                               BuildPlatform;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RXKH[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SWGPlatformUtil.SWGPlatformUtilFunctions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USWGPlatformUtilFunctions : public UBlueprintFunctionLibrary
	{
	public:
		void SwitchOnPlatform(ESWGPlatform* Platform);
		void StartActivity(class APlayerController* PlayerController, const class FString& ActivityId);
		void SetActivityAvailability(class APlayerController* PlayerController, const class FString& ActivityId, bool bEnabled);
		void IsInEditorSwitch(ESWGEditor* Editor);
		bool IsInEditor();
		bool GPUSupportsRayTracing();
		ESWGXboxPlatform GetXboxSpecificPlatform();
		class FString GetVersionString();
		class FString GetGPU();
		struct FKey GetGamepadBackKey();
		struct FKey GetGamepadAcceptKey();
		ESWGPlatform GetBuildPlatform();
		void EndActivity(class APlayerController* PlayerController, const class FString& ActivityId, EGameActivityEndType Outcome);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
