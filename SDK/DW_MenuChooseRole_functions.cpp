// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuChooseRole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MenuChooseRole.MenuChooseRole_C.Update Mixer Loggin Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinMixerConnectionState    Mixer_Loggin_Status            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Display_Name                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuChooseRole_C::Update_Mixer_Loggin_Status(EDarwinMixerConnectionState Mixer_Loggin_Status, const struct FString& Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.Update Mixer Loggin Status");

	UMenuChooseRole_C_Update_Mixer_Loggin_Status_Params params;
	params.Mixer_Loggin_Status = Mixer_Loggin_Status;
	params.Display_Name = Display_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.Update Twitch Loggin Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinTwitchLoginState        Twitch_Loggin_State_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Display_Name                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuChooseRole_C::Update_Twitch_Loggin_Status(EDarwinTwitchLoginState Twitch_Loggin_State_, const struct FString& Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.Update Twitch Loggin Status");

	UMenuChooseRole_C_Update_Twitch_Loggin_Status_Params params;
	params.Twitch_Loggin_State_ = Twitch_Loggin_State_;
	params.Display_Name = Display_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.IsMixerBrowserOpened
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMixerOpened                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::IsMixerBrowserOpened(bool* IsMixerOpened)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.IsMixerBrowserOpened");

	UMenuChooseRole_C_IsMixerBrowserOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMixerOpened != nullptr)
		*IsMixerOpened = params.IsMixerOpened;
}


