#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_B_D_2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_D_2.B_D_1_C.UserConstructionScript
struct AB_D_1_C_UserConstructionScript_Params
{
};

// Function B_D_2.B_D_1_C.ReceiveTick
struct AB_D_1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_D_2.B_D_1_C.ExecuteUbergraph_B_D_2
struct AB_D_1_C_ExecuteUbergraph_B_D_2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
