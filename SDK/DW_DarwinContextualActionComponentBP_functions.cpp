// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinContextualActionComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalPickupLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDeerBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventLocalPickupLoot(bool* bDeerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalPickupLoot");

	UDarwinContextualActionComponentBP_C_EventLocalPickupLoot_Params params;
	params.bDeerBox = bDeerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedPickupLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDeerBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventSimulatedPickupLoot(bool* bDeerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedPickupLoot");

	UDarwinContextualActionComponentBP_C_EventSimulatedPickupLoot_Params params;
	params.bDeerBox = bDeerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventPickUpProjectile
// (Event, Public, BlueprintEvent)

void UDarwinContextualActionComponentBP_C::EventPickUpProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventPickUpProjectile");

	UDarwinContextualActionComponentBP_C_EventPickUpProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLootTheDead
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       lootedCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventLootTheDead(class ADarwinCharacter** lootedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLootTheDead");

	UDarwinContextualActionComponentBP_C_EventLootTheDead_Params params;
	params.lootedCharacter = lootedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalAcquireClue
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventLocalAcquireClue(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalAcquireClue");

	UDarwinContextualActionComponentBP_C_EventLocalAcquireClue_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedAcquireClue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventSimulatedAcquireClue(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedAcquireClue");

	UDarwinContextualActionComponentBP_C_EventSimulatedAcquireClue_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalPickupCraftableTool
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           CraftableToolType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventLocalPickupCraftableTool(EDarwinItemTypeEnum* CraftableToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalPickupCraftableTool");

	UDarwinContextualActionComponentBP_C_EventLocalPickupCraftableTool_Params params;
	params.CraftableToolType = CraftableToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedPickupCraftableTool
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           CraftableToolType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventSimulatedPickupCraftableTool(EDarwinItemTypeEnum* CraftableToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedPickupCraftableTool");

	UDarwinContextualActionComponentBP_C_EventSimulatedPickupCraftableTool_Params params;
	params.CraftableToolType = CraftableToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalStartLooting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDeerBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventLocalStartLooting(bool* bDeerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalStartLooting");

	UDarwinContextualActionComponentBP_C_EventLocalStartLooting_Params params;
	params.bDeerBox = bDeerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalCancelLooting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDeerBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventLocalCancelLooting(bool* bDeerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalCancelLooting");

	UDarwinContextualActionComponentBP_C_EventLocalCancelLooting_Params params;
	params.bDeerBox = bDeerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedStartLooting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDeerBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventSimulatedStartLooting(bool* bDeerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedStartLooting");

	UDarwinContextualActionComponentBP_C_EventSimulatedStartLooting_Params params;
	params.bDeerBox = bDeerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedCancelLooting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bDeerBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::EventSimulatedCancelLooting(bool* bDeerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedCancelLooting");

	UDarwinContextualActionComponentBP_C_EventSimulatedCancelLooting_Params params;
	params.bDeerBox = bDeerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.ExecuteUbergraph_DarwinContextualActionComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionComponentBP_C::ExecuteUbergraph_DarwinContextualActionComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.ExecuteUbergraph_DarwinContextualActionComponentBP");

	UDarwinContextualActionComponentBP_C_ExecuteUbergraph_DarwinContextualActionComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
