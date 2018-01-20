// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuEndRankThumbBloodPact_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MenuEndRankThumbBloodPact.MenuEndRankThumbBloodPact_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            allyID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuEndRankThumbBloodPact_C::Initialize(int PlayerId, int allyID, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndRankThumbBloodPact.MenuEndRankThumbBloodPact_C.Initialize");

	UMenuEndRankThumbBloodPact_C_Initialize_Params params;
	params.PlayerId = PlayerId;
	params.allyID = allyID;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
