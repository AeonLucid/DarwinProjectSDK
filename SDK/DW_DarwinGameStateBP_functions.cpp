// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGameStateBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinGameStateBP.DarwinGameStateBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinGameStateBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateBP.DarwinGameStateBP_C.UserConstructionScript");

	ADarwinGameStateBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateBP.DarwinGameStateBP_C.EventGravityStormStart
// (Event, Public, BlueprintEvent)

void ADarwinGameStateBP_C::EventGravityStormStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateBP.DarwinGameStateBP_C.EventGravityStormStart");

	ADarwinGameStateBP_C_EventGravityStormStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateBP.DarwinGameStateBP_C.EventGravityStormEnd
// (Event, Public, BlueprintEvent)

void ADarwinGameStateBP_C::EventGravityStormEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateBP.DarwinGameStateBP_C.EventGravityStormEnd");

	ADarwinGameStateBP_C_EventGravityStormEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateBP.DarwinGameStateBP_C.EventGameStarted
// (Event, Public, BlueprintEvent)

void ADarwinGameStateBP_C::EventGameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateBP.DarwinGameStateBP_C.EventGameStarted");

	ADarwinGameStateBP_C_EventGameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGameStateBP.DarwinGameStateBP_C.ExecuteUbergraph_DarwinGameStateBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinGameStateBP_C::ExecuteUbergraph_DarwinGameStateBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGameStateBP.DarwinGameStateBP_C.ExecuteUbergraph_DarwinGameStateBP");

	ADarwinGameStateBP_C_ExecuteUbergraph_DarwinGameStateBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
