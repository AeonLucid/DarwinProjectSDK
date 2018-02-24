// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ReportPopup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReportPopup.ReportPopup_C.MoveReason
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPopup_C::MoveReason(int side)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.MoveReason");

	UReportPopup_C_MoveReason_Params params;
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.BndEvt__Button_CONFIRM_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReportPopup_C::BndEvt__Button_CONFIRM_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.BndEvt__Button_CONFIRM_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UReportPopup_C_BndEvt__Button_CONFIRM_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMutePlayerStatus_C*     Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPopup_C::Initialize(int playerID, class UMutePlayerStatus_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.Initialize");

	UReportPopup_C_Initialize_Params params;
	params.playerID = playerID;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.BndEvt__Button_CANCEL_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReportPopup_C::BndEvt__Button_CANCEL_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.BndEvt__Button_CANCEL_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UReportPopup_C_BndEvt__Button_CANCEL_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.OnClickConfirm
// (BlueprintCallable, BlueprintEvent)

void UReportPopup_C::OnClickConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.OnClickConfirm");

	UReportPopup_C_OnClickConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UReportPopup_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.EventMenuUp");

	UReportPopup_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UReportPopup_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.EventMenuDown");

	UReportPopup_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UReportPopup_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.EventMenuXPressed");

	UReportPopup_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UReportPopup_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.EventMenuClick");

	UReportPopup_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.OnOpeningReportReason
// (BlueprintCallable, BlueprintEvent)

void UReportPopup_C::OnOpeningReportReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.OnOpeningReportReason");

	UReportPopup_C_OnOpeningReportReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.OnClosingReportReason
// (BlueprintCallable, BlueprintEvent)

void UReportPopup_C::OnClosingReportReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.OnClosingReportReason");

	UReportPopup_C_OnClosingReportReason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UReportPopup_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.EventInputSourceChanged");

	UReportPopup_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_64_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UReportPopup_C::BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_64_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_64_OnOpeningEvent__DelegateSignature");

	UReportPopup_C_BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_64_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_75_OnClosingEvent__DelegateSignature
// (BlueprintEvent)

void UReportPopup_C::BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_75_OnClosingEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_75_OnClosingEvent__DelegateSignature");

	UReportPopup_C_BndEvt__ReportReasonText_K2Node_ComponentBoundEvent_75_OnClosingEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.Construct");

	UReportPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPopup.ReportPopup_C.ExecuteUbergraph_ReportPopup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPopup_C::ExecuteUbergraph_ReportPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPopup.ReportPopup_C.ExecuteUbergraph_ReportPopup");

	UReportPopup_C_ExecuteUbergraph_ReportPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
