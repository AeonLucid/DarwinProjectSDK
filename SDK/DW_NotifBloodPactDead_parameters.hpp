#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactDead_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifBloodPactDead.NotifBloodPactDead_C.Initialize
struct UNotifBloodPactDead_C_Initialize_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifBloodPactDead.NotifBloodPactDead_C.Construct
struct UNotifBloodPactDead_C_Construct_Params
{
};

// Function NotifBloodPactDead.NotifBloodPactDead_C.ExecuteUbergraph_NotifBloodPactDead
struct UNotifBloodPactDead_C_ExecuteUbergraph_NotifBloodPactDead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
