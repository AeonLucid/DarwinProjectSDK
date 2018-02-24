#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ResultsAllVotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ResultsAllVotes.ResultsAllVotes_C.EventVoteStarted
struct UResultsAllVotes_C_EventVoteStarted_Params
{
	int*                                               VoteDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultsAllVotes.ResultsAllVotes_C.Tick
struct UResultsAllVotes_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResultsAllVotes.ResultsAllVotes_C.EventVoteResultsReceived
struct UResultsAllVotes_C_EventVoteResultsReceived_Params
{
	bool*                                              bVoteForPlayers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TotalVoteCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UDarwinVoteResultForUMG*>*            voteResults;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ResultsAllVotes.ResultsAllVotes_C.Construct
struct UResultsAllVotes_C_Construct_Params
{
};

// Function ResultsAllVotes.ResultsAllVotes_C.ExecuteUbergraph_ResultsAllVotes
struct UResultsAllVotes_C_ExecuteUbergraph_ResultsAllVotes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
