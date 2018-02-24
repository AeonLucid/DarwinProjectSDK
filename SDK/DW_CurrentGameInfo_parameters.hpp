#pragma once

// Darwin Project (open_beta_2) SDK

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

// Function CurrentGameInfo.CurrentGameInfo_C.EventGameHasStarted
struct UCurrentGameInfo_C_EventGameHasStarted_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelClose
struct UCurrentGameInfo_C_EventCraftWheelClose_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventToggleSpeak
struct UCurrentGameInfo_C_EventToggleSpeak_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorJoined
struct UCurrentGameInfo_C_EventShowDirectorJoined_Params
{
	struct FString*                                    ShowDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventShowDirectorLeft
struct UCurrentGameInfo_C_EventShowDirectorLeft_Params
{
	struct FString*                                    ShowDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
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

// Function CurrentGameInfo.CurrentGameInfo_C.EventPlayerSpeakStart
struct UCurrentGameInfo_C_EventPlayerSpeakStart_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventPlayerSpeakEnd
struct UCurrentGameInfo_C_EventPlayerSpeakEnd_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventGameStartsNow
struct UCurrentGameInfo_C_EventGameStartsNow_Params
{
};

// Function CurrentGameInfo.CurrentGameInfo_C.EventCraftWheelOpen
struct UCurrentGameInfo_C_EventCraftWheelOpen_Params
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
