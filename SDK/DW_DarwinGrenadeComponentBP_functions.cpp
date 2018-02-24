// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGrenadeComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinGrenadeComponentBP.DarwinGrenadeComponentBP_C.EventThrowFail
// (Event, Public, BlueprintEvent)

void UDarwinGrenadeComponentBP_C::EventThrowFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGrenadeComponentBP.DarwinGrenadeComponentBP_C.EventThrowFail");

	UDarwinGrenadeComponentBP_C_EventThrowFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGrenadeComponentBP.DarwinGrenadeComponentBP_C.ExecuteUbergraph_DarwinGrenadeComponentBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinGrenadeComponentBP_C::ExecuteUbergraph_DarwinGrenadeComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGrenadeComponentBP.DarwinGrenadeComponentBP_C.ExecuteUbergraph_DarwinGrenadeComponentBP");

	UDarwinGrenadeComponentBP_C_ExecuteUbergraph_DarwinGrenadeComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
