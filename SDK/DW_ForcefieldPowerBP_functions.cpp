// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ForcefieldPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventLocalPowerOn
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForcefieldPowerBP_C::EventLocalPowerOn(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventLocalPowerOn");

	UForcefieldPowerBP_C_EventLocalPowerOn_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventLocalPowerOff
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForcefieldPowerBP_C::EventLocalPowerOff(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventLocalPowerOff");

	UForcefieldPowerBP_C_EventLocalPowerOff_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventSimulatedPowerOn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UForcefieldPowerBP_C::EventSimulatedPowerOn(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventSimulatedPowerOn");

	UForcefieldPowerBP_C_EventSimulatedPowerOn_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventSimulatedPowerOff
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UForcefieldPowerBP_C::EventSimulatedPowerOff(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventSimulatedPowerOff");

	UForcefieldPowerBP_C_EventSimulatedPowerOff_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventReflectionActivated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UForcefieldPowerBP_C::EventReflectionActivated(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventReflectionActivated");

	UForcefieldPowerBP_C_EventReflectionActivated_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForcefieldPowerBP.ForcefieldPowerBP_C.ExecuteUbergraph_ForcefieldPowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForcefieldPowerBP_C::ExecuteUbergraph_ForcefieldPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForcefieldPowerBP.ForcefieldPowerBP_C.ExecuteUbergraph_ForcefieldPowerBP");

	UForcefieldPowerBP_C_ExecuteUbergraph_ForcefieldPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
