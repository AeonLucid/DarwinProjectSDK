// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFireClueBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinFireClueBP.DarwinFireClueBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinFireClueBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFireClueBP.DarwinFireClueBP_C.UserConstructionScript");

	ADarwinFireClueBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFireClueBP.DarwinFireClueBP_C.EventHideOutline
// (Event, Public, BlueprintEvent)

void ADarwinFireClueBP_C::EventHideOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFireClueBP.DarwinFireClueBP_C.EventHideOutline");

	ADarwinFireClueBP_C_EventHideOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFireClueBP.DarwinFireClueBP_C.EventShowOutline
// (Event, Public, BlueprintEvent)

void ADarwinFireClueBP_C::EventShowOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFireClueBP.DarwinFireClueBP_C.EventShowOutline");

	ADarwinFireClueBP_C_EventShowOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFireClueBP.DarwinFireClueBP_C.HighlightClue
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           stencil_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinFireClueBP_C::HighlightClue(bool* enable, int* stencil_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFireClueBP.DarwinFireClueBP_C.HighlightClue");

	ADarwinFireClueBP_C_HighlightClue_Params params;
	params.enable = enable;
	params.stencil_value = stencil_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFireClueBP.DarwinFireClueBP_C.ExecuteUbergraph_DarwinFireClueBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinFireClueBP_C::ExecuteUbergraph_DarwinFireClueBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFireClueBP.DarwinFireClueBP_C.ExecuteUbergraph_DarwinFireClueBP");

	ADarwinFireClueBP_C_ExecuteUbergraph_DarwinFireClueBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
