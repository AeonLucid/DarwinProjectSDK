// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CraftWheelIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CraftWheelIcon.CraftWheelIcon_C.SetIsInCrafting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsInCrafting                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftWheelIcon_C::SetIsInCrafting(bool bIsInCrafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.SetIsInCrafting");

	UCraftWheelIcon_C_SetIsInCrafting_Params params;
	params.bIsInCrafting = bIsInCrafting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventUpdateCraftableItemIcons
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftWheelIcon_C::EventUpdateCraftableItemIcons(EDarwinItemTypeEnum* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventUpdateCraftableItemIcons");

	UCraftWheelIcon_C_EventUpdateCraftableItemIcons_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventCraftWheelOpen
// (Event, Public, BlueprintEvent)

void UCraftWheelIcon_C::EventCraftWheelOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventCraftWheelOpen");

	UCraftWheelIcon_C_EventCraftWheelOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventCraftWheelClose
// (Event, Public, BlueprintEvent)

void UCraftWheelIcon_C::EventCraftWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventCraftWheelClose");

	UCraftWheelIcon_C_EventCraftWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventUpdateButtons
// (Event, Public, BlueprintEvent)

void UCraftWheelIcon_C::EventUpdateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventUpdateButtons");

	UCraftWheelIcon_C_EventUpdateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UCraftWheelIcon_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventGameStartsNow");

	UCraftWheelIcon_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UCraftWheelIcon_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventGameHasStarted");

	UCraftWheelIcon_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.WasSwaped
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::WasSwaped()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.WasSwaped");

	UCraftWheelIcon_C_WasSwaped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.WasSawped
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::WasSawped()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.WasSawped");

	UCraftWheelIcon_C_WasSawped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.MyTick
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::MyTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.MyTick");

	UCraftWheelIcon_C_MyTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftWheelIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.Construct");

	UCraftWheelIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.SetOriginalIcon
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::SetOriginalIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.SetOriginalIcon");

	UCraftWheelIcon_C_SetOriginalIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.SetWillBeReplaced
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::SetWillBeReplaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.SetWillBeReplaced");

	UCraftWheelIcon_C_SetWillBeReplaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventHover
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::EventHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventHover");

	UCraftWheelIcon_C_EventHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.EventUnHover
// (BlueprintCallable, BlueprintEvent)

void UCraftWheelIcon_C::EventUnHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.EventUnHover");

	UCraftWheelIcon_C_EventUnHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftWheelIcon.CraftWheelIcon_C.ExecuteUbergraph_CraftWheelIcon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftWheelIcon_C::ExecuteUbergraph_CraftWheelIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftWheelIcon.CraftWheelIcon_C.ExecuteUbergraph_CraftWheelIcon");

	UCraftWheelIcon_C_ExecuteUbergraph_CraftWheelIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
