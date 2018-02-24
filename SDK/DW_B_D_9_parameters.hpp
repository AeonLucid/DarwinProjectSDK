#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_B_D_9_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_D_9.B_D_8_C.UserConstructionScript
struct AB_D_8_C_UserConstructionScript_Params
{
};

// Function B_D_9.B_D_8_C.ReceiveTick
struct AB_D_8_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_D_9.B_D_8_C.ReceiveBeginPlay
struct AB_D_8_C_ReceiveBeginPlay_Params
{
};

// Function B_D_9.B_D_8_C.ExecuteUbergraph_B_D_9
struct AB_D_8_C_ExecuteUbergraph_B_D_9_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
