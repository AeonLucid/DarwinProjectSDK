#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifAllianceBroken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifAllianceBroken.NotifAllianceBroken_C.Initialize
struct UNotifAllianceBroken_C_Initialize_Params
{
	int                                                PlayerOneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTwoID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifAllianceBroken.NotifAllianceBroken_C.Construct
struct UNotifAllianceBroken_C_Construct_Params
{
};

// Function NotifAllianceBroken.NotifAllianceBroken_C.ExecuteUbergraph_NotifAllianceBroken
struct UNotifAllianceBroken_C_ExecuteUbergraph_NotifAllianceBroken_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
