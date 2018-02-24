#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_GameLogBoxCenter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventDamageNotification
struct UGameLogBoxCenter_C_EventDamageNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventDeathNotification
struct UGameLogBoxCenter_C_EventDeathNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nbPlayersLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFirstBlood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventArmorBreakNotification
struct UGameLogBoxCenter_C_EventArmorBreakNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventPlayerAllianceFormed
struct UGameLogBoxCenter_C_EventPlayerAllianceFormed_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBloodPact;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventPlayerAllianceBroken
struct UGameLogBoxCenter_C_EventPlayerAllianceBroken_Params
{
	int*                                               firstPlayerID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               secondPlayerID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventPylonJustActivated
struct UGameLogBoxCenter_C_EventPylonJustActivated_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventNewClueInfo
struct UGameLogBoxCenter_C_EventNewClueInfo_Params
{
	struct FString*                                    Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EDarwinItemTypeEnum*                               clueType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.Construct
struct UGameLogBoxCenter_C_Construct_Params
{
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.Trim
struct UGameLogBoxCenter_C_Trim_Params
{
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventZoneNowForbidden
struct UGameLogBoxCenter_C_EventZoneNowForbidden_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventZoneSoonForbidden
struct UGameLogBoxCenter_C_EventZoneSoonForbidden_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventNuclearBlastCountdownInitiated
struct UGameLogBoxCenter_C_EventNuclearBlastCountdownInitiated_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventNuclearBlastStarted
struct UGameLogBoxCenter_C_EventNuclearBlastStarted_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventCraftableToolSprungNotification
struct UGameLogBoxCenter_C_EventCraftableToolSprungNotification_Params
{
	EDarwinItemTypeEnum*                               ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventFirstBlood
struct UGameLogBoxCenter_C_EventFirstBlood_Params
{
	int*                                               attackerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum*                             dmgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactDeadNotification
struct UGameLogBoxCenter_C_EventBloodPactDeadNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactReviveNotification
struct UGameLogBoxCenter_C_EventBloodPactReviveNotification_Params
{
	int*                                               reviverUniqueID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.EventBloodPactDuoEleminated
struct UGameLogBoxCenter_C_EventBloodPactDuoEleminated_Params
{
	int*                                               player1ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               player2ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameLogBoxCenter.GameLogBoxCenter_C.ExecuteUbergraph_GameLogBoxCenter
struct UGameLogBoxCenter_C_ExecuteUbergraph_GameLogBoxCenter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
