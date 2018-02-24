// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InvSlotPacks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InvSlotPacks.InvSlotPacks_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvSlotPacks_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotPacks.InvSlotPacks_C.EventInventorySlotChanged");

	UInvSlotPacks_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvSlotPacks.InvSlotPacks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInvSlotPacks_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotPacks.InvSlotPacks_C.Construct");

	UInvSlotPacks_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvSlotPacks.InvSlotPacks_C.ExecuteUbergraph_InvSlotPacks
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvSlotPacks_C::ExecuteUbergraph_InvSlotPacks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotPacks.InvSlotPacks_C.ExecuteUbergraph_InvSlotPacks");

	UInvSlotPacks_C_ExecuteUbergraph_InvSlotPacks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
