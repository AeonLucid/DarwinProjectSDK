// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DecoyClueBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DecoyClueBP.DecoyClueBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADecoyClueBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyClueBP.DecoyClueBP_C.UserConstructionScript");

	ADecoyClueBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyClueBP.DecoyClueBP_C.EventHideOutline
// (Event, Public, BlueprintEvent)

void ADecoyClueBP_C::EventHideOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyClueBP.DecoyClueBP_C.EventHideOutline");

	ADecoyClueBP_C_EventHideOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyClueBP.DecoyClueBP_C.EventShowOutline
// (Event, Public, BlueprintEvent)

void ADecoyClueBP_C::EventShowOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyClueBP.DecoyClueBP_C.EventShowOutline");

	ADecoyClueBP_C_EventShowOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyClueBP.DecoyClueBP_C.HighlightClue
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           stencil_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoyClueBP_C::HighlightClue(bool* enable, int* stencil_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyClueBP.DecoyClueBP_C.HighlightClue");

	ADecoyClueBP_C_HighlightClue_Params params;
	params.enable = enable;
	params.stencil_value = stencil_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyClueBP.DecoyClueBP_C.ExecuteUbergraph_DecoyClueBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoyClueBP_C::ExecuteUbergraph_DecoyClueBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyClueBP.DecoyClueBP_C.ExecuteUbergraph_DecoyClueBP");

	ADecoyClueBP_C_ExecuteUbergraph_DecoyClueBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
