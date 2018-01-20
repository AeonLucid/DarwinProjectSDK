// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InGameMenuBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InGameMenuBP.InGameMenuBP_C.IsMenuVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInGameMenuBP_C::IsMenuVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.IsMenuVisible");

	UInGameMenuBP_C_IsMenuVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function InGameMenuBP.InGameMenuBP_C.SelectCurrentButton
// (Public, BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::SelectCurrentButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.SelectCurrentButton");

	UInGameMenuBP_C_SelectCurrentButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.UpdateNavigationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENavigationRequest> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuBP_C::UpdateNavigationRequest(TEnumAsByte<ENavigationRequest> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.UpdateNavigationRequest");

	UInGameMenuBP_C_UpdateNavigationRequest_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.ChangeButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInGameMenu_Tiles> NewButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuBP_C::ChangeButtonFocus(TEnumAsByte<EInGameMenu_Tiles> NewButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.ChangeButtonFocus");

	UInGameMenuBP_C_ChangeButtonFocus_Params params;
	params.NewButton = NewButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.Get_Button_Customize_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UInGameMenuBP_C::Get_Button_Customize_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.Get_Button_Customize_Visibility_1");

	UInGameMenuBP_C_Get_Button_Customize_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonRestart_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonRestart_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonRestart_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonRestart_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.Go back with esc
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::Go_back_with_esc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.Go back with esc");

	UInGameMenuBP_C_Go_back_with_esc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__Button_Customize_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_161_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventCloseCustomization
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::EventCloseCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventCloseCustomization");

	UInGameMenuBP_C_EventCloseCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.Tick");

	UInGameMenuBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_70_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonMainMenu_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__Button_Options_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Options_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__Button_Options_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.Back options pressed
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::Back_options_pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.Back options pressed");

	UInGameMenuBP_C_Back_options_pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnClickMainMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnClickMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnClickMainMenu");

	UInGameMenuBP_C_OnClickMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnHoverMainMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnHoverMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnHoverMainMenu");

	UInGameMenuBP_C_OnHoverMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverMainMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnUnhoverMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnUnhoverMainMenu");

	UInGameMenuBP_C_OnUnhoverMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnClickOptions
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnClickOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnClickOptions");

	UInGameMenuBP_C_OnClickOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnHoverOptions
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnHoverOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnHoverOptions");

	UInGameMenuBP_C_OnHoverOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverOptions
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnUnhoverOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnUnhoverOptions");

	UInGameMenuBP_C_OnUnhoverOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnClickCustomize
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnClickCustomize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnClickCustomize");

	UInGameMenuBP_C_OnClickCustomize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_233_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_233_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_233_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_233_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_243_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__Button_Customize_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_306_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_329_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__Button_Customize_K2Node_ComponentBoundEvent_329_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__Button_Customize_K2Node_ComponentBoundEvent_329_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__Button_Customize_K2Node_ComponentBoundEvent_329_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_364_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_364_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_364_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_364_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_389_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_389_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_389_OnButtonHoverEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_389_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.ExitInGameMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::ExitInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.ExitInGameMenu");

	UInGameMenuBP_C_ExitInGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventInGameMenuAction
// (Event, Public, BlueprintEvent)

void UInGameMenuBP_C::EventInGameMenuAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventInGameMenuAction");

	UInGameMenuBP_C_EventInGameMenuAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.QuitConfirmed
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::QuitConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.QuitConfirmed");

	UInGameMenuBP_C_QuitConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.QuitCanceled
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::QuitCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.QuitCanceled");

	UInGameMenuBP_C_QuitCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnHoverResume
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnHoverResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnHoverResume");

	UInGameMenuBP_C_OnHoverResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverResume
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnUnhoverResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnUnhoverResume");

	UInGameMenuBP_C_OnUnhoverResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnHoverCustomize
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnHoverCustomize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnHoverCustomize");

	UInGameMenuBP_C_OnHoverCustomize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverCustomize
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnUnhoverCustomize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnUnhoverCustomize");

	UInGameMenuBP_C_OnUnhoverCustomize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnHoverQuitDesktop
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnHoverQuitDesktop()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnHoverQuitDesktop");

	UInGameMenuBP_C_OnHoverQuitDesktop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnUnhoverQuitDesktop
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnUnhoverQuitDesktop()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnUnhoverQuitDesktop");

	UInGameMenuBP_C_OnUnhoverQuitDesktop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UInGameMenuBP_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventMenuDown");

	UInGameMenuBP_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UInGameMenuBP_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventMenuUp");

	UInGameMenuBP_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.OnClickQuitToDesktop
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::OnClickQuitToDesktop()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.OnClickQuitToDesktop");

	UInGameMenuBP_C_OnClickQuitToDesktop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UInGameMenuBP_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventMenuClick");

	UInGameMenuBP_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UInGameMenuBP_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventMenuBack");

	UInGameMenuBP_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameMenuBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.Construct");

	UInGameMenuBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonNo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameMenuBP_C::BndEvt__ButtonYes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.BndEvt__ButtonYes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UInGameMenuBP_C_BndEvt__ButtonYes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventHideMuteMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::EventHideMuteMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventHideMuteMenu");

	UInGameMenuBP_C_EventHideMuteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventShowMuteMenu
// (BlueprintCallable, BlueprintEvent)

void UInGameMenuBP_C::EventShowMuteMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventShowMuteMenu");

	UInGameMenuBP_C_EventShowMuteMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UInGameMenuBP_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.EventInputSourceChanged");

	UInGameMenuBP_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameMenuBP_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.Destruct");

	UInGameMenuBP_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameMenuBP.InGameMenuBP_C.ExecuteUbergraph_InGameMenuBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameMenuBP_C::ExecuteUbergraph_InGameMenuBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuBP.InGameMenuBP_C.ExecuteUbergraph_InGameMenuBP");

	UInGameMenuBP_C_ExecuteUbergraph_InGameMenuBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
