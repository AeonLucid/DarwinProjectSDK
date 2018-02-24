#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MagWallBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MagWallBP.MagWallBP_C.UserConstructionScript
struct AMagWallBP_C_UserConstructionScript_Params
{
};

// Function MagWallBP.MagWallBP_C.ReceiveBeginPlay
struct AMagWallBP_C_ReceiveBeginPlay_Params
{
};

// Function MagWallBP.MagWallBP_C.ReceiveTick
struct AMagWallBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagWallBP.MagWallBP_C.ExecuteUbergraph_MagWallBP
struct AMagWallBP_C_ExecuteUbergraph_MagWallBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
