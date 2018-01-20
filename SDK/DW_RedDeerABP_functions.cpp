// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RedDeerABP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RedDeerABP.RedDeerABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendListByBool_70965B264282286EB7A9339117EB796F
// (BlueprintEvent)

void URedDeerABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendListByBool_70965B264282286EB7A9339117EB796F()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedDeerABP.RedDeerABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendListByBool_70965B264282286EB7A9339117EB796F");

	URedDeerABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendListByBool_70965B264282286EB7A9339117EB796F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedDeerABP.RedDeerABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendSpacePlayer_7263FF38492C9FF2AB8237A5453FC037
// (BlueprintEvent)

void URedDeerABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendSpacePlayer_7263FF38492C9FF2AB8237A5453FC037()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedDeerABP.RedDeerABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendSpacePlayer_7263FF38492C9FF2AB8237A5453FC037");

	URedDeerABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendSpacePlayer_7263FF38492C9FF2AB8237A5453FC037_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedDeerABP.RedDeerABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedDeerABP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedDeerABP.RedDeerABP_C.BlueprintUpdateAnimation");

	URedDeerABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedDeerABP.RedDeerABP_C.ExecuteUbergraph_RedDeerABP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedDeerABP_C::ExecuteUbergraph_RedDeerABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedDeerABP.RedDeerABP_C.ExecuteUbergraph_RedDeerABP");

	URedDeerABP_C_ExecuteUbergraph_RedDeerABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
