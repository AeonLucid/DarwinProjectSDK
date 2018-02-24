// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_OneZoneAnswer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OneZoneAnswer.OneZoneAnswer_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOneZoneAnswer_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.Reset");

	UOneZoneAnswer_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneZoneAnswer.OneZoneAnswer_C.SetResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          VotePercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOneZoneAnswer_C::SetResult(float VotePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.SetResult");

	UOneZoneAnswer_C_SetResult_Params params;
	params.VotePercent = VotePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneZoneAnswer.OneZoneAnswer_C.SetAlreadyForbidden
// (Public, BlueprintCallable, BlueprintEvent)

void UOneZoneAnswer_C::SetAlreadyForbidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.SetAlreadyForbidden");

	UOneZoneAnswer_C_SetAlreadyForbidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneZoneAnswer.OneZoneAnswer_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWinner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Forbidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Vote_Percent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOneZoneAnswer_C::Initialize(bool IsWinner, bool Forbidden, float Vote_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.Initialize");

	UOneZoneAnswer_C_Initialize_Params params;
	params.IsWinner = IsWinner;
	params.Forbidden = Forbidden;
	params.Vote_Percent = Vote_Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneZoneAnswer.OneZoneAnswer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOneZoneAnswer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.Tick");

	UOneZoneAnswer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneZoneAnswer.OneZoneAnswer_C.ResetToZero
// (BlueprintCallable, BlueprintEvent)

void UOneZoneAnswer_C::ResetToZero()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.ResetToZero");

	UOneZoneAnswer_C_ResetToZero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneZoneAnswer.OneZoneAnswer_C.ExecuteUbergraph_OneZoneAnswer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOneZoneAnswer_C::ExecuteUbergraph_OneZoneAnswer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneZoneAnswer.OneZoneAnswer_C.ExecuteUbergraph_OneZoneAnswer");

	UOneZoneAnswer_C_ExecuteUbergraph_OneZoneAnswer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
