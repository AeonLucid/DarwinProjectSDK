// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuChooseRole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

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
// struct FString                 showDirectorName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::ShowChooseRoleMenu(const struct FText& playerName, const struct FBlueprintSessionResult& Session, bool GameStarted, const struct FString& showDirectorName, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.ShowChooseRoleMenu");

	UMenuChooseRole_C_ShowChooseRoleMenu_Params params;
	params.playerName = playerName;
	params.Session = Session;
	params.GameStarted = GameStarted;
	params.showDirectorName = showDirectorName;
	params.NumPlayers = NumPlayers;

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


// Function MenuChooseRole.MenuChooseRole_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UMenuChooseRole_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.EventMenuBack");

	UMenuChooseRole_C_EventMenuBack_Params params;

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


// Function MenuChooseRole.MenuChooseRole_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UMenuChooseRole_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuChooseRole.MenuChooseRole_C.CustomEvent");

	UMenuChooseRole_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyJoined
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  friendName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture2D**             friendAvatar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuChooseRole_C::EventFriendPartyJoined(struct FText* friendName, class UTexture2D** friendAvatar)
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
