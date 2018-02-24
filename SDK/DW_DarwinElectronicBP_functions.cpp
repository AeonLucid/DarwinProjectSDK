// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinElectronicBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinElectronicBP.DarwinElectronicBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinElectronicBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.UserConstructionScript");

	ADarwinElectronicBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinRessource**       ressource                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::EventSimulatedHarvestStart(class ADarwinRessource** ressource)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestStart");

	ADarwinElectronicBP_C_EventSimulatedHarvestStart_Params params;
	params.ressource = ressource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::EventLocalHarvestStart(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestStart");

	ADarwinElectronicBP_C_EventLocalHarvestStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestFail
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::EventLocalHarvestFail(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestFail");

	ADarwinElectronicBP_C_EventLocalHarvestFail_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestFail
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinRessource**       ressource                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::EventSimulatedHarvestFail(class ADarwinRessource** ressource)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestFail");

	ADarwinElectronicBP_C_EventSimulatedHarvestFail_Params params;
	params.ressource = ressource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::EventLocalHarvestSuccess(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.EventLocalHarvestSuccess");

	ADarwinElectronicBP_C_EventLocalHarvestSuccess_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinRessource**       ressource                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::EventSimulatedHarvestSuccess(class ADarwinRessource** ressource)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.EventSimulatedHarvestSuccess");

	ADarwinElectronicBP_C_EventSimulatedHarvestSuccess_Params params;
	params.ressource = ressource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.ReceiveActorBeginOverlap");

	ADarwinElectronicBP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.ReceiveActorEndOverlap");

	ADarwinElectronicBP_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinElectronicBP.DarwinElectronicBP_C.ExecuteUbergraph_DarwinElectronicBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinElectronicBP_C::ExecuteUbergraph_DarwinElectronicBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinElectronicBP.DarwinElectronicBP_C.ExecuteUbergraph_DarwinElectronicBP");

	ADarwinElectronicBP_C_ExecuteUbergraph_DarwinElectronicBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
