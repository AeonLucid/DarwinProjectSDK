#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SlowGrenadeBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SlowGrenadeBP.SlowGrenadeBP_C.UserConstructionScript
struct ASlowGrenadeBP_C_UserConstructionScript_Params
{
};

// Function SlowGrenadeBP.SlowGrenadeBP_C.EventGrenadeExplode
struct ASlowGrenadeBP_C_EventGrenadeExplode_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SlowGrenadeBP.SlowGrenadeBP_C.EventReflectedByForcefield
struct ASlowGrenadeBP_C_EventReflectedByForcefield_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SlowGrenadeBP.SlowGrenadeBP_C.EventHitByAxe
struct ASlowGrenadeBP_C_EventHitByAxe_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SlowGrenadeBP.SlowGrenadeBP_C.ExecuteUbergraph_SlowGrenadeBP
struct ASlowGrenadeBP_C_ExecuteUbergraph_SlowGrenadeBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
