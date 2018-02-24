// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryHealthPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryHealthPack.InventoryHealthPack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryHealthPack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryHealthPack.InventoryHealthPack_C.Construct");

	UInventoryHealthPack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryHealthPack.InventoryHealthPack_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UInventoryHealthPack_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryHealthPack.InventoryHealthPack_C.EventInputSourceChanged");

	UInventoryHealthPack_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryHealthPack.InventoryHealthPack_C.EventMenuDPadUp
// (Event, Public, BlueprintEvent)

void UInventoryHealthPack_C::EventMenuDPadUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryHealthPack.InventoryHealthPack_C.EventMenuDPadUp");

	UInventoryHealthPack_C_EventMenuDPadUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryHealthPack.InventoryHealthPack_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryHealthPack_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryHealthPack.InventoryHealthPack_C.EventInventorySlotChanged");

	UInventoryHealthPack_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryHealthPack.InventoryHealthPack_C.ExecuteUbergraph_InventoryHealthPack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryHealthPack_C::ExecuteUbergraph_InventoryHealthPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryHealthPack.InventoryHealthPack_C.ExecuteUbergraph_InventoryHealthPack");

	UInventoryHealthPack_C_ExecuteUbergraph_InventoryHealthPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
