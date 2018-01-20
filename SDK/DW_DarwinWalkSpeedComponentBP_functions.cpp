// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinWalkSpeedComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.EventFootPrintSpeedBoost
// (Event, Public, BlueprintEvent)

void UDarwinWalkSpeedComponentBP_C::EventFootPrintSpeedBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.EventFootPrintSpeedBoost");

	UDarwinWalkSpeedComponentBP_C_EventFootPrintSpeedBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.EventStartSprint
// (Event, Public, BlueprintEvent)

void UDarwinWalkSpeedComponentBP_C::EventStartSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.EventStartSprint");

	UDarwinWalkSpeedComponentBP_C_EventStartSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.EventStopSprint
// (Event, Public, BlueprintEvent)

void UDarwinWalkSpeedComponentBP_C::EventStopSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.EventStopSprint");

	UDarwinWalkSpeedComponentBP_C_EventStopSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.ExecuteUbergraph_DarwinWalkSpeedComponentBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinWalkSpeedComponentBP_C::ExecuteUbergraph_DarwinWalkSpeedComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinWalkSpeedComponentBP.DarwinWalkSpeedComponentBP_C.ExecuteUbergraph_DarwinWalkSpeedComponentBP");

	UDarwinWalkSpeedComponentBP_C_ExecuteUbergraph_DarwinWalkSpeedComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
