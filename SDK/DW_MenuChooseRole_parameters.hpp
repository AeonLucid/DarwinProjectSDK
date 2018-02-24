#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuChooseRole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MenuChooseRole.MenuChooseRole_C.Update Mixer Loggin Status
struct UMenuChooseRole_C_Update_Mixer_Loggin_Status_Params
{
	EDarwinMixerConnectionState                        Mixer_Loggin_Status;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Display_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.Update Twitch Loggin Status
struct UMenuChooseRole_C_Update_Twitch_Loggin_Status_Params
{
	EDarwinTwitchLoginState                            Twitch_Loggin_State_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Display_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.IsMixerBrowserOpened
struct UMenuChooseRole_C_IsMixerBrowserOpened_Params
{
	bool                                               IsMixerOpened;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.AreRoleButtonActive
struct UMenuChooseRole_C_AreRoleButtonActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.UpdateButtonStyle
struct UMenuChooseRole_C_UpdateButtonStyle_Params
{
	TEnumAsByte<EChooseRoleMenu_Tiles>                 Tile;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Focused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.ControllerButtonFocus
struct UMenuChooseRole_C_ControllerButtonFocus_Params
{
	TEnumAsByte<EChooseRoleMenu_Tiles>                 Role;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Focused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.MoveControllerFocus
struct UMenuChooseRole_C_MoveControllerFocus_Params
{
	int                                                side;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.UpdateInputMode
struct UMenuChooseRole_C_UpdateInputMode_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ShowChooseRoleMenu
struct UMenuChooseRole_C_ShowChooseRoleMenu_Params
{
	struct FText                                       playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               GameStarted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ShowDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Director_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Player_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.Tick
struct UMenuChooseRole_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.AutoChoosePlayer
struct UMenuChooseRole_C_AutoChoosePlayer_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.InitServerListAsParent
struct UMenuChooseRole_C_InitServerListAsParent_Params
{
	class UServerList_C*                               ServerList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMainMenu_C*                                 MainMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.EventInputSourceChanged
struct UMenuChooseRole_C_EventInputSourceChanged_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OpenChooseRoleMenu
struct UMenuChooseRole_C_OpenChooseRoleMenu_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.SetOverlay44Visibility
struct UMenuChooseRole_C_SetOverlay44Visibility_Params
{
	bool                                               IsonMainMenu;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyJoined
struct UMenuChooseRole_C_EventFriendPartyJoined_Params
{
	struct FText*                                      friendName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture**                                   friendAvatar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.EventFriendPartyLeft
struct UMenuChooseRole_C_EventFriendPartyLeft_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.Construct
struct UMenuChooseRole_C_Construct_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_ShowDirectorFAA_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_ShowDirectorBloodPact_K2Node_ComponentBoundEvent_263_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ExitShowDirectorMenu
struct UMenuChooseRole_C_ExitShowDirectorMenu_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__Button_ChooseRegion_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventUpdateChosenRegion
struct UMenuChooseRole_C_EventUpdateChosenRegion_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.Hide Choose region
struct UMenuChooseRole_C_Hide_Choose_region_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ChooseRegionEvent
struct UMenuChooseRole_C_ChooseRegionEvent_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnFreeForAllChosen
struct UMenuChooseRole_C_OnFreeForAllChosen_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnDuoChosen
struct UMenuChooseRole_C_OnDuoChosen_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnSDChosen
struct UMenuChooseRole_C_OnSDChosen_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentSD
struct UMenuChooseRole_C_OnSetCurrentSD_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentDuo
struct UMenuChooseRole_C_OnSetCurrentDuo_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnSetCurrentSolo
struct UMenuChooseRole_C_OnSetCurrentSolo_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentSD
struct UMenuChooseRole_C_OnUnsetCurrentSD_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentDuo
struct UMenuChooseRole_C_OnUnsetCurrentDuo_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnUnsetCurrentSolo
struct UMenuChooseRole_C_OnUnsetCurrentSolo_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuRight
struct UMenuChooseRole_C_EventMenuRight_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuLeft
struct UMenuChooseRole_C_EventMenuLeft_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuYPressed
struct UMenuChooseRole_C_EventMenuYPressed_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuXPressed
struct UMenuChooseRole_C_EventMenuXPressed_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuDown
struct UMenuChooseRole_C_EventMenuDown_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuUp
struct UMenuChooseRole_C_EventMenuUp_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.OnExitRoleMenu
struct UMenuChooseRole_C_OnExitRoleMenu_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuBack
struct UMenuChooseRole_C_EventMenuBack_Params
{
	bool*                                              bIsEscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.EventMenuClick
struct UMenuChooseRole_C_EventMenuClick_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.GamepadRoleChosen
struct UMenuChooseRole_C_GamepadRoleChosen_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.EventDevCommunicationReceived
struct UMenuChooseRole_C_EventDevCommunicationReceived_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.NonPrivateMatch
struct UMenuChooseRole_C_NonPrivateMatch_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.CreatePrivateMatch
struct UMenuChooseRole_C_CreatePrivateMatch_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.JoinPrivateMatch
struct UMenuChooseRole_C_JoinPrivateMatch_Params
{
	struct FString                                     PrivateMatchPassword;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.EventUpdateRegionPing
struct UMenuChooseRole_C_EventUpdateRegionPing_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuChooseRole.MenuChooseRole_C.EventTwitchLoginStateChanged
struct UMenuChooseRole_C_EventTwitchLoginStateChanged_Params
{
	EDarwinTwitchLoginState*                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.EventMixerConnectionStateChanged
struct UMenuChooseRole_C_EventMixerConnectionStateChanged_Params
{
	EDarwinMixerConnectionState*                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    username;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__TwitchExtensionvideolink_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__TwitchExtensionvideolink_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.BndEvt__TwitchExtensionlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMenuChooseRole_C_BndEvt__TwitchExtensionlink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuChooseRole.MenuChooseRole_C.ExecuteUbergraph_MenuChooseRole
struct UMenuChooseRole_C_ExecuteUbergraph_MenuChooseRole_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
