#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InGameMenuBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

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
};

// Function InGameMenuBP.InGameMenuBP_C.Construct
struct UInGameMenuBP_C_Construct_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UInGameMenuBP_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
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

// Function InGameMenuBP.InGameMenuBP_C.ExecuteUbergraph_InGameMenuBP
struct UInGameMenuBP_C_ExecuteUbergraph_InGameMenuBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
