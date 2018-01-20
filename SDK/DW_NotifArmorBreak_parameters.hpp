#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifArmorBreak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifArmorBreak.NotifArmorBreak_C.Initialize
struct UNotifArmorBreak_C_Initialize_Params
{
	EDarwinDamageTypeEnum                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifArmorBreak.NotifArmorBreak_C.Construct
struct UNotifArmorBreak_C_Construct_Params
{
};

// Function NotifArmorBreak.NotifArmorBreak_C.ExecuteUbergraph_NotifArmorBreak
struct UNotifArmorBreak_C_ExecuteUbergraph_NotifArmorBreak_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
