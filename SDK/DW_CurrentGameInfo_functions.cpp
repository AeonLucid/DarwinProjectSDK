// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CurrentGameInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CurrentGameInfo.CurrentGameInfo_C.Key Binding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCurrentGameInfo_C::Key_Binding()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.Key Binding");

	UCurrentGameInfo_C_Key_Binding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGameHasStarted");

	UCurrentGameInfo_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelClose");

	UCurrentGameInfo_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventToggleSpeak
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventToggleSpeak(bool* active)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventToggleSpeak");

	UCurrentGameInfo_C_EventToggleSpeak_Params params;
	params.active = active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorJoined
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventShowDirectorJoined(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorJoined");

	UCurrentGameInfo_C_EventShowDirectorJoined_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorLeft
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCurrentGameInfo_C::EventShowDirectorLeft(struct FString* ShowDirectorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorLeft");

	UCurrentGameInfo_C_EventShowDirectorLeft_Params params;
	params.ShowDirectorName = ShowDirectorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventInputSourceChanged");

	UCurrentGameInfo_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.Construct");

	UCurrentGameInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCurrentGameInfo_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventInputRebindSucceeded");

	UCurrentGameInfo_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventInputResetToDefault");

	UCurrentGameInfo_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventPlayerSpeakStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventPlayerSpeakStart(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventPlayerSpeakStart");

	UCurrentGameInfo_C_EventPlayerSpeakStart_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventPlayerSpeakEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::EventPlayerSpeakEnd(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventPlayerSpeakEnd");

	UCurrentGameInfo_C_EventPlayerSpeakEnd_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventGameStartsNow");

	UCurrentGameInfo_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UCurrentGameInfo_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelOpen");

	UCurrentGameInfo_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CurrentGameInfo.CurrentGameInfo_C.ExecuteUbergraph_CurrentGameInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCurrentGameInfo_C::ExecuteUbergraph_CurrentGameInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CurrentGameInfo.CurrentGameInfo_C.ExecuteUbergraph_CurrentGameInfo");

	UCurrentGameInfo_C_ExecuteUbergraph_CurrentGameInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
