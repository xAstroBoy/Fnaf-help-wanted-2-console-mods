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
	 * BlueprintGeneratedClass BI_TB_Foxy_GalleryCart.BI_TB_Foxy_GalleryCart_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBI_TB_Foxy_GalleryCart_C : public UInterface
	{
	public:
		void TriggerFadeZone(bool ToFade, float Duration, bool IsAR_Transition);
		void TriggerDepthFadeOnGalleryFinished(bool bShouldTrigger);
		void EndTurn(bool ShouldModifySpeed, bool ShouldModifyDepthFade);
		void StartTurn(bool IsGallery, bool ShouldModifySpeed, bool ShouldModifyDepthFade);
		void ArriveAtPersistentGallery(class ABP_TB_Foxy_TargetGroupManager_C* TargetManager);
		void LeaveGallery();
		void ArriveAtGallery(const struct FTransform& FollowerTransformTarget, class ABP_TB_Foxy_TargetGroupManager_C* SplineBreak);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
