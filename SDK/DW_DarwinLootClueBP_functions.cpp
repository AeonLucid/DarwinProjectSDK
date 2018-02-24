// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinLootClueBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinLootClueBP.DarwinLootClueBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinLootClueBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.UserConstructionScript");

	ADarwinLootClueBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.HighlightClue
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           stencil_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinLootClueBP_C::HighlightClue(bool* enable, int* stencil_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.HighlightClue");

	ADarwinLootClueBP_C_HighlightClue_Params params;
	params.enable = enable;
	params.stencil_value = stencil_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinLootClueBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.ReceiveBeginPlay");

	ADarwinLootClueBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.EventHide
// (Event, Public, BlueprintEvent)

void ADarwinLootClueBP_C::EventHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.EventHide");

	ADarwinLootClueBP_C_EventHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinLootClueBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.ReceiveTick");

	ADarwinLootClueBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.EventShowOutline
// (Event, Public, BlueprintEvent)

void ADarwinLootClueBP_C::EventShowOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.EventShowOutline");

	ADarwinLootClueBP_C_EventShowOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.EventHideOutline
// (Event, Public, BlueprintEvent)

void ADarwinLootClueBP_C::EventHideOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.EventHideOutline");

	ADarwinLootClueBP_C_EventHideOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootClueBP.DarwinLootClueBP_C.ExecuteUbergraph_DarwinLootClueBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinLootClueBP_C::ExecuteUbergraph_DarwinLootClueBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootClueBP.DarwinLootClueBP_C.ExecuteUbergraph_DarwinLootClueBP");

	ADarwinLootClueBP_C_ExecuteUbergraph_DarwinLootClueBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
