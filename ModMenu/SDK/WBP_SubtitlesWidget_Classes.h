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
	 * WidgetBlueprintGeneratedClass WBP_SubtitlesWidget.WBP_SubtitlesWidget_C
	 * Size -> 0x0031 (FullSize[0x0291] - InheritedSize[0x0260])
	 */
	class UWBP_SubtitlesWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URichTextBlock*                                      Speaker;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      Subtitles;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                EmptyText;                                               // 0x0278(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESubtitlesSize                                             CurrentSize;                                             // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTextVisible(bool Visible);
		void OnShowSubtitles(bool Visible);
		void UpdateSubtitles(const class FText& Speaker, const class FText& InText);
		void Construct();
		void SetupSubtitleStyle(ESubtitlesSize Style);
		void ExecuteUbergraph_WBP_SubtitlesWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
