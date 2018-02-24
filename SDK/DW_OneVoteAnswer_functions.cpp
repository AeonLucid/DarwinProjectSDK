// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_OneVoteAnswer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OneVoteAnswer.OneVoteAnswer_C.Initialize
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDarwinPlayerVoteResultForUMG* VoteResult                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            TotalVoteCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOneVoteAnswer_C::Initialize(class UDarwinPlayerVoteResultForUMG* VoteResult, int TotalVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneVoteAnswer.OneVoteAnswer_C.Initialize");

	UOneVoteAnswer_C_Initialize_Params params;
	params.VoteResult = VoteResult;
	params.TotalVoteCount = TotalVoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OneVoteAnswer.OneVoteAnswer_C.ExecuteUbergraph_OneVoteAnswer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOneVoteAnswer_C::ExecuteUbergraph_OneVoteAnswer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneVoteAnswer.OneVoteAnswer_C.ExecuteUbergraph_OneVoteAnswer");

	UOneVoteAnswer_C_ExecuteUbergraph_OneVoteAnswer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
