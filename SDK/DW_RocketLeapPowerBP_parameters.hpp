#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RocketLeapPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RocketLeapPowerBP.RocketLeapPowerBP_C.EventRocketLeap
struct URocketLeapPowerBP_C_EventRocketLeap_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RocketLeapPowerBP.RocketLeapPowerBP_C.EventRocketLand
struct URocketLeapPowerBP_C_EventRocketLand_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RocketLeapPowerBP.RocketLeapPowerBP_C.ActivateSparkles
struct URocketLeapPowerBP_C_ActivateSparkles_Params
{
};

// Function RocketLeapPowerBP.RocketLeapPowerBP_C.DeactivateSparkles
struct URocketLeapPowerBP_C_DeactivateSparkles_Params
{
};

// Function RocketLeapPowerBP.RocketLeapPowerBP_C.ExecuteUbergraph_RocketLeapPowerBP
struct URocketLeapPowerBP_C_ExecuteUbergraph_RocketLeapPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
