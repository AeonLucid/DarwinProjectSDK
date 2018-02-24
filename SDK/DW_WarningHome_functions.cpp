// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_WarningHome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WarningHome.WarningHome_C.LoopNextPage
// (Public, BlueprintCallable, BlueprintEvent)

void UWarningHome_C::LoopNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.LoopNextPage");

	UWarningHome_C_LoopNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.StartNextPageTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWarningHome_C::StartNextPageTimer(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.StartNextPageTimer");

	UWarningHome_C_StartNextPageTimer_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.SelectNextPage
// (Public, BlueprintCallable, BlueprintEvent)

void UWarningHome_C::SelectNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.SelectNextPage");

	UWarningHome_C_SelectNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.ShouldUpdateCurrentMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWarningHome_C::ShouldUpdateCurrentMessage(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.ShouldUpdateCurrentMessage");

	UWarningHome_C_ShouldUpdateCurrentMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function WarningHome.WarningHome_C.GetDevCommunicationCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWarningHome_C::GetDevCommunicationCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.GetDevCommunicationCount");

	UWarningHome_C_GetDevCommunicationCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WarningHome.WarningHome_C.FillInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CommunicationIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWarningHome_C::FillInfoText(int CommunicationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.FillInfoText");

	UWarningHome_C_FillInfoText_Params params;
	params.CommunicationIndex = CommunicationIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWarningHome_C::BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWarningHome_C_BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.EventDevCommunicationReceived
// (Event, Public, BlueprintEvent)

void UWarningHome_C::EventDevCommunicationReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.EventDevCommunicationReceived");

	UWarningHome_C_EventDevCommunicationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWarningHome_C::BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UWarningHome_C_BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWarningHome_C::BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWarningHome_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.EventMenuDPadRight
// (Event, Public, BlueprintEvent)

void UWarningHome_C::EventMenuDPadRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.EventMenuDPadRight");

	UWarningHome_C_EventMenuDPadRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.EventMenuDPadLeft
// (Event, Public, BlueprintEvent)

void UWarningHome_C::EventMenuDPadLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.EventMenuDPadLeft");

	UWarningHome_C_EventMenuDPadLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeMenu_C*             ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWarningHome_C::Init(class UHomeMenu_C* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.Init");

	UWarningHome_C_Init_Params params;
	params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarningHome.WarningHome_C.ExecuteUbergraph_WarningHome
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWarningHome_C::ExecuteUbergraph_WarningHome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WarningHome.WarningHome_C.ExecuteUbergraph_WarningHome");

	UWarningHome_C_ExecuteUbergraph_WarningHome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
