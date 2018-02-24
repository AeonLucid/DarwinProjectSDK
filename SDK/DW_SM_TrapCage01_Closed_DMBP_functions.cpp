// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SM_TrapCage01_Closed_DMBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_TrapCage01_Closed_DMBP.SM_TrapCage01_Closed_DMBP_C.FireImpulse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASM_TrapCage01_Closed_DMBP_C::FireImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_TrapCage01_Closed_DMBP.SM_TrapCage01_Closed_DMBP_C.FireImpulse");

	ASM_TrapCage01_Closed_DMBP_C_FireImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SM_TrapCage01_Closed_DMBP.SM_TrapCage01_Closed_DMBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASM_TrapCage01_Closed_DMBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_TrapCage01_Closed_DMBP.SM_TrapCage01_Closed_DMBP_C.UserConstructionScript");

	ASM_TrapCage01_Closed_DMBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
