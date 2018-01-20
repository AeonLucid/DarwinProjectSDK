// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ResultsAllVotes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResultsAllVotes.ResultsAllVotes_C.EventVoteStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           VoteDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum*           powerType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultsAllVotes_C::EventVoteStarted(int* VoteDuration, EDarwinItemTypeEnum* powerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultsAllVotes.ResultsAllVotes_C.EventVoteStarted");

	UResultsAllVotes_C_EventVoteStarted_Params params;
	params.VoteDuration = VoteDuration;
	params.powerType = powerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultsAllVotes.ResultsAllVotes_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultsAllVotes_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultsAllVotes.ResultsAllVotes_C.Tick");

	UResultsAllVotes_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultsAllVotes.ResultsAllVotes_C.EventVoteResultsReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          bVoteForPlayers                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalVoteCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDarwinVoteResultForUMG*>* VoteResults                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UResultsAllVotes_C::EventVoteResultsReceived(bool* bVoteForPlayers, int* TotalVoteCount, TArray<class UDarwinVoteResultForUMG*>* VoteResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultsAllVotes.ResultsAllVotes_C.EventVoteResultsReceived");

	UResultsAllVotes_C_EventVoteResultsReceived_Params params;
	params.bVoteForPlayers = bVoteForPlayers;
	params.TotalVoteCount = TotalVoteCount;
	params.VoteResults = VoteResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultsAllVotes.ResultsAllVotes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResultsAllVotes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultsAllVotes.ResultsAllVotes_C.Construct");

	UResultsAllVotes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultsAllVotes.ResultsAllVotes_C.ExecuteUbergraph_ResultsAllVotes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultsAllVotes_C::ExecuteUbergraph_ResultsAllVotes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultsAllVotes.ResultsAllVotes_C.ExecuteUbergraph_ResultsAllVotes");

	UResultsAllVotes_C_ExecuteUbergraph_ResultsAllVotes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
