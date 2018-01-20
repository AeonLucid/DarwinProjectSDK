#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ConcussionGrenadeBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.UserConstructionScript
struct AConcussionGrenadeBP_C_UserConstructionScript_Params
{
};

// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventGrenadeExplode
struct AConcussionGrenadeBP_C_EventGrenadeExplode_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventReflectedByForcefield
struct AConcussionGrenadeBP_C_EventReflectedByForcefield_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.EventHitByAxe
struct AConcussionGrenadeBP_C_EventHitByAxe_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConcussionGrenadeBP.ConcussionGrenadeBP_C.ExecuteUbergraph_ConcussionGrenadeBP
struct AConcussionGrenadeBP_C_ExecuteUbergraph_ConcussionGrenadeBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
