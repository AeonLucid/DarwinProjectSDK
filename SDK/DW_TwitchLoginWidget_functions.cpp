// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TwitchLoginWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TwitchLoginWidget.TwitchLoginWidget_C.UpdateLoginStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinTwitchLoginState        LoginState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTwitchLoginWidget_C::UpdateLoginStatus(EDarwinTwitchLoginState LoginState, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginWidget.TwitchLoginWidget_C.UpdateLoginStatus");

	UTwitchLoginWidget_C_UpdateLoginStatus_Params params;
	params.LoginState = LoginState;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginWidget.TwitchLoginWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTwitchLoginWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginWidget.TwitchLoginWidget_C.Construct");

	UTwitchLoginWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginWidget.TwitchLoginWidget_C.EventTwitchLoginStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinTwitchLoginState*       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTwitchLoginWidget_C::EventTwitchLoginStateChanged(EDarwinTwitchLoginState* State, struct FString* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginWidget.TwitchLoginWidget_C.EventTwitchLoginStateChanged");

	UTwitchLoginWidget_C_EventTwitchLoginStateChanged_Params params;
	params.State = State;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginWidget.TwitchLoginWidget_C.BndEvt__TwitchLoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UTwitchLoginWidget_C::BndEvt__TwitchLoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginWidget.TwitchLoginWidget_C.BndEvt__TwitchLoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTwitchLoginWidget_C_BndEvt__TwitchLoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginWidget.TwitchLoginWidget_C.EventMixerConnectionStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinMixerConnectionState*   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTwitchLoginWidget_C::EventMixerConnectionStateChanged(EDarwinMixerConnectionState* State, struct FString* username)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginWidget.TwitchLoginWidget_C.EventMixerConnectionStateChanged");

	UTwitchLoginWidget_C_EventMixerConnectionStateChanged_Params params;
	params.State = State;
	params.username = username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TwitchLoginWidget.TwitchLoginWidget_C.ExecuteUbergraph_TwitchLoginWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTwitchLoginWidget_C::ExecuteUbergraph_TwitchLoginWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwitchLoginWidget.TwitchLoginWidget_C.ExecuteUbergraph_TwitchLoginWidget");

	UTwitchLoginWidget_C_ExecuteUbergraph_TwitchLoginWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
