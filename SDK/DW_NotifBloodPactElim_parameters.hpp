#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifBloodPactElim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifBloodPactElim.NotifBloodPactElim_C.Initialize
struct UNotifBloodPactElim_C_Initialize_Params
{
	int                                                PlayerOneID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTwoID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifBloodPactElim.NotifBloodPactElim_C.Construct
struct UNotifBloodPactElim_C_Construct_Params
{
};

// Function NotifBloodPactElim.NotifBloodPactElim_C.ExecuteUbergraph_NotifBloodPactElim
struct UNotifBloodPactElim_C_ExecuteUbergraph_NotifBloodPactElim_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
