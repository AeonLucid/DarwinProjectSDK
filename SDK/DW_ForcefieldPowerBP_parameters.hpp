#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ForcefieldPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventLocalPowerOn
struct UForcefieldPowerBP_C_EventLocalPowerOn_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventLocalPowerOff
struct UForcefieldPowerBP_C_EventLocalPowerOff_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventSimulatedPowerOn
struct UForcefieldPowerBP_C_EventSimulatedPowerOn_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventSimulatedPowerOff
struct UForcefieldPowerBP_C_EventSimulatedPowerOff_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.EventReflectionActivated
struct UForcefieldPowerBP_C_EventReflectionActivated_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ForcefieldPowerBP.ForcefieldPowerBP_C.ExecuteUbergraph_ForcefieldPowerBP
struct UForcefieldPowerBP_C_ExecuteUbergraph_ForcefieldPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
