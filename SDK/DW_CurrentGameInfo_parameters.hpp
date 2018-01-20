#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CurrentGameInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CurrentGameInfo.CurrentGameInfo_C.Key Binding
struct UCurrentGameInfo_C_Key_Binding_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateNumberOfPlayersLeftAlive
struct UCurrentGameInfo_C_EventUpdateNumberOfPlayersLeftAlive_Params
{
	int*                                               numberAlive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGameStartsNow
struct UCurrentGameInfo_C_EventGameStartsNow_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelOpen
struct UCurrentGameInfo_C_EventCraftWheelOpen_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateNumberOfPlayersAtGameStart
struct UCurrentGameInfo_C_EventUpdateNumberOfPlayersAtGameStart_Params
{
	int*                                               numberAtGameStart;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGameHasStarted
struct UCurrentGameInfo_C_EventGameHasStarted_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventSuddenDeathStartsNow
struct UCurrentGameInfo_C_EventSuddenDeathStartsNow_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastCountdownInitiated
struct UCurrentGameInfo_C_EventNuclearBlastCountdownInitiated_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastEnded
struct UCurrentGameInfo_C_EventNuclearBlastEnded_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastStarted
struct UCurrentGameInfo_C_EventNuclearBlastStarted_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventNuclearBlastUpdateCountdown
struct UCurrentGameInfo_C_EventNuclearBlastUpdateCountdown_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               timeLeftInteger;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateGameTime
struct UCurrentGameInfo_C_EventUpdateGameTime_Params
{
	struct FString*                                    gameTimeStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelClose
struct UCurrentGameInfo_C_EventCraftWheelClose_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventUpdateManHuntInfo
struct UCurrentGameInfo_C_EventUpdateManHuntInfo_Params
{
	struct FString*                                    Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventManHuntEnd
struct UCurrentGameInfo_C_EventManHuntEnd_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               killerCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventManHuntStart
struct UCurrentGameInfo_C_EventManHuntStart_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormStarted
struct UCurrentGameInfo_C_EventGravStormStarted_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormUpdateCountdown
struct UCurrentGameInfo_C_EventGravStormUpdateCountdown_Params
{
	struct FString*                                    timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormEnded
struct UCurrentGameInfo_C_EventGravStormEnded_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGravStormUpdateProgress
struct UCurrentGameInfo_C_EventGravStormUpdateProgress_Params
{
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventEndFollowedByShowDirector
struct UCurrentGameInfo_C_EventEndFollowedByShowDirector_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventToggleSpeak
struct UCurrentGameInfo_C_EventToggleSpeak_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventStartFollowedByShowDirector
struct UCurrentGameInfo_C_EventStartFollowedByShowDirector_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorJoined
struct UCurrentGameInfo_C_EventShowDirectorJoined_Params
{
	struct FString*                                    showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorLeft
struct UCurrentGameInfo_C_EventShowDirectorLeft_Params
{
	struct FString*                                    showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventInputSourceChanged
struct UCurrentGameInfo_C_EventInputSourceChanged_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.Construct
struct UCurrentGameInfo_C_Construct_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventInputRebindSucceeded
struct UCurrentGameInfo_C_EventInputRebindSucceeded_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText*                                      NewKeyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventInputResetToDefault
struct UCurrentGameInfo_C_EventInputResetToDefault_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.ExecuteUbergraph_CurrentGameInfo
struct UCurrentGameInfo_C_ExecuteUbergraph_CurrentGameInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
