// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewDeerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewDeerBP.NewDeerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewDeerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewDeerBP.NewDeerBP_C.UserConstructionScript");

	ANewDeerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
