// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_Inventoryleather_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Inventoryleather.InventoryLeather_C.EventUpdateNumberOfLeather
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfLeather                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryLeather_C::EventUpdateNumberOfLeather(int* numberOfLeather, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventoryleather.InventoryLeather_C.EventUpdateNumberOfLeather");

	UInventoryLeather_C_EventUpdateNumberOfLeather_Params params;
	params.numberOfLeather = numberOfLeather;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Inventoryleather.InventoryLeather_C.ExecuteUbergraph_InventoryLeather
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInventoryLeather_C::ExecuteUbergraph_InventoryLeather(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Inventoryleather.InventoryLeather_C.ExecuteUbergraph_InventoryLeather");

	UInventoryLeather_C_ExecuteUbergraph_InventoryLeather_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
