// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PredatorPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PredatorPowerBP.PredatorPowerBP_C.EventPredatorPulse
// (Event, Public, BlueprintEvent)

void UPredatorPowerBP_C::EventPredatorPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredatorPowerBP.PredatorPowerBP_C.EventPredatorPulse");

	UPredatorPowerBP_C_EventPredatorPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PredatorPowerBP.PredatorPowerBP_C.ExecuteUbergraph_PredatorPowerBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPredatorPowerBP_C::ExecuteUbergraph_PredatorPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PredatorPowerBP.PredatorPowerBP_C.ExecuteUbergraph_PredatorPowerBP");

	UPredatorPowerBP_C_ExecuteUbergraph_PredatorPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
