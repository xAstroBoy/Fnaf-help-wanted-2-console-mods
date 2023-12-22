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
	 * 		Name   -> Function BP_BS_HairSocketCondition.BP_BS_HairSocketCondition_C.CanSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USocketComponent*                            SocketComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_BS_HairSocketCondition_C::CanSocket(class USocketComponent* SocketComponent, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BS_HairSocketCondition.BP_BS_HairSocketCondition_C.CanSocket");
		
		UBP_BS_HairSocketCondition_C_CanSocket_Params params {};
		params.SocketComponent = SocketComponent;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BS_HairSocketCondition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BS_HairSocketCondition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BS_HairSocketCondition.BP_BS_HairSocketCondition_C");
		return ptr;
	}

}


