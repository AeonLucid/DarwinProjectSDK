#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMainCharacterWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Kill All UI
struct UDarwinMainCharacterWidgetBP_C_Kill_All_UI_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotCraftInLobby
struct UDarwinMainCharacterWidgetBP_C_EventCannotCraftInLobby_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotUseItemInLobby
struct UDarwinMainCharacterWidgetBP_C_EventCannotUseItemInLobby_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventCannotSendAllyFlagInLobby
struct UDarwinMainCharacterWidgetBP_C_EventCannotSendAllyFlagInLobby_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.ShowMainWidget
struct UDarwinMainCharacterWidgetBP_C_ShowMainWidget_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Next on End Game
struct UDarwinMainCharacterWidgetBP_C_Next_on_End_Game_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInventoryActionFail
struct UDarwinMainCharacterWidgetBP_C_EventInventoryActionFail_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventHitBigTree
struct UDarwinMainCharacterWidgetBP_C_EventHitBigTree_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventHitAlly
struct UDarwinMainCharacterWidgetBP_C_EventHitAlly_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventSuddenDeathStartsNow
struct UDarwinMainCharacterWidgetBP_C_EventSuddenDeathStartsNow_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventNumberOfGamesPlayed
struct UDarwinMainCharacterWidgetBP_C_EventNumberOfGamesPlayed_Params
{
	int*                                               nbGamesPlayed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Construct
struct UDarwinMainCharacterWidgetBP_C_Construct_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventBloodPactDeadNotification
struct UDarwinMainCharacterWidgetBP_C_EventBloodPactDeadNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventBloodPactReviveNotification
struct UDarwinMainCharacterWidgetBP_C_EventBloodPactReviveNotification_Params
{
	int*                                               reviverUniqueID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.Tick
struct UDarwinMainCharacterWidgetBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.HideMainWidget
struct UDarwinMainCharacterWidgetBP_C_HideMainWidget_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInAirEnd
struct UDarwinMainCharacterWidgetBP_C_EventInAirEnd_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventInAirStart
struct UDarwinMainCharacterWidgetBP_C_EventInAirStart_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventIsDead
struct UDarwinMainCharacterWidgetBP_C_EventIsDead_Params
{
	int*                                               PodiumRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              firstDeath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventPlayerIsWinner
struct UDarwinMainCharacterWidgetBP_C_EventPlayerIsWinner_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBloodPactActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               allyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventTeleportAimEnd
struct UDarwinMainCharacterWidgetBP_C_EventTeleportAimEnd_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventTeleportAimStart
struct UDarwinMainCharacterWidgetBP_C_EventTeleportAimStart_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventGameStartsNow
struct UDarwinMainCharacterWidgetBP_C_EventGameStartsNow_Params
{
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.EventDeathNotification
struct UDarwinMainCharacterWidgetBP_C_EventDeathNotification_Params
{
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nbPlayersLeft;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               attackerUniqueID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               victimUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFirstBlood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMainCharacterWidgetBP.DarwinMainCharacterWidgetBP_C.ExecuteUbergraph_DarwinMainCharacterWidgetBP
struct UDarwinMainCharacterWidgetBP_C_ExecuteUbergraph_DarwinMainCharacterWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
