// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MatchMakingWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingUpdated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// EDarwinRoleEnum*               Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDarwinMatchmakingInfo* matchmakingInfo                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchMakingWidget_C::EventMatchmakingUpdated(EDarwinRoleEnum* Role, struct FDarwinMatchmakingInfo* matchmakingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingUpdated");

	UMatchMakingWidget_C_EventMatchmakingUpdated_Params params;
	params.Role = Role;
	params.matchmakingInfo = matchmakingInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMatchMakingWidget_C::BndEvt__BackBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMatchMakingWidget_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingCompleted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinMatchmakingInfo* matchmakingInfo                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchMakingWidget_C::EventMatchmakingCompleted(struct FDarwinMatchmakingInfo* matchmakingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingCompleted");

	UMatchMakingWidget_C_EventMatchmakingCompleted_Params params;
	params.matchmakingInfo = matchmakingInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingServersFull
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinMatchmakingInfo* matchmakingInfo                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchMakingWidget_C::EventMatchmakingServersFull(struct FDarwinMatchmakingInfo* matchmakingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingServersFull");

	UMatchMakingWidget_C_EventMatchmakingServersFull_Params params;
	params.matchmakingInfo = matchmakingInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingStarted
// (Event, Public, BlueprintEvent)

void UMatchMakingWidget_C::EventMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingStarted");

	UMatchMakingWidget_C_EventMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_290_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMatchMakingWidget_C::BndEvt__CancelBtn_K2Node_ComponentBoundEvent_290_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_290_OnButtonClickedEvent__DelegateSignature");

	UMatchMakingWidget_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_290_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventMenuSpecialLeftPressed
// (Event, Public, BlueprintEvent)

void UMatchMakingWidget_C::EventMenuSpecialLeftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMenuSpecialLeftPressed");

	UMatchMakingWidget_C_EventMenuSpecialLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.OnMatchmakingCancelAction
// (BlueprintCallable, BlueprintEvent)

void UMatchMakingWidget_C::OnMatchmakingCancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.OnMatchmakingCancelAction");

	UMatchMakingWidget_C_OnMatchmakingCancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UMatchMakingWidget_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMenuClick");

	UMatchMakingWidget_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchMakingWidget_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventMenuBack");

	UMatchMakingWidget_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.BackOnSearchFailedAction
// (BlueprintCallable, BlueprintEvent)

void UMatchMakingWidget_C::BackOnSearchFailedAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.BackOnSearchFailedAction");

	UMatchMakingWidget_C_BackOnSearchFailedAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchMakingWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.Tick");

	UMatchMakingWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventUpdateChosenRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMatchMakingWidget_C::EventUpdateChosenRegion(struct FString* RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventUpdateChosenRegion");

	UMatchMakingWidget_C_EventUpdateChosenRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMatchMakingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.Construct");

	UMatchMakingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMatchMakingWidget_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.EventInputSourceChanged");

	UMatchMakingWidget_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMatchMakingWidget_C::BndEvt__BackBtn_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature");

	UMatchMakingWidget_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_105_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMatchMakingWidget_C::BndEvt__BackBtn_K2Node_ComponentBoundEvent_105_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_105_OnButtonHoverEvent__DelegateSignature");

	UMatchMakingWidget_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_105_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.Init Parent in Matchmaking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_C*             MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHomeMenu_C*             HomeMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchMakingWidget_C::Init_Parent_in_Matchmaking(class UMainMenu_C* MainMenu, class UHomeMenu_C* HomeMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.Init Parent in Matchmaking");

	UMatchMakingWidget_C_Init_Parent_in_Matchmaking_Params params;
	params.MainMenu = MainMenu;
	params.HomeMenu = HomeMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.UpdateNavButtons
// (BlueprintCallable, BlueprintEvent)

void UMatchMakingWidget_C::UpdateNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.UpdateNavButtons");

	UMatchMakingWidget_C_UpdateNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.HideMatchmakingFailed
// (BlueprintCallable, BlueprintEvent)

void UMatchMakingWidget_C::HideMatchmakingFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.HideMatchmakingFailed");

	UMatchMakingWidget_C_HideMatchmakingFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchMakingWidget.MatchMakingWidget_C.ExecuteUbergraph_MatchMakingWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchMakingWidget_C::ExecuteUbergraph_MatchMakingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchMakingWidget.MatchMakingWidget_C.ExecuteUbergraph_MatchMakingWidget");

	UMatchMakingWidget_C_ExecuteUbergraph_MatchMakingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
