// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyStats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

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
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBloodPactActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyStats_C::EventPlayerIsWinner(int* PlayerId, bool* bBloodPactActive, int* allyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyStats.MyStats_C.EventPlayerIsWinner");

	UMyStats_C_EventPlayerIsWinner_Params params;
	params.PlayerId = PlayerId;
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
