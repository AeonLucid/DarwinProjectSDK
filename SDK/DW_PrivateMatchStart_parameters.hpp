#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PrivateMatchStart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrivateMatchStart.PrivateMatchStart_C.KeyBiding
struct UPrivateMatchStart_C_KeyBiding_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.SetupInputSource
struct UPrivateMatchStart_C_SetupInputSource_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventNumberOfPlayersUntilGameStarts
struct UPrivateMatchStart_C_EventNumberOfPlayersUntilGameStarts_Params
{
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventGameHasStarted
struct UPrivateMatchStart_C_EventGameHasStarted_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventInputSourceChanged
struct UPrivateMatchStart_C_EventInputSourceChanged_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventGameStartsNow
struct UPrivateMatchStart_C_EventGameStartsNow_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventIsPrivateMatchOwner
struct UPrivateMatchStart_C_EventIsPrivateMatchOwner_Params
{
	struct FString*                                    password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventPrivateMatchStarted
struct UPrivateMatchStart_C_EventPrivateMatchStarted_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.EventUpdatePrivateMatchTimer
struct UPrivateMatchStart_C_EventUpdatePrivateMatchTimer_Params
{
	struct FString*                                    timeUntilRestart;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PrivateMatchStart.PrivateMatchStart_C.Construct
struct UPrivateMatchStart_C_Construct_Params
{
};

// Function PrivateMatchStart.PrivateMatchStart_C.ExecuteUbergraph_PrivateMatchStart
struct UPrivateMatchStart_C_ExecuteUbergraph_PrivateMatchStart_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
