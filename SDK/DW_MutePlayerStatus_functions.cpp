// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MutePlayerStatus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Mute_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UMutePlayerStatus_C::Get_Button_Mute_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Mute_ToolTipWidget_1");

	UMutePlayerStatus_C_Get_Button_Mute_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Kick_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UMutePlayerStatus_C::Get_Button_Kick_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Kick_ToolTipWidget_1");

	UMutePlayerStatus_C_Get_Button_Kick_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Report_ToolTipWidget_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UMutePlayerStatus_C::Get_Button_Report_ToolTipWidget_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Report_ToolTipWidget_2");

	UMutePlayerStatus_C_Get_Button_Report_ToolTipWidget_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Report_ToolTipWidget_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UMutePlayerStatus_C::Get_Button_Report_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Report_ToolTipWidget_1");

	UMutePlayerStatus_C_Get_Button_Report_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.SetSelected");

	UMutePlayerStatus_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


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
// class UMuteMenu_C*             MenuOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::Initialize(int DarwinUniqueID, bool muted, EDarwinRoleEnum NewParam, class UMuteMenu_C* MenuOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Initialize");

	UMutePlayerStatus_C_Initialize_Params params;
	params.DarwinUniqueID = DarwinUniqueID;
	params.muted = muted;
	params.NewParam = NewParam;
	params.MenuOwner = MenuOwner;

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


// Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMutePlayerStatus_C::BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMutePlayerStatus_C_BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Reported
// (BlueprintCallable, BlueprintEvent)

void UMutePlayerStatus_C::Reported()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Reported");

	UMutePlayerStatus_C_Reported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UMutePlayerStatus_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventMenuClick");

	UMutePlayerStatus_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.OnClickMute
// (BlueprintCallable, BlueprintEvent)

void UMutePlayerStatus_C::OnClickMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.OnClickMute");

	UMutePlayerStatus_C_OnClickMute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuYPressed
// (Event, Public, BlueprintEvent)

void UMutePlayerStatus_C::EventMenuYPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventMenuYPressed");

	UMutePlayerStatus_C_EventMenuYPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.OnClickReport
// (BlueprintCallable, BlueprintEvent)

void UMutePlayerStatus_C::OnClickReport()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.OnClickReport");

	UMutePlayerStatus_C_OnClickReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventMenuBack");

	UMutePlayerStatus_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.ReportClosed
// (BlueprintCallable, BlueprintEvent)

void UMutePlayerStatus_C::ReportClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.ReportClosed");

	UMutePlayerStatus_C_ReportClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuSpecialRightPressed
// (Event, Public, BlueprintEvent)

void UMutePlayerStatus_C::EventMenuSpecialRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventMenuSpecialRightPressed");

	UMutePlayerStatus_C_EventMenuSpecialRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMutePlayerStatus_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.Destruct");

	UMutePlayerStatus_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMutePlayerStatus_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventInputSourceChanged");

	UMutePlayerStatus_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MutePlayerStatus.MutePlayerStatus_C.EventVivoxPlayerNotConnected
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMutePlayerStatus_C::EventVivoxPlayerNotConnected(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MutePlayerStatus.MutePlayerStatus_C.EventVivoxPlayerNotConnected");

	UMutePlayerStatus_C_EventVivoxPlayerNotConnected_Params params;
	params.UniqueId = UniqueId;

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
