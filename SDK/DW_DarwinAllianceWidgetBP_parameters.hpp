#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAllianceWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventAllianceStart
struct UDarwinAllianceWidgetBP_C_EventAllianceStart_Params
{
	int*                                               allyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventUpdatePlayerHealth
struct UDarwinAllianceWidgetBP_C_EventUpdatePlayerHealth_Params
{
	float*                                             healthNormalized;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventUpdatePlayerColdFactor
struct UDarwinAllianceWidgetBP_C_EventUpdatePlayerColdFactor_Params
{
	float*                                             coldFactorNormalized;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerAllianceBroken
struct UDarwinAllianceWidgetBP_C_EventPlayerAllianceBroken_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerCraftedPower
struct UDarwinAllianceWidgetBP_C_EventPlayerCraftedPower_Params
{
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.Tick
struct UDarwinAllianceWidgetBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactReviveNotification
struct UDarwinAllianceWidgetBP_C_EventBloodPactReviveNotification_Params
{
	int*                                               reviverUniqueID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactDeadNotification
struct UDarwinAllianceWidgetBP_C_EventBloodPactDeadNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventDamageNotification
struct UDarwinAllianceWidgetBP_C_EventDamageNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventPlayerIsDead
struct UDarwinAllianceWidgetBP_C_EventPlayerIsDead_Params
{
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              firstDeath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.EventBloodPactDeadHeartbeat
struct UDarwinAllianceWidgetBP_C_EventBloodPactDeadHeartbeat_Params
{
};

// Function DarwinAllianceWidgetBP.DarwinAllianceWidgetBP_C.ExecuteUbergraph_DarwinAllianceWidgetBP
struct UDarwinAllianceWidgetBP_C_ExecuteUbergraph_DarwinAllianceWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
