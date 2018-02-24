#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifAllianceFormed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifAllianceFormed.NotifAllianceFormed_C.Initialize
struct UNotifAllianceFormed_C_Initialize_Params
{
	int                                                PlayerOneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTwoID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifAllianceFormed.NotifAllianceFormed_C.Construct
struct UNotifAllianceFormed_C_Construct_Params
{
};

// Function NotifAllianceFormed.NotifAllianceFormed_C.ExecuteUbergraph_NotifAllianceFormed
struct UNotifAllianceFormed_C_ExecuteUbergraph_NotifAllianceFormed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
