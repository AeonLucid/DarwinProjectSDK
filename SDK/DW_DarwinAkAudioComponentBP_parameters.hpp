#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAkAudioComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterMainMenu
struct UDarwinAkAudioComponentBP_C_EventEnterMainMenu_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveMainMenu
struct UDarwinAkAudioComponentBP_C_EventLeaveMainMenu_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterLobby
struct UDarwinAkAudioComponentBP_C_EventEnterLobby_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveLobby
struct UDarwinAkAudioComponentBP_C_EventLeaveLobby_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterGameWorld
struct UDarwinAkAudioComponentBP_C_EventEnterGameWorld_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveGameWorld
struct UDarwinAkAudioComponentBP_C_EventLeaveGameWorld_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalStormIntensity
struct UDarwinAkAudioComponentBP_C_EventLocalStormIntensity_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventEnterSuddenDeath
struct UDarwinAkAudioComponentBP_C_EventEnterSuddenDeath_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLeaveSuddenDeath
struct UDarwinAkAudioComponentBP_C_EventLeaveSuddenDeath_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalTimeOfDay
struct UDarwinAkAudioComponentBP_C_EventLocalTimeOfDay_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Hours;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLocalStormSoundStart
struct UDarwinAkAudioComponentBP_C_EventLocalStormSoundStart_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventLoadSoundBank
struct UDarwinAkAudioComponentBP_C_EventLoadSoundBank_Params
{
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventGameIsAboutToStart
struct UDarwinAkAudioComponentBP_C_EventGameIsAboutToStart_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.EventGameIsAboutToStartCountdown
struct UDarwinAkAudioComponentBP_C_EventGameIsAboutToStartCountdown_Params
{
	int*                                               secondsLeft;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.CutOffLobbyMusic
struct UDarwinAkAudioComponentBP_C_CutOffLobbyMusic_Params
{
};

// Function DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C.ExecuteUbergraph_DarwinAkAudioComponentBP
struct UDarwinAkAudioComponentBP_C_ExecuteUbergraph_DarwinAkAudioComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
