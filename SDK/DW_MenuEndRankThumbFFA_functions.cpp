// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MenuEndRankThumbFFA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MenuEndRankThumbFFA.MenuEndRankThumbFFA_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuEndRankThumbFFA_C::Initialize(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuEndRankThumbFFA.MenuEndRankThumbFFA_C.Initialize");

	UMenuEndRankThumbFFA_C_Initialize_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
