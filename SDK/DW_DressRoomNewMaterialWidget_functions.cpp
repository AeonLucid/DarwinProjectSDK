// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DressRoomNewMaterialWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::SelectItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.SelectItem");

	UDressRoomNewMaterialWidget_C_SelectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.UnselectItem
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::UnselectItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.UnselectItem");

	UDressRoomNewMaterialWidget_C_UnselectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.UpdateItemIsSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::UpdateItemIsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.UpdateItemIsSelected");

	UDressRoomNewMaterialWidget_C_UpdateItemIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.InitializeDressRoomItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColumnIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RowIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewMaterialWidget_C::InitializeDressRoomItem(int ColumnIndex, int RowIndex, bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.InitializeDressRoomItem");

	UDressRoomNewMaterialWidget_C_InitializeDressRoomItem_Params params;
	params.ColumnIndex = ColumnIndex;
	params.RowIndex = RowIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.CheckIfItemIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UDressRoomNewMaterialWidget_C::CheckIfItemIsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.CheckIfItemIsSelected");

	UDressRoomNewMaterialWidget_C_CheckIfItemIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.BndEvt__Button_Hairs_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewMaterialWidget_C::BndEvt__Button_Hairs_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.BndEvt__Button_Hairs_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewMaterialWidget_C_BndEvt__Button_Hairs_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.Construct");

	UDressRoomNewMaterialWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_188_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewMaterialWidget_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_188_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_188_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewMaterialWidget_C_BndEvt__Button_Option_K2Node_ComponentBoundEvent_188_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_205_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewMaterialWidget_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_205_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_205_OnButtonHoverEvent__DelegateSignature");

	UDressRoomNewMaterialWidget_C_BndEvt__Button_Option_K2Node_ComponentBoundEvent_205_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.EventInventoryUpdated
// (Event, Public, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::EventInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.EventInventoryUpdated");

	UDressRoomNewMaterialWidget_C_EventInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.OnHoveredItem
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::OnHoveredItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.OnHoveredItem");

	UDressRoomNewMaterialWidget_C_OnHoveredItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.OnUnhoveredItem
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::OnUnhoveredItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.OnUnhoveredItem");

	UDressRoomNewMaterialWidget_C_OnUnhoveredItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.OnClickItem
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewMaterialWidget_C::OnClickItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.OnClickItem");

	UDressRoomNewMaterialWidget_C_OnClickItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewMaterialWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.Tick");

	UDressRoomNewMaterialWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.ExecuteUbergraph_DressRoomNewMaterialWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewMaterialWidget_C::ExecuteUbergraph_DressRoomNewMaterialWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewMaterialWidget.DressRoomNewMaterialWidget_C.ExecuteUbergraph_DressRoomNewMaterialWidget");

	UDressRoomNewMaterialWidget_C_ExecuteUbergraph_DressRoomNewMaterialWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