// Function MenuChooseRole.MenuChooseRole_C.AreRoleButtonActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::AreRoleButtonActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.AreRoleButtonActive");

	UMenuChooseRole_C_AreRoleButtonActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function MenuChooseRole.MenuChooseRole_C.UpdateButtonStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EChooseRoleMenu_Tiles> Tile                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Focused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::UpdateButtonStyle(TEnumAsByte<EChooseRoleMenu_Tiles> Tile, bool Focused)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.UpdateButtonStyle");

	UMenuChooseRole_C_UpdateButtonStyle_Params params;
	params.Tile = Tile;
	params.Focused = Focused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.ControllerButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EChooseRoleMenu_Tiles> Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Focused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::ControllerButtonFocus(TEnumAsByte<EChooseRoleMenu_Tiles> Role, bool Focused)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.ControllerButtonFocus");

	UMenuChooseRole_C_ControllerButtonFocus_Params params;
	params.Role = Role;
	params.Focused = Focused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.MoveControllerFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::MoveControllerFocus(int side)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.MoveControllerFocus");

	UMenuChooseRole_C_MoveControllerFocus_Params params;
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.UpdateInputMode
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::UpdateInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.UpdateInputMode");

	UMenuChooseRole_C_UpdateInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.ShowChooseRoleMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   playerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult Session                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           GameStarted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ShowDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::ShowChooseRoleMenu(const struct FText& playerName, const struct FBlueprintSessionResult& Session, bool GameStarted, const struct FString& ShowDirectorName, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.ShowChooseRoleMenu");

	UMenuChooseRole_C_ShowChooseRoleMenu_Params params;
	params.playerName = playerName;
	params.Session = Session;
	params.GameStarted = GameStarted;
	params.ShowDirectorName = ShowDirectorName;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.Tick");

	UMenuChooseRole_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.AutoChoosePlayer
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::AutoChoosePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.AutoChoosePlayer");

	UMenuChooseRole_C_AutoChoosePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.InitServerListAsParent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerList_C*           ServerList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMainMenu_C*             MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::InitServerListAsParent(class UServerList_C* ServerList, class UMainMenu_C* MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.InitServerListAsParent");

	UMenuChooseRole_C_InitServerListAsParent_Params params;
	params.ServerList = ServerList;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventInputSourceChanged");

	UMenuChooseRole_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OpenChooseRoleMenu
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OpenChooseRoleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OpenChooseRoleMenu");

	UMenuChooseRole_C_OpenChooseRoleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.SetOverlay44Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsonMainMenu                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::SetOverlay44Visibility(bool IsonMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.SetOverlay44Visibility");

	UMenuChooseRole_C_SetOverlay44Visibility_Params params;
	params.IsonMainMenu = IsonMainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyJoined
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  friendName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture**               friendAvatar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::EventFriendPartyJoined(struct FText* friendName, class UTexture** friendAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyJoined");

	UMenuChooseRole_C_EventFriendPartyJoined_Params params;
	params.friendName = friendName;
	params.friendAvatar = friendAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyLeft
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventFriendPartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyLeft");

	UMenuChooseRole_C_EventFriendPartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuChooseRole_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.Construct");

	UMenuChooseRole_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.ExitShowDirectorMenu
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::ExitShowDirectorMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.ExitShowDirectorMenu");

	UMenuChooseRole_C_ExitShowDirectorMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventUpdateChosenRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuChooseRole_C::EventUpdateChosenRegion(struct FString* RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventUpdateChosenRegion");

	UMenuChooseRole_C_EventUpdateChosenRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.Hide Choose region
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::Hide_Choose_region()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.Hide Choose region");

	UMenuChooseRole_C_Hide_Choose_region_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.ChooseRegionEvent
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::ChooseRegionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.ChooseRegionEvent");

	UMenuChooseRole_C_ChooseRegionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnFreeForAllChosen
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnFreeForAllChosen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnFreeForAllChosen");

	UMenuChooseRole_C_OnFreeForAllChosen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnDuoChosen
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnDuoChosen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnDuoChosen");

	UMenuChooseRole_C_OnDuoChosen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnSDChosen
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnSDChosen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnSDChosen");

	UMenuChooseRole_C_OnSDChosen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentSD
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnSetCurrentSD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentSD");

	UMenuChooseRole_C_OnSetCurrentSD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentDuo
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnSetCurrentDuo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentDuo");

	UMenuChooseRole_C_OnSetCurrentDuo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentSolo
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnSetCurrentSolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentSolo");

	UMenuChooseRole_C_OnSetCurrentSolo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentSD
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnUnsetCurrentSD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentSD");

	UMenuChooseRole_C_OnUnsetCurrentSD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentDuo
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnUnsetCurrentDuo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentDuo");

	UMenuChooseRole_C_OnUnsetCurrentDuo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentSolo
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnUnsetCurrentSolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentSolo");

	UMenuChooseRole_C_OnUnsetCurrentSolo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuRight
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuRight");

	UMenuChooseRole_C_EventMenuRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuLeft
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuLeft");

	UMenuChooseRole_C_EventMenuLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuYPressed
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuYPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuYPressed");

	UMenuChooseRole_C_EventMenuYPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuXPressed");

	UMenuChooseRole_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuDown");

	UMenuChooseRole_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuUp");

	UMenuChooseRole_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.OnExitRoleMenu
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::OnExitRoleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.OnExitRoleMenu");

	UMenuChooseRole_C_OnExitRoleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuBack");

	UMenuChooseRole_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuClick");

	UMenuChooseRole_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.GamepadRoleChosen
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::GamepadRoleChosen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.GamepadRoleChosen");

	UMenuChooseRole_C_GamepadRoleChosen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventDevCommunicationReceived
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventDevCommunicationReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventDevCommunicationReceived");

	UMenuChooseRole_C_EventDevCommunicationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.NonPrivateMatch
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::NonPrivateMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.NonPrivateMatch");

	UMenuChooseRole_C_NonPrivateMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.CreatePrivateMatch
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::CreatePrivateMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.CreatePrivateMatch");

	UMenuChooseRole_C_CreatePrivateMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.JoinPrivateMatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PrivateMatchPassword           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuChooseRole_C::JoinPrivateMatch(const struct FString& PrivateMatchPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.JoinPrivateMatch");

	UMenuChooseRole_C_JoinPrivateMatch_Params params;
	params.PrivateMatchPassword = PrivateMatchPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventUpdateRegionPing
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::EventUpdateRegionPing(struct FString* RegionName, int* ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventUpdateRegionPing");

	UMenuChooseRole_C_EventUpdateRegionPing_Params params;
	params.RegionName = RegionName;
	params.ping = ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventTwitchLoginStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinTwitchLoginState*       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuChooseRole_C::EventTwitchLoginStateChanged(EDarwinTwitchLoginState* State, struct FString* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventTwitchLoginStateChanged");

	UMenuChooseRole_C_EventTwitchLoginStateChanged_Params params;
	params.State = State;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventMixerConnectionStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinMixerConnectionState*   State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                username                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenuChooseRole_C::EventMixerConnectionStateChanged(EDarwinMixerConnectionState* State, struct FString* username)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMixerConnectionStateChanged");

	UMenuChooseRole_C_EventMixerConnectionStateChanged_Params params;
	params.State = State;
	params.username = username;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__TwitchExtensionvideolink_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__TwitchExtensionvideolink_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__TwitchExtensionvideolink_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__TwitchExtensionvideolink_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.BndEvt__TwitchExtensionlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuChooseRole_C::BndEvt__TwitchExtensionlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.BndEvt__TwitchExtensionlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMenuChooseRole_C_BndEvt__TwitchExtensionlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.ExecuteUbergraph_MenuChooseRole
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::ExecuteUbergraph_MenuChooseRole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.ExecuteUbergraph_MenuChooseRole");

	UMenuChooseRole_C_ExecuteUbergraph_MenuChooseRole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
