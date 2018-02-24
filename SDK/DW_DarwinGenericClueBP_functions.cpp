// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGenericClueBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinGenericClueBP.DarwinGenericClueBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinGenericClueBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGenericClueBP.DarwinGenericClueBP_C.UserConstructionScript");

	ADarwinGenericClueBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGenericClueBP.DarwinGenericClueBP_C.EventHideOutline
// (Event, Public, BlueprintEvent)

void ADarwinGenericClueBP_C::EventHideOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGenericClueBP.DarwinGenericClueBP_C.EventHideOutline");

	ADarwinGenericClueBP_C_EventHideOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGenericClueBP.DarwinGenericClueBP_C.EventShowOutline
// (Event, Public, BlueprintEvent)

void ADarwinGenericClueBP_C::EventShowOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGenericClueBP.DarwinGenericClueBP_C.EventShowOutline");

	ADarwinGenericClueBP_C_EventShowOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGenericClueBP.DarwinGenericClueBP_C.HighlightClue
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           stencil_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinGenericClueBP_C::HighlightClue(bool* enable, int* stencil_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGenericClueBP.DarwinGenericClueBP_C.HighlightClue");

	ADarwinGenericClueBP_C_HighlightClue_Params params;
	params.enable = enable;
	params.stencil_value = stencil_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGenericClueBP.DarwinGenericClueBP_C.ExecuteUbergraph_DarwinGenericClueBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinGenericClueBP_C::ExecuteUbergraph_DarwinGenericClueBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGenericClueBP.DarwinGenericClueBP_C.ExecuteUbergraph_DarwinGenericClueBP");

	ADarwinGenericClueBP_C_ExecuteUbergraph_DarwinGenericClueBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
