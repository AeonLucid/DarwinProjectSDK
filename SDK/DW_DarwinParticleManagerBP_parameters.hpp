#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinParticleManagerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UserConstructionScript
struct ADarwinParticleManagerBP_C_UserConstructionScript_Params
{
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateStormIntensity
struct ADarwinParticleManagerBP_C_UpdateStormIntensity_Params
{
	float                                              NewIntensity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateFogColor
struct ADarwinParticleManagerBP_C_UpdateFogColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddAtmosphericCloud
struct ADarwinParticleManagerBP_C_AddAtmosphericCloud_Params
{
	class AEmitter*                                    Emitter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddBlackBodies
struct ADarwinParticleManagerBP_C_AddBlackBodies_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.AddCloud
struct ADarwinParticleManagerBP_C_AddCloud_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.ReceiveTick
struct ADarwinParticleManagerBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.UpdateSunColor
struct ADarwinParticleManagerBP_C_UpdateSunColor_Params
{
	struct FLinearColor                                SunColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinParticleManagerBP.DarwinParticleManagerBP_C.ExecuteUbergraph_DarwinParticleManagerBP
struct ADarwinParticleManagerBP_C_ExecuteUbergraph_DarwinParticleManagerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
