#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapGameInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniMapGameInfo.MiniMapGameInfo_C.EventUpdateNumberOfPlayersLeftAlive
struct UMiniMapGameInfo_C_EventUpdateNumberOfPlayersLeftAlive_Params
{
	int*                                               numberAlive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapGameInfo.MiniMapGameInfo_C.EventUpdateNumberOfKills
struct UMiniMapGameInfo_C_EventUpdateNumberOfKills_Params
{
	int*                                               nbOfKills;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapGameInfo.MiniMapGameInfo_C.ExecuteUbergraph_MiniMapGameInfo
struct UMiniMapGameInfo_C_ExecuteUbergraph_MiniMapGameInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
