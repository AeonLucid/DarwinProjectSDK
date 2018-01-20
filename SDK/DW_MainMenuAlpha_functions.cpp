// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MainMenuAlpha_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenuAlpha.MainMenuAlpha_C.ShowRoleSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           GameStarted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 showDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuAlpha_C::ShowRoleSelection(const struct FBlueprintSessionResult& Session, bool GameStarted, const struct FString& showDirectorName, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.ShowRoleSelection");

	UMainMenuAlpha_C_ShowRoleSelection_Params params;
	params.Session = Session;
	params.GameStarted = GameStarted;
	params.showDirectorName = showDirectorName;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.OnclickedBackCareer
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::OnclickedBackCareer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.OnclickedBackCareer");

	UMainMenuAlpha_C_OnclickedBackCareer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventHideBackground
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::EventHideBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventHideBackground");

	UMainMenuAlpha_C_EventHideBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventShowBackground
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::EventShowBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventShowBackground");

	UMainMenuAlpha_C_EventShowBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventOpenLootBox
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                loot1_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot1_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot1_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                loot2_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot2_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot2_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                loot3_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot3_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot3_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                loot4_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot4_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot4_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuAlpha_C::EventOpenLootBox(struct FString* loot1_id, int* loot1_money, bool* loot1_is_dup, struct FString* loot2_id, int* loot2_money, bool* loot2_is_dup, struct FString* loot3_id, int* loot3_money, bool* loot3_is_dup, struct FString* loot4_id, int* loot4_money, bool* loot4_is_dup)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventOpenLootBox");

	UMainMenuAlpha_C_EventOpenLootBox_Params params;
	params.loot1_id = loot1_id;
	params.loot1_money = loot1_money;
	params.loot1_is_dup = loot1_is_dup;
	params.loot2_id = loot2_id;
	params.loot2_money = loot2_money;
	params.loot2_is_dup = loot2_is_dup;
	params.loot3_id = loot3_id;
	params.loot3_money = loot3_money;
	params.loot3_is_dup = loot3_is_dup;
	params.loot4_id = loot4_id;
	params.loot4_money = loot4_money;
	params.loot4_is_dup = loot4_is_dup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventInventoryUpdated
// (Event, Public, BlueprintEvent)

void UMainMenuAlpha_C::EventInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventInventoryUpdated");

	UMainMenuAlpha_C_EventInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.Back Pressed on Options
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::Back_Pressed_on_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.Back Pressed on Options");

	UMainMenuAlpha_C_Back_Pressed_on_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenuAlpha_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.Construct");

	UMainMenuAlpha_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.WithEditorOpenMenuOnStart
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::WithEditorOpenMenuOnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.WithEditorOpenMenuOnStart");

	UMainMenuAlpha_C_WithEditorOpenMenuOnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventSessionNotFound
// (Event, Public, BlueprintEvent)

void UMainMenuAlpha_C::EventSessionNotFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventSessionNotFound");

	UMainMenuAlpha_C_EventSessionNotFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.DebugGiveFeedback
// (Event, Public, BlueprintEvent)

void UMainMenuAlpha_C::DebugGiveFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.DebugGiveFeedback");

	UMainMenuAlpha_C_DebugGiveFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.DebugReportBug
// (Event, Public, BlueprintEvent)

void UMainMenuAlpha_C::DebugReportBug()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.DebugReportBug");

	UMainMenuAlpha_C_DebugReportBug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UMainMenuAlpha_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventMenuBack");

	UMainMenuAlpha_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventSessionFound
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* BlueprintSessionResult         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString*                host_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                version                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                map_name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                show_director_name             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FDarwinPlayerInfo>* PlayersInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bGameStarted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                num_spectators                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMainMenuAlpha_C::EventSessionFound(struct FBlueprintSessionResult* BlueprintSessionResult, struct FString* host_name, struct FString* version, struct FString* map_name, struct FString* show_director_name, TArray<struct FDarwinPlayerInfo>* PlayersInfo, bool* bGameStarted, struct FString* num_spectators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventSessionFound");

	UMainMenuAlpha_C_EventSessionFound_Params params;
	params.BlueprintSessionResult = BlueprintSessionResult;
	params.host_name = host_name;
	params.version = version;
	params.map_name = map_name;
	params.show_director_name = show_director_name;
	params.PlayersInfo = PlayersInfo;
	params.bGameStarted = bGameStarted;
	params.num_spectators = num_spectators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.ServerRefresh
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::ServerRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.ServerRefresh");

	UMainMenuAlpha_C_ServerRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventCloseLootBox
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::EventCloseLootBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventCloseLootBox");

	UMainMenuAlpha_C_EventCloseLootBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.StopServerRefresh
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::StopServerRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.StopServerRefresh");

	UMainMenuAlpha_C_StopServerRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuAlpha_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature");

	UMainMenuAlpha_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.Back to Server list
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::Back_to_Server_list()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.Back to Server list");

	UMainMenuAlpha_C_Back_to_Server_list_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventCloseCustomization
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::EventCloseCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventCloseCustomization");

	UMainMenuAlpha_C_EventCloseCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventHideMainMenu
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::EventHideMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventHideMainMenu");

	UMainMenuAlpha_C_EventHideMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.EventShowMainMenu
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::EventShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.EventShowMainMenu");

	UMainMenuAlpha_C_EventShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuAlpha_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.Tick");

	UMainMenuAlpha_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.Comeback to main menu
// (BlueprintCallable, BlueprintEvent)

void UMainMenuAlpha_C::Comeback_to_main_menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.Comeback to main menu");

	UMainMenuAlpha_C_Comeback_to_main_menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuAlpha.MainMenuAlpha_C.ExecuteUbergraph_MainMenuAlpha
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuAlpha_C::ExecuteUbergraph_MainMenuAlpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuAlpha.MainMenuAlpha_C.ExecuteUbergraph_MainMenuAlpha");

	UMainMenuAlpha_C_ExecuteUbergraph_MainMenuAlpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
