#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_KillOrBreakArmor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KillOrBreakArmor.KillOrBreakArmor_C.EventDamageNotification
struct UKillOrBreakArmor_C_EventDamageNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOrBreakArmor.KillOrBreakArmor_C.EventPlayerAllianceBroken
struct UKillOrBreakArmor_C_EventPlayerAllianceBroken_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOrBreakArmor.KillOrBreakArmor_C.Tick
struct UKillOrBreakArmor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOrBreakArmor.KillOrBreakArmor_C.EventPlayerAllianceFormed
struct UKillOrBreakArmor_C_EventPlayerAllianceFormed_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBloodPact;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOrBreakArmor.KillOrBreakArmor_C.EventDeathNotification
struct UKillOrBreakArmor_C_EventDeathNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nbPlayersLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFirstBlood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOrBreakArmor.KillOrBreakArmor_C.EventArmorBreakNotification
struct UKillOrBreakArmor_C_EventArmorBreakNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillOrBreakArmor.KillOrBreakArmor_C.ExecuteUbergraph_KillOrBreakArmor
struct UKillOrBreakArmor_C_ExecuteUbergraph_KillOrBreakArmor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
