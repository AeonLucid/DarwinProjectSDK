// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TeleportPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeleportPowerBP.TeleportPowerBP_C.EventLocalAimingTeleportStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeleportPowerBP_C::EventLocalAimingTeleportStart(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportPowerBP.TeleportPowerBP_C.EventLocalAimingTeleportStart");

	UTeleportPowerBP_C_EventLocalAimingTeleportStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportPowerBP.TeleportPowerBP_C.EventLocalAimingTeleportEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeleportPowerBP_C::EventLocalAimingTeleportEnd(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportPowerBP.TeleportPowerBP_C.EventLocalAimingTeleportEnd");

	UTeleportPowerBP_C_EventLocalAimingTeleportEnd_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportPowerBP.TeleportPowerBP_C.EventSimulatedAimingTeleportStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeleportPowerBP_C::EventSimulatedAimingTeleportStart(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportPowerBP.TeleportPowerBP_C.EventSimulatedAimingTeleportStart");

	UTeleportPowerBP_C_EventSimulatedAimingTeleportStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportPowerBP.TeleportPowerBP_C.EventSimulatedAimingTeleportEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeleportPowerBP_C::EventSimulatedAimingTeleportEnd(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportPowerBP.TeleportPowerBP_C.EventSimulatedAimingTeleportEnd");

	UTeleportPowerBP_C_EventSimulatedAimingTeleportEnd_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportPowerBP.TeleportPowerBP_C.EventTeleported
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                StartLoc                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                EndLoc                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UTeleportPowerBP_C::EventTeleported(struct FVector* StartLoc, struct FVector* EndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportPowerBP.TeleportPowerBP_C.EventTeleported");

	UTeleportPowerBP_C_EventTeleported_Params params;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportPowerBP.TeleportPowerBP_C.ExecuteUbergraph_TeleportPowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeleportPowerBP_C::ExecuteUbergraph_TeleportPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportPowerBP.TeleportPowerBP_C.ExecuteUbergraph_TeleportPowerBP");

	UTeleportPowerBP_C_ExecuteUbergraph_TeleportPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
