#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TripWireBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TripWireBP.TripWireBP_C.DisableAllCollisions
struct ATripWireBP_C_DisableAllCollisions_Params
{
};

// Function TripWireBP.TripWireBP_C.UserConstructionScript
struct ATripWireBP_C_UserConstructionScript_Params
{
};

// Function TripWireBP.TripWireBP_C.EventInitializeMeshArray
struct ATripWireBP_C_EventInitializeMeshArray_Params
{
};

// Function TripWireBP.TripWireBP_C.EventCraftableToolSprung
struct ATripWireBP_C_EventCraftableToolSprung_Params
{
	class ADarwinCharacter**                           characterTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TripWireBP.TripWireBP_C.ReceiveBeginPlay
struct ATripWireBP_C_ReceiveBeginPlay_Params
{
};

// Function TripWireBP.TripWireBP_C.EventCraftableToolDestroyed
struct ATripWireBP_C_EventCraftableToolDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TripWireBP.TripWireBP_C.EventCraftableToolDestroyedDedicatedServer
struct ATripWireBP_C_EventCraftableToolDestroyedDedicatedServer_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TripWireBP.TripWireBP_C.EventCraftableToolSprungDedicatedServer
struct ATripWireBP_C_EventCraftableToolSprungDedicatedServer_Params
{
	class ADarwinCharacter**                           characterTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TripWireBP.TripWireBP_C.ExecuteUbergraph_TripWireBP
struct ATripWireBP_C_ExecuteUbergraph_TripWireBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
