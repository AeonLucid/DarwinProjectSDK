// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreCraftableTools
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           CraftableToolType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalNoMoreCraftableTools(EDarwinItemTypeEnum* CraftableToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreCraftableTools");

	UDarwinInventoryComponentBP_C_EventLocalNoMoreCraftableTools_Params params;
	params.CraftableToolType = CraftableToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalSpawnCraftableToolFail
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           CraftableToolType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalSpawnCraftableToolFail(class ADarwinCharacter** Character, EDarwinItemTypeEnum* CraftableToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalSpawnCraftableToolFail");

	UDarwinInventoryComponentBP_C_EventLocalSpawnCraftableToolFail_Params params;
	params.Character = Character;
	params.CraftableToolType = CraftableToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreWarmthPacks
// (Event, Public, BlueprintEvent)

void UDarwinInventoryComponentBP_C::EventLocalNoMoreWarmthPacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreWarmthPacks");

	UDarwinInventoryComponentBP_C_EventLocalNoMoreWarmthPacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreStamPacks
// (Event, Public, BlueprintEvent)

void UDarwinInventoryComponentBP_C::EventLocalNoMoreStamPacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreStamPacks");

	UDarwinInventoryComponentBP_C_EventLocalNoMoreStamPacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreSpeedPacks
// (Event, Public, BlueprintEvent)

void UDarwinInventoryComponentBP_C::EventLocalNoMoreSpeedPacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreSpeedPacks");

	UDarwinInventoryComponentBP_C_EventLocalNoMoreSpeedPacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedSpeedPacks
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventSimulatedConsumedSpeedPacks(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedSpeedPacks");

	UDarwinInventoryComponentBP_C_EventSimulatedConsumedSpeedPacks_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedStamPacks
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventSimulatedConsumedStamPacks(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedStamPacks");

	UDarwinInventoryComponentBP_C_EventSimulatedConsumedStamPacks_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedWarmthPacks
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventSimulatedConsumedWarmthPacks(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedWarmthPacks");

	UDarwinInventoryComponentBP_C_EventSimulatedConsumedWarmthPacks_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedHealthPacks
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventSimulatedConsumedHealthPacks(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedHealthPacks");

	UDarwinInventoryComponentBP_C_EventSimulatedConsumedHealthPacks_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedCraftableTool
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           CraftableToolType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalConsumedCraftableTool(EDarwinItemTypeEnum* CraftableToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedCraftableTool");

	UDarwinInventoryComponentBP_C_EventLocalConsumedCraftableTool_Params params;
	params.CraftableToolType = CraftableToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedSpeedPacks
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalConsumedSpeedPacks(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedSpeedPacks");

	UDarwinInventoryComponentBP_C_EventLocalConsumedSpeedPacks_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedStamPacks
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalConsumedStamPacks(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedStamPacks");

	UDarwinInventoryComponentBP_C_EventLocalConsumedStamPacks_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedWarmthPacks
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalConsumedWarmthPacks(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedWarmthPacks");

	UDarwinInventoryComponentBP_C_EventLocalConsumedWarmthPacks_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedHealthPacks
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::EventLocalConsumedHealthPacks(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedHealthPacks");

	UDarwinInventoryComponentBP_C_EventLocalConsumedHealthPacks_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.ExecuteUbergraph_DarwinInventoryComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinInventoryComponentBP_C::ExecuteUbergraph_DarwinInventoryComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.ExecuteUbergraph_DarwinInventoryComponentBP");

	UDarwinInventoryComponentBP_C_ExecuteUbergraph_DarwinInventoryComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
