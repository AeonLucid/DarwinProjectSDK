// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinEnvironmentManagerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ClampProfileIndexes
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::ClampProfileIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ClampProfileIndexes");

	ADarwinEnvironmentManagerBP_C_ClampProfileIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateStormIntensityForPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateStormIntensityForPlayers(float NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateStormIntensityForPlayers");

	ADarwinEnvironmentManagerBP_C_UpdateStormIntensityForPlayers_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.AdaptDayTimeRange
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::AdaptDayTimeRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.AdaptDayTimeRange");

	ADarwinEnvironmentManagerBP_C_AdaptDayTimeRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.AdaptDayTimePermilRange
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::AdaptDayTimePermilRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.AdaptDayTimePermilRange");

	ADarwinEnvironmentManagerBP_C_AdaptDayTimePermilRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.InitBPReferences
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::InitBPReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.InitBPReferences");

	ADarwinEnvironmentManagerBP_C_InitBPReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.Tick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpawnBirds                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::Tick(float DeltaTime, bool SpawnBirds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.Tick");

	ADarwinEnvironmentManagerBP_C_Tick_Params params;
	params.DeltaTime = DeltaTime;
	params.SpawnBirds = SpawnBirds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CheckAndInitSceneBPRef
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::CheckAndInitSceneBPRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CheckAndInitSceneBPRef");

	ADarwinEnvironmentManagerBP_C_CheckAndInitSceneBPRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.SpawnBirds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::SpawnBirds(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.SpawnBirds");

	ADarwinEnvironmentManagerBP_C_SpawnBirds_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAmbianceLights
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::UpdateAmbianceLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAmbianceLights");

	ADarwinEnvironmentManagerBP_C_UpdateAmbianceLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAurora
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::UpdateAurora()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAurora");

	ADarwinEnvironmentManagerBP_C_UpdateAurora_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdatePostProcessSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::UpdatePostProcessSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdatePostProcessSettings");

	ADarwinEnvironmentManagerBP_C_UpdatePostProcessSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.IsSomethingInvalid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SomethingInvalid               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::IsSomethingInvalid(bool* SomethingInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.IsSomethingInvalid");

	ADarwinEnvironmentManagerBP_C_IsSomethingInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SomethingInvalid != nullptr)
		*SomethingInvalid = params.SomethingInvalid;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.LaunchStorm
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::LaunchStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.LaunchStorm");

	ADarwinEnvironmentManagerBP_C_LaunchStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.DestroyAllStormParticles
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::DestroyAllStormParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.DestroyAllStormParticles");

	ADarwinEnvironmentManagerBP_C_DestroyAllStormParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CreateLightningRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::CreateLightningRow(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CreateLightningRow");

	ADarwinEnvironmentManagerBP_C_CreateLightningRow_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CreateCloudsRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::CreateCloudsRow(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CreateCloudsRow");

	ADarwinEnvironmentManagerBP_C_CreateCloudsRow_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateEpicStorm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateEpicStorm(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateEpicStorm");

	ADarwinEnvironmentManagerBP_C_UpdateEpicStorm_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateFog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDarwinEnvironmentProfile* BeginningProfile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDarwinEnvironmentProfile* EndingProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateFog(class UDarwinEnvironmentProfile* BeginningProfile, class UDarwinEnvironmentProfile* EndingProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateFog");

	ADarwinEnvironmentManagerBP_C_UpdateFog_Params params;
	params.BeginningProfile = BeginningProfile;
	params.EndingProfile = EndingProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateSunAndMoon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDarwinEnvironmentProfile* BeginningProfile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDarwinEnvironmentProfile* EndingProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateSunAndMoon(class UDarwinEnvironmentProfile* BeginningProfile, class UDarwinEnvironmentProfile* EndingProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateSunAndMoon");

	ADarwinEnvironmentManagerBP_C_UpdateSunAndMoon_Params params;
	params.BeginningProfile = BeginningProfile;
	params.EndingProfile = EndingProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAtmosphere
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDarwinEnvironmentProfile* BeginningProfile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDarwinEnvironmentProfile* EndingProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateAtmosphere(class UDarwinEnvironmentProfile* BeginningProfile, class UDarwinEnvironmentProfile* EndingProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAtmosphere");

	ADarwinEnvironmentManagerBP_C_UpdateAtmosphere_Params params;
	params.BeginningProfile = BeginningProfile;
	params.EndingProfile = EndingProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.DebugDayTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::DebugDayTime(const struct FString& Message, bool Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.DebugDayTime");

	ADarwinEnvironmentManagerBP_C_DebugDayTime_Params params;
	params.Message = Message;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            BeginningColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            EndingColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          BeginningIntensity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndingIntensity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULightComponent*         Light                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EarthLimit                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateLight(const struct FLinearColor& BeginningColor, const struct FLinearColor& EndingColor, float BeginningIntensity, float EndingIntensity, class ULightComponent* Light, bool EarthLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateLight");

	ADarwinEnvironmentManagerBP_C_UpdateLight_Params params;
	params.BeginningColor = BeginningColor;
	params.EndingColor = EndingColor;
	params.BeginningIntensity = BeginningIntensity;
	params.EndingIntensity = EndingIntensity;
	params.Light = Light;
	params.EarthLimit = EarthLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.InitializeNullPointers
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::InitializeNullPointers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.InitializeNullPointers");

	ADarwinEnvironmentManagerBP_C_InitializeNullPointers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateEnvironment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDarwinEnvironmentProfile* BeginningProfile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDarwinEnvironmentProfile* EndingProfile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::UpdateEnvironment(class UDarwinEnvironmentProfile* BeginningProfile, class UDarwinEnvironmentProfile* EndingProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateEnvironment");

	ADarwinEnvironmentManagerBP_C_UpdateEnvironment_Params params;
	params.BeginningProfile = BeginningProfile;
	params.EndingProfile = EndingProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateSkySphere
// (Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::UpdateSkySphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateSkySphere");

	ADarwinEnvironmentManagerBP_C_UpdateSkySphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UserConstructionScript");

	ADarwinEnvironmentManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventResetEnvironment
// (Event, Public, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::EventResetEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventResetEnvironment");

	ADarwinEnvironmentManagerBP_C_EventResetEnvironment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EnvironmentTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::EnvironmentTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EnvironmentTick");

	ADarwinEnvironmentManagerBP_C_EnvironmentTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinEnvironmentManagerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ReceiveBeginPlay");

	ADarwinEnvironmentManagerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesSunColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::EventUpdateAllParticlesSunColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesSunColor");

	ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesSunColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesStormIntensity
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::EventUpdateAllParticlesStormIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesStormIntensity");

	ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesStormIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesFogColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::EventUpdateAllParticlesFogColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesFogColor");

	ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesFogColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateSkySphere
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         sun_brightness                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         clouds_opacity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         stars_brightness               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::EventUpdateSkySphere(float* sun_brightness, float* clouds_opacity, float* stars_brightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateSkySphere");

	ADarwinEnvironmentManagerBP_C_EventUpdateSkySphere_Params params;
	params.sun_brightness = sun_brightness;
	params.clouds_opacity = clouds_opacity;
	params.stars_brightness = stars_brightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesSunDirection
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::EventUpdateAllParticlesSunDirection(struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesSunDirection");

	ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesSunDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ExecuteUbergraph_DarwinEnvironmentManagerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinEnvironmentManagerBP_C::ExecuteUbergraph_DarwinEnvironmentManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ExecuteUbergraph_DarwinEnvironmentManagerBP");

	ADarwinEnvironmentManagerBP_C_ExecuteUbergraph_DarwinEnvironmentManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
