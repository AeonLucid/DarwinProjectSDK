// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryWood_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryWood.InventoryWood_C.EventUpdateNumberOfWood
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfWood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWood_C::EventUpdateNumberOfWood(int* numberOfWood, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWood.InventoryWood_C.EventUpdateNumberOfWood");

	UInventoryWood_C_EventUpdateNumberOfWood_Params params;
	params.numberOfWood = numberOfWood;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryWood.InventoryWood_C.ExecuteUbergraph_InventoryWood
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryWood_C::ExecuteUbergraph_InventoryWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryWood.InventoryWood_C.ExecuteUbergraph_InventoryWood");

	UInventoryWood_C_ExecuteUbergraph_InventoryWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
