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
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetPlushBabyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_PlushBabyPose                           PlushBabyPose                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFreddy_C::GetPlushBabyPose(Enum_RA_SL_PlushBabyPose* PlushBabyPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetPlushBabyPose");
		
		UABP_RA_SL_FTFreddy_C_GetPlushBabyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlushBabyPose != nullptr)
			*PlushBabyPose = params.PlushBabyPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFreddy_C::GetRoomType(Enum_RA_SL_RoomType* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetRoomType");
		
		UABP_RA_SL_FTFreddy_C_GetRoomType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Room != nullptr)
			*Room = params.Room;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetAssignedButton
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::GetAssignedButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetAssignedButton");
		
		UABP_RA_SL_FTFreddy_C_GetAssignedButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetMinireenasOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinireenaCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFreddy_C::GetMinireenasOnDoor(int32_t* MinireenaCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetMinireenasOnDoor");
		
		UABP_RA_SL_FTFreddy_C_GetMinireenasOnDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinireenaCount != nullptr)
			*MinireenaCount = params.MinireenaCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetAllowedCharacters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<Enum_RA_SL_AnimatronicType>                 AllowCharacters                                            (Parm, OutParm)
	 */
	void UABP_RA_SL_FTFreddy_C::GetAllowedCharacters(TArray<Enum_RA_SL_AnimatronicType>* AllowCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.GetAllowedCharacters");
		
		UABP_RA_SL_FTFreddy_C_GetAllowedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowCharacters != nullptr)
			*AllowCharacters = params.AllowCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_RA_SL_FTFreddy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimGraph");
		
		UABP_RA_SL_FTFreddy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AssignMinireenaToDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               AddMinireenaToDoor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_RA_SL_FTFreddy_C::AssignMinireenaToDoor(bool AddMinireenaToDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AssignMinireenaToDoor");
		
		UABP_RA_SL_FTFreddy_C_AssignMinireenaToDoor_Params params {};
		params.AddMinireenaToDoor = AddMinireenaToDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1");
		
		UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_782F57E04A4D07CD7AF0C687073EEAF1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4");
		
		UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_42E6E97B4D7C2836E5E7DD863406D1B4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65");
		
		UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_97342B814242BCDB0CB001907DC17E65_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB");
		
		UABP_RA_SL_FTFreddy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RA_SL_FTFreddy_AnimGraphNode_TransitionResult_916DB34440A580E3F135328F1CAA80FB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.SetRoomType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Enum_RA_SL_RoomType                                Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFreddy_C::SetRoomType(Enum_RA_SL_RoomType Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.SetRoomType");
		
		UABP_RA_SL_FTFreddy_C_SetRoomType_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimNotify_inviz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::AnimNotify_inviz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimNotify_inviz");
		
		UABP_RA_SL_FTFreddy_C_AnimNotify_inviz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimNotify_viz
	 * 		Flags  -> ()
	 */
	void UABP_RA_SL_FTFreddy_C::AnimNotify_viz()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.AnimNotify_viz");
		
		UABP_RA_SL_FTFreddy_C_AnimNotify_viz_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.ExecuteUbergraph_ABP_RA_SL_FTFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_RA_SL_FTFreddy_C::ExecuteUbergraph_ABP_RA_SL_FTFreddy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C.ExecuteUbergraph_ABP_RA_SL_FTFreddy");
		
		UABP_RA_SL_FTFreddy_C_ExecuteUbergraph_ABP_RA_SL_FTFreddy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_RA_SL_FTFreddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_RA_SL_FTFreddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RA_SL_FTFreddy.ABP_RA_SL_FTFreddy_C");
		return ptr;
	}

}


