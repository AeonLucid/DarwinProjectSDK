#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LootAndHarvestProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventUpdateLootActionProgress
struct ULootAndHarvestProgress_C_EventUpdateLootActionProgress_Params
{
	bool*                                              isLooting;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionEnd
struct ULootAndHarvestProgress_C_EventLootActionEnd_Params
{
};

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionStart
struct ULootAndHarvestProgress_C_EventLootActionStart_Params
{
};

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventLootActionCancel
struct ULootAndHarvestProgress_C_EventLootActionCancel_Params
{
};

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.Construct
struct ULootAndHarvestProgress_C_Construct_Params
{
};

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.EventNewLoot
struct ULootAndHarvestProgress_C_EventNewLoot_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LootAndHarvestProgress.LootAndHarvestProgress_C.ExecuteUbergraph_LootAndHarvestProgress
struct ULootAndHarvestProgress_C_ExecuteUbergraph_LootAndHarvestProgress_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
