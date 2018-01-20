// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ZoneVoteResults_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZoneVoteResults.ZoneVoteResults_C.GetZoneAnwser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDarwinZone                    Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOneZoneAnswer_C*        ZoneAnwser                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UZoneVoteResults_C::GetZoneAnwser(EDarwinZone Zone, class UOneZoneAnswer_C** ZoneAnwser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneVoteResults.ZoneVoteResults_C.GetZoneAnwser");

	UZoneVoteResults_C_GetZoneAnwser_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZoneAnwser != nullptr)
		*ZoneAnwser = params.ZoneAnwser;
}


// Function ZoneVoteResults.ZoneVoteResults_C.Initialize
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TotalVoteCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UDarwinVoteResultForUMG*> VoteResults                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UZoneVoteResults_C::Initialize(int TotalVoteCount, TArray<class UDarwinVoteResultForUMG*> VoteResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneVoteResults.ZoneVoteResults_C.Initialize");

	UZoneVoteResults_C_Initialize_Params params;
	params.TotalVoteCount = TotalVoteCount;
	params.VoteResults = VoteResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZoneVoteResults.ZoneVoteResults_C.ExecuteUbergraph_ZoneVoteResults
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UZoneVoteResults_C::ExecuteUbergraph_ZoneVoteResults(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZoneVoteResults.ZoneVoteResults_C.ExecuteUbergraph_ZoneVoteResults");

	UZoneVoteResults_C_ExecuteUbergraph_ZoneVoteResults_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
