// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ArtemisCustomizationBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArtemisCustomizationBP.ArtemisCustomizationBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AArtemisCustomizationBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtemisCustomizationBP.ArtemisCustomizationBP_C.UserConstructionScript");

	AArtemisCustomizationBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
