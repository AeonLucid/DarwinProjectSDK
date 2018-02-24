#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewWardBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewWardBP.NewWardBP_C.UserConstructionScript
struct ANewWardBP_C_UserConstructionScript_Params
{
};

// Function NewWardBP.NewWardBP_C.EventCraftableToolDestroyed
struct ANewWardBP_C_EventCraftableToolDestroyed_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewWardBP.NewWardBP_C.EventInitializeMeshArray
struct ANewWardBP_C_EventInitializeMeshArray_Params
{
};

// Function NewWardBP.NewWardBP_C.EventWardPing
struct ANewWardBP_C_EventWardPing_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NewWardBP.NewWardBP_C.ExecuteUbergraph_NewWardBP
struct ANewWardBP_C_ExecuteUbergraph_NewWardBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
