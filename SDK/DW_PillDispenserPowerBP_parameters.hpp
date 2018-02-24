#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PillDispenserPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PillDispenserPowerBP.PillDispenserPowerBP_C.EventLocalPowerOn
struct UPillDispenserPowerBP_C_EventLocalPowerOn_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PillDispenserPowerBP.PillDispenserPowerBP_C.EventSimulatedPowerOn
struct UPillDispenserPowerBP_C_EventSimulatedPowerOn_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PillDispenserPowerBP.PillDispenserPowerBP_C.ExecuteUbergraph_PillDispenserPowerBP
struct UPillDispenserPowerBP_C_ExecuteUbergraph_PillDispenserPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
