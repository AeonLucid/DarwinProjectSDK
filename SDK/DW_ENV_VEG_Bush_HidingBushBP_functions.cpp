// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ENV_VEG_Bush_HidingBushBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENV_VEG_Bush_HidingBushBP.ENV_VEG_Bush_HidingBushBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AENV_VEG_Bush_HidingBushBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENV_VEG_Bush_HidingBushBP.ENV_VEG_Bush_HidingBushBP_C.UserConstructionScript");

	AENV_VEG_Bush_HidingBushBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
