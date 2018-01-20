#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifDamage.NotifDamage_C.Initialize
struct UNotifDamage_C_Initialize_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                attackerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifDamage.NotifDamage_C.Construct
struct UNotifDamage_C_Construct_Params
{
};

// Function NotifDamage.NotifDamage_C.ResetTimer
struct UNotifDamage_C_ResetTimer_Params
{
};

// Function NotifDamage.NotifDamage_C.RemoveFromBox
struct UNotifDamage_C_RemoveFromBox_Params
{
};

// Function NotifDamage.NotifDamage_C.PlayColdAnim
struct UNotifDamage_C_PlayColdAnim_Params
{
};

// Function NotifDamage.NotifDamage_C.ExecuteUbergraph_NotifDamage
struct UNotifDamage_C_ExecuteUbergraph_NotifDamage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
