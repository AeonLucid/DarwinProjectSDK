#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreCraftableTools
struct UDarwinInventoryComponentBP_C_EventLocalNoMoreCraftableTools_Params
{
	EDarwinItemTypeEnum*                               CraftableToolType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalSpawnCraftableToolFail
struct UDarwinInventoryComponentBP_C_EventLocalSpawnCraftableToolFail_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               CraftableToolType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreWarmthPacks
struct UDarwinInventoryComponentBP_C_EventLocalNoMoreWarmthPacks_Params
{
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreStamPacks
struct UDarwinInventoryComponentBP_C_EventLocalNoMoreStamPacks_Params
{
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalNoMoreSpeedPacks
struct UDarwinInventoryComponentBP_C_EventLocalNoMoreSpeedPacks_Params
{
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedSpeedPacks
struct UDarwinInventoryComponentBP_C_EventSimulatedConsumedSpeedPacks_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedStamPacks
struct UDarwinInventoryComponentBP_C_EventSimulatedConsumedStamPacks_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedWarmthPacks
struct UDarwinInventoryComponentBP_C_EventSimulatedConsumedWarmthPacks_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventSimulatedConsumedHealthPacks
struct UDarwinInventoryComponentBP_C_EventSimulatedConsumedHealthPacks_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedCraftableTool
struct UDarwinInventoryComponentBP_C_EventLocalConsumedCraftableTool_Params
{
	EDarwinItemTypeEnum*                               CraftableToolType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedSpeedPacks
struct UDarwinInventoryComponentBP_C_EventLocalConsumedSpeedPacks_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedStamPacks
struct UDarwinInventoryComponentBP_C_EventLocalConsumedStamPacks_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedWarmthPacks
struct UDarwinInventoryComponentBP_C_EventLocalConsumedWarmthPacks_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.EventLocalConsumedHealthPacks
struct UDarwinInventoryComponentBP_C_EventLocalConsumedHealthPacks_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryComponentBP.DarwinInventoryComponentBP_C.ExecuteUbergraph_DarwinInventoryComponentBP
struct UDarwinInventoryComponentBP_C_ExecuteUbergraph_DarwinInventoryComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
