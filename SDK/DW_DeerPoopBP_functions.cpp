// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DeerPoopBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeerPoopBP.DeerPoopBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeerPoopBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeerPoopBP.DeerPoopBP_C.UserConstructionScript");

	ADeerPoopBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
