#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ManhuntDrone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ManhuntDrone.ManhuntDrone_C.UserConstructionScript
struct AManhuntDrone_C_UserConstructionScript_Params
{
};

// Function ManhuntDrone.ManhuntDrone_C.ReceiveBeginPlay
struct AManhuntDrone_C_ReceiveBeginPlay_Params
{
};

// Function ManhuntDrone.ManhuntDrone_C.ReceiveTick
struct AManhuntDrone_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManhuntDrone.ManhuntDrone_C.ExecuteUbergraph_ManhuntDrone
struct AManhuntDrone_C_ExecuteUbergraph_ManhuntDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
