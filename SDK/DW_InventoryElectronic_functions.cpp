// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryElectronic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryElectronic.InventoryElectronic_C.EventUpdateNumberOfElectronic
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfElectronic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryElectronic_C::EventUpdateNumberOfElectronic(int* numberOfElectronic, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryElectronic.InventoryElectronic_C.EventUpdateNumberOfElectronic");

	UInventoryElectronic_C_EventUpdateNumberOfElectronic_Params params;
	params.numberOfElectronic = numberOfElectronic;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryElectronic.InventoryElectronic_C.ExecuteUbergraph_InventoryElectronic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryElectronic_C::ExecuteUbergraph_InventoryElectronic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryElectronic.InventoryElectronic_C.ExecuteUbergraph_InventoryElectronic");

	UInventoryElectronic_C_ExecuteUbergraph_InventoryElectronic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
