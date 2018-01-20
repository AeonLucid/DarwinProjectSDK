#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HomeMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HomeMenu.HomeMenu_C.OnDevCommunicationReceived
struct UHomeMenu_C_OnDevCommunicationReceived_Params
{
};

// Function HomeMenu.HomeMenu_C.UpdateMenuInputMode
struct UHomeMenu_C_UpdateMenuInputMode_Params
{
	bool                                               IsUsingKeyboard;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.AutoReselect
struct UHomeMenu_C_AutoReselect_Params
{
};

// Function HomeMenu.HomeMenu_C.SelectButton
struct UHomeMenu_C_SelectButton_Params
{
	TEnumAsByte<EHomeMenu_Tiles>                       SelectedButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.ChangeButtonFocus
struct UHomeMenu_C_ChangeButtonFocus_Params
{
	TEnumAsByte<EHomeMenu_Tiles>                       NewButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.UpdateNavigationRequest
struct UHomeMenu_C_UpdateNavigationRequest_Params
{
	TEnumAsByte<ENavigationRequest>                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.IsButtonVisible
struct UHomeMenu_C_IsButtonVisible_Params
{
	TEnumAsByte<EHomeMenu_Tiles>                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.New Item Unlock
struct UHomeMenu_C_New_Item_Unlock_Params
{
};

// Function HomeMenu.HomeMenu_C.Fill Main Menu button Array
struct UHomeMenu_C_Fill_Main_Menu_button_Array_Params
{
};

// Function HomeMenu.HomeMenu_C.Update number of lootbox
struct UHomeMenu_C_Update_number_of_lootbox_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.Tick
struct UHomeMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.DebugReportBug
struct UHomeMenu_C_DebugReportBug_Params
{
};

// Function HomeMenu.HomeMenu_C.DebugGiveFeedback
struct UHomeMenu_C_DebugGiveFeedback_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3545_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3545_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3555_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3555_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3593_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3593_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3603_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3603_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_1235_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_1235_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_1409_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_1409_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.EventOpenLootBox
struct UHomeMenu_C_EventOpenLootBox_Params
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

// Function HomeMenu.HomeMenu_C.EventInventoryUpdated
struct UHomeMenu_C_EventInventoryUpdated_Params
{
};

// Function HomeMenu.HomeMenu_C.Construct
struct UHomeMenu_C_Construct_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2803_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2803_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2816_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2816_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2856_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2856_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.Init Parent in Home Menu
struct UHomeMenu_C_Init_Parent_in_Home_Menu_Params
{
	class UMainMenu_C*                                 Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.EventMenuDown
struct UHomeMenu_C_EventMenuDown_Params
{
};

// Function HomeMenu.HomeMenu_C.EventMenuUp
struct UHomeMenu_C_EventMenuUp_Params
{
};

// Function HomeMenu.HomeMenu_C.EventMenuLeft
struct UHomeMenu_C_EventMenuLeft_Params
{
};

// Function HomeMenu.HomeMenu_C.EventMenuRight
struct UHomeMenu_C_EventMenuRight_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredPlayBtn
struct UHomeMenu_C_OnHoveredPlayBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredPlayBtn
struct UHomeMenu_C_OnUnhoveredPlayBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredCustomizatioBtn
struct UHomeMenu_C_OnHoveredCustomizatioBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredCustomizatioBtn
struct UHomeMenu_C_OnUnhoveredCustomizatioBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredCraftWheelBtn
struct UHomeMenu_C_OnHoveredCraftWheelBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredCraftWheelBtn
struct UHomeMenu_C_OnUnhoveredCraftWheelBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredCareerBtn
struct UHomeMenu_C_OnUnhoveredCareerBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredCareerBtn
struct UHomeMenu_C_OnHoveredCareerBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredLootBoxBtn
struct UHomeMenu_C_OnHoveredLootBoxBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredLootBoxBtn
struct UHomeMenu_C_OnUnhoveredLootBoxBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredStandaloneBtn
struct UHomeMenu_C_OnHoveredStandaloneBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredStandaloneBtn
struct UHomeMenu_C_OnUnhoveredStandaloneBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredOptionsBtn
struct UHomeMenu_C_OnHoveredOptionsBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredOptionsBtn
struct UHomeMenu_C_OnUnhoveredOptionsBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredQuitBtn
struct UHomeMenu_C_OnUnhoveredQuitBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredQuitBtn
struct UHomeMenu_C_OnHoveredQuitBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickQuitBtn
struct UHomeMenu_C_OnClickQuitBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickOptionsBtn
struct UHomeMenu_C_OnClickOptionsBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickStandaloneBtn
struct UHomeMenu_C_OnClickStandaloneBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClicklLootBoxBtn
struct UHomeMenu_C_OnClicklLootBoxBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickCareerBtn
struct UHomeMenu_C_OnClickCareerBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickCraftwheelBtn
struct UHomeMenu_C_OnClickCraftwheelBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickCustomizationBtn
struct UHomeMenu_C_OnClickCustomizationBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickPlayBtn
struct UHomeMenu_C_OnClickPlayBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickFlibutstierBtn
struct UHomeMenu_C_OnClickFlibutstierBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredFlibutstierBtn
struct UHomeMenu_C_OnHoveredFlibutstierBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredFlibustierBtn
struct UHomeMenu_C_OnUnhoveredFlibustierBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredAmazonBtn
struct UHomeMenu_C_OnHoveredAmazonBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredAmazonBtn
struct UHomeMenu_C_OnUnhoveredAmazonBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickAmazonBtn
struct UHomeMenu_C_OnClickAmazonBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_4993_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_4993_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5197_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5197_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5245_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5245_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5373_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5373_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5383_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5383_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.EventMenuClick
struct UHomeMenu_C_EventMenuClick_Params
{
};

// Function HomeMenu.HomeMenu_C.EventInputSourceChanged
struct UHomeMenu_C_EventInputSourceChanged_Params
{
};

// Function HomeMenu.HomeMenu_C.MenuBackPressed
struct UHomeMenu_C_MenuBackPressed_Params
{
};

// Function HomeMenu.HomeMenu_C.EventMenuBack
struct UHomeMenu_C_EventMenuBack_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_514_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_514_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_570_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_570_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.OnHoveredServerListBtn
struct UHomeMenu_C_OnHoveredServerListBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.OnUnhoveredServerListBtn
struct UHomeMenu_C_OnUnhoveredServerListBtn_Params
{
};

// Function HomeMenu.HomeMenu_C.DisablePlayButton
struct UHomeMenu_C_DisablePlayButton_Params
{
};

// Function HomeMenu.HomeMenu_C.EnablePlayButton
struct UHomeMenu_C_EnablePlayButton_Params
{
};

// Function HomeMenu.HomeMenu_C.OnClickServerList
struct UHomeMenu_C_OnClickServerList_Params
{
};

// Function HomeMenu.HomeMenu_C.EventDevCommunicationReceived
struct UHomeMenu_C_EventDevCommunicationReceived_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__RedditBtn_K2Node_ComponentBoundEvent_2665_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__RedditBtn_K2Node_ComponentBoundEvent_2665_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__DiscrodBtn_K2Node_ComponentBoundEvent_2682_OnButtonClickedEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__DiscrodBtn_K2Node_ComponentBoundEvent_2682_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.JoinAmazonServer
struct UHomeMenu_C_JoinAmazonServer_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2929_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2929_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2985_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2985_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3042_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3042_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3103_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3103_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_SD_K2Node_ComponentBoundEvent_3165_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_SD_K2Node_ComponentBoundEvent_3165_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_SD_K2Node_ComponentBoundEvent_3228_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_SD_K2Node_ComponentBoundEvent_3228_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_CW_K2Node_ComponentBoundEvent_3292_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_CW_K2Node_ComponentBoundEvent_3292_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_CW_K2Node_ComponentBoundEvent_3357_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_CW_K2Node_ComponentBoundEvent_3357_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_3423_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_37_K2Node_ComponentBoundEvent_3423_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_3490_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_37_K2Node_ComponentBoundEvent_3490_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Career_K2Node_ComponentBoundEvent_3621_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Career_K2Node_ComponentBoundEvent_3621_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.BndEvt__Button_Career_K2Node_ComponentBoundEvent_3690_OnButtonHoverEvent__DelegateSignature
struct UHomeMenu_C_BndEvt__Button_Career_K2Node_ComponentBoundEvent_3690_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function HomeMenu.HomeMenu_C.EventPlayerProfileStatsReceived
struct UHomeMenu_C_EventPlayerProfileStatsReceived_Params
{
	struct FDarwinCareerStats*                         stats;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDarwinProfile*                             Profile;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HomeMenu.HomeMenu_C.ExecuteUbergraph_HomeMenu
struct UHomeMenu_C_ExecuteUbergraph_HomeMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
