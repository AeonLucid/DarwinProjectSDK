// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinShootingComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalAimStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventLocalAimStart(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalAimStart");

	UDarwinShootingComponentBP_C_EventLocalAimStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalAimEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventLocalAimEnd(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalAimEnd");

	UDarwinShootingComponentBP_C_EventLocalAimEnd_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalShootFail
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventLocalShootFail(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalShootFail");

	UDarwinShootingComponentBP_C_EventLocalShootFail_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalShootSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventLocalShootSuccess(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventLocalShootSuccess");

	UDarwinShootingComponentBP_C_EventLocalShootSuccess_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedAimStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventSimulatedAimStart(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedAimStart");

	UDarwinShootingComponentBP_C_EventSimulatedAimStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedAimEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventSimulatedAimEnd(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedAimEnd");

	UDarwinShootingComponentBP_C_EventSimulatedAimEnd_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedShootFail
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventSimulatedShootFail(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedShootFail");

	UDarwinShootingComponentBP_C_EventSimulatedShootFail_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedShootSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::EventSimulatedShootSuccess(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.EventSimulatedShootSuccess");

	UDarwinShootingComponentBP_C_EventSimulatedShootSuccess_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.ExecuteUbergraph_DarwinShootingComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinShootingComponentBP_C::ExecuteUbergraph_DarwinShootingComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinShootingComponentBP.DarwinShootingComponentBP_C.ExecuteUbergraph_DarwinShootingComponentBP");

	UDarwinShootingComponentBP_C_ExecuteUbergraph_DarwinShootingComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
