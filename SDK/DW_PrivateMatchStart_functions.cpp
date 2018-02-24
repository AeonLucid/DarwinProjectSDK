// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PrivateMatchStart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrivateMatchStart.PrivateMatchStart_C.KeyBiding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPrivateMatchStart_C::KeyBiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.KeyBiding");

	UPrivateMatchStart_C_KeyBiding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.SetupInputSource
// (BlueprintCallable, BlueprintEvent)

void UPrivateMatchStart_C::SetupInputSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.SetupInputSource");

	UPrivateMatchStart_C_SetupInputSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventNumberOfPlayersUntilGameStarts
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrivateMatchStart_C::EventNumberOfPlayersUntilGameStarts(int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventNumberOfPlayersUntilGameStarts");

	UPrivateMatchStart_C_EventNumberOfPlayersUntilGameStarts_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UPrivateMatchStart_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventGameHasStarted");

	UPrivateMatchStart_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UPrivateMatchStart_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventInputSourceChanged");

	UPrivateMatchStart_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UPrivateMatchStart_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventGameStartsNow");

	UPrivateMatchStart_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventIsPrivateMatchOwner
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPrivateMatchStart_C::EventIsPrivateMatchOwner(struct FString* password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventIsPrivateMatchOwner");

	UPrivateMatchStart_C_EventIsPrivateMatchOwner_Params params;
	params.password = password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventPrivateMatchStarted
// (Event, Public, BlueprintEvent)

void UPrivateMatchStart_C::EventPrivateMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventPrivateMatchStarted");

	UPrivateMatchStart_C_EventPrivateMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.EventUpdatePrivateMatchTimer
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                timeUntilRestart               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPrivateMatchStart_C::EventUpdatePrivateMatchTimer(struct FString* timeUntilRestart)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.EventUpdatePrivateMatchTimer");

	UPrivateMatchStart_C_EventUpdatePrivateMatchTimer_Params params;
	params.timeUntilRestart = timeUntilRestart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrivateMatchStart_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.Construct");

	UPrivateMatchStart_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrivateMatchStart.PrivateMatchStart_C.ExecuteUbergraph_PrivateMatchStart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrivateMatchStart_C::ExecuteUbergraph_PrivateMatchStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrivateMatchStart.PrivateMatchStart_C.ExecuteUbergraph_PrivateMatchStart");

	UPrivateMatchStart_C_ExecuteUbergraph_PrivateMatchStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
