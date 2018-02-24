// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_OptionsMenuwidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsMenuwidget.OptionsMenuwidget_C.ShowOnlyThisScrollbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::ShowOnlyThisScrollbox(class UWidget* ScrollBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ShowOnlyThisScrollbox");

	UOptionsMenuwidget_C_ShowOnlyThisScrollbox_Params params;
	params.ScrollBox = ScrollBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.RefreshCategoryGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::RefreshCategoryGamepadFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.RefreshCategoryGamepadFocus");

	UOptionsMenuwidget_C_RefreshCategoryGamepadFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SetOptionMenuGamepadActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::SetOptionMenuGamepadActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SetOptionMenuGamepadActive");

	UOptionsMenuwidget_C_SetOptionMenuGamepadActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.PageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::PageNavigation(int side)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.PageNavigation");

	UOptionsMenuwidget_C_PageNavigation_Params params;
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.InputStyleChangedCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::InputStyleChangedCallback(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.InputStyleChangedCallback");

	UOptionsMenuwidget_C_InputStyleChangedCallback_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.MakeInteractiveWidgetList
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::MakeInteractiveWidgetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.MakeInteractiveWidgetList");

	UOptionsMenuwidget_C_MakeInteractiveWidgetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.StickInputValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USlider*                 Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Exp                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SomethingChanged               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::StickInputValue(float DeltaTime, class USlider* Slider, float Speed, float Exp, bool* SomethingChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.StickInputValue");

	UOptionsMenuwidget_C_StickInputValue_Params params;
	params.DeltaTime = DeltaTime;
	params.Slider = Slider;
	params.Speed = Speed;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SomethingChanged != nullptr)
		*SomethingChanged = params.SomethingChanged;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.GetInteractiveWidgetList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         InteractiveWidgets             (Parm, OutParm, ZeroConstructor)

void UOptionsMenuwidget_C::GetInteractiveWidgetList(class UPanelWidget* Panel, TArray<class UWidget*>* InteractiveWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.GetInteractiveWidgetList");

	UOptionsMenuwidget_C_GetInteractiveWidgetList_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InteractiveWidgets != nullptr)
		*InteractiveWidgets = params.InteractiveWidgets;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SetupVisibilityByPlatform
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SetupVisibilityByPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SetupVisibilityByPlatform");

	UOptionsMenuwidget_C_SetupVisibilityByPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_VSync
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveVideoSetting_VSync()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_VSync");

	UOptionsMenuwidget_C_SaveVideoSetting_VSync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_Gamma
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveVideoSetting_Gamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_Gamma");

	UOptionsMenuwidget_C_SaveVideoSetting_Gamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_FPS
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveVideoSetting_FPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSetting_FPS");

	UOptionsMenuwidget_C_SaveVideoSetting_FPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnControlRebindPopupOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnControlRebindPopupOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnControlRebindPopupOpened");

	UOptionsMenuwidget_C_OnControlRebindPopupOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetIsRebindingInput
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::ResetIsRebindingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ResetIsRebindingInput");

	UOptionsMenuwidget_C_ResetIsRebindingInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnControlRebindPopupClosed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnControlRebindPopupClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnControlRebindPopupClosed");

	UOptionsMenuwidget_C_OnControlRebindPopupClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.InitControlRebindButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::InitControlRebindButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.InitControlRebindButtons");

	UOptionsMenuwidget_C_InitControlRebindButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EnableAllButtonCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::EnableAllButtonCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EnableAllButtonCategories");

	UOptionsMenuwidget_C_EnableAllButtonCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OpenOptionsMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OpenOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OpenOptionsMenu");

	UOptionsMenuwidget_C_OpenOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.InitParents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInGameMenuBP_C*         InGameMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMainMenu_C*             MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::InitParents(class UInGameMenuBP_C* InGameMenu, class UMainMenu_C* MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.InitParents");

	UOptionsMenuwidget_C_InitParents_Params params;
	params.InGameMenu = InGameMenu;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.InitVideoSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            screenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::InitVideoSettings(const struct FString& Resolution, int screenMode, int quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.InitVideoSettings");

	UOptionsMenuwidget_C_InitVideoSettings_Params params;
	params.Resolution = Resolution;
	params.screenMode = screenMode;
	params.quality = quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ApplyVideoSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            screenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::ApplyVideoSettings(const struct FString& Resolution, int screenMode, int quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ApplyVideoSettings");

	UOptionsMenuwidget_C_ApplyVideoSettings_Params params;
	params.Resolution = Resolution;
	params.screenMode = screenMode;
	params.quality = quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.InitVideoSettingsFromSaveGame
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::InitVideoSettingsFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.InitVideoSettingsFromSaveGame");

	UOptionsMenuwidget_C_InitVideoSettingsFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.InitOptionsFromSaveGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::InitOptionsFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.InitOptionsFromSaveGame");

	UOptionsMenuwidget_C_InitOptionsFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveKeyboardSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveKeyboardSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveKeyboardSettings");

	UOptionsMenuwidget_C_SaveKeyboardSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveInputSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveInputSettings");

	UOptionsMenuwidget_C_SaveInputSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveSoundSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveSoundSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveSoundSettings");

	UOptionsMenuwidget_C_SaveSoundSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveVideoSettings");

	UOptionsMenuwidget_C_SaveVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveGamepadSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveGamepadSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveGamepadSettings");

	UOptionsMenuwidget_C_SaveGamepadSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.SaveAllSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::SaveAllSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.SaveAllSettings");

	UOptionsMenuwidget_C_SaveAllSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateSliderAndTextState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                 Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::UpdateSliderAndTextState(class USlider* Slider, class UTextBlock* TextBlock, bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateSliderAndTextState");

	UOptionsMenuwidget_C_UpdateSliderAndTextState_Params params;
	params.Slider = Slider;
	params.TextBlock = TextBlock;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetComboBoxOpening
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::ResetComboBoxOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ResetComboBoxOpening");

	UOptionsMenuwidget_C_ResetComboBoxOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetOptionsState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::ResetOptionsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ResetOptionsState");

	UOptionsMenuwidget_C_ResetOptionsState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateWidgetFocusState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 LineWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 SelectionWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FocusForced                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFocus                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::UpdateWidgetFocusState(class UWidget* LineWidget, class UWidget* SelectionWidget, bool FocusForced, bool* bFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateWidgetFocusState");

	UOptionsMenuwidget_C_UpdateWidgetFocusState_Params params;
	params.LineWidget = LineWidget;
	params.SelectionWidget = SelectionWidget;
	params.FocusForced = FocusForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFocus != nullptr)
		*bFocus = params.bFocus;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.IsFocused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFocused                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::IsFocused(class UWidget* Widget, bool* IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.IsFocused");

	UOptionsMenuwidget_C_IsFocused_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFocused != nullptr)
		*IsFocused = params.IsFocused;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::UpdateGamepadFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.UpdateGamepadFocus");

	UOptionsMenuwidget_C_UpdateGamepadFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Enable buttons
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::Enable_buttons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Enable buttons");

	UOptionsMenuwidget_C_Enable_buttons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Get_FPSLIMIT_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UOptionsMenuwidget_C::Get_FPSLIMIT_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Get_FPSLIMIT_Visibility_1");

	UOptionsMenuwidget_C_Get_FPSLIMIT_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Get_Slider_FrameRate_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOptionsMenuwidget_C::Get_Slider_FrameRate_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Get_Slider_FrameRate_bIsEnabled_1");

	UOptionsMenuwidget_C_Get_Slider_FrameRate_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Get_ComboBoxString_Resoltion_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOptionsMenuwidget_C::Get_ComboBoxString_Resoltion_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Get_ComboBoxString_Resoltion_bIsEnabled_1");

	UOptionsMenuwidget_C_Get_ComboBoxString_Resoltion_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_70_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_70_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_70_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_70_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_91_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_91_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_91_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_91_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_138_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_138_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_138_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_138_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_237_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_237_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_237_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_237_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Construct");

	UOptionsMenuwidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventOnMenuSettingsChange
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Resolution                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           screenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::EventOnMenuSettingsChange(struct FString* Resolution, int* screenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventOnMenuSettingsChange");

	UOptionsMenuwidget_C_EventOnMenuSettingsChange_Params params;
	params.Resolution = Resolution;
	params.screenMode = screenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Tick");

	UOptionsMenuwidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_257_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_257_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_257_OnSelectionChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_257_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_379_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_379_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_379_OnSelectionChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_379_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_306_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_306_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_306_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Inmate_K2Node_ComponentBoundEvent_306_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Sound_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Sound_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_controls_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_controls_K2Node_ComponentBoundEvent_488_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_402_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_402_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_402_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_402_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetCategory
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::ResetCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ResetCategory");

	UOptionsMenuwidget_C_ResetCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_548_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.MenuBackPressed
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::MenuBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.MenuBackPressed");

	UOptionsMenuwidget_C_MenuBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_1649_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_1649_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_1649_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_1649_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_1666_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_1666_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_1666_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_1666_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_1726_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_1726_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_1726_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_1726_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_1785_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_1785_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_1785_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_1785_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_1845_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_1845_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_1845_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_1845_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_348_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_348_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_348_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_348_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuBack");

	UOptionsMenuwidget_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuLeftPagePressed
// (Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::EventMenuLeftPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuLeftPagePressed");

	UOptionsMenuwidget_C_EventMenuLeftPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuRightPagePressed
// (Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::EventMenuRightPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuRightPagePressed");

	UOptionsMenuwidget_C_EventMenuRightPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickVideo
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickVideo");

	UOptionsMenuwidget_C_OnClickVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickSound
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickSound");

	UOptionsMenuwidget_C_OnClickSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickControls
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickControls");

	UOptionsMenuwidget_C_OnClickControls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGamepad
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGamepad");

	UOptionsMenuwidget_C_OnClickGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.RevertVideoSettings
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::RevertVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.RevertVideoSettings");

	UOptionsMenuwidget_C_RevertVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_892_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_892_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_892_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_892_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_70_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_70_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ResetToDefaultSettings
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::ResetToDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ResetToDefaultSettings");

	UOptionsMenuwidget_C_ResetToDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuXPressed");

	UOptionsMenuwidget_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuYPressed
// (Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::EventMenuYPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuYPressed");

	UOptionsMenuwidget_C_EventMenuYPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickResetToDefault
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickResetToDefault");

	UOptionsMenuwidget_C_OnClickResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickNo
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickNo");

	UOptionsMenuwidget_C_OnClickNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickYes
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickYes");

	UOptionsMenuwidget_C_OnClickYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventMenuClick");

	UOptionsMenuwidget_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_2142_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_VSync_K2Node_ComponentBoundEvent_2142_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_2142_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_VSync_K2Node_ComponentBoundEvent_2142_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_3699_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_3699_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_3699_OnOpeningEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxString_Resoltion_K2Node_ComponentBoundEvent_3699_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_4053_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_4053_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_4053_OnOpeningEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxString_Windowed_K2Node_ComponentBoundEvent_4053_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UOptionsMenuwidget_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventInputSourceChanged");

	UOptionsMenuwidget_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5409_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5409_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5409_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5409_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5416_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5416_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5416_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5416_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5467_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5467_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5467_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_5467_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_117_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_117_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_117_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamma_K2Node_ComponentBoundEvent_117_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6594_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6594_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6594_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6594_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6653_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6653_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6653_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6653_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6710_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6710_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6710_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6710_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6765_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6765_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6765_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_FrameRate_K2Node_ComponentBoundEvent_6765_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Mouse_InvertAxis_K2Node_ComponentBoundEvent_483_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Mouse_InvertAxis_K2Node_ComponentBoundEvent_483_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Mouse_InvertAxis_K2Node_ComponentBoundEvent_483_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Mouse_InvertAxis_K2Node_ComponentBoundEvent_483_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_819_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_819_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_819_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_819_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_829_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_829_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_829_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_829_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_889_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_889_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_889_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_889_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_948_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_948_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_948_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_GameVolume_K2Node_ComponentBoundEvent_948_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1288_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1288_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1288_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1288_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1354_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1354_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1354_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1354_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1418_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1418_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1418_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1418_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1480_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1480_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1480_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_MouseSensitivity_K2Node_ComponentBoundEvent_1480_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1668_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1668_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1668_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1668_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1741_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1741_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1741_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1741_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1810_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1810_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1810_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1810_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1877_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1877_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1877_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_1877_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2582_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2582_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2582_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2582_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2656_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2656_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2656_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2656_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2728_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2728_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2728_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2728_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2798_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2798_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2798_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Vertical_Sensitivity_K2Node_ComponentBoundEvent_2798_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3002_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3002_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3002_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3002_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3080_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3080_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3080_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3080_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3156_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3156_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3156_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3156_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3230_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3230_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3230_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_Horizontal_Sensitivity_K2Node_ComponentBoundEvent_3230_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3302_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3302_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3302_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3302_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3384_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3384_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3384_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3384_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3464_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3464_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3464_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3464_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3542_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3542_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3542_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_Gamepad_Aiming_vertical_Sensitivity_K2Node_ComponentBoundEvent_3542_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3618_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3618_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3618_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3618_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3704_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3704_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3704_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3704_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3788_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3788_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3788_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3788_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3870_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3870_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3870_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimSmoothing_K2Node_ComponentBoundEvent_3870_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_3950_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_3950_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_3950_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_3950_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4040_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4040_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4040_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4040_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4129_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4129_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4129_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4129_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4216_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4216_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4216_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_DeadZone_K2Node_ComponentBoundEvent_4216_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4300_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4300_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4300_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4300_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4394_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4394_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4394_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4394_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4486_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4486_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4486_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4486_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4576_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4576_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4576_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimEaseIn_K2Node_ComponentBoundEvent_4576_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4664_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4664_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4664_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4664_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4762_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4762_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4762_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4762_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4858_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4858_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4858_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4858_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4952_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4952_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4952_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistMagnetStrength_K2Node_ComponentBoundEvent_4952_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5044_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5044_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5044_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5044_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5146_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5146_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5146_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5146_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5246_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5246_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5246_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5246_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5344_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5344_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5344_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistSlowDownStrength_K2Node_ComponentBoundEvent_5344_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5442_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5442_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5442_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5442_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5549_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5549_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5549_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5549_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5653_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5653_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5653_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5653_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5755_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5755_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5755_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_AimAssistWindowSize_K2Node_ComponentBoundEvent_5755_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_InvertGamepadVerticalAxis_K2Node_ComponentBoundEvent_40881_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_InvertGamepadVerticalAxis_K2Node_ComponentBoundEvent_40881_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_InvertGamepadVerticalAxis_K2Node_ComponentBoundEvent_40881_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_InvertGamepadVerticalAxis_K2Node_ComponentBoundEvent_40881_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_GamepadVibration_K2Node_ComponentBoundEvent_42758_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_GamepadVibration_K2Node_ComponentBoundEvent_42758_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_GamepadVibration_K2Node_ComponentBoundEvent_42758_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_GamepadVibration_K2Node_ComponentBoundEvent_42758_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_69_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_69_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_69_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickApply
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickApply");

	UOptionsMenuwidget_C_OnClickApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_HarvestOnMeleeAttack_K2Node_ComponentBoundEvent_1636_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_HarvestOnMeleeAttack_K2Node_ComponentBoundEvent_1636_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_HarvestOnMeleeAttack_K2Node_ComponentBoundEvent_1636_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_HarvestOnMeleeAttack_K2Node_ComponentBoundEvent_1636_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_controls_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_controls_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_controls_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_controls_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_controls_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Gamepad_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Video_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Video_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Video_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Video_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Sound_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Sound_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Sound_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Sound_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Sound_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ClueLookatCamButton_K2Node_ComponentBoundEvent_835_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__ClueLookatCamButton_K2Node_ComponentBoundEvent_835_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ClueLookatCamButton_K2Node_ComponentBoundEvent_835_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ClueLookatCamButton_K2Node_ComponentBoundEvent_835_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_647_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_647_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_647_OnMouseCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_647_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_660_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_660_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_660_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_660_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_770_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_770_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_770_OnControllerCaptureBeginEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_770_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_881_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_881_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_881_OnControllerCaptureEndEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_881_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_990_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_990_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_990_OnFloatValueChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Slider_VoiceChat_K2Node_ComponentBoundEvent_990_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnGammaSettingFocus
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnGammaSettingFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnGammaSettingFocus");

	UOptionsMenuwidget_C_OnGammaSettingFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.GammaChanged
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::GammaChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.GammaChanged");

	UOptionsMenuwidget_C_GammaChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OpenOptionMenuGamepad
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OpenOptionMenuGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OpenOptionMenuGamepad");

	UOptionsMenuwidget_C_OpenOptionMenuGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_13_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_13_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_13_OnOpeningEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_13_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGameplay
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGameplay");

	UOptionsMenuwidget_C_OnClickGameplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGamepadOptions
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnClickGamepadOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnClickGamepadOptions");

	UOptionsMenuwidget_C_OnClickGamepadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_4350_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_4350_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_4350_OnButtonClickedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_4350_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5473_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5473_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5473_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5473_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5595_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5595_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5595_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_Gameplay_K2Node_ComponentBoundEvent_5595_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_5947_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_5947_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_5947_OnButtonHoverEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__Button_ControllerOptions_K2Node_ComponentBoundEvent_5947_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.OnGammaSettingUnfocus
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::OnGammaSettingUnfocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.OnGammaSettingUnfocus");

	UOptionsMenuwidget_C_OnGammaSettingUnfocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1515_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1515_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1515_OnOpeningEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1515_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_814_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_814_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_814_OnSelectionChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxText_Windowed_K2Node_ComponentBoundEvent_814_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1508_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1508_OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1508_OnSelectionChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__ComboBoxTextGraphics_K2Node_ComponentBoundEvent_1508_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Show Gamepad Stuff
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::Show_Gamepad_Stuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Show Gamepad Stuff");

	UOptionsMenuwidget_C_Show_Gamepad_Stuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.Hide Gamepad Stuff
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuwidget_C::Hide_Gamepad_Stuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.Hide Gamepad Stuff");

	UOptionsMenuwidget_C_Hide_Gamepad_Stuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventNewVivoxAudioInputDevices
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                audioDevName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOptionsMenuwidget_C::EventNewVivoxAudioInputDevices(struct FString* audioDevName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventNewVivoxAudioInputDevices");

	UOptionsMenuwidget_C_EventNewVivoxAudioInputDevices_Params params;
	params.audioDevName = audioDevName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventNewVivoxAudioOutputDevices
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                audioDevName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOptionsMenuwidget_C::EventNewVivoxAudioOutputDevices(struct FString* audioDevName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventNewVivoxAudioOutputDevices");

	UOptionsMenuwidget_C_EventNewVivoxAudioOutputDevices_Params params;
	params.audioDevName = audioDevName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventUpdateActiveVivoxAudioInputDevice
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                audioDevName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOptionsMenuwidget_C::EventUpdateActiveVivoxAudioInputDevice(struct FString* audioDevName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventUpdateActiveVivoxAudioInputDevice");

	UOptionsMenuwidget_C_EventUpdateActiveVivoxAudioInputDevice_Params params;
	params.audioDevName = audioDevName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.EventUpdateActiveVivoxAudioOuputDevice
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                audioDevName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UOptionsMenuwidget_C::EventUpdateActiveVivoxAudioOuputDevice(struct FString* audioDevName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.EventUpdateActiveVivoxAudioOuputDevice");

	UOptionsMenuwidget_C_EventUpdateActiveVivoxAudioOuputDevice_Params params;
	params.audioDevName = audioDevName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_238_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_238_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_238_OnSelectionChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_238_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_478_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_478_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_478_OnSelectionChangedEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_478_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1556_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1556_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1556_OnOpeningEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1556_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1911_OnClosingEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1911_OnClosingEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1911_OnClosingEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__VivoxAudioOutputDevicesCombo_K2Node_ComponentBoundEvent_1911_OnClosingEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_11_OnClosingEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuwidget_C::BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_11_OnClosingEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_11_OnClosingEvent__DelegateSignature");

	UOptionsMenuwidget_C_BndEvt__VivoxAudioInputDevicesCombo_K2Node_ComponentBoundEvent_11_OnClosingEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuwidget.OptionsMenuwidget_C.ExecuteUbergraph_OptionsMenuwidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuwidget_C::ExecuteUbergraph_OptionsMenuwidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuwidget.OptionsMenuwidget_C.ExecuteUbergraph_OptionsMenuwidget");

	UOptionsMenuwidget_C_ExecuteUbergraph_OptionsMenuwidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
