#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewTurretBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewTurretBP.NewTurretBP_C.UserConstructionScript
struct ANewTurretBP_C_UserConstructionScript_Params
{
};

// Function NewTurretBP.NewTurretBP_C.EventTurretShoot
struct ANewTurretBP_C_EventTurretShoot_Params
{
	struct FVector*                                    fromLoc;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    toLoc;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	ETurretHitType*                                    hitType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventTurretMakeSound
struct ANewTurretBP_C_EventTurretMakeSound_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventUpdateTurretRotation
struct ANewTurretBP_C_EventUpdateTurretRotation_Params
{
	struct FRotator*                                   rot;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventCraftableToolDestroyed
struct ANewTurretBP_C_EventCraftableToolDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventInitializeMeshArray
struct ANewTurretBP_C_EventInitializeMeshArray_Params
{
};

// Function NewTurretBP.NewTurretBP_C.ReceiveBeginPlay
struct ANewTurretBP_C_ReceiveBeginPlay_Params
{
};

// Function NewTurretBP.NewTurretBP_C.EventUpdateConeOpacity
struct ANewTurretBP_C_EventUpdateConeOpacity_Params
{
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventUpdateConeSize
struct ANewTurretBP_C_EventUpdateConeSize_Params
{
	float*                                             Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventDeployTurret
struct ANewTurretBP_C_EventDeployTurret_Params
{
};

// Function NewTurretBP.NewTurretBP_C.ReceiveTick
struct ANewTurretBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.EventTurretIsNowDeployed
struct ANewTurretBP_C_EventTurretIsNowDeployed_Params
{
};

// Function NewTurretBP.NewTurretBP_C.EventCraftableToolDestroyedDedicatedServer
struct ANewTurretBP_C_EventCraftableToolDestroyedDedicatedServer_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewTurretBP.NewTurretBP_C.ExecuteUbergraph_NewTurretBP
struct ANewTurretBP_C_ExecuteUbergraph_NewTurretBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
