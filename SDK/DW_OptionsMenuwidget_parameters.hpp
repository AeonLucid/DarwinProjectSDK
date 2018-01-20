#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_OptionsMenuwidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_VSync
struct UOptionsMenuwidget_C_SaveVideoSetting_VSync_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_Gamma
struct UOptionsMenuwidget_C_SaveVideoSetting_Gamma_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_FPS
struct UOptionsMenuwidget_C_SaveVideoSetting_FPS_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnControlRebindPopupOpened
struct UOptionsMenuwidget_C_OnControlRebindPopupOpened_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetIsRebindingInput
struct UOptionsMenuwidget_C_ResetIsRebindingInput_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnControlRebindPopupClosed
struct UOptionsMenuwidget_C_OnControlRebindPopupClosed_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.InitControlRebindButtons
struct UOptionsMenuwidget_C_InitControlRebindButtons_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EnableAllButtonCategories
struct UOptionsMenuwidget_C_EnableAllButtonCategories_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OpenOptionsMenu
struct UOptionsMenuwidget_C_OpenOptionsMenu_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.InitParents
struct UOptionsMenuwidget_C_InitParents_Params
{
	class UInGameMenuBP_C*                             InGameMenu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMainMenu_C*                                 MainMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.InitVideoSettings
struct UOptionsMenuwidget_C_InitVideoSettings_Params
{
	struct FString                                     Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                screenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ApplyVideoSettings
struct UOptionsMenuwidget_C_ApplyVideoSettings_Params
{
	struct FString                                     Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                screenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.InitVideoSettingsFromSaveGame
struct UOptionsMenuwidget_C_InitVideoSettingsFromSaveGame_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.InitOptionsFromSaveGame
struct UOptionsMenuwidget_C_InitOptionsFromSaveGame_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveKeyboardSettings
struct UOptionsMenuwidget_C_SaveKeyboardSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveInputSettings
struct UOptionsMenuwidget_C_SaveInputSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveSoundSettings
struct UOptionsMenuwidget_C_SaveSoundSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSettings
struct UOptionsMenuwidget_C_SaveVideoSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveGamepadSettings
struct UOptionsMenuwidget_C_SaveGamepadSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveAllSettings
struct UOptionsMenuwidget_C_SaveAllSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateSliderAndTextState
struct UOptionsMenuwidget_C_UpdateSliderAndTextState_Params
{
	class USlider*                                     Slider;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetComboBoxOpening
struct UOptionsMenuwidget_C_ResetComboBoxOpening_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetOptionsState
struct UOptionsMenuwidget_C_ResetOptionsState_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateWidgetFocusState
struct UOptionsMenuwidget_C_UpdateWidgetFocusState_Params
{
	class UWidget*                                     LineWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     SelectionWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FocusForced;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.IsFocused
struct UOptionsMenuwidget_C_IsFocused_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocused;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateGamepadFocus
struct UOptionsMenuwidget_C_UpdateGamepadFocus_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.Enable buttons
struct UOptionsMenuwidget_C_Enable_buttons_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.Get_FPSLIMIT_Visibility_1
struct UOptionsMenuwidget_C_Get_FPSLIMIT_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.Get_Slider_FrameRate_bIsEnabled_1
struct UOptionsMenuwidget_C_Get_Slider_FrameRate_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.Get_ComboBoxString_Resoltion_bIsEnabled_1
struct UOptionsMenuwidget_C_Get_ComboBoxString_Resoltion_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_70_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_70_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_91_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_91_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_138_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_138_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_237_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_237_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.Construct
struct UOptionsMenuwidget_C_Construct_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventOnMenuSettingsChange
struct UOptionsMenuwidget_C_EventOnMenuSettingsChange_Params
{
	struct FString*                                    Resolution;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               screenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.Tick
struct UOptionsMenuwidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_257_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_257_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_379_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_379_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_306_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_306_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Sound_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_controls_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_402_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_402_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetCategory
struct UOptionsMenuwidget_C_ResetCategory_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.MenuBackPressed
struct UOptionsMenuwidget_C_MenuBackPressed_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_1649_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_1649_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_1666_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_1666_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_1726_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_1726_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_1785_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_1785_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_1845_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_1845_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_348_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_348_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuBack
struct UOptionsMenuwidget_C_EventMenuBack_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuLeftPagePressed
struct UOptionsMenuwidget_C_EventMenuLeftPagePressed_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuRightPagePressed
struct UOptionsMenuwidget_C_EventMenuRightPagePressed_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickVideo
struct UOptionsMenuwidget_C_OnClickVideo_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickSound
struct UOptionsMenuwidget_C_OnClickSound_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickControls
struct UOptionsMenuwidget_C_OnClickControls_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGamepad
struct UOptionsMenuwidget_C_OnClickGamepad_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.RevertVideoSettings
struct UOptionsMenuwidget_C_RevertVideoSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_892_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_892_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_70_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetToDefaultSettings
struct UOptionsMenuwidget_C_ResetToDefaultSettings_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuXPressed
struct UOptionsMenuwidget_C_EventMenuXPressed_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuYPressed
struct UOptionsMenuwidget_C_EventMenuYPressed_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickResetToDefault
struct UOptionsMenuwidget_C_OnClickResetToDefault_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickNo
struct UOptionsMenuwidget_C_OnClickNo_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickYes
struct UOptionsMenuwidget_C_OnClickYes_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuClick
struct UOptionsMenuwidget_C_EventMenuClick_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_2142_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_VSync_K2Node_ComponentBoundEvent_2142_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_3699_OnOpeningEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_3699_OnOpeningEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_4053_OnOpeningEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_4053_OnOpeningEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxStringGraphicsQuality_K2Node_ComponentBoundEvent_4147_OnOpeningEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ComboBoxStringGraphicsQuality_K2Node_ComponentBoundEvent_4147_OnOpeningEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.EventInputSourceChanged
struct UOptionsMenuwidget_C_EventInputSourceChanged_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5409_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5409_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5416_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5416_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5467_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5467_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_117_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_117_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6594_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6594_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6653_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6653_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6710_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6710_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6765_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6765_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Mouse_InvertAxis_K2Node_ComponentBoundEvent_483_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Mouse_InvertAxis_K2Node_ComponentBoundEvent_483_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_819_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_819_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_829_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_829_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_889_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_889_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_948_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_948_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1288_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1288_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1354_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1354_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1418_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1418_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1480_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1480_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1668_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1668_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1741_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1741_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1810_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1810_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1877_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1877_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2582_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2582_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2656_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2656_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2728_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2728_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2798_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2798_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3002_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3002_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3080_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3080_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3156_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3156_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3230_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3230_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3302_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3302_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3384_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3384_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3464_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3464_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3542_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3542_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3618_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3618_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3704_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3704_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3788_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3788_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3870_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3870_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_3950_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_3950_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4040_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4040_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4129_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4129_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4216_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4216_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4300_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4300_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4394_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4394_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4486_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4486_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4576_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4576_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4664_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4664_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4762_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4762_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4858_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4858_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4952_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4952_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5044_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5044_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5146_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5146_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5246_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5246_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5344_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5344_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5442_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5442_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5549_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5549_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5653_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5653_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5755_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5755_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_InvertGamepadVerticalAxis_K2Node_ComponentBoundEvent_40881_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_InvertGamepadVerticalAxis_K2Node_ComponentBoundEvent_40881_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_GamepadVibration_K2Node_ComponentBoundEvent_42758_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_GamepadVibration_K2Node_ComponentBoundEvent_42758_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_69_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickApply
struct UOptionsMenuwidget_C_OnClickApply_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_HarvestOnMeleeAttack_K2Node_ComponentBoundEvent_1636_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_HarvestOnMeleeAttack_K2Node_ComponentBoundEvent_1636_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_controls_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_controls_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Sound_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Button_Sound_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxStringGraphicsQuality_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ComboBoxStringGraphicsQuality_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ClueLookatCamButton_K2Node_ComponentBoundEvent_835_OnButtonClickedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__ClueLookatCamButton_K2Node_ComponentBoundEvent_835_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_647_OnMouseCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_647_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_660_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_660_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_770_OnControllerCaptureBeginEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_770_OnControllerCaptureBeginEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_881_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_881_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_990_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_990_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuwidget.OptionsMenuwidget_C.ExecuteUbergraph_OptionsMenuwidget
struct UOptionsMenuwidget_C_ExecuteUbergraph_OptionsMenuwidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
