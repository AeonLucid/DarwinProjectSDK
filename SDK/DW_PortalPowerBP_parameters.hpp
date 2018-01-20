#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PortalPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PortalPowerBP.PortalPowerBP_C.EventDropMouth
struct UPortalPowerBP_C_EventDropMouth_Params
{
	struct FVector*                                    mouthLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PortalPowerBP.PortalPowerBP_C.EventDropExit
struct UPortalPowerBP_C_EventDropExit_Params
{
	struct FVector*                                    exitLoc;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PortalPowerBP.PortalPowerBP_C.EventStartTeleport
struct UPortalPowerBP_C_EventStartTeleport_Params
{
	struct FVector*                                    StartLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    EndLoc;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PortalPowerBP.PortalPowerBP_C.EventEndTeleport
struct UPortalPowerBP_C_EventEndTeleport_Params
{
	struct FVector*                                    StartLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    EndLoc;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PortalPowerBP.PortalPowerBP_C.ExecuteUbergraph_PortalPowerBP
struct UPortalPowerBP_C_ExecuteUbergraph_PortalPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
