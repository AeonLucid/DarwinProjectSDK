#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BirdsBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BirdsBP.BirdsBP_C.UserConstructionScript
struct ABirdsBP_C_UserConstructionScript_Params
{
};

// Function BirdsBP.BirdsBP_C.ReceiveTick
struct ABirdsBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BirdsBP.BirdsBP_C.ExecuteUbergraph_BirdsBP
struct ABirdsBP_C_ExecuteUbergraph_BirdsBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
