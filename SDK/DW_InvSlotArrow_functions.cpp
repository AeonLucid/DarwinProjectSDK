// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InvSlotArrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InvSlotArrow.InvSlotArrow_C.EventUpdateNumberOfArrows
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfArrows                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvSlotArrow_C::EventUpdateNumberOfArrows(int* numberOfArrows, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotArrow.InvSlotArrow_C.EventUpdateNumberOfArrows");

	UInvSlotArrow_C_EventUpdateNumberOfArrows_Params params;
	params.numberOfArrows = numberOfArrows;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvSlotArrow.InvSlotArrow_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UInvSlotArrow_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotArrow.InvSlotArrow_C.EventGameStartsNow");

	UInvSlotArrow_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvSlotArrow.InvSlotArrow_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UInvSlotArrow_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotArrow.InvSlotArrow_C.EventGameHasStarted");

	UInvSlotArrow_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvSlotArrow.InvSlotArrow_C.EventUpdateCraftableItemIcons
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvSlotArrow_C::EventUpdateCraftableItemIcons(EDarwinItemTypeEnum* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotArrow.InvSlotArrow_C.EventUpdateCraftableItemIcons");

	UInvSlotArrow_C_EventUpdateCraftableItemIcons_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvSlotArrow.InvSlotArrow_C.ExecuteUbergraph_InvSlotArrow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvSlotArrow_C::ExecuteUbergraph_InvSlotArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvSlotArrow.InvSlotArrow_C.ExecuteUbergraph_InvSlotArrow");

	UInvSlotArrow_C_ExecuteUbergraph_InvSlotArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
