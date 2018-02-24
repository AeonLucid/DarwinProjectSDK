// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DecoyLootBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DecoyLootBP.DecoyLootBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADecoyLootBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.UserConstructionScript");

	ADecoyLootBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.HighlightLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           stencil_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoyLootBP_C::HighlightLoot(bool* enable, int* stencil_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.HighlightLoot");

	ADecoyLootBP_C_HighlightLoot_Params params;
	params.enable = enable;
	params.stencil_value = stencil_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.EventLootReset
// (Event, Public, BlueprintEvent)

void ADecoyLootBP_C::EventLootReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.EventLootReset");

	ADecoyLootBP_C_EventLootReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.EventLootPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoyLootBP_C::EventLootPickedUp(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.EventLootPickedUp");

	ADecoyLootBP_C_EventLootPickedUp_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.EventActivateOpenParticles
// (Event, Public, BlueprintEvent)

void ADecoyLootBP_C::EventActivateOpenParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.EventActivateOpenParticles");

	ADecoyLootBP_C_EventActivateOpenParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.EventUpdateOpenRays
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoyLootBP_C::EventUpdateOpenRays(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.EventUpdateOpenRays");

	ADecoyLootBP_C_EventUpdateOpenRays_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.EventSetLootableShape
// (Event, Public, BlueprintEvent)

void ADecoyLootBP_C::EventSetLootableShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.EventSetLootableShape");

	ADecoyLootBP_C_EventSetLootableShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DecoyLootBP.DecoyLootBP_C.ExecuteUbergraph_DecoyLootBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADecoyLootBP_C::ExecuteUbergraph_DecoyLootBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecoyLootBP.DecoyLootBP_C.ExecuteUbergraph_DecoyLootBP");

	ADecoyLootBP_C_ExecuteUbergraph_DecoyLootBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
