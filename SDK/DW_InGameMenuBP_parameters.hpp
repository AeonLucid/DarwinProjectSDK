#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InGameMenuBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InGameMenuBP.InGameMenuBP_C.RefreshPromptsSetup
struct UInGameMenuBP_C_RefreshPromptsSetup_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.UpdateExitMenuNavButtons
struct UInGameMenuBP_C_UpdateExitMenuNavButtons_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.UnhoverButton
struct UInGameMenuBP_C_UnhoverButton_Params
{
	TEnumAsByte<EInGameMenu_Tiles>                     Tile;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.IsMenuVisible
struct UInGameMenuBP_C_IsMenuVisible_Params
{
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.SelectCurrentButton
struct UInGameMenuBP_C_SelectCurrentButton_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.UpdateNavigationRequest
struct UInGameMenuBP_C_UpdateNavigationRequest_Params
{
	TEnumAsByte<ENavigationRequest>                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.ChangeButtonFocus
struct UInGameMenuBP_C_ChangeButtonFocus_Params
{
	TEnumAsByte<EInGameMenu_Tiles>                     NewButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.Get_Button_Customize_Visibility_1
struct UInGameMenuBP_C_Get_Button_Customize_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonRestart_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonRestart_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.Go back with esc
struct UInGameMenuBP_C_Go_back_with_esc_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventCloseCustomization
struct UInGameMenuBP_C_EventCloseCustomization_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.Tick
struct UInGameMenuBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.Back options pressed
struct UInGameMenuBP_C_Back_options_pressed_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnClickMainMenu
struct UInGameMenuBP_C_OnClickMainMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnHoverMainMenu
struct UInGameMenuBP_C_OnHoverMainMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverMainMenu
struct UInGameMenuBP_C_OnUnhoverMainMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnClickOptions
struct UInGameMenuBP_C_OnClickOptions_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnHoverOptions
struct UInGameMenuBP_C_OnHoverOptions_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverOptions
struct UInGameMenuBP_C_OnUnhoverOptions_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnClickCustomize
struct UInGameMenuBP_C_OnClickCustomize_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_233_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_233_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_329_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_329_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_364_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_364_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_389_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_389_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.ExitInGameMenu
struct UInGameMenuBP_C_ExitInGameMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventInGameMenuAction
struct UInGameMenuBP_C_EventInGameMenuAction_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.QuitConfirmed
struct UInGameMenuBP_C_QuitConfirmed_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.QuitCanceled
struct UInGameMenuBP_C_QuitCanceled_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnHoverResume
struct UInGameMenuBP_C_OnHoverResume_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverResume
struct UInGameMenuBP_C_OnUnhoverResume_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnHoverCustomize
struct UInGameMenuBP_C_OnHoverCustomize_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverCustomize
struct UInGameMenuBP_C_OnUnhoverCustomize_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnHoverQuitDesktop
struct UInGameMenuBP_C_OnHoverQuitDesktop_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverQuitDesktop
struct UInGameMenuBP_C_OnUnhoverQuitDesktop_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuDown
struct UInGameMenuBP_C_EventMenuDown_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuUp
struct UInGameMenuBP_C_EventMenuUp_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OnClickQuitToDesktop
struct UInGameMenuBP_C_OnClickQuitToDesktop_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuClick
struct UInGameMenuBP_C_EventMenuClick_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuBack
struct UInGameMenuBP_C_EventMenuBack_Params
{
	bool*                                              bIsEscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.Construct
struct UInGameMenuBP_C_Construct_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventHideMuteMenu
struct UInGameMenuBP_C_EventHideMuteMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventShowMuteMenu
struct UInGameMenuBP_C_EventShowMuteMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventInputSourceChanged
struct UInGameMenuBP_C_EventInputSourceChanged_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.Destruct
struct UInGameMenuBP_C_Destruct_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuRight
struct UInGameMenuBP_C_EventMenuRight_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuLeft
struct UInGameMenuBP_C_EventMenuLeft_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventIsPrivateMatchOwner
struct UInGameMenuBP_C_EventIsPrivateMatchOwner_Params
{
	struct FString*                                    password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.Show Gamepad Stuff
struct UInGameMenuBP_C_Show_Gamepad_Stuff_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.Hide Gamepad Stuff
struct UInGameMenuBP_C_Hide_Gamepad_Stuff_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__CopyPassButton_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__CopyPassButton_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ShowButton_K2Node_ComponentBoundEvent_546_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ShowButton_K2Node_ComponentBoundEvent_546_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.OpenMenuForPassword
struct UInGameMenuBP_C_OpenMenuForPassword_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.test
struct UInGameMenuBP_C_test_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventGameStartsNow
struct UInGameMenuBP_C_EventGameStartsNow_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.ToggleInGameMenu
struct UInGameMenuBP_C_ToggleInGameMenu_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventMenuYPressed
struct UInGameMenuBP_C_EventMenuYPressed_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.ToggleShowPassword
struct UInGameMenuBP_C_ToggleShowPassword_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.EventToggleMuteAll
struct UInGameMenuBP_C_EventToggleMuteAll_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InGameMenuBP.InGameMenuBP_C.EventGameHasStarted
struct UInGameMenuBP_C_EventGameHasStarted_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_468_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_468_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_478_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_478_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_528_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_528_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.ExecuteUbergraph_InGameMenuBP
struct UInGameMenuBP_C_ExecuteUbergraph_InGameMenuBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
