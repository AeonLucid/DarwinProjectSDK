#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MagWallPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MagWallPowerBP.MagWallPowerBP_C.EventLocalPowerOn
struct UMagWallPowerBP_C_EventLocalPowerOn_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagWallPowerBP.MagWallPowerBP_C.EventSimulatedPowerOn
struct UMagWallPowerBP_C_EventSimulatedPowerOn_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MagWallPowerBP.MagWallPowerBP_C.ExecuteUbergraph_MagWallPowerBP
struct UMagWallPowerBP_C_ExecuteUbergraph_MagWallPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
