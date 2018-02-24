// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventorySlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinInventorySlot.DarwinInventorySlot_C.SetSlotTypeAndIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            InSlotType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventorySlot_C::SetSlotTypeAndIcon(EDarwinItemTypeEnum InSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.SetSlotTypeAndIcon");

	UDarwinInventorySlot_C_SetSlotTypeAndIcon_Params params;
	params.InSlotType = InSlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.ActivateConsumable
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinInventorySlot_C::ActivateConsumable()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.ActivateConsumable");

	UDarwinInventorySlot_C_ActivateConsumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDarwinInventorySlot_C::BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UDarwinInventorySlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDarwinInventorySlot_C::BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UDarwinInventorySlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.EventOnMouseHidden
// (Event, Public, BlueprintEvent)

void UDarwinInventorySlot_C::EventOnMouseHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.EventOnMouseHidden");

	UDarwinInventorySlot_C_EventOnMouseHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDarwinInventorySlot_C::BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UDarwinInventorySlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.EventRequestRemapInventoryItem
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventorySlot_C::EventRequestRemapInventoryItem(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.EventRequestRemapInventoryItem");

	UDarwinInventorySlot_C_EventRequestRemapInventoryItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventorySlot_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.EventInventorySlotChanged");

	UDarwinInventorySlot_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.GamepadHover
// (BlueprintCallable, BlueprintEvent)

void UDarwinInventorySlot_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.GamepadHover");

	UDarwinInventorySlot_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.GamepadUnHovered
// (BlueprintCallable, BlueprintEvent)

void UDarwinInventorySlot_C::GamepadUnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.GamepadUnHovered");

	UDarwinInventorySlot_C_GamepadUnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.UpdateSlot
// (BlueprintCallable, BlueprintEvent)

void UDarwinInventorySlot_C::UpdateSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.UpdateSlot");

	UDarwinInventorySlot_C_UpdateSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.EventUpdateCraftableItemIcons
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventorySlot_C::EventUpdateCraftableItemIcons(EDarwinItemTypeEnum* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.EventUpdateCraftableItemIcons");

	UDarwinInventorySlot_C_EventUpdateCraftableItemIcons_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventorySlot.DarwinInventorySlot_C.ExecuteUbergraph_DarwinInventorySlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventorySlot_C::ExecuteUbergraph_DarwinInventorySlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventorySlot.DarwinInventorySlot_C.ExecuteUbergraph_DarwinInventorySlot");

	UDarwinInventorySlot_C_ExecuteUbergraph_DarwinInventorySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
