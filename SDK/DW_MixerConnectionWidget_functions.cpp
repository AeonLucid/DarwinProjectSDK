// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerConnectionWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MixerConnectionWidget.MixerConnectionWidget_C.UpdateConnectionStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinMixerConnectionState    ConnectionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMixerConnectionWidget_C::UpdateConnectionStatus(EDarwinMixerConnectionState ConnectionState, const struct FString& username)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.UpdateConnectionStatus");

	UMixerConnectionWidget_C_UpdateConnectionStatus_Params params;
	params.ConnectionState = ConnectionState;
	params.username = username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionWidget.MixerConnectionWidget_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMixerConnectionWidget_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.EventInputSourceChanged");

	UMixerConnectionWidget_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionWidget.MixerConnectionWidget_C.EventMixerConnectionStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinMixerConnectionState*   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMixerConnectionWidget_C::EventMixerConnectionStateChanged(EDarwinMixerConnectionState* State, struct FString* username)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.EventMixerConnectionStateChanged");

	UMixerConnectionWidget_C_EventMixerConnectionStateChanged_Params params;
	params.State = State;
	params.username = username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionWidget.MixerConnectionWidget_C.BndEvt__MixerConnectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMixerConnectionWidget_C::BndEvt__MixerConnectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.BndEvt__MixerConnectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMixerConnectionWidget_C_BndEvt__MixerConnectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionWidget.MixerConnectionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMixerConnectionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.Construct");

	UMixerConnectionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionWidget.MixerConnectionWidget_C.EventTwitchLoginStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinTwitchLoginState*       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMixerConnectionWidget_C::EventTwitchLoginStateChanged(EDarwinTwitchLoginState* State, struct FString* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.EventTwitchLoginStateChanged");

	UMixerConnectionWidget_C_EventTwitchLoginStateChanged_Params params;
	params.State = State;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MixerConnectionWidget.MixerConnectionWidget_C.ExecuteUbergraph_MixerConnectionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMixerConnectionWidget_C::ExecuteUbergraph_MixerConnectionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerConnectionWidget.MixerConnectionWidget_C.ExecuteUbergraph_MixerConnectionWidget");

	UMixerConnectionWidget_C_ExecuteUbergraph_MixerConnectionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
