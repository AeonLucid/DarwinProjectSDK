#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AutoKam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AutoKam.AutoKam_C.UserConstructionScript
struct AAutoKam_C_UserConstructionScript_Params
{
};

// Function AutoKam.AutoKam_C.EventUpdateRot
struct AAutoKam_C_EventUpdateRot_Params
{
	struct FRotator*                                   rot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AutoKam.AutoKam_C.ExecuteUbergraph_AutoKam
struct AAutoKam_C_ExecuteUbergraph_AutoKam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
