#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MainMenuAlpha_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MainMenuAlpha.MainMenuAlpha_C.ShowRoleSelection
struct UMainMenuAlpha_C_ShowRoleSelection_Params
{
	struct FBlueprintSessionResult                     Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               GameStarted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenuAlpha.MainMenuAlpha_C.OnclickedBackCareer
struct UMainMenuAlpha_C_OnclickedBackCareer_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventHideBackground
struct UMainMenuAlpha_C_EventHideBackground_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventShowBackground
struct UMainMenuAlpha_C_EventShowBackground_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventOpenLootBox
struct UMainMenuAlpha_C_EventOpenLootBox_Params
{
	struct FString*                                    loot1_id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               loot1_money;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              loot1_is_dup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    loot2_id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               loot2_money;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              loot2_is_dup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    loot3_id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               loot3_money;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              loot3_is_dup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    loot4_id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               loot4_money;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              loot4_is_dup;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventInventoryUpdated
struct UMainMenuAlpha_C_EventInventoryUpdated_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.Back Pressed on Options
struct UMainMenuAlpha_C_Back_Pressed_on_Options_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.Construct
struct UMainMenuAlpha_C_Construct_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.WithEditorOpenMenuOnStart
struct UMainMenuAlpha_C_WithEditorOpenMenuOnStart_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventSessionNotFound
struct UMainMenuAlpha_C_EventSessionNotFound_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.DebugGiveFeedback
struct UMainMenuAlpha_C_DebugGiveFeedback_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.DebugReportBug
struct UMainMenuAlpha_C_DebugReportBug_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventMenuBack
struct UMainMenuAlpha_C_EventMenuBack_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventSessionFound
struct UMainMenuAlpha_C_EventSessionFound_Params
{
	struct FBlueprintSessionResult*                    BlueprintSessionResult;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString*                                    host_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    version;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    map_name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    show_director_name;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FDarwinPlayerInfo>*                  PlayersInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bGameStarted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    num_spectators;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.ServerRefresh
struct UMainMenuAlpha_C_ServerRefresh_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventCloseLootBox
struct UMainMenuAlpha_C_EventCloseLootBox_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.StopServerRefresh
struct UMainMenuAlpha_C_StopServerRefresh_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
struct UMainMenuAlpha_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.Back to Server list
struct UMainMenuAlpha_C_Back_to_Server_list_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventCloseCustomization
struct UMainMenuAlpha_C_EventCloseCustomization_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventHideMainMenu
struct UMainMenuAlpha_C_EventHideMainMenu_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.EventShowMainMenu
struct UMainMenuAlpha_C_EventShowMainMenu_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.Tick
struct UMainMenuAlpha_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainMenuAlpha.MainMenuAlpha_C.Comeback to main menu
struct UMainMenuAlpha_C_Comeback_to_main_menu_Params
{
};

// Function MainMenuAlpha.MainMenuAlpha_C.ExecuteUbergraph_MainMenuAlpha
struct UMainMenuAlpha_C_ExecuteUbergraph_MainMenuAlpha_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
