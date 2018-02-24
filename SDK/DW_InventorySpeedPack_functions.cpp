// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventorySpeedPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventorySpeedPack.InventorySpeedPack_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventorySpeedPack_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySpeedPack.InventorySpeedPack_C.EventInventorySlotChanged");

	UInventorySpeedPack_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventorySpeedPack.InventorySpeedPack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventorySpeedPack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySpeedPack.InventorySpeedPack_C.Construct");

	UInventorySpeedPack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventorySpeedPack.InventorySpeedPack_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UInventorySpeedPack_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySpeedPack.InventorySpeedPack_C.EventInputSourceChanged");

	UInventorySpeedPack_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventorySpeedPack.InventorySpeedPack_C.EventMenuDPadLeft
// (Event, Public, BlueprintEvent)

void UInventorySpeedPack_C::EventMenuDPadLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySpeedPack.InventorySpeedPack_C.EventMenuDPadLeft");

	UInventorySpeedPack_C_EventMenuDPadLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventorySpeedPack.InventorySpeedPack_C.ExecuteUbergraph_InventorySpeedPack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventorySpeedPack_C::ExecuteUbergraph_InventorySpeedPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySpeedPack.InventorySpeedPack_C.ExecuteUbergraph_InventorySpeedPack");

	UInventorySpeedPack_C_ExecuteUbergraph_InventorySpeedPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
