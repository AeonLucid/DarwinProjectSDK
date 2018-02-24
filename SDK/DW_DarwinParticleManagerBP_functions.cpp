// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinParticleManagerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinParticleManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UserConstructionScript");

	ADarwinParticleManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateStormIntensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinParticleManagerBP_C::UpdateStormIntensity(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateStormIntensity");

	ADarwinParticleManagerBP_C_UpdateStormIntensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateFogColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinParticleManagerBP_C::UpdateFogColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateFogColor");

	ADarwinParticleManagerBP_C_UpdateFogColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddAtmosphericCloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEmitter*                Emitter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinParticleManagerBP_C::AddAtmosphericCloud(class AEmitter* Emitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddAtmosphericCloud");

	ADarwinParticleManagerBP_C_AddAtmosphericCloud_Params params;
	params.Emitter = Emitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddBlackBodies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinParticleManagerBP_C::AddBlackBodies(class UParticleSystemComponent* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddBlackBodies");

	ADarwinParticleManagerBP_C_AddBlackBodies_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddCloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinParticleManagerBP_C::AddCloud(class UParticleSystemComponent* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddCloud");

	ADarwinParticleManagerBP_C_AddCloud_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinParticleManagerBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.ReceiveTick");

	ADarwinParticleManagerBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateSunColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SunColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinParticleManagerBP_C::UpdateSunColor(const struct FLinearColor& SunColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateSunColor");

	ADarwinParticleManagerBP_C_UpdateSunColor_Params params;
	params.SunColor = SunColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.ExecuteUbergraph_DarwinParticleManagerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinParticleManagerBP_C::ExecuteUbergraph_DarwinParticleManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.ExecuteUbergraph_DarwinParticleManagerBP");

	ADarwinParticleManagerBP_C_ExecuteUbergraph_DarwinParticleManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
