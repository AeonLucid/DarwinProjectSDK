// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DressRoomNewUnlockWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.SetSelectedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Option_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECustomizationRarity           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Unreal_Unique_Id               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UDressRoomNewWidget_C*   DressRoomNewWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPlayerCustomizationOption     CustomizationOption            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewUnlockWidget_C::SetSelectedItem(const struct FName& Option_Name, int Price, ECustomizationRarity Rarity, bool Locked, const struct FString& Unreal_Unique_Id, class UDressRoomNewWidget_C* DressRoomNewWidget, EPlayerCustomizationOption CustomizationOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.SetSelectedItem");

	UDressRoomNewUnlockWidget_C_SetSelectedItem_Params params;
	params.Option_Name = Option_Name;
	params.Price = Price;
	params.Rarity = Rarity;
	params.Locked = Locked;
	params.Unreal_Unique_Id = Unreal_Unique_Id;
	params.DressRoomNewWidget = DressRoomNewWidget;
	params.CustomizationOption = CustomizationOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDressRoomNewUnlockWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.Construct");

	UDressRoomNewUnlockWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDressRoomNewUnlockWidget_C::BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UDressRoomNewUnlockWidget_C_BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventInventoryUpdated
// (Event, Public, BlueprintEvent)

void UDressRoomNewUnlockWidget_C::EventInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventInventoryUpdated");

	UDressRoomNewUnlockWidget_C_EventInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventItemBought
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                itemUniqueId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UDressRoomNewUnlockWidget_C::EventItemBought(struct FString* itemUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventItemBought");

	UDressRoomNewUnlockWidget_C_EventItemBought_Params params;
	params.itemUniqueId = itemUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.Buy
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewUnlockWidget_C::Buy()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.Buy");

	UDressRoomNewUnlockWidget_C_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UDressRoomNewUnlockWidget_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventInputSourceChanged");

	UDressRoomNewUnlockWidget_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.RequestToBuy
// (BlueprintCallable, BlueprintEvent)

void UDressRoomNewUnlockWidget_C::RequestToBuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.RequestToBuy");

	UDressRoomNewUnlockWidget_C_RequestToBuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.ExecuteUbergraph_DressRoomNewUnlockWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDressRoomNewUnlockWidget_C::ExecuteUbergraph_DressRoomNewUnlockWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.ExecuteUbergraph_DressRoomNewUnlockWidget");

	UDressRoomNewUnlockWidget_C_ExecuteUbergraph_DressRoomNewUnlockWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.ShirtBoughtEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDressRoomNewUnlockWidget_C::ShirtBoughtEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.ShirtBoughtEvent__DelegateSignature");

	UDressRoomNewUnlockWidget_C_ShirtBoughtEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
