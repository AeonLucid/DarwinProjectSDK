// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CountdownWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameStartsInSeconds
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCountdownWidgetBP_C::EventGameStartsInSeconds(int* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameStartsInSeconds");

	UCountdownWidgetBP_C_EventGameStartsInSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UCountdownWidgetBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameStartsNow");

	UCountdownWidgetBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownWidgetBP.CountdownWidgetBP_C.EventUpdateGameAboutToStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          aboutToStart                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCountdownWidgetBP_C::EventUpdateGameAboutToStart(bool* aboutToStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownWidgetBP.CountdownWidgetBP_C.EventUpdateGameAboutToStart");

	UCountdownWidgetBP_C_EventUpdateGameAboutToStart_Params params;
	params.aboutToStart = aboutToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownWidgetBP.CountdownWidgetBP_C.EventUpdateGameAboutToStartTimer
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCountdownWidgetBP_C::EventUpdateGameAboutToStartTimer(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownWidgetBP.CountdownWidgetBP_C.EventUpdateGameAboutToStartTimer");

	UCountdownWidgetBP_C_EventUpdateGameAboutToStartTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UCountdownWidgetBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameHasStarted");

	UCountdownWidgetBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownWidgetBP.CountdownWidgetBP_C.ExecuteUbergraph_CountdownWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCountdownWidgetBP_C::ExecuteUbergraph_CountdownWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownWidgetBP.CountdownWidgetBP_C.ExecuteUbergraph_CountdownWidgetBP");

	UCountdownWidgetBP_C_ExecuteUbergraph_CountdownWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
