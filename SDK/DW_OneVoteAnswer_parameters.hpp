#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_OneVoteAnswer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OneVoteAnswer.OneVoteAnswer_C.Initialize
struct UOneVoteAnswer_C_Initialize_Params
{
	class UDarwinPlayerVoteResultForUMG*               VoteResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TotalVoteCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OneVoteAnswer.OneVoteAnswer_C.ExecuteUbergraph_OneVoteAnswer
struct UOneVoteAnswer_C_ExecuteUbergraph_OneVoteAnswer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
