#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_OneZoneAnswer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OneZoneAnswer.OneZoneAnswer_C.Reset
struct UOneZoneAnswer_C_Reset_Params
{
};

// Function OneZoneAnswer.OneZoneAnswer_C.SetResult
struct UOneZoneAnswer_C_SetResult_Params
{
	float                                              VotePercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OneZoneAnswer.OneZoneAnswer_C.SetAlreadyForbidden
struct UOneZoneAnswer_C_SetAlreadyForbidden_Params
{
};

// Function OneZoneAnswer.OneZoneAnswer_C.Initialize
struct UOneZoneAnswer_C_Initialize_Params
{
	bool                                               IsWinner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forbidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Vote_Percent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OneZoneAnswer.OneZoneAnswer_C.Tick
struct UOneZoneAnswer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OneZoneAnswer.OneZoneAnswer_C.ExecuteUbergraph_OneZoneAnswer
struct UOneZoneAnswer_C_ExecuteUbergraph_OneZoneAnswer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
