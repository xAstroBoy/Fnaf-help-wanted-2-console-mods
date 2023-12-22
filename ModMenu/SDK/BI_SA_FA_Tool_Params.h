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
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.PlayToolHaptics
	 */
	struct UBI_SA_FA_Tool_C_PlayToolHaptics_Params
	{	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.ItemAction
	 */
	struct UBI_SA_FA_Tool_C_ItemAction_Params
	{	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.SetReturnSocket
	 */
	struct UBI_SA_FA_Tool_C_SetReturnSocket_Params
	{
	public:
		class USocketComponent*                                    Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.ReturnToSocket
	 */
	struct UBI_SA_FA_Tool_C_ReturnToSocket_Params
	{	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.OnInstantiate
	 */
	struct UBI_SA_FA_Tool_C_OnInstantiate_Params
	{	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.GetToolEnum
	 */
	struct UBI_SA_FA_Tool_C_GetToolEnum_Params
	{
	public:
		Enum_SO_FA_ToolSelection                                   ToolSelection;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.Deactivate
	 */
	struct UBI_SA_FA_Tool_C_Deactivate_Params
	{	};

	/**
	 * Function BI_SA_FA_Tool.BI_SA_FA_Tool_C.Activate
	 */
	struct UBI_SA_FA_Tool_C_Activate_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
