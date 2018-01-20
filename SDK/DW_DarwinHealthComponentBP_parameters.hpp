#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinHealthComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventLocalHeal
struct UDarwinHealthComponentBP_C_EventLocalHeal_Params
{
	float*                                             healAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventSimulatedTakeDamage
struct UDarwinHealthComponentBP_C_EventSimulatedTakeDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventSimulatedHeal
struct UDarwinHealthComponentBP_C_EventSimulatedHeal_Params
{
	float*                                             healAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.EventLocalTakeDamage
struct UDarwinHealthComponentBP_C_EventLocalTakeDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinDamageTypeEnum*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinHealthComponentBP.DarwinHealthComponentBP_C.ExecuteUbergraph_DarwinHealthComponentBP
struct UDarwinHealthComponentBP_C_ExecuteUbergraph_DarwinHealthComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
