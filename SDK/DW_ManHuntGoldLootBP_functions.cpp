// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ManHuntGoldLootBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AManHuntGoldLootBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.UserConstructionScript");

	AManHuntGoldLootBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.HighlightLoot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           stencil_value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AManHuntGoldLootBP_C::HighlightLoot(bool* enable, int* stencil_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.HighlightLoot");

	AManHuntGoldLootBP_C_HighlightLoot_Params params;
	params.enable = enable;
	params.stencil_value = stencil_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventLootReset
// (Event, Public, BlueprintEvent)

void AManHuntGoldLootBP_C::EventLootReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventLootReset");

	AManHuntGoldLootBP_C_EventLootReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventLootPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AManHuntGoldLootBP_C::EventLootPickedUp(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventLootPickedUp");

	AManHuntGoldLootBP_C_EventLootPickedUp_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventActivateOpenParticles
// (Event, Public, BlueprintEvent)

void AManHuntGoldLootBP_C::EventActivateOpenParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventActivateOpenParticles");

	AManHuntGoldLootBP_C_EventActivateOpenParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventUpdateOpenRays
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AManHuntGoldLootBP_C::EventUpdateOpenRays(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventUpdateOpenRays");

	AManHuntGoldLootBP_C_EventUpdateOpenRays_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventSetLootableShape
// (Event, Public, BlueprintEvent)

void AManHuntGoldLootBP_C::EventSetLootableShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventSetLootableShape");

	AManHuntGoldLootBP_C_EventSetLootableShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.ExecuteUbergraph_ManHuntGoldLootBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AManHuntGoldLootBP_C::ExecuteUbergraph_ManHuntGoldLootBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.ExecuteUbergraph_ManHuntGoldLootBP");

	AManHuntGoldLootBP_C_ExecuteUbergraph_ManHuntGoldLootBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
