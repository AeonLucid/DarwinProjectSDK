// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DressRoomNewWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DressRoomNewWidget.DressRoomNewWidget_C.IsHeadCam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDressRoomNewWidget_C::IsHeadCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.IsHeadCam");

	UDressRoomNewWidget_C_IsHeadCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ChangeSection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChangeDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ChangeSection(int ChangeDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ChangeSection");

	UDressRoomNewWidget_C_ChangeSection_Params params;
	params.ChangeDirection = ChangeDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.SetSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Column                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::SetSelectedItem(int Row, int Column)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.SetSelectedItem");

	UDressRoomNewWidget_C_SetSelectedItem_Params params;
	params.Row = Row;
	params.Column = Column;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GetNumberOfCategories
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumberOfCategories             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::GetNumberOfCategories(int* NumberOfCategories)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GetNumberOfCategories");

	UDressRoomNewWidget_C_GetNumberOfCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfCategories != nullptr)
		*NumberOfCategories = params.NumberOfCategories;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.IsItemVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MaterialVisibility             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MaterialVisibilityForDeveloppers (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           MaterialVisibilityForEnforcers (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::IsItemVisible(bool MaterialVisibility, bool MaterialVisibilityForDeveloppers, bool MaterialVisibilityForEnforcers, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.IsItemVisible");

	UDressRoomNewWidget_C_IsItemVisible_Params params;
	params.MaterialVisibility = MaterialVisibility;
	params.MaterialVisibilityForDeveloppers = MaterialVisibilityForDeveloppers;
	params.MaterialVisibilityForEnforcers = MaterialVisibilityForEnforcers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GetItemFromUniqueId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UnrealUniqueId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UDressRoomNewMaterialWidget_C* OutItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::GetItemFromUniqueId(const struct FString& UnrealUniqueId, class UDressRoomNewMaterialWidget_C** OutItem, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GetItemFromUniqueId");

	UDressRoomNewWidget_C_GetItemFromUniqueId_Params params;
	params.UnrealUniqueId = UnrealUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateSelectionIndexes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UnrealUniqueId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDressRoomNewWidget_C::UpdateSelectionIndexes(const struct FString& UnrealUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateSelectionIndexes");

	UDressRoomNewWidget_C_UpdateSelectionIndexes_Params params;
	params.UnrealUniqueId = UnrealUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.IsDressRoomNavigationAllowed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           YES                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::IsDressRoomNavigationAllowed(bool* YES)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.IsDressRoomNavigationAllowed");

	UDressRoomNewWidget_C_IsDressRoomNavigationAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YES != nullptr)
		*YES = params.YES;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.SelectCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCategory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::SelectCategory(int NewCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.SelectCategory");

	UDressRoomNewWidget_C_SelectCategory_Params params;
	params.NewCategory = NewCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.UnHoverItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColumnIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::UnHoverItem(int RowIndex, int ColumnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.UnHoverItem");

	UDressRoomNewWidget_C_UnHoverItem_Params params;
	params.RowIndex = RowIndex;
	params.ColumnIndex = ColumnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewColumn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewRow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::SelectItem(int NewColumn, int NewRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.SelectItem");

	UDressRoomNewWidget_C_SelectItem_Params params;
	params.NewColumn = NewColumn;
	params.NewRow = NewRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColumnIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDressRoomNewMaterialWidget_C* OutItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::GetItem(int RowIndex, int ColumnIndex, class UDressRoomNewMaterialWidget_C** OutItem, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GetItem");

	UDressRoomNewWidget_C_GetItem_Params params;
	params.RowIndex = RowIndex;
	params.ColumnIndex = ColumnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GetMaximumRow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColumnId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::GetMaximumRow(int ColumnId, int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GetMaximumRow");

	UDressRoomNewWidget_C_GetMaximumRow_Params params;
	params.ColumnId = ColumnId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GetMaximumColumn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::GetMaximumColumn(int RowIndex, int* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GetMaximumColumn");

	UDressRoomNewWidget_C_GetMaximumColumn_Params params;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.SetBodyType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SuitIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::SetBodyType(int SuitIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.SetBodyType");

	UDressRoomNewWidget_C_SetBodyType_Params params;
	params.SuitIndex = SuitIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateNewsItems
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::UpdateNewsItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateNewsItems");

	UDressRoomNewWidget_C_UpdateNewsItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ReloadSavedCustomization
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::ReloadSavedCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ReloadSavedCustomization");

	UDressRoomNewWidget_C_ReloadSavedCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EnableAllButtonCategories
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::EnableAllButtonCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EnableAllButtonCategories");

	UDressRoomNewWidget_C_EnableAllButtonCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EmptyMaterialsScrollBox
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::EmptyMaterialsScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EmptyMaterialsScrollBox");

	UDressRoomNewWidget_C_EmptyMaterialsScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyHelmetToAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ApplyHelmetToAvatar(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyHelmetToAvatar");

	UDressRoomNewWidget_C_ApplyHelmetToAvatar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyHairsToAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ApplyHairsToAvatar(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyHairsToAvatar");

	UDressRoomNewWidget_C_ApplyHairsToAvatar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyEyesToAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ApplyEyesToAvatar(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyEyesToAvatar");

	UDressRoomNewWidget_C_ApplyEyesToAvatar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyBowToAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ApplyBowToAvatar(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyBowToAvatar");

	UDressRoomNewWidget_C_ApplyBowToAvatar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyAxeToAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ApplyAxeToAvatar(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyAxeToAvatar");

	UDressRoomNewWidget_C_ApplyAxeToAvatar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Get_Button_Apply_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDressRoomNewWidget_C::Get_Button_Apply_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Get_Button_Apply_bIsEnabled_1");

	UDressRoomNewWidget_C_Get_Button_Apply_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.AddOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerCustomizationOption     OptionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::AddOption(EPlayerCustomizationOption OptionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.AddOption");

	UDressRoomNewWidget_C_AddOption_Params params;
	params.OptionType = OptionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EmptyUGridPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::EmptyUGridPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EmptyUGridPanel");

	UDressRoomNewWidget_C_EmptyUGridPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplySuitToAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SuitVersionIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ApplySuitToAvatar(int SuitVersionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ApplySuitToAvatar");

	UDressRoomNewWidget_C_ApplySuitToAvatar_Params params;
	params.SuitVersionIndex = SuitVersionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GoToBodyCam
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::GoToBodyCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GoToBodyCam");

	UDressRoomNewWidget_C_GoToBodyCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.GoToHeadCam
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::GoToHeadCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.GoToHeadCam");

	UDressRoomNewWidget_C_GoToHeadCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.DestroyDressRoom
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::DestroyDressRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.DestroyDressRoom");

	UDressRoomNewWidget_C_DestroyDressRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.InitializeDressRoom
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::InitializeDressRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.InitializeDressRoom");

	UDressRoomNewWidget_C_InitializeDressRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ResetModelsMenu
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::ResetModelsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ResetModelsMenu");

	UDressRoomNewWidget_C_ResetModelsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.apply
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.apply");

	UDressRoomNewWidget_C_apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_2565_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_2565_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_2565_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_2565_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Victory_K2Node_ComponentBoundEvent_2601_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Victory_K2Node_ComponentBoundEvent_2601_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Victory_K2Node_ComponentBoundEvent_2601_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Victory_K2Node_ComponentBoundEvent_2601_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_815_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_815_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_815_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_815_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1488_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1488_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1488_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1488_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_1579_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Coat_K2Node_ComponentBoundEvent_1579_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_1579_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Coat_K2Node_ComponentBoundEvent_1579_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_1533_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Boots_K2Node_ComponentBoundEvent_1533_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_1533_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Boots_K2Node_ComponentBoundEvent_1533_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_1880_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Axe_K2Node_ComponentBoundEvent_1880_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_1880_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Axe_K2Node_ComponentBoundEvent_1880_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_1928_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Bow_K2Node_ComponentBoundEvent_1928_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_1928_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Bow_K2Node_ComponentBoundEvent_1928_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1390_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1390_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1390_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1390_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Hair_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Hair_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_731_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_731_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_731_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_731_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Shirt Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Shirt_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Shirt Category");

	UDressRoomNewWidget_C_Open_Shirt_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventItemBought
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                itemUniqueId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDressRoomNewWidget_C::EventItemBought(struct FString* itemUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventItemBought");

	UDressRoomNewWidget_C_EventItemBought_Params params;
	params.itemUniqueId = itemUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventInventoryUpdated
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventInventoryUpdated");

	UDressRoomNewWidget_C_EventInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerCustomizationOption     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::UpdateOption(EPlayerCustomizationOption NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateOption");

	UDressRoomNewWidget_C_UpdateOption_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Init Parents in dress Room
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMainMenu_C*             Main_Menu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMainMenuAlpha_C*        Main_Menu_Alpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::Init_Parents_in_dress_Room(class UMainMenu_C* Main_Menu, class UMainMenuAlpha_C* Main_Menu_Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Init Parents in dress Room");

	UDressRoomNewWidget_C_Init_Parents_in_dress_Room_Params params;
	params.Main_Menu = Main_Menu;
	params.Main_Menu_Alpha = Main_Menu_Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__ButtonSwitchGender_K2Node_ComponentBoundEvent_919_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__ButtonSwitchGender_K2Node_ComponentBoundEvent_919_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__ButtonSwitchGender_K2Node_ComponentBoundEvent_919_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__ButtonSwitchGender_K2Node_ComponentBoundEvent_919_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__CheckBox_317_K2Node_ComponentBoundEvent_337_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::BndEvt__CheckBox_317_K2Node_ComponentBoundEvent_337_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__CheckBox_317_K2Node_ComponentBoundEvent_337_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__CheckBox_317_K2Node_ComponentBoundEvent_337_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__CheckBox_318_K2Node_ComponentBoundEvent_2181_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::BndEvt__CheckBox_318_K2Node_ComponentBoundEvent_2181_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__CheckBox_318_K2Node_ComponentBoundEvent_2181_OnCheckBoxComponentStateChanged__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__CheckBox_318_K2Node_ComponentBoundEvent_2181_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Dress Room on main menu
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Dress_Room_on_main_menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Dress Room on main menu");

	UDressRoomNewWidget_C_Dress_Room_on_main_menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Armor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Armor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Axe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Axe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Bow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Bow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Coat_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Coat_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Coat_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Coat_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Axe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Axe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Bow_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Bow_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Hair_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Hair_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Hair_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Hair_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Head_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Head_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Head_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Head_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Head_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Head_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Head_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Head_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Pants_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Pants_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Pants_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Pants_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Pants_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Pants_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Pants_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Pants_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Special_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Special_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Special_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Special_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Boots_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Boots_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_Boots_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_Boots_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Destruct");

	UDressRoomNewWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Tick");

	UDressRoomNewWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Construct");

	UDressRoomNewWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Are you sure ?
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Are_you_sure__()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Are you sure ?");

	UDressRoomNewWidget_C_Are_you_sure___Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_292_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_292_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_292_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_292_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_345_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_345_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_345_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_345_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewWidget_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewWidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.MenuBackPressed
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::MenuBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.MenuBackPressed");

	UDressRoomNewWidget_C_MenuBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventInputSourceChanged");

	UDressRoomNewWidget_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuRight
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuRight");

	UDressRoomNewWidget_C_EventMenuRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuLeft
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuLeft");

	UDressRoomNewWidget_C_EventMenuLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuDown
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuDown");

	UDressRoomNewWidget_C_EventMenuDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuUp
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuUp");

	UDressRoomNewWidget_C_EventMenuUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Pants Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Pants_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Pants Category");

	UDressRoomNewWidget_C_Open_Pants_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Helmet Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Helmet_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Helmet Category");

	UDressRoomNewWidget_C_Open_Helmet_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Armor Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Armor_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Armor Category");

	UDressRoomNewWidget_C_Open_Armor_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Coat Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Coat_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Coat Category");

	UDressRoomNewWidget_C_Open_Coat_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Boots Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Boots_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Boots Category");

	UDressRoomNewWidget_C_Open_Boots_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Head Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Head_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Head Category");

	UDressRoomNewWidget_C_Open_Head_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Hair Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Hair_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Hair Category");

	UDressRoomNewWidget_C_Open_Hair_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open FacialHair Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_FacialHair_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open FacialHair Category");

	UDressRoomNewWidget_C_Open_FacialHair_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Special Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Special_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Special Category");

	UDressRoomNewWidget_C_Open_Special_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Axe Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Axe_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Axe Category");

	UDressRoomNewWidget_C_Open_Axe_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Bow Category
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::Open_Bow_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.Open Bow Category");

	UDressRoomNewWidget_C_Open_Bow_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverBow
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverBow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverBow");

	UDressRoomNewWidget_C_OnHoverBow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverBow
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverBow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverBow");

	UDressRoomNewWidget_C_OnUnhoverBow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverAxe
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverAxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverAxe");

	UDressRoomNewWidget_C_OnHoverAxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverAxe
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverAxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverAxe");

	UDressRoomNewWidget_C_OnUnhoverAxe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverSpecial
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverSpecial");

	UDressRoomNewWidget_C_OnHoverSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverSpecial
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverSpecial");

	UDressRoomNewWidget_C_OnUnhoverSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverFacialAir
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverFacialAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverFacialAir");

	UDressRoomNewWidget_C_OnHoverFacialAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverFacialAir
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverFacialAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverFacialAir");

	UDressRoomNewWidget_C_OnUnhoverFacialAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverHair
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverHair");

	UDressRoomNewWidget_C_OnHoverHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverAir
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverAir");

	UDressRoomNewWidget_C_OnUnhoverAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverHead
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverHead");

	UDressRoomNewWidget_C_OnHoverHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverHead
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverHead");

	UDressRoomNewWidget_C_OnUnhoverHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverBoots
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverBoots()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverBoots");

	UDressRoomNewWidget_C_OnHoverBoots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverBoots
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverBoots()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverBoots");

	UDressRoomNewWidget_C_OnUnhoverBoots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverCoat
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverCoat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverCoat");

	UDressRoomNewWidget_C_OnHoverCoat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverCoat
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverCoat()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverCoat");

	UDressRoomNewWidget_C_OnUnhoverCoat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverArmor
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverArmor");

	UDressRoomNewWidget_C_OnHoverArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverArmor
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverArmor");

	UDressRoomNewWidget_C_OnUnhoverArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.CnHoverHelmet
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::CnHoverHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.CnHoverHelmet");

	UDressRoomNewWidget_C_CnHoverHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverHelmet
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverHelmet()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverHelmet");

	UDressRoomNewWidget_C_OnUnhoverHelmet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverPants
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverPants()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverPants");

	UDressRoomNewWidget_C_OnHoverPants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverPants
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoverPants()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverPants");

	UDressRoomNewWidget_C_OnUnhoverPants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverShirt
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnHoverShirt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverShirt");

	UDressRoomNewWidget_C_OnHoverShirt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoveredShirt
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::OnUnhoveredShirt()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoveredShirt");

	UDressRoomNewWidget_C_OnUnhoveredShirt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuRightPagePressed
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuRightPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuRightPagePressed");

	UDressRoomNewWidget_C_EventMenuRightPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuLeftPagePressed
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuLeftPagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuLeftPagePressed");

	UDressRoomNewWidget_C_EventMenuLeftPagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuXPressed
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuXPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuXPressed");

	UDressRoomNewWidget_C_EventMenuXPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ToggleShowCraftable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ToggleShowCraftable(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ToggleShowCraftable");

	UDressRoomNewWidget_C_ToggleShowCraftable_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuYPressed
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuYPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuYPressed");

	UDressRoomNewWidget_C_EventMenuYPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.SwitchGender
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::SwitchGender()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.SwitchGender");

	UDressRoomNewWidget_C_SwitchGender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BuyConfirmed
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::BuyConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BuyConfirmed");

	UDressRoomNewWidget_C_BuyConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.BuyCanceled
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::BuyCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.BuyCanceled");

	UDressRoomNewWidget_C_BuyCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuClick
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventMenuClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuClick");

	UDressRoomNewWidget_C_EventMenuClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuBack
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsEscape                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::EventMenuBack(bool* bIsEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuBack");

	UDressRoomNewWidget_C_EventMenuBack_Params params;
	params.bIsEscape = bIsEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventGameStartsNow");

	UDressRoomNewWidget_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventInGameMenuAction
// (Event, Public, BlueprintEvent)

void UDressRoomNewWidget_C::EventInGameMenuAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventInGameMenuAction");

	UDressRoomNewWidget_C_EventInGameMenuAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.RefreshCraftableStatus
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewWidget_C::RefreshCraftableStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.RefreshCraftableStatus");

	UDressRoomNewWidget_C_RefreshCraftableStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.EventPlayerProfileReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinPlayerStats*     stats                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDarwinProfile*         Profile                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDressRoomNewWidget_C::EventPlayerProfileReceived(struct FDarwinPlayerStats* stats, struct FDarwinProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.EventPlayerProfileReceived");

	UDressRoomNewWidget_C_EventPlayerProfileReceived_Params params;
	params.stats = stats;
	params.Profile = Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewWidget.DressRoomNewWidget_C.ExecuteUbergraph_DressRoomNewWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewWidget_C::ExecuteUbergraph_DressRoomNewWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewWidget.DressRoomNewWidget_C.ExecuteUbergraph_DressRoomNewWidget");

	UDressRoomNewWidget_C_ExecuteUbergraph_DressRoomNewWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
