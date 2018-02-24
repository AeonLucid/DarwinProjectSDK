// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TutoWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutoWidgetBP.TutoWidgetBP_C.Key Binding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTutoWidgetBP_C::Key_Binding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.Key Binding");

	UTutoWidgetBP_C_Key_Binding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventCraftWheelOpen");

	UTutoWidgetBP_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventCraftWheelClose");

	UTutoWidgetBP_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventGameHasStarted");

	UTutoWidgetBP_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventGameStartsNow");

	UTutoWidgetBP_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventNumberOfGamesPlayed
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           nbGamesPlayed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutoWidgetBP_C::EventNumberOfGamesPlayed(int* nbGamesPlayed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventNumberOfGamesPlayed");

	UTutoWidgetBP_C_EventNumberOfGamesPlayed_Params params;
	params.nbGamesPlayed = nbGamesPlayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventGameStartsInSeconds
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutoWidgetBP_C::EventGameStartsInSeconds(int* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventGameStartsInSeconds");

	UTutoWidgetBP_C_EventGameStartsInSeconds_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventUpdateRealColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           coldFactor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           coldFactorMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutoWidgetBP_C::EventUpdateRealColdFactor(int* coldFactor, int* coldFactorMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventUpdateRealColdFactor");

	UTutoWidgetBP_C_EventUpdateRealColdFactor_Params params;
	params.coldFactor = coldFactor;
	params.coldFactorMax = coldFactorMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventInputSourceChanged");

	UTutoWidgetBP_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.Construct");

	UTutoWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.CustomizedWheel
// (BlueprintCallable, BlueprintEvent)

void UTutoWidgetBP_C::CustomizedWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.CustomizedWheel");

	UTutoWidgetBP_C_CustomizedWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UTutoWidgetBP_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventInputResetToDefault");

	UTutoWidgetBP_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTutoWidgetBP_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.EventInputRebindSucceeded");

	UTutoWidgetBP_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutoWidgetBP.TutoWidgetBP_C.ExecuteUbergraph_TutoWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutoWidgetBP_C::ExecuteUbergraph_TutoWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutoWidgetBP.TutoWidgetBP_C.ExecuteUbergraph_TutoWidgetBP");

	UTutoWidgetBP_C_ExecuteUbergraph_TutoWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
