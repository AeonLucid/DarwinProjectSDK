#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotiFirstBlood_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotiFirstBlood.NotiFirstBlood_C.RemoveFromBox
struct UNotiFirstBlood_C_RemoveFromBox_Params
{
};

// Function NotiFirstBlood.NotiFirstBlood_C.Initialize
struct UNotiFirstBlood_C_Initialize_Params
{
	int                                                attackerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotiFirstBlood.NotiFirstBlood_C.Construct
struct UNotiFirstBlood_C_Construct_Params
{
};

// Function NotiFirstBlood.NotiFirstBlood_C.ExecuteUbergraph_NotiFirstBlood
struct UNotiFirstBlood_C_ExecuteUbergraph_NotiFirstBlood_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
