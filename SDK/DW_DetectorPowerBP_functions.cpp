// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DetectorPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DetectorPowerBP.DetectorPowerBP_C.EventDetectorPulse
// (Event, Public, BlueprintEvent)

void UDetectorPowerBP_C::EventDetectorPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function DetectorPowerBP.DetectorPowerBP_C.EventDetectorPulse");

	UDetectorPowerBP_C_EventDetectorPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DetectorPowerBP.DetectorPowerBP_C.ExecuteUbergraph_DetectorPowerBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDetectorPowerBP_C::ExecuteUbergraph_DetectorPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DetectorPowerBP.DetectorPowerBP_C.ExecuteUbergraph_DetectorPowerBP");

	UDetectorPowerBP_C_ExecuteUbergraph_DetectorPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
