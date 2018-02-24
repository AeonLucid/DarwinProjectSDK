#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CageBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CageBP.CageBP_C.UserConstructionScript
struct ACageBP_C_UserConstructionScript_Params
{
};

// Function CageBP.CageBP_C.EventCraftableToolDestroyed
struct ACageBP_C_EventCraftableToolDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CageBP.CageBP_C.EventCraftableToolDestroyedDedicatedServer
struct ACageBP_C_EventCraftableToolDestroyedDedicatedServer_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CageBP.CageBP_C.ReceiveBeginPlay
struct ACageBP_C_ReceiveBeginPlay_Params
{
};

// Function CageBP.CageBP_C.EventCraftableToolSprungDedicatedServer
struct ACageBP_C_EventCraftableToolSprungDedicatedServer_Params
{
	class ADarwinCharacter**                           characterTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CageBP.CageBP_C.EventCraftableToolSprung
struct ACageBP_C_EventCraftableToolSprung_Params
{
	class ADarwinCharacter**                           characterTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CageBP.CageBP_C.EventUpdateWaveTime
struct ACageBP_C_EventUpdateWaveTime_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CageBP.CageBP_C.EventInitializeMeshArray
struct ACageBP_C_EventInitializeMeshArray_Params
{
};

// Function CageBP.CageBP_C.EventSpawnFallingSnow
struct ACageBP_C_EventSpawnFallingSnow_Params
{
};

// Function CageBP.CageBP_C.ExecuteUbergraph_CageBP
struct ACageBP_C_ExecuteUbergraph_CageBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
