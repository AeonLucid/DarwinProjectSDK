#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RamboBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RamboBP.RamboBP_C.UserConstructionScript
struct ARamboBP_C_UserConstructionScript_Params
{
};

// Function RamboBP.RamboBP_C.EventSmokeUp
struct ARamboBP_C_EventSmokeUp_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RamboBP.RamboBP_C.EventSmokeDown
struct ARamboBP_C_EventSmokeDown_Params
{
};

// Function RamboBP.RamboBP_C.ReceiveTick
struct ARamboBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RamboBP.RamboBP_C.ReceiveDestroyed
struct ARamboBP_C_ReceiveDestroyed_Params
{
};

// Function RamboBP.RamboBP_C.ExecuteUbergraph_RamboBP
struct ARamboBP_C_ExecuteUbergraph_RamboBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
