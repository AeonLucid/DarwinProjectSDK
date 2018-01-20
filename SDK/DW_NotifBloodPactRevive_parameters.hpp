#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactRevive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifBloodPactRevive.NotifBloodPactRevive_C.Initialize
struct UNotifBloodPactRevive_C_Initialize_Params
{
	int                                                ReviverID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifBloodPactRevive.NotifBloodPactRevive_C.Construct
struct UNotifBloodPactRevive_C_Construct_Params
{
};

// Function NotifBloodPactRevive.NotifBloodPactRevive_C.ExecuteUbergraph_NotifBloodPactRevive
struct UNotifBloodPactRevive_C_ExecuteUbergraph_NotifBloodPactRevive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
