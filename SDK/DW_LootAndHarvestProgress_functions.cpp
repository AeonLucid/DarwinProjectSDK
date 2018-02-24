// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LootAndHarvestProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventUpdateLootActionProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isLooting                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootAndHarvestProgress_C::EventUpdateLootActionProgress(bool* isLooting, EDarwinItemTypeEnum* Type, struct FString* playerName, float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventUpdateLootActionProgress");

	ULootAndHarvestProgress_C_EventUpdateLootActionProgress_Params params;
	params.isLooting = isLooting;
	params.Type = Type;
	params.playerName = playerName;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionEnd
// (Event, Public, BlueprintEvent)

void ULootAndHarvestProgress_C::EventLootActionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionEnd");

	ULootAndHarvestProgress_C_EventLootActionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionStart
// (Event, Public, BlueprintEvent)

void ULootAndHarvestProgress_C::EventLootActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionStart");

	ULootAndHarvestProgress_C_EventLootActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionCancel
// (Event, Public, BlueprintEvent)

void ULootAndHarvestProgress_C::EventLootActionCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionCancel");

	ULootAndHarvestProgress_C_EventLootActionCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootAndHarvestProgress.LootAndHarvestProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULootAndHarvestProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.Construct");

	ULootAndHarvestProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventNewLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootAndHarvestProgress_C::EventNewLoot(EDarwinItemTypeEnum* Type, int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventNewLoot");

	ULootAndHarvestProgress_C_EventNewLoot_Params params;
	params.Type = Type;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootAndHarvestProgress.LootAndHarvestProgress_C.ExecuteUbergraph_LootAndHarvestProgress
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootAndHarvestProgress_C::ExecuteUbergraph_LootAndHarvestProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootAndHarvestProgress.LootAndHarvestProgress_C.ExecuteUbergraph_LootAndHarvestProgress");

	ULootAndHarvestProgress_C_ExecuteUbergraph_LootAndHarvestProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
