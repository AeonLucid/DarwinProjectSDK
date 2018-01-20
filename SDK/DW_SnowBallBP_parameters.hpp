#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SnowBallBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SnowBallBP.SnowBallBP_C.UserConstructionScript
struct ASnowBallBP_C_UserConstructionScript_Params
{
};

// Function SnowBallBP.SnowBallBP_C.EventGrenadeExplode
struct ASnowBallBP_C_EventGrenadeExplode_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SnowBallBP.SnowBallBP_C.EventReflectedByForcefield
struct ASnowBallBP_C_EventReflectedByForcefield_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SnowBallBP.SnowBallBP_C.EventHitByAxe
struct ASnowBallBP_C_EventHitByAxe_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SnowBallBP.SnowBallBP_C.ExecuteUbergraph_SnowBallBP
struct ASnowBallBP_C_ExecuteUbergraph_SnowBallBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
