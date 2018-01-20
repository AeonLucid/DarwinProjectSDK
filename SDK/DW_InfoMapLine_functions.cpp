// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InfoMapLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InfoMapLine.InfoMapLine_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InfoMapName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 InfoMapValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UInfoMapLine_C::Initialize(const struct FString& InfoMapName, const struct FString& InfoMapValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfoMapLine.InfoMapLine_C.Initialize");

	UInfoMapLine_C_Initialize_Params params;
	params.InfoMapName = InfoMapName;
	params.InfoMapValue = InfoMapValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
