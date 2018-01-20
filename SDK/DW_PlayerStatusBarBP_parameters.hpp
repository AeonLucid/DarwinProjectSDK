#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerStatusBarBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventPlayerJoinedGame
struct UPlayerStatusBarBP_C_EventPlayerJoinedGame_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    playerName12;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventEnterCamStateCharacter
struct UPlayerStatusBarBP_C_EventEnterCamStateCharacter_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventLeaveCamStateCharacter
struct UPlayerStatusBarBP_C_EventLeaveCamStateCharacter_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.Tick
struct UPlayerStatusBarBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.OpenChoosePlayerInterface
struct UPlayerStatusBarBP_C_OpenChoosePlayerInterface_Params
{
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.CloseChoosePlayerInterface
struct UPlayerStatusBarBP_C_CloseChoosePlayerInterface_Params
{
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventShowDirectorLeft
struct UPlayerStatusBarBP_C_EventShowDirectorLeft_Params
{
	struct FString*                                    showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.EventShowDirectorJoined
struct UPlayerStatusBarBP_C_EventShowDirectorJoined_Params
{
	struct FString*                                    showDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerStatusBarBP.PlayerStatusBarBP_C.ExecuteUbergraph_PlayerStatusBarBP
struct UPlayerStatusBarBP_C_ExecuteUbergraph_PlayerStatusBarBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
