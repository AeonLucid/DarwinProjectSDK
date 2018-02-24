// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryPowerSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.SetSlotTypeAndIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum            InSlotType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::SetSlotTypeAndIcon(EDarwinItemTypeEnum InSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.SetSlotTypeAndIcon");

	UDarwinInventoryPowerSlot_C_SetSlotTypeAndIcon_Params params;
	params.InSlotType = InSlotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.ActivatePower
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::ActivatePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.ActivatePower");

	UDarwinInventoryPowerSlot_C_ActivatePower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdateTeleportCooldown
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventUpdateTeleportCooldown(float* Value, int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdateTeleportCooldown");

	UDarwinInventoryPowerSlot_C_EventUpdateTeleportCooldown_Params params;
	params.Value = Value;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportCooldownStart
// (Event, Public, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::EventTeleportCooldownStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportCooldownStart");

	UDarwinInventoryPowerSlot_C_EventTeleportCooldownStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportReady
// (Event, Public, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::EventTeleportReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportReady");

	UDarwinInventoryPowerSlot_C_EventTeleportReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAimStart
// (Event, Public, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::EventTeleportAimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAimStart");

	UDarwinInventoryPowerSlot_C_EventTeleportAimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAimEnd
// (Event, Public, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::EventTeleportAimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAimEnd");

	UDarwinInventoryPowerSlot_C_EventTeleportAimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.UpdateSlot
// (BlueprintCallable, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::UpdateSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.UpdateSlot");

	UDarwinInventoryPowerSlot_C_UpdateSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdatePowerCooldown
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventUpdatePowerCooldown(EDarwinItemTypeEnum* powerType, float* Value, int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdatePowerCooldown");

	UDarwinInventoryPowerSlot_C_EventUpdatePowerCooldown_Params params;
	params.powerType = powerType;
	params.Value = Value;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdatePowerDuration
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           timeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventUpdatePowerDuration(EDarwinItemTypeEnum* powerType, float* Value, int* timeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdatePowerDuration");

	UDarwinInventoryPowerSlot_C_EventUpdatePowerDuration_Params params;
	params.powerType = powerType;
	params.Value = Value;
	params.timeLeft = timeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerReady
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventPowerReady(EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerReady");

	UDarwinInventoryPowerSlot_C_EventPowerReady_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerCooldownStart
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventPowerCooldownStart(EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerCooldownStart");

	UDarwinInventoryPowerSlot_C_EventPowerCooldownStart_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerOn
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventPowerOn(EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerOn");

	UDarwinInventoryPowerSlot_C_EventPowerOn_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerOff
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventPowerOff(EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerOff");

	UDarwinInventoryPowerSlot_C_EventPowerOff_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdateCraftableItemIcons
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventUpdateCraftableItemIcons(EDarwinItemTypeEnum* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdateCraftableItemIcons");

	UDarwinInventoryPowerSlot_C_EventUpdateCraftableItemIcons_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerAlmostReady
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventPowerAlmostReady(EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerAlmostReady");

	UDarwinInventoryPowerSlot_C_EventPowerAlmostReady_Params params;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAlmostReady
// (Event, Public, BlueprintEvent)

void UDarwinInventoryPowerSlot_C::EventTeleportAlmostReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAlmostReady");

	UDarwinInventoryPowerSlot_C_EventTeleportAlmostReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventInventorySlotChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::EventInventorySlotChanged(int* Index, EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventInventorySlotChanged");

	UDarwinInventoryPowerSlot_C_EventInventorySlotChanged_Params params;
	params.Index = Index;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.ExecuteUbergraph_DarwinInventoryPowerSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryPowerSlot_C::ExecuteUbergraph_DarwinInventoryPowerSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.ExecuteUbergraph_DarwinInventoryPowerSlot");

	UDarwinInventoryPowerSlot_C_ExecuteUbergraph_DarwinInventoryPowerSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
