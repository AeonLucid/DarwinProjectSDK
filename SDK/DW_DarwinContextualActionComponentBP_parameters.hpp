#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinContextualActionComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalPickupLoot
struct UDarwinContextualActionComponentBP_C_EventLocalPickupLoot_Params
{
	bool*                                              bDeerBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedPickupLoot
struct UDarwinContextualActionComponentBP_C_EventSimulatedPickupLoot_Params
{
	bool*                                              bDeerBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventPickUpProjectile
struct UDarwinContextualActionComponentBP_C_EventPickUpProjectile_Params
{
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLootTheDead
struct UDarwinContextualActionComponentBP_C_EventLootTheDead_Params
{
	class ADarwinCharacter**                           lootedCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalAcquireClue
struct UDarwinContextualActionComponentBP_C_EventLocalAcquireClue_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedAcquireClue
struct UDarwinContextualActionComponentBP_C_EventSimulatedAcquireClue_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalPickupCraftableTool
struct UDarwinContextualActionComponentBP_C_EventLocalPickupCraftableTool_Params
{
	EDarwinItemTypeEnum*                               CraftableToolType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedPickupCraftableTool
struct UDarwinContextualActionComponentBP_C_EventSimulatedPickupCraftableTool_Params
{
	EDarwinItemTypeEnum*                               CraftableToolType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalStartLooting
struct UDarwinContextualActionComponentBP_C_EventLocalStartLooting_Params
{
	bool*                                              bDeerBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventLocalCancelLooting
struct UDarwinContextualActionComponentBP_C_EventLocalCancelLooting_Params
{
	bool*                                              bDeerBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedStartLooting
struct UDarwinContextualActionComponentBP_C_EventSimulatedStartLooting_Params
{
	bool*                                              bDeerBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.EventSimulatedCancelLooting
struct UDarwinContextualActionComponentBP_C_EventSimulatedCancelLooting_Params
{
	bool*                                              bDeerBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionComponentBP.DarwinContextualActionComponentBP_C.ExecuteUbergraph_DarwinContextualActionComponentBP
struct UDarwinContextualActionComponentBP_C_ExecuteUbergraph_DarwinContextualActionComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
