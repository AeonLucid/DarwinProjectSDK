#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFoliageComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.EventHideFoliageForCharacter
struct UDarwinFoliageComponentBP_C_EventHideFoliageForCharacter_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.EventHideFoliageForDrone
struct UDarwinFoliageComponentBP_C_EventHideFoliageForDrone_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinFoliageComponentBP.DarwinFoliageComponentBP_C.ExecuteUbergraph_DarwinFoliageComponentBP
struct UDarwinFoliageComponentBP_C_ExecuteUbergraph_DarwinFoliageComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
