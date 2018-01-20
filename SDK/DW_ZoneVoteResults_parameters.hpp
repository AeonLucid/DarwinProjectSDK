#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ZoneVoteResults_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZoneVoteResults.ZoneVoteResults_C.GetZoneAnwser
struct UZoneVoteResults_C_GetZoneAnwser_Params
{
	EDarwinZone                                        Zone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOneZoneAnswer_C*                            ZoneAnwser;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZoneVoteResults.ZoneVoteResults_C.Initialize
struct UZoneVoteResults_C_Initialize_Params
{
	int                                                TotalVoteCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDarwinVoteResultForUMG*>             VoteResults;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ZoneVoteResults.ZoneVoteResults_C.ExecuteUbergraph_ZoneVoteResults
struct UZoneVoteResults_C_ExecuteUbergraph_ZoneVoteResults_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
