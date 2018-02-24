// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AuthenticationWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AuthenticationWidget.AuthenticationWidget_C.EventAuthenticationFailed
// (Event, Public, BlueprintEvent)

void UAuthenticationWidget_C::EventAuthenticationFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AuthenticationWidget.AuthenticationWidget_C.EventAuthenticationFailed");

	UAuthenticationWidget_C_EventAuthenticationFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AuthenticationWidget.AuthenticationWidget_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthenticationWidget_C::BndEvt__QuitBtn_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AuthenticationWidget.AuthenticationWidget_C.BndEvt__QuitBtn_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UAuthenticationWidget_C_BndEvt__QuitBtn_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AuthenticationWidget.AuthenticationWidget_C.BndEvt__RetryBtn_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthenticationWidget_C::BndEvt__RetryBtn_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AuthenticationWidget.AuthenticationWidget_C.BndEvt__RetryBtn_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UAuthenticationWidget_C_BndEvt__RetryBtn_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AuthenticationWidget.AuthenticationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAuthenticationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AuthenticationWidget.AuthenticationWidget_C.Construct");

	UAuthenticationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AuthenticationWidget.AuthenticationWidget_C.ExecuteUbergraph_AuthenticationWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthenticationWidget_C::ExecuteUbergraph_AuthenticationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AuthenticationWidget.AuthenticationWidget_C.ExecuteUbergraph_AuthenticationWidget");

	UAuthenticationWidget_C_ExecuteUbergraph_AuthenticationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
