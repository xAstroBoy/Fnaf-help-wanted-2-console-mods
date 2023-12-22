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
	 * Function BI_TB_Foxy_TrackLightReference.BI_TB_Foxy_TrackLightReference_C.GetTrackLights
	 */
	struct UBI_TB_Foxy_TrackLightReference_C_GetTrackLights_Params
	{
	public:
		TArray<class ASpotLight*>                                  TrackLights;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
