// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MyStats.MyStats_C.Init My stats
// (BlueprintCallable, BlueprintEvent)

void UMyStats_C::Init_My_stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.Init My stats");

	UMyStats_C_Init_My_stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.BndEvt__Button_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyStats_C::BndEvt__Button_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.BndEvt__Button_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMyStats_C_BndEvt__Button_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyStats_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature");

	UMyStats_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyStats_C::BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature");

	UMyStats_C_BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_166_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.BndEvt__Button_PlayAgain_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyStats_C::BndEvt__Button_PlayAgain_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.BndEvt__Button_PlayAgain_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature");

	UMyStats_C_BndEvt__Button_PlayAgain_K2Node_ComponentBoundEvent_185_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyStats_C::BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature");

	UMyStats_C_BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventPlayerIsWinner
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPactActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyStats_C::EventPlayerIsWinner(int* playerID, bool* bBloodPactActive, int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventPlayerIsWinner");

	UMyStats_C_EventPlayerIsWinner_Params params;
	params.playerID = playerID;
	params.bBloodPactActive = bBloodPactActive;
	params.allyID = allyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventGameStartsNow");

	UMyStats_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.Construct");

	UMyStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventInputSourceChanged");

	UMyStats_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventEndMatchDataReceived
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventEndMatchDataReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventEndMatchDataReceived");

	UMyStats_C_EventEndMatchDataReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventMenuClick");

	UMyStats_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyStats_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.Destruct");

	UMyStats_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyStats_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventMenuBack");

	UMyStats_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventMenuLeftPagePressed
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventMenuLeftPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventMenuLeftPagePressed");

	UMyStats_C_EventMenuLeftPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.OnPreviousAction
// (BlueprintCallable, BlueprintEvent)

void UMyStats_C::OnPreviousAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.OnPreviousAction");

	UMyStats_C_OnPreviousAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.OnNextAction
// (BlueprintCallable, BlueprintEvent)

void UMyStats_C::OnNextAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.OnNextAction");

	UMyStats_C_OnNextAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventMenuLeftTriggerPressed
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventMenuLeftTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventMenuLeftTriggerPressed");

	UMyStats_C_EventMenuLeftTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventMenuRightPagePressed
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventMenuRightPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventMenuRightPagePressed");

	UMyStats_C_EventMenuRightPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.EventMenuRightTriggerPressed
// (Event, Public, BlueprintEvent)

void UMyStats_C::EventMenuRightTriggerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventMenuRightTriggerPressed");

	UMyStats_C_EventMenuRightTriggerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyStats.MyStats_C.ExecuteUbergraph_MyStats
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyStats_C::ExecuteUbergraph_MyStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.ExecuteUbergraph_MyStats");

	UMyStats_C_ExecuteUbergraph_MyStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
