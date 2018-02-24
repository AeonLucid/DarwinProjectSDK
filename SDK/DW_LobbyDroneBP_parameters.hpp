#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyDroneBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyDroneBP.LobbyDroneBP_C.InitFromBPValues
struct ALobbyDroneBP_C_InitFromBPValues_Params
{
};

// Function LobbyDroneBP.LobbyDroneBP_C.GetDroneTransform
struct ALobbyDroneBP_C_GetDroneTransform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.GetRandIntInRange
struct ALobbyDroneBP_C_GetRandIntInRange_Params
{
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.GetRandRotator
struct ALobbyDroneBP_C_GetRandRotator_Params
{
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.GetRandFloatInRange
struct ALobbyDroneBP_C_GetRandFloatInRange_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Random;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.UserConstructionScript
struct ALobbyDroneBP_C_UserConstructionScript_Params
{
};

// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveDestroyed
struct ALobbyDroneBP_C_ReceiveDestroyed_Params
{
};

// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveTick
struct ALobbyDroneBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveBeginPlay
struct ALobbyDroneBP_C_ReceiveBeginPlay_Params
{
};

// Function LobbyDroneBP.LobbyDroneBP_C.EventHitted
struct ALobbyDroneBP_C_EventHitted_Params
{
	struct FVector*                                    hit_direction;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveHit
struct ALobbyDroneBP_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.explosion
struct ALobbyDroneBP_C_explosion_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneRelativeLocation
struct ALobbyDroneBP_C_EventUpdateDroneRelativeLocation_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneRelativeRotation
struct ALobbyDroneBP_C_EventUpdateDroneRelativeRotation_Params
{
	struct FRotator*                                   Rotation;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.EventSpawnTrail
struct ALobbyDroneBP_C_EventSpawnTrail_Params
{
	int*                                               drone_type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.CustomEvent
struct ALobbyDroneBP_C_CustomEvent_Params
{
	int                                                drone_type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.EventKillTrail
struct ALobbyDroneBP_C_EventKillTrail_Params
{
};

// Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneMaterial
struct ALobbyDroneBP_C_EventUpdateDroneMaterial_Params
{
	int*                                               MaterialIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDroneBP.LobbyDroneBP_C.ExecuteUbergraph_LobbyDroneBP
struct ALobbyDroneBP_C_ExecuteUbergraph_LobbyDroneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
