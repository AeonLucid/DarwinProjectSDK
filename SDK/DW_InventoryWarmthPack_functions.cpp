// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryWarmthPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryWarmthPack.InventoryWarmthPack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventoryWarmthPack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWarmthPack.InventoryWarmthPack_C.Construct");

	UInventoryWarmthPack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWarmthPack.InventoryWarmthPack_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UInventoryWarmthPack_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWarmthPack.InventoryWarmthPack_C.EventInputSourceChanged");

	UInventoryWarmthPack_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWarmthPack.InventoryWarmthPack_C.EventMenuDPadRight
// (Event, Public, BlueprintEvent)

void UInventoryWarmthPack_C::EventMenuDPadRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWarmthPack.InventoryWarmthPack_C.EventMenuDPadRight");

	UInventoryWarmthPack_C_EventMenuDPadRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWarmthPack.InventoryWarmthPack_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWarmthPack_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWarmthPack.InventoryWarmthPack_C.EventInventorySlotChanged");

	UInventoryWarmthPack_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWarmthPack.InventoryWarmthPack_C.ExecuteUbergraph_InventoryWarmthPack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWarmthPack_C::ExecuteUbergraph_InventoryWarmthPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWarmthPack.InventoryWarmthPack_C.ExecuteUbergraph_InventoryWarmthPack");

	UInventoryWarmthPack_C_ExecuteUbergraph_InventoryWarmthPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
