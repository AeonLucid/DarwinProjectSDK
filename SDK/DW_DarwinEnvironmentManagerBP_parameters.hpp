#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinEnvironmentManagerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ClampProfileIndexes
struct ADarwinEnvironmentManagerBP_C_ClampProfileIndexes_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateStormIntensityForPlayers
struct ADarwinEnvironmentManagerBP_C_UpdateStormIntensityForPlayers_Params
{
	float                                              NewIntensity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.AdaptDayTimeRange
struct ADarwinEnvironmentManagerBP_C_AdaptDayTimeRange_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.AdaptDayTimePermilRange
struct ADarwinEnvironmentManagerBP_C_AdaptDayTimePermilRange_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.InitBPReferences
struct ADarwinEnvironmentManagerBP_C_InitBPReferences_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.Tick
struct ADarwinEnvironmentManagerBP_C_Tick_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnBirds;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CheckAndInitSceneBPRef
struct ADarwinEnvironmentManagerBP_C_CheckAndInitSceneBPRef_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.SpawnBirds
struct ADarwinEnvironmentManagerBP_C_SpawnBirds_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAmbianceLights
struct ADarwinEnvironmentManagerBP_C_UpdateAmbianceLights_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAurora
struct ADarwinEnvironmentManagerBP_C_UpdateAurora_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdatePostProcessSettings
struct ADarwinEnvironmentManagerBP_C_UpdatePostProcessSettings_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.IsSomethingInvalid
struct ADarwinEnvironmentManagerBP_C_IsSomethingInvalid_Params
{
	bool                                               SomethingInvalid;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.LaunchStorm
struct ADarwinEnvironmentManagerBP_C_LaunchStorm_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.DestroyAllStormParticles
struct ADarwinEnvironmentManagerBP_C_DestroyAllStormParticles_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CreateLightningRow
struct ADarwinEnvironmentManagerBP_C_CreateLightningRow_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.CreateCloudsRow
struct ADarwinEnvironmentManagerBP_C_CreateCloudsRow_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateEpicStorm
struct ADarwinEnvironmentManagerBP_C_UpdateEpicStorm_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateFog
struct ADarwinEnvironmentManagerBP_C_UpdateFog_Params
{
	class UDarwinEnvironmentProfile*                   BeginningProfile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndingProfile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateSunAndMoon
struct ADarwinEnvironmentManagerBP_C_UpdateSunAndMoon_Params
{
	class UDarwinEnvironmentProfile*                   BeginningProfile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndingProfile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateAtmosphere
struct ADarwinEnvironmentManagerBP_C_UpdateAtmosphere_Params
{
	class UDarwinEnvironmentProfile*                   BeginningProfile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndingProfile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.DebugDayTime
struct ADarwinEnvironmentManagerBP_C_DebugDayTime_Params
{
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateLight
struct ADarwinEnvironmentManagerBP_C_UpdateLight_Params
{
	struct FLinearColor                                BeginningColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                EndingColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              BeginningIntensity;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingIntensity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ULightComponent*                             Light;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EarthLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.InitializeNullPointers
struct ADarwinEnvironmentManagerBP_C_InitializeNullPointers_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateEnvironment
struct ADarwinEnvironmentManagerBP_C_UpdateEnvironment_Params
{
	class UDarwinEnvironmentProfile*                   BeginningProfile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDarwinEnvironmentProfile*                   EndingProfile;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UpdateSkySphere
struct ADarwinEnvironmentManagerBP_C_UpdateSkySphere_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.UserConstructionScript
struct ADarwinEnvironmentManagerBP_C_UserConstructionScript_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventResetEnvironment
struct ADarwinEnvironmentManagerBP_C_EventResetEnvironment_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EnvironmentTick
struct ADarwinEnvironmentManagerBP_C_EnvironmentTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ReceiveBeginPlay
struct ADarwinEnvironmentManagerBP_C_ReceiveBeginPlay_Params
{
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesSunColor
struct ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesSunColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesStormIntensity
struct ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesStormIntensity_Params
{
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesFogColor
struct ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesFogColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateSkySphere
struct ADarwinEnvironmentManagerBP_C_EventUpdateSkySphere_Params
{
	float*                                             sun_brightness;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             clouds_opacity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             stars_brightness;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.EventUpdateAllParticlesSunDirection
struct ADarwinEnvironmentManagerBP_C_EventUpdateAllParticlesSunDirection_Params
{
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinEnvironmentManagerBP.DarwinEnvironmentManagerBP_C.ExecuteUbergraph_DarwinEnvironmentManagerBP
struct ADarwinEnvironmentManagerBP_C_ExecuteUbergraph_DarwinEnvironmentManagerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
