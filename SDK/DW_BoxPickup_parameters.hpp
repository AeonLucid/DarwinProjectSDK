#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BoxPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BoxPickup.BoxPickup_C.EventNewLoot
struct UBoxPickup_C_EventNewLoot_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoxPickup.BoxPickup_C.EventHealthPackConsumed
struct UBoxPickup_C_EventHealthPackConsumed_Params
{
	int*                                               healAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoxPickup.BoxPickup_C.EventStamPackConsumed
struct UBoxPickup_C_EventStamPackConsumed_Params
{
	int*                                               stamAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoxPickup.BoxPickup_C.EventWarmthPackConsumed
struct UBoxPickup_C_EventWarmthPackConsumed_Params
{
	int*                                               warmthAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoxPickup.BoxPickup_C.EventSpeedPackConsumed
struct UBoxPickup_C_EventSpeedPackConsumed_Params
{
	int*                                               speedBoostTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoxPickup.BoxPickup_C.Construct
struct UBoxPickup_C_Construct_Params
{
};

// Function BoxPickup.BoxPickup_C.EventKillVampireHeal
struct UBoxPickup_C_EventKillVampireHeal_Params
{
	float*                                             healAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoxPickup.BoxPickup_C.Trim
struct UBoxPickup_C_Trim_Params
{
};

// Function BoxPickup.BoxPickup_C.ExecuteUbergraph_BoxPickup
struct UBoxPickup_C_ExecuteUbergraph_BoxPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
