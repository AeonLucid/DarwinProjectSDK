// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ServerList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerList.ServerList_C.CheckUserFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UServerList_C::CheckUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.CheckUserFocus");

	UServerList_C_CheckUserFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.UpdateGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UServerList_C::UpdateGamepadFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.UpdateGamepadFocus");

	UServerList_C_UpdateGamepadFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.ShowRoleSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           GameStarted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 showDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerList_C::ShowRoleSelection(const struct FBlueprintSessionResult& Session, bool GameStarted, const struct FString& showDirectorName, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.ShowRoleSelection");

	UServerList_C_ShowRoleSelection_Params params;
	params.Session = Session;
	params.GameStarted = GameStarted;
	params.showDirectorName = showDirectorName;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.EventSessionNotFound
// (Event, Public, BlueprintEvent)

void UServerList_C::EventSessionNotFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.EventSessionNotFound");

	UServerList_C_EventSessionNotFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.EventSessionFound
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

void UServerList_C::EventSessionFound(struct FBlueprintSessionResult* BlueprintSessionResult, struct FString* host_name, struct FString* version, struct FString* map_name, struct FString* show_director_name, TArray<struct FDarwinPlayerInfo>* PlayersInfo, bool* bGameStarted, struct FString* num_spectators)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.EventSessionFound");

	UServerList_C_EventSessionFound_Params params;
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


// Function ServerList.ServerList_C.ServerRefresh
// (BlueprintCallable, BlueprintEvent)

void UServerList_C::ServerRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.ServerRefresh");

	UServerList_C_ServerRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.StopServerRefresh
// (BlueprintCallable, BlueprintEvent)

void UServerList_C::StopServerRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.StopServerRefresh");

	UServerList_C_StopServerRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.Tick");

	UServerList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.Back to Server list
// (BlueprintCallable, BlueprintEvent)

void UServerList_C::Back_to_Server_list()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.Back to Server list");

	UServerList_C_Back_to_Server_list_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerList_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UServerList_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.InitParentInServerList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_C*             MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerList_C::InitParentInServerList(class UMainMenu_C* MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.InitParentInServerList");

	UServerList_C_InitParentInServerList_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.OpenServerList
// (BlueprintCallable, BlueprintEvent)

void UServerList_C::OpenServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.OpenServerList");

	UServerList_C_OpenServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.CollapseServerList
// (BlueprintCallable, BlueprintEvent)

void UServerList_C::CollapseServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.CollapseServerList");

	UServerList_C_CollapseServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.Construct");

	UServerList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.MenuBackPressed
// (BlueprintCallable, BlueprintEvent)

void UServerList_C::MenuBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.MenuBackPressed");

	UServerList_C_MenuBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UServerList_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.EventInputSourceChanged");

	UServerList_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UServerList_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.EventMenuBack");

	UServerList_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UServerList_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.EventMenuClick");

	UServerList_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerList.ServerList_C.ExecuteUbergraph_ServerList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerList_C::ExecuteUbergraph_ServerList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerList.ServerList_C.ExecuteUbergraph_ServerList");

	UServerList_C_ExecuteUbergraph_ServerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
