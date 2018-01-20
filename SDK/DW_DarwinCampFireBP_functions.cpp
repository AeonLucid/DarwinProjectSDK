// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCampFireBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCampFireBP.DarwinCampFireBP_C.InitializeAllParticleSystems
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinCampFireBP_C::InitializeAllParticleSystems()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCampFireBP.DarwinCampFireBP_C.InitializeAllParticleSystems");

	ADarwinCampFireBP_C_InitializeAllParticleSystems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCampFireBP.DarwinCampFireBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinCampFireBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCampFireBP.DarwinCampFireBP_C.UserConstructionScript");

	ADarwinCampFireBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCampFireBP.DarwinCampFireBP_C.EventFireEnded
// (Event, Public, BlueprintEvent)

void ADarwinCampFireBP_C::EventFireEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCampFireBP.DarwinCampFireBP_C.EventFireEnded");

	ADarwinCampFireBP_C_EventFireEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCampFireBP.DarwinCampFireBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinCampFireBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCampFireBP.DarwinCampFireBP_C.ReceiveBeginPlay");

	ADarwinCampFireBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCampFireBP.DarwinCampFireBP_C.ExecuteUbergraph_DarwinCampFireBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinCampFireBP_C::ExecuteUbergraph_DarwinCampFireBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCampFireBP.DarwinCampFireBP_C.ExecuteUbergraph_DarwinCampFireBP");

	ADarwinCampFireBP_C_ExecuteUbergraph_DarwinCampFireBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
