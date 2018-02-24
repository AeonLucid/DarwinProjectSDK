// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LeaderboardLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeaderboardLine.LeaderboardLine_C.ShowXboxProfile
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaderboardLine_C::ShowXboxProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardLine.LeaderboardLine_C.ShowXboxProfile");

	ULeaderboardLine_C_ShowXboxProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
