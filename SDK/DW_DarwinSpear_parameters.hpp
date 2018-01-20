#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinSpear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinSpear.DarwinSpear_C.UserConstructionScript
struct ADarwinSpear_C_UserConstructionScript_Params
{
};

// Function DarwinSpear.DarwinSpear_C.EventHitStaticMesh
struct ADarwinSpear_C_EventHitStaticMesh_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.ReceiveBeginPlay
struct ADarwinSpear_C_ReceiveBeginPlay_Params
{
};

// Function DarwinSpear.DarwinSpear_C.EventReflectedByForcefield
struct ADarwinSpear_C_EventReflectedByForcefield_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventEmitVisualSoundFX
struct ADarwinSpear_C_EventEmitVisualSoundFX_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.ReceiveEndPlay
struct ADarwinSpear_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventUpdateLightIntensity
struct ADarwinSpear_C_EventUpdateLightIntensity_Params
{
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventImpactExplosion
struct ADarwinSpear_C_EventImpactExplosion_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventEmitHitFX
struct ADarwinSpear_C_EventEmitHitFX_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventSpawnImpactDecal
struct ADarwinSpear_C_EventSpawnImpactDecal_Params
{
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventImpactBlood
struct ADarwinSpear_C_EventImpactBlood_Params
{
	class AActor**                                     hit_actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventEmitToonFX
struct ADarwinSpear_C_EventEmitToonFX_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.EventEmitXplosionFX
struct ADarwinSpear_C_EventEmitXplosionFX_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinSpear.DarwinSpear_C.ExecuteUbergraph_DarwinSpear
struct ADarwinSpear_C_ExecuteUbergraph_DarwinSpear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
