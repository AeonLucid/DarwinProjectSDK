#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TeleportPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeleportPowerBP.TeleportPowerBP_C.EventLocalAimingTeleportStart
struct UTeleportPowerBP_C_EventLocalAimingTeleportStart_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleportPowerBP.TeleportPowerBP_C.EventLocalAimingTeleportEnd
struct UTeleportPowerBP_C_EventLocalAimingTeleportEnd_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleportPowerBP.TeleportPowerBP_C.EventSimulatedAimingTeleportStart
struct UTeleportPowerBP_C_EventSimulatedAimingTeleportStart_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleportPowerBP.TeleportPowerBP_C.EventSimulatedAimingTeleportEnd
struct UTeleportPowerBP_C_EventSimulatedAimingTeleportEnd_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeleportPowerBP.TeleportPowerBP_C.EventTeleported
struct UTeleportPowerBP_C_EventTeleported_Params
{
	struct FVector*                                    StartLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    EndLoc;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TeleportPowerBP.TeleportPowerBP_C.ExecuteUbergraph_TeleportPowerBP
struct UTeleportPowerBP_C_ExecuteUbergraph_TeleportPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
