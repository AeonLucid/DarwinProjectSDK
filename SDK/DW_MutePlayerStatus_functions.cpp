// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MutePlayerStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MutePlayerStatus.MutePlayerStatus_C.SetMute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::SetMute(bool muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.SetMute");

	UMutePlayerStatus_C_SetMute_Params params;
	params.muted = muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DarwinUniqueID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinRoleEnum                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::Initialize(int DarwinUniqueID, bool muted, EDarwinRoleEnum NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Initialize");

	UMutePlayerStatus_C_Initialize_Params params;
	params.DarwinUniqueID = DarwinUniqueID;
	params.muted = muted;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventMuteMapRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::EventMuteMapRemove(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventMuteMapRemove");

	UMutePlayerStatus_C_EventMuteMapRemove_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventMuteMapChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::EventMuteMapChanged(int* UniqueId, bool* muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventMuteMapChanged");

	UMutePlayerStatus_C_EventMuteMapChanged_Params params;
	params.UniqueId = UniqueId;
	params.muted = muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMutePlayerStatus_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UMutePlayerStatus_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventPlayerSpeakStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::EventPlayerSpeakStart(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventPlayerSpeakStart");

	UMutePlayerStatus_C_EventPlayerSpeakStart_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventPlayerSpeakEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::EventPlayerSpeakEnd(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventPlayerSpeakEnd");

	UMutePlayerStatus_C_EventPlayerSpeakEnd_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_Kick_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMutePlayerStatus_C::BndEvt__Button_Kick_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_Kick_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature");

	UMutePlayerStatus_C_BndEvt__Button_Kick_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMutePlayerStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Construct");

	UMutePlayerStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.YES
// (BlueprintCallable, BlueprintEvent)

void UMutePlayerStatus_C::YES()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.YES");

	UMutePlayerStatus_C_YES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.No
// (BlueprintCallable, BlueprintEvent)

void UMutePlayerStatus_C::No()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.No");

	UMutePlayerStatus_C_No_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.ExecuteUbergraph_MutePlayerStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::ExecuteUbergraph_MutePlayerStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.ExecuteUbergraph_MutePlayerStatus");

	UMutePlayerStatus_C_ExecuteUbergraph_MutePlayerStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
