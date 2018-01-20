// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftWheelCustomization_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SetIsEnabledAllWheelElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseQuadrantException           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuadrantException              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::SetIsEnabledAllWheelElements(bool IsEnabled, bool UseQuadrantException, int QuadrantException)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SetIsEnabledAllWheelElements");

	UDarwinCraftWheelCustomization_C_SetIsEnabledAllWheelElements_Params params;
	params.IsEnabled = IsEnabled;
	params.UseQuadrantException = UseQuadrantException;
	params.QuadrantException = QuadrantException;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SetIsSelectingItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSelectItem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::SetIsSelectingItem(bool ShouldSelectItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SetIsSelectingItem");

	UDarwinCraftWheelCustomization_C_SetIsSelectingItem_Params params;
	params.ShouldSelectItem = ShouldSelectItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetMaximumRow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColumnIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::GetMaximumRow(int ColumnIndex, int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetMaximumRow");

	UDarwinCraftWheelCustomization_C_GetMaximumRow_Params params;
	params.ColumnIndex = ColumnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetMaximumColumn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::GetMaximumColumn(int RowIndex, int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetMaximumColumn");

	UDarwinCraftWheelCustomization_C_GetMaximumColumn_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.UnHoverItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Column                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::UnHoverItem(int Column, int Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.UnHoverItem");

	UDarwinCraftWheelCustomization_C_UnHoverItem_Params params;
	params.Column = Column;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.CanSelectItemGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanSelectItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::CanSelectItemGamepad(bool* CanSelectItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.CanSelectItemGamepad");

	UDarwinCraftWheelCustomization_C_CanSelectItemGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSelectItem != nullptr)
		*CanSelectItem = params.CanSelectItem;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColumnNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RowNumber                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCraftWheelAvailableItem_C* OutItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::GetItem(int ColumnNumber, int RowNumber, class UCraftWheelAvailableItem_C** OutItem, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetItem");

	UDarwinCraftWheelCustomization_C_GetItem_Params params;
	params.ColumnNumber = ColumnNumber;
	params.RowNumber = RowNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SelectItemForReplacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewColumn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewRow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::SelectItemForReplacement(int NewColumn, int NewRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SelectItemForReplacement");

	UDarwinCraftWheelCustomization_C_SelectItemForReplacement_Params params;
	params.NewColumn = NewColumn;
	params.NewRow = NewRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.PlayUnselectedOnAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            Exception                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::PlayUnselectedOnAll(EDarwinItemTypeEnum Exception)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.PlayUnselectedOnAll");

	UDarwinCraftWheelCustomization_C_PlayUnselectedOnAll_Params params;
	params.Exception = Exception;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.PlaySwapedCurrentSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::PlaySwapedCurrentSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.PlaySwapedCurrentSelected");

	UDarwinCraftWheelCustomization_C_PlaySwapedCurrentSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ResetCurrentSelectedIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::ResetCurrentSelectedIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ResetCurrentSelectedIcon");

	UDarwinCraftWheelCustomization_C_ResetCurrentSelectedIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.HideAvailableTextInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::HideAvailableTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.HideAvailableTextInfo");

	UDarwinCraftWheelCustomization_C_HideAvailableTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowAvailableTextInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            Item_type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::ShowAvailableTextInfo(EDarwinItemTypeEnum Item_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowAvailableTextInfo");

	UDarwinCraftWheelCustomization_C_ShowAvailableTextInfo_Params params;
	params.Item_type = Item_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Clear Available UGrid
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::Clear_Available_UGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Clear Available UGrid");

	UDarwinCraftWheelCustomization_C_Clear_Available_UGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.HideTextInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::HideTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.HideTextInfo");

	UDarwinCraftWheelCustomization_C_HideTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowTextInfoOfType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::ShowTextInfoOfType(EDarwinItemTypeEnum Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowTextInfoOfType");

	UDarwinCraftWheelCustomization_C_ShowTextInfoOfType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.InitializeArrays
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::InitializeArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.InitializeArrays");

	UDarwinCraftWheelCustomization_C_InitializeArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Construct");

	UDarwinCraftWheelCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventHoveredQuadrant
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::EventHoveredQuadrant(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventHoveredQuadrant");

	UDarwinCraftWheelCustomization_C_EventHoveredQuadrant_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventUnHoveredQuadrant
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::EventUnHoveredQuadrant(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventUnHoveredQuadrant");

	UDarwinCraftWheelCustomization_C_EventUnHoveredQuadrant_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventUpdateMouseAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::EventUpdateMouseAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventUpdateMouseAngle");

	UDarwinCraftWheelCustomization_C_EventUpdateMouseAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventCraftWheelOpen");

	UDarwinCraftWheelCustomization_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventCraftWheelClose");

	UDarwinCraftWheelCustomization_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGameStartsNow");

	UDarwinCraftWheelCustomization_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGameHasStarted");

	UDarwinCraftWheelCustomization_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGamepadInventoryPressed
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventGamepadInventoryPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGamepadInventoryPressed");

	UDarwinCraftWheelCustomization_C_EventGamepadInventoryPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGamepadInventoryReleased
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventGamepadInventoryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGamepadInventoryReleased");

	UDarwinCraftWheelCustomization_C_EventGamepadInventoryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ReHoverQuadrant
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuadrantToHover                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::ReHoverQuadrant(int QuadrantToHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ReHoverQuadrant");

	UDarwinCraftWheelCustomization_C_ReHoverQuadrant_Params params;
	params.QuadrantToHover = QuadrantToHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventPressedQuadrant
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::EventPressedQuadrant(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventPressedQuadrant");

	UDarwinCraftWheelCustomization_C_EventPressedQuadrant_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Tick");

	UDarwinCraftWheelCustomization_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Show cw
// (BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::Show_cw()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Show cw");

	UDarwinCraftWheelCustomization_C_Show_cw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Hide CW
// (BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::Hide_CW()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Hide CW");

	UDarwinCraftWheelCustomization_C_Hide_CW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Init Parents in craft wheel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_C*             Main_Menu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMainMenuAlpha_C*        Main_Menu_Alpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::Init_Parents_in_craft_wheel(class UMainMenu_C* Main_Menu, class UMainMenuAlpha_C* Main_Menu_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Init Parents in craft wheel");

	UDarwinCraftWheelCustomization_C_Init_Parents_in_craft_wheel_Params params;
	params.Main_Menu = Main_Menu;
	params.Main_Menu_Alpha = Main_Menu_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDarwinCraftWheelCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UDarwinCraftWheelCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDarwinCraftWheelCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UDarwinCraftWheelCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDarwinCraftWheelCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	UDarwinCraftWheelCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Show Back Button in CW custo
// (BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::Show_Back_Button_in_CW_custo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Show Back Button in CW custo");

	UDarwinCraftWheelCustomization_C_Show_Back_Button_in_CW_custo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuRight
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuRight");

	UDarwinCraftWheelCustomization_C_EventMenuRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuLeft
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuLeft");

	UDarwinCraftWheelCustomization_C_EventMenuLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuDown");

	UDarwinCraftWheelCustomization_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuUp");

	UDarwinCraftWheelCustomization_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuClick");

	UDarwinCraftWheelCustomization_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuBack
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuBack");

	UDarwinCraftWheelCustomization_C_EventMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuUpReleased
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuUpReleased");

	UDarwinCraftWheelCustomization_C_EventMenuUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuDownReleased
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuDownReleased");

	UDarwinCraftWheelCustomization_C_EventMenuDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuLeftReleased
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuLeftReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuLeftReleased");

	UDarwinCraftWheelCustomization_C_EventMenuLeftReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuRightReleased
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventMenuRightReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuRightReleased");

	UDarwinCraftWheelCustomization_C_EventMenuRightReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventInputSourceChanged");

	UDarwinCraftWheelCustomization_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BackButtonSimCWClose
// (BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::BackButtonSimCWClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BackButtonSimCWClose");

	UDarwinCraftWheelCustomization_C_BackButtonSimCWClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ExitWheelCustomization
// (BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::ExitWheelCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ExitWheelCustomization");

	UDarwinCraftWheelCustomization_C_ExitWheelCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowTuto
// (BlueprintCallable, BlueprintEvent)

void UDarwinCraftWheelCustomization_C::ShowTuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowTuto");

	UDarwinCraftWheelCustomization_C_ShowTuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ExecuteUbergraph_DarwinCraftWheelCustomization
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftWheelCustomization_C::ExecuteUbergraph_DarwinCraftWheelCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ExecuteUbergraph_DarwinCraftWheelCustomization");

	UDarwinCraftWheelCustomization_C_ExecuteUbergraph_DarwinCraftWheelCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
