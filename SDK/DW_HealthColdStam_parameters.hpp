#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HealthColdStam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HealthColdStam.HealthColdStam_C.EventUpdateRealColdFactor
struct UHealthColdStam_C_EventUpdateRealColdFactor_Params
{
	int*                                               coldFactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               coldFactorMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthColdStam.HealthColdStam_C.EventUpdateRealHealth
struct UHealthColdStam_C_EventUpdateRealHealth_Params
{
	int*                                               Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               healthMax;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthColdStam.HealthColdStam_C.EventUpdateRealStamina
struct UHealthColdStam_C_EventUpdateRealStamina_Params
{
	int*                                               Stamina;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               staminaMax;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthColdStam.HealthColdStam_C.ExecuteUbergraph_HealthColdStam
struct UHealthColdStam_C_ExecuteUbergraph_HealthColdStam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
