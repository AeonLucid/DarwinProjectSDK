// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HomeMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HomeMenu.HomeMenu_C.OnDevCommunicationReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnDevCommunicationReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnDevCommunicationReceived");

	UHomeMenu_C_OnDevCommunicationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.UpdateMenuInputMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingKeyboard                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::UpdateMenuInputMode(bool* IsUsingKeyboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.UpdateMenuInputMode");

	UHomeMenu_C_UpdateMenuInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUsingKeyboard != nullptr)
		*IsUsingKeyboard = params.IsUsingKeyboard;
}


// Function HomeMenu.HomeMenu_C.AutoReselect
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::AutoReselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.AutoReselect");

	UHomeMenu_C_AutoReselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHomeMenu_Tiles>   SelectedButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::SelectButton(TEnumAsByte<EHomeMenu_Tiles> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.SelectButton");

	UHomeMenu_C_SelectButton_Params params;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.ChangeButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHomeMenu_Tiles>   NewButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::ChangeButtonFocus(TEnumAsByte<EHomeMenu_Tiles> NewButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.ChangeButtonFocus");

	UHomeMenu_C_ChangeButtonFocus_Params params;
	params.NewButton = NewButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.UpdateNavigationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENavigationRequest> Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::UpdateNavigationRequest(TEnumAsByte<ENavigationRequest> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.UpdateNavigationRequest");

	UHomeMenu_C_UpdateNavigationRequest_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.IsButtonVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHomeMenu_Tiles>   Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::IsButtonVisible(TEnumAsByte<EHomeMenu_Tiles> Button, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.IsButtonVisible");

	UHomeMenu_C_IsButtonVisible_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function HomeMenu.HomeMenu_C.New Item Unlock
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::New_Item_Unlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.New Item Unlock");

	UHomeMenu_C_New_Item_Unlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.Fill Main Menu button Array
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::Fill_Main_Menu_button_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.Fill Main Menu button Array");

	UHomeMenu_C_Fill_Main_Menu_button_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.Update number of lootbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::Update_number_of_lootbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.Update number of lootbox");

	UHomeMenu_C_Update_number_of_lootbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_138_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.Tick");

	UHomeMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__ReportBugBtn_K2Node_ComponentBoundEvent_270_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__ConnectRemoteButton_K2Node_ComponentBoundEvent_201_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__GiveFeedbackBtn_K2Node_ComponentBoundEvent_253_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1319_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.DebugReportBug
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::DebugReportBug()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.DebugReportBug");

	UHomeMenu_C_DebugReportBug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.DebugGiveFeedback
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::DebugGiveFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.DebugGiveFeedback");

	UHomeMenu_C_DebugGiveFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3545_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3545_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3545_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3545_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3555_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3555_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3555_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__PlayBtn_K2Node_ComponentBoundEvent_3555_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3593_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3593_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3593_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3593_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3603_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3603_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3603_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__CustomizeBtn_K2Node_ComponentBoundEvent_3603_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Craftwheel_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__CareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__CareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__CareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__CareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__LootBoxBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Standalone_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_1235_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_1235_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_1235_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_1235_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_1409_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_1409_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_1409_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_1409_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventOpenLootBox
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                loot1_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot1_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot1_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                loot2_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot2_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot2_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                loot3_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot3_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot3_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                loot4_id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           loot4_money                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          loot4_is_dup                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::EventOpenLootBox(struct FString* loot1_id, int* loot1_money, bool* loot1_is_dup, struct FString* loot2_id, int* loot2_money, bool* loot2_is_dup, struct FString* loot3_id, int* loot3_money, bool* loot3_is_dup, struct FString* loot4_id, int* loot4_money, bool* loot4_is_dup)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventOpenLootBox");

	UHomeMenu_C_EventOpenLootBox_Params params;
	params.loot1_id = loot1_id;
	params.loot1_money = loot1_money;
	params.loot1_is_dup = loot1_is_dup;
	params.loot2_id = loot2_id;
	params.loot2_money = loot2_money;
	params.loot2_is_dup = loot2_is_dup;
	params.loot3_id = loot3_id;
	params.loot3_money = loot3_money;
	params.loot3_is_dup = loot3_is_dup;
	params.loot4_id = loot4_id;
	params.loot4_money = loot4_money;
	params.loot4_is_dup = loot4_is_dup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventInventoryUpdated
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventInventoryUpdated");

	UHomeMenu_C_EventInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomeMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.Construct");

	UHomeMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2803_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2803_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2803_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2803_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2816_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2816_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2816_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2816_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2856_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2856_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2856_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__OptionsBtn_K2Node_ComponentBoundEvent_2856_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.Init Parent in Home Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_C*             Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::Init_Parent_in_Home_Menu(class UMainMenu_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.Init Parent in Home Menu");

	UHomeMenu_C_Init_Parent_in_Home_Menu_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventMenuDown");

	UHomeMenu_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventMenuUp");

	UHomeMenu_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventMenuLeft
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventMenuLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventMenuLeft");

	UHomeMenu_C_EventMenuLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventMenuRight
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventMenuRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventMenuRight");

	UHomeMenu_C_EventMenuRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredPlayBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredPlayBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredPlayBtn");

	UHomeMenu_C_OnHoveredPlayBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredPlayBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredPlayBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredPlayBtn");

	UHomeMenu_C_OnUnhoveredPlayBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredCustomizatioBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredCustomizatioBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredCustomizatioBtn");

	UHomeMenu_C_OnHoveredCustomizatioBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredCustomizatioBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredCustomizatioBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredCustomizatioBtn");

	UHomeMenu_C_OnUnhoveredCustomizatioBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredCraftWheelBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredCraftWheelBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredCraftWheelBtn");

	UHomeMenu_C_OnHoveredCraftWheelBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredCraftWheelBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredCraftWheelBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredCraftWheelBtn");

	UHomeMenu_C_OnUnhoveredCraftWheelBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredCareerBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredCareerBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredCareerBtn");

	UHomeMenu_C_OnUnhoveredCareerBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredCareerBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredCareerBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredCareerBtn");

	UHomeMenu_C_OnHoveredCareerBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredLootBoxBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredLootBoxBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredLootBoxBtn");

	UHomeMenu_C_OnHoveredLootBoxBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredLootBoxBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredLootBoxBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredLootBoxBtn");

	UHomeMenu_C_OnUnhoveredLootBoxBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredStandaloneBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredStandaloneBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredStandaloneBtn");

	UHomeMenu_C_OnHoveredStandaloneBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredStandaloneBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredStandaloneBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredStandaloneBtn");

	UHomeMenu_C_OnUnhoveredStandaloneBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredOptionsBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredOptionsBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredOptionsBtn");

	UHomeMenu_C_OnHoveredOptionsBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredOptionsBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredOptionsBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredOptionsBtn");

	UHomeMenu_C_OnUnhoveredOptionsBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredQuitBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredQuitBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredQuitBtn");

	UHomeMenu_C_OnUnhoveredQuitBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredQuitBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredQuitBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredQuitBtn");

	UHomeMenu_C_OnHoveredQuitBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickQuitBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickQuitBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickQuitBtn");

	UHomeMenu_C_OnClickQuitBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickOptionsBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickOptionsBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickOptionsBtn");

	UHomeMenu_C_OnClickOptionsBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickStandaloneBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickStandaloneBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickStandaloneBtn");

	UHomeMenu_C_OnClickStandaloneBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClicklLootBoxBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClicklLootBoxBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClicklLootBoxBtn");

	UHomeMenu_C_OnClicklLootBoxBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickCareerBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickCareerBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickCareerBtn");

	UHomeMenu_C_OnClickCareerBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickCraftwheelBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickCraftwheelBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickCraftwheelBtn");

	UHomeMenu_C_OnClickCraftwheelBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickCustomizationBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickCustomizationBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickCustomizationBtn");

	UHomeMenu_C_OnClickCustomizationBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickPlayBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickPlayBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickPlayBtn");

	UHomeMenu_C_OnClickPlayBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickFlibutstierBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickFlibutstierBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickFlibutstierBtn");

	UHomeMenu_C_OnClickFlibutstierBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredFlibutstierBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredFlibutstierBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredFlibutstierBtn");

	UHomeMenu_C_OnHoveredFlibutstierBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredFlibustierBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredFlibustierBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredFlibustierBtn");

	UHomeMenu_C_OnUnhoveredFlibustierBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredAmazonBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredAmazonBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredAmazonBtn");

	UHomeMenu_C_OnHoveredAmazonBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredAmazonBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredAmazonBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredAmazonBtn");

	UHomeMenu_C_OnUnhoveredAmazonBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickAmazonBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickAmazonBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickAmazonBtn");

	UHomeMenu_C_OnClickAmazonBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_4993_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_4993_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_4993_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_4993_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5197_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5197_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5197_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5197_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5245_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5245_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5245_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Amazon_K2Node_ComponentBoundEvent_5245_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5373_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5373_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5373_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5373_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5383_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5383_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5383_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Flibustier_K2Node_ComponentBoundEvent_5383_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventMenuClick");

	UHomeMenu_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventInputSourceChanged");

	UHomeMenu_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.MenuBackPressed
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::MenuBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.MenuBackPressed");

	UHomeMenu_C_MenuBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventMenuBack");

	UHomeMenu_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_514_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_514_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_514_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_514_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_570_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_570_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_570_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_ServerList_K2Node_ComponentBoundEvent_570_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnHoveredServerListBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnHoveredServerListBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnHoveredServerListBtn");

	UHomeMenu_C_OnHoveredServerListBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnUnhoveredServerListBtn
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnUnhoveredServerListBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnUnhoveredServerListBtn");

	UHomeMenu_C_OnUnhoveredServerListBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.DisablePlayButton
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::DisablePlayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.DisablePlayButton");

	UHomeMenu_C_DisablePlayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EnablePlayButton
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::EnablePlayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EnablePlayButton");

	UHomeMenu_C_EnablePlayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.OnClickServerList
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::OnClickServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.OnClickServerList");

	UHomeMenu_C_OnClickServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventDevCommunicationReceived
// (Event, Public, BlueprintEvent)

void UHomeMenu_C::EventDevCommunicationReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventDevCommunicationReceived");

	UHomeMenu_C_EventDevCommunicationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__RedditBtn_K2Node_ComponentBoundEvent_2665_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__RedditBtn_K2Node_ComponentBoundEvent_2665_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__RedditBtn_K2Node_ComponentBoundEvent_2665_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__RedditBtn_K2Node_ComponentBoundEvent_2665_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__DiscrodBtn_K2Node_ComponentBoundEvent_2682_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__DiscrodBtn_K2Node_ComponentBoundEvent_2682_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__DiscrodBtn_K2Node_ComponentBoundEvent_2682_OnButtonClickedEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__DiscrodBtn_K2Node_ComponentBoundEvent_2682_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.JoinAmazonServer
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::JoinAmazonServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.JoinAmazonServer");

	UHomeMenu_C_JoinAmazonServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2929_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2929_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2929_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2929_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2985_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2985_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2985_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Solo_K2Node_ComponentBoundEvent_2985_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3042_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3042_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3042_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3042_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3103_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3103_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3103_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Duo_K2Node_ComponentBoundEvent_3103_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_SD_K2Node_ComponentBoundEvent_3165_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_SD_K2Node_ComponentBoundEvent_3165_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_SD_K2Node_ComponentBoundEvent_3165_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_SD_K2Node_ComponentBoundEvent_3165_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_SD_K2Node_ComponentBoundEvent_3228_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_SD_K2Node_ComponentBoundEvent_3228_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_SD_K2Node_ComponentBoundEvent_3228_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_SD_K2Node_ComponentBoundEvent_3228_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_CW_K2Node_ComponentBoundEvent_3292_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_CW_K2Node_ComponentBoundEvent_3292_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_CW_K2Node_ComponentBoundEvent_3292_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_CW_K2Node_ComponentBoundEvent_3292_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_CW_K2Node_ComponentBoundEvent_3357_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_CW_K2Node_ComponentBoundEvent_3357_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_CW_K2Node_ComponentBoundEvent_3357_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_CW_K2Node_ComponentBoundEvent_3357_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_3423_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_37_K2Node_ComponentBoundEvent_3423_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_3423_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_37_K2Node_ComponentBoundEvent_3423_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_3490_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_37_K2Node_ComponentBoundEvent_3490_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_3490_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_37_K2Node_ComponentBoundEvent_3490_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Career_K2Node_ComponentBoundEvent_3621_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Career_K2Node_ComponentBoundEvent_3621_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Career_K2Node_ComponentBoundEvent_3621_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Career_K2Node_ComponentBoundEvent_3621_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.BndEvt__Button_Career_K2Node_ComponentBoundEvent_3690_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UHomeMenu_C::BndEvt__Button_Career_K2Node_ComponentBoundEvent_3690_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.BndEvt__Button_Career_K2Node_ComponentBoundEvent_3690_OnButtonHoverEvent__DelegateSignature");

	UHomeMenu_C_BndEvt__Button_Career_K2Node_ComponentBoundEvent_3690_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.EventPlayerProfileStatsReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinCareerStats*     stats                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDarwinProfile*         Profile                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHomeMenu_C::EventPlayerProfileStatsReceived(struct FDarwinCareerStats* stats, struct FDarwinProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.EventPlayerProfileStatsReceived");

	UHomeMenu_C_EventPlayerProfileStatsReceived_Params params;
	params.stats = stats;
	params.Profile = Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HomeMenu.HomeMenu_C.ExecuteUbergraph_HomeMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHomeMenu_C::ExecuteUbergraph_HomeMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HomeMenu.HomeMenu_C.ExecuteUbergraph_HomeMenu");

	UHomeMenu_C_ExecuteUbergraph_HomeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
